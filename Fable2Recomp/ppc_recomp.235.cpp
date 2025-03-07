#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E897B0"))) PPC_WEAK_FUNC(sub_82E897B0);
PPC_FUNC_IMPL(__imp__sub_82E897B0) {
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
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x82625f08
	ctx.lr = 0x82E897C4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e897d4
	if (ctx.cr0.eq) goto loc_82E897D4;
	// bl 0x82e88b80
	ctx.lr = 0x82E897D0;
	sub_82E88B80(ctx, base);
	// b 0x82e897d8
	goto loc_82E897D8;
loc_82E897D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E897D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E897E8"))) PPC_WEAK_FUNC(sub_82E897E8);
PPC_FUNC_IMPL(__imp__sub_82E897E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82E897F0;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82e89020
	ctx.lr = 0x82E89810;
	sub_82E89020(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x82e8990c
	if (!ctx.cr6.gt) goto loc_82E8990C;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
loc_82E8989C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r26,56(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r27,r26,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// mulli r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 * 20;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// bl 0x82e88c88
	ctx.lr = 0x82E898EC;
	sub_82E88C88(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8989c
	if (ctx.cr6.lt) goto loc_82E8989C;
loc_82E8990C:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e89998
	if (!ctx.cr6.gt) goto loc_82E89998;
	// addi r10,r30,248
	ctx.r10.s64 = ctx.r30.s64 + 248;
loc_82E89920:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r7,52
	ctx.r7.s64 = ctx.r7.s64 + 52;
	// lwz r26,60(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r25,56(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r11,r26,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// lwzx r26,r25,r6
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
	// mulli r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 * 20;
	// mulli r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 * 20;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bl 0x82e88c88
	ctx.lr = 0x82E89978;
	sub_82E88C88(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89920
	if (ctx.cr6.lt) goto loc_82E89920;
loc_82E89998:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82E899A8"))) PPC_WEAK_FUNC(sub_82E899A8);
PPC_FUNC_IMPL(__imp__sub_82E899A8) {
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
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x82e89a78
	if (!ctx.cr6.gt) goto loc_82E89A78;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82E89A4C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e88c88
	ctx.lr = 0x82E89A58;
	sub_82E88C88(ctx, base);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89a4c
	if (ctx.cr6.lt) goto loc_82E89A4C;
loc_82E89A78:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e89ac0
	if (!ctx.cr6.gt) goto loc_82E89AC0;
	// addi r9,r3,248
	ctx.r9.s64 = ctx.r3.s64 + 248;
loc_82E89A8C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// bl 0x82e88c88
	ctx.lr = 0x82E89AA0;
	sub_82E88C88(ctx, base);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89a8c
	if (ctx.cr6.lt) goto loc_82E89A8C;
loc_82E89AC0:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82E89ADC"))) PPC_WEAK_FUNC(sub_82E89ADC);
PPC_FUNC_IMPL(__imp__sub_82E89ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89AE0"))) PPC_WEAK_FUNC(sub_82E89AE0);
PPC_FUNC_IMPL(__imp__sub_82E89AE0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e89b14
	if (!ctx.cr6.eq) goto loc_82E89B14;
loc_82E89B0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e89b84
	goto loc_82E89B84;
loc_82E89B14:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82e89b0c
	if (ctx.cr6.gt) goto loc_82E89B0C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e89020
	ctx.lr = 0x82E89B7C;
	sub_82E89020(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E89B84:
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

__attribute__((alias("__imp__sub_82E89B98"))) PPC_WEAK_FUNC(sub_82E89B98);
PPC_FUNC_IMPL(__imp__sub_82E89B98) {
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
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x82625f08
	ctx.lr = 0x82E89BAC;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e89bbc
	if (ctx.cr0.eq) goto loc_82E89BBC;
	// bl 0x82e890e0
	ctx.lr = 0x82E89BB8;
	sub_82E890E0(ctx, base);
	// b 0x82e89bc0
	goto loc_82E89BC0;
loc_82E89BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E89BC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89BD0"))) PPC_WEAK_FUNC(sub_82E89BD0);
PPC_FUNC_IMPL(__imp__sub_82E89BD0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,20700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// addi r31,r9,19672
	ctx.r31.s64 = ctx.r9.s64 + 19672;
	// bne 0x82e89c2c
	if (!ctx.cr0.eq) goto loc_82E89C2C;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-9292(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -9292);
	// stw r11,20700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20700, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e89c18
	if (ctx.cr0.eq) goto loc_82E89C18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82E89C18:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,3880
	ctx.r3.s64 = ctx.r10.s64 + 3880;
	// stb r11,-9292(r9)
	PPC_STORE_U8(ctx.r9.u32 + -9292, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82E89C2C;
	sub_82CA3700(ctx, base);
loc_82E89C2C:
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

__attribute__((alias("__imp__sub_82E89C44"))) PPC_WEAK_FUNC(sub_82E89C44);
PPC_FUNC_IMPL(__imp__sub_82E89C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89C48"))) PPC_WEAK_FUNC(sub_82E89C48);
PPC_FUNC_IMPL(__imp__sub_82E89C48) {
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
	// bl 0x82e89bd0
	ctx.lr = 0x82E89C60;
	sub_82E89BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82e89cc8
	if (!ctx.cr0.gt) goto loc_82E89CC8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82E89C7C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E89C88:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e89cac
	if (ctx.cr0.eq) goto loc_82E89CAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e89c88
	if (ctx.cr6.eq) goto loc_82E89C88;
loc_82E89CAC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e89cd8
	if (ctx.cr0.eq) goto loc_82E89CD8;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e89c7c
	if (ctx.cr6.lt) goto loc_82E89C7C;
loc_82E89CC8:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82e89ce4
	if (!ctx.cr6.eq) goto loc_82E89CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e89cfc
	goto loc_82E89CFC;
loc_82E89CD8:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x82e89cf8
	goto loc_82E89CF8;
loc_82E89CE4:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_82E89CF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E89CFC:
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

__attribute__((alias("__imp__sub_82E89D10"))) PPC_WEAK_FUNC(sub_82E89D10);
PPC_FUNC_IMPL(__imp__sub_82E89D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E89D18;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-27084
	ctx.r9.s64 = ctx.r11.s64 + -27084;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E89D48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82e89d48
	if (!ctx.cr0.eq) goto loc_82E89D48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89c48
	ctx.lr = 0x82E89D64;
	sub_82E89C48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e89d74
	if (!ctx.cr0.eq) goto loc_82E89D74;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82e89d80
	goto loc_82E89D80;
loc_82E89D74:
	// bl 0x82e89bd0
	ctx.lr = 0x82E89D78;
	sub_82E89BD0(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82E89D80:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x82e89da4
	if (!ctx.cr6.eq) goto loc_82E89DA4;
	// bl 0x82e7ca00
	ctx.lr = 0x82E89D9C;
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x82e89dac
	goto loc_82E89DAC;
loc_82E89DA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82E89DAC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e89dc8
	if (ctx.cr0.eq) goto loc_82E89DC8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9704);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9704, ctx.r10.u32);
loc_82E89DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E89DD4"))) PPC_WEAK_FUNC(sub_82E89DD4);
PPC_FUNC_IMPL(__imp__sub_82E89DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89DD8"))) PPC_WEAK_FUNC(sub_82E89DD8);
PPC_FUNC_IMPL(__imp__sub_82E89DD8) {
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
	// bl 0x82e78b38
	ctx.lr = 0x82E89DF0;
	sub_82E78B38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r10,r11,-26048
	ctx.r10.s64 = ctx.r11.s64 + -26048;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E89E2C"))) PPC_WEAK_FUNC(sub_82E89E2C);
PPC_FUNC_IMPL(__imp__sub_82E89E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89E30"))) PPC_WEAK_FUNC(sub_82E89E30);
PPC_FUNC_IMPL(__imp__sub_82E89E30) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-26048
	ctx.r10.s64 = ctx.r10.s64 + -26048;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x82e89e8c
	if (ctx.cr0.eq) goto loc_82E89E8C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e89e88
	if (ctx.cr6.eq) goto loc_82E89E88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E89E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e89e8c
	goto loc_82E89E8C;
loc_82E89E88:
	// bl 0x824fe010
	ctx.lr = 0x82E89E8C;
	sub_824FE010(ctx, base);
loc_82E89E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e78530
	ctx.lr = 0x82E89E94;
	sub_82E78530(ctx, base);
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

__attribute__((alias("__imp__sub_82E89EA8"))) PPC_WEAK_FUNC(sub_82E89EA8);
PPC_FUNC_IMPL(__imp__sub_82E89EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E89EB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e78668
	ctx.lr = 0x82E89EC0;
	sub_82E78668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e89ed4
	if (!ctx.cr6.eq) goto loc_82E89ED4;
loc_82E89ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e89f1c
	goto loc_82E89F1C;
loc_82E89ED4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-25952
	ctx.r30.s64 = ctx.r11.s64 + -25952;
	// bl 0x826b4b60
	ctx.lr = 0x82E89EE4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E89EEC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e89f18
	if (!ctx.cr0.eq) goto loc_82E89F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E89EFC;
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	ctx.lr = 0x82E89F00;
	sub_82CA3B30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// beq 0x82e89ecc
	if (ctx.cr0.eq) goto loc_82E89ECC;
	// stw r3,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r3.u32);
	// b 0x82e89ecc
	goto loc_82E89ECC;
loc_82E89F18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E89F1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E89F24"))) PPC_WEAK_FUNC(sub_82E89F24);
PPC_FUNC_IMPL(__imp__sub_82E89F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89F28"))) PPC_WEAK_FUNC(sub_82E89F28);
PPC_FUNC_IMPL(__imp__sub_82E89F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89F40"))) PPC_WEAK_FUNC(sub_82E89F40);
PPC_FUNC_IMPL(__imp__sub_82E89F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E89F48;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a048
	if (ctx.cr6.eq) goto loc_82E8A048;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E89F70;
	sub_82267BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8a048
	if (ctx.cr0.eq) goto loc_82E8A048;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8a03c
	if (!ctx.cr6.gt) goto loc_82E8A03C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E89F8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E89FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e89fe4
	if (ctx.cr0.eq) goto loc_82E89FE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e89fe4
	if (ctx.cr0.eq) goto loc_82E89FE4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E89FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E89FE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89f8c
	if (ctx.cr6.lt) goto loc_82E89F8C;
	// b 0x82e8a03c
	goto loc_82E8A03C;
loc_82E89FFC:
	// lwz r30,112(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a03c
	if (ctx.cr0.eq) goto loc_82E8A03C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8A03C:
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e89ffc
	if (!ctx.cr6.eq) goto loc_82E89FFC;
loc_82E8A048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E8A050"))) PPC_WEAK_FUNC(sub_82E8A050);
PPC_FUNC_IMPL(__imp__sub_82E8A050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E8A058;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a0dc
	if (ctx.cr6.eq) goto loc_82E8A0DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8a0dc
	if (!ctx.cr6.gt) goto loc_82E8A0DC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E8A094:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e8a0c8
	if (!ctx.cr6.eq) goto loc_82E8A0C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8a0d0
	goto loc_82E8A0D0;
loc_82E8A0C8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_82E8A0D0:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8a094
	if (ctx.cr6.lt) goto loc_82E8A094;
loc_82E8A0DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E8A0E4"))) PPC_WEAK_FUNC(sub_82E8A0E4);
PPC_FUNC_IMPL(__imp__sub_82E8A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A0E8"))) PPC_WEAK_FUNC(sub_82E8A0E8);
PPC_FUNC_IMPL(__imp__sub_82E8A0E8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e8a240
	if (ctx.cr6.eq) goto loc_82E8A240;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e8a240
	if (ctx.cr6.eq) goto loc_82E8A240;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8a164
	if (ctx.cr0.eq) goto loc_82E8A164;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8a164
	if (ctx.cr0.eq) goto loc_82E8A164;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8a164
	if (!ctx.cr6.gt) goto loc_82E8A164;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82E8A144:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e8a238
	if (ctx.cr6.eq) goto loc_82E8A238;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8a144
	if (ctx.cr6.lt) goto loc_82E8A144;
loc_82E8A164:
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e8a240
	if (!ctx.cr6.lt) goto loc_82E8A240;
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e8a194
	if (ctx.cr0.eq) goto loc_82E8A194;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e8a1ac
	if (!ctx.cr0.eq) goto loc_82E8A1AC;
loc_82E8A194:
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82e8a1d4
	goto loc_82E8A1D4;
loc_82E8A1AC:
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e8a1c0
	if (!ctx.cr0.eq) goto loc_82E8A1C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e8a1c4
	goto loc_82E8A1C4;
loc_82E8A1C0:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82E8A1C4:
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82E8A1D4:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8a1f0
	if (ctx.cr0.eq) goto loc_82E8A1F0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82E8A1F0:
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8A238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8A238:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e8a244
	goto loc_82E8A244;
loc_82E8A240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8A244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A254"))) PPC_WEAK_FUNC(sub_82E8A254);
PPC_FUNC_IMPL(__imp__sub_82E8A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A258"))) PPC_WEAK_FUNC(sub_82E8A258);
PPC_FUNC_IMPL(__imp__sub_82E8A258) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a2bc
	if (ctx.cr6.eq) goto loc_82E8A2BC;
	// bl 0x82260978
	ctx.lr = 0x82E8A288;
	sub_82260978(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lfs f31,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e8a2a4
	if (!ctx.cr6.eq) goto loc_82E8A2A4;
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82e8a2bc
	if (ctx.cr6.eq) goto loc_82E8A2BC;
loc_82E8A2A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e91dc8
	ctx.lr = 0x82E8A2B4;
	sub_82E91DC8(ctx, base);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_82E8A2BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82E8A2D8"))) PPC_WEAK_FUNC(sub_82E8A2D8);
PPC_FUNC_IMPL(__imp__sub_82E8A2D8) {
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
	// bl 0x82e89e30
	ctx.lr = 0x82E8A2F8;
	sub_82E89E30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a314
	if (ctx.cr0.eq) goto loc_82E8A314;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8A314:
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

__attribute__((alias("__imp__sub_82E8A330"))) PPC_WEAK_FUNC(sub_82E8A330);
PPC_FUNC_IMPL(__imp__sub_82E8A330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8A338;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
loc_82E8A35C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e8a388
	if (ctx.cr6.eq) goto loc_82E8A388;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e8a35c
	if (!ctx.cr0.eq) goto loc_82E8A35C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8A378:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a390
	if (!ctx.cr0.eq) goto loc_82E8A390;
loc_82E8A380:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8a470
	goto loc_82E8A470;
loc_82E8A388:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e8a378
	goto loc_82E8A378;
loc_82E8A390:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r11,23744
	ctx.r4.s64 = ctx.r11.s64 + 23744;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E8A3A4;
	sub_82267BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// bl 0x82e78270
	ctx.lr = 0x82E8A3B8;
	sub_82E78270(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a380
	if (ctx.cr0.eq) goto loc_82E8A380;
	// lwz r31,124(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e8a3d8
	if (!ctx.cr0.eq) goto loc_82E8A3D8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8217dd10
	ctx.lr = 0x82E8A3D4;
	sub_8217DD10(ctx, base);
	// b 0x82e8a408
	goto loc_82E8A408;
loc_82E8A3D8:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82e8a3f4
	if (!ctx.cr6.gt) goto loc_82E8A3F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E8A3F4:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8a404
	if (ctx.cr6.gt) goto loc_82E8A404;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82E8A404:
	// bl 0x82625f08
	ctx.lr = 0x82E8A408;
	sub_82625F08(ctx, base);
loc_82E8A408:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8a450
	if (ctx.cr6.eq) goto loc_82E8A450;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82e8a448
	if (ctx.cr0.lt) goto loc_82E8A448;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-26056
	ctx.r9.s64 = ctx.r9.s64 + -26056;
loc_82E8A42C:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x82e8a42c
	if (!ctx.cr0.lt) goto loc_82E8A42C;
loc_82E8A448:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82e8a454
	goto loc_82E8A454;
loc_82E8A450:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8A454:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8A46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8A470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8A478"))) PPC_WEAK_FUNC(sub_82E8A478);
PPC_FUNC_IMPL(__imp__sub_82E8A478) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4ec
	if (ctx.cr0.eq) goto loc_82E8A4EC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82e8a4c8
	if (ctx.cr0.lt) goto loc_82E8A4C8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
loc_82E8A4B8:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82e8a4b8
	if (!ctx.cr0.lt) goto loc_82E8A4B8;
loc_82E8A4C8:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4e4
	if (ctx.cr0.eq) goto loc_82E8A4E4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8A4E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e8a518
	goto loc_82E8A518;
loc_82E8A4EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e8a514
	if (ctx.cr0.eq) goto loc_82E8A514;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8A514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8A518:
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

__attribute__((alias("__imp__sub_82E8A530"))) PPC_WEAK_FUNC(sub_82E8A530);
PPC_FUNC_IMPL(__imp__sub_82E8A530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E8A538;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e8a6c0
	if (ctx.cr6.eq) goto loc_82E8A6C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8a6c0
	if (ctx.cr6.eq) goto loc_82E8A6C0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8a58c
	if (!ctx.cr6.gt) goto loc_82E8A58C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82E8A56C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8a58c
	if (ctx.cr6.eq) goto loc_82E8A58C;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8a56c
	if (ctx.cr6.lt) goto loc_82E8A56C;
loc_82E8A58C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r29,r27,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8A5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8a5cc
	if (ctx.cr0.eq) goto loc_82E8A5CC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82E8A5CC:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8a5f4
	if (!ctx.cr6.eq) goto loc_82E8A5F4;
	// beq 0x82e8a664
	if (ctx.cr0.eq) goto loc_82E8A664;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x82e8a664
	goto loc_82E8A664;
loc_82E8A5F4:
	// bne 0x82e8a600
	if (!ctx.cr0.eq) goto loc_82E8A600;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e8a60c
	goto loc_82E8A60C;
loc_82E8A600:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82E8A60C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82E8A610:
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e8a650
	if (ctx.cr0.eq) goto loc_82E8A650;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_82E8A628:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8a64c
	if (ctx.cr6.eq) goto loc_82E8A64C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8a628
	if (ctx.cr6.lt) goto loc_82E8A628;
	// b 0x82e8a650
	goto loc_82E8A650;
loc_82E8A64C:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82E8A650:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e8a610
	if (!ctx.cr6.eq) goto loc_82E8A610;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
loc_82E8A664:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e8a6ac
	if (!ctx.cr6.lt) goto loc_82E8A6AC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82E8A678:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8a678
	if (ctx.cr6.lt) goto loc_82E8A678;
loc_82E8A6AC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82e8a6c4
	goto loc_82E8A6C4;
loc_82E8A6C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8A6C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E8A6CC"))) PPC_WEAK_FUNC(sub_82E8A6CC);
PPC_FUNC_IMPL(__imp__sub_82E8A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A6D0"))) PPC_WEAK_FUNC(sub_82E8A6D0);
PPC_FUNC_IMPL(__imp__sub_82E8A6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r10,r11,-25896
	ctx.r10.s64 = ctx.r11.s64 + -25896;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
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
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A74C"))) PPC_WEAK_FUNC(sub_82E8A74C);
PPC_FUNC_IMPL(__imp__sub_82E8A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A750"))) PPC_WEAK_FUNC(sub_82E8A750);
PPC_FUNC_IMPL(__imp__sub_82E8A750) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82e8a7ac
	if (ctx.cr0.eq) goto loc_82E8A7AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e8a7f4
	if (!ctx.cr6.eq) goto loc_82E8A7F4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8a7ac
	if (ctx.cr6.eq) goto loc_82E8A7AC;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82E8A78C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e8a7bc
	if (ctx.cr6.eq) goto loc_82E8A7BC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8a78c
	if (!ctx.cr6.eq) goto loc_82E8A78C;
loc_82E8A7AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8A7B0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8A7BC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8a7e8
	if (ctx.cr6.eq) goto loc_82E8A7E8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8a7e8
	if (!ctx.cr6.lt) goto loc_82E8A7E8;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e8a7ec
	if (!ctx.cr6.eq) goto loc_82E8A7EC;
loc_82E8A7E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8A7EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82e8a7b0
	goto loc_82E8A7B0;
loc_82E8A7F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e8a7ac
	if (ctx.cr6.eq) goto loc_82E8A7AC;
loc_82E8A804:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82e8a880
	if (ctx.cr6.eq) goto loc_82E8A880;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e8a880
	if (!ctx.cr6.lt) goto loc_82E8A880;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8a880
	if (ctx.cr6.eq) goto loc_82E8A880;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e8a880
	if (ctx.cr0.eq) goto loc_82E8A880;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r31,r31,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mulli r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 * 20;
	// lwzx r31,r31,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82e8a880
	if (!ctx.cr6.eq) goto loc_82E8A880;
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mulli r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 * 20;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e8a890
	if (ctx.cr6.eq) goto loc_82E8A890;
loc_82E8A880:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82e8a804
	if (ctx.cr6.lt) goto loc_82E8A804;
	// b 0x82e8a7ac
	goto loc_82E8A7AC;
loc_82E8A890:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82e8a7b0
	goto loc_82E8A7B0;
}

__attribute__((alias("__imp__sub_82E8A898"))) PPC_WEAK_FUNC(sub_82E8A898);
PPC_FUNC_IMPL(__imp__sub_82E8A898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82E8A8A0;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b738
	if (ctx.cr0.eq) goto loc_82E8B738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25920
	ctx.r4.s64 = ctx.r11.s64 + -25920;
	// stb r20,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r20.u8);
	// bl 0x82ca6320
	ctx.lr = 0x82E8A954;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8b720
	if (!ctx.cr0.eq) goto loc_82E8B720;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82e8b6dc
	if (ctx.cr6.eq) goto loc_82E8B6DC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82e8aa00
	if (ctx.cr6.eq) goto loc_82E8AA00;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r11,-9264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8aa00
	if (ctx.cr6.eq) goto loc_82E8AA00;
loc_82E8A9B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8A9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bne cr6,0x82e8b738
	if (!ctx.cr6.eq) goto loc_82E8B738;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-9264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9264);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8a9b0
	if (ctx.cr6.lt) goto loc_82E8A9B0;
loc_82E8AA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r19,r26,4
	ctx.r19.s64 = ctx.r26.s64 + 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r25,r26,16
	ctx.r25.s64 = ctx.r26.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r23,r26,20
	ctx.r23.s64 = ctx.r26.s64 + 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 * 20;
	// ble cr6,0x82e8abb0
	if (!ctx.cr6.gt) goto loc_82E8ABB0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8ABB0:
	// bl 0x82625f08
	ctx.lr = 0x82E8ABB4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8abf8
	if (ctx.cr0.eq) goto loc_82E8ABF8;
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82e8abf0
	if (ctx.cr0.lt) goto loc_82E8ABF0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82E8ABD0:
	// stw r21,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r21.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82e8abd0
	if (!ctx.cr0.lt) goto loc_82E8ABD0;
loc_82E8ABF0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e8abfc
	goto loc_82E8ABFC;
loc_82E8ABF8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82E8ABFC:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e8adbc
	if (!ctx.cr6.gt) goto loc_82E8ADBC;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_82E8AC14:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8ACDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ac14
	if (ctx.cr6.lt) goto loc_82E8AC14;
loc_82E8ADBC:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aea0
	if (ctx.cr0.eq) goto loc_82E8AEA0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8ade4
	if (!ctx.cr6.gt) goto loc_82E8ADE4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8ADE4:
	// bl 0x82625f08
	ctx.lr = 0x82E8ADE8;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8ae70
	if (ctx.cr6.eq) goto loc_82E8AE70;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8AE30:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ae30
	if (ctx.cr6.lt) goto loc_82E8AE30;
loc_82E8AE70:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8aea0
	if (!ctx.cr6.gt) goto loc_82E8AEA0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82E8AE84:
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r20,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8ae84
	if (ctx.cr6.lt) goto loc_82E8AE84;
loc_82E8AEA0:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8af4c
	if (ctx.cr0.eq) goto loc_82E8AF4C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8aec0
	if (!ctx.cr6.gt) goto loc_82E8AEC0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8AEC0:
	// bl 0x82625f08
	ctx.lr = 0x82E8AEC4;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8af4c
	if (ctx.cr6.eq) goto loc_82E8AF4C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8AF0C:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8af0c
	if (ctx.cr6.lt) goto loc_82E8AF0C;
loc_82E8AF4C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aff8
	if (ctx.cr0.eq) goto loc_82E8AFF8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8af6c
	if (!ctx.cr6.gt) goto loc_82E8AF6C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8AF6C:
	// bl 0x82625f08
	ctx.lr = 0x82E8AF70;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8AF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8aff8
	if (ctx.cr6.eq) goto loc_82E8AFF8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8AFB8:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8afb8
	if (ctx.cr6.lt) goto loc_82E8AFB8;
loc_82E8AFF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r26,40
	ctx.r30.s64 = ctx.r26.s64 + 40;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r25,r26,44
	ctx.r25.s64 = ctx.r26.s64 + 44;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r26,48
	ctx.r30.s64 = ctx.r26.s64 + 48;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e8b104
	if (!ctx.cr6.gt) goto loc_82E8B104;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B104:
	// bl 0x82625f08
	ctx.lr = 0x82E8B108;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8b138
	if (ctx.cr0.eq) goto loc_82E8B138;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt 0x82e8b130
	if (ctx.cr0.lt) goto loc_82E8B130;
loc_82E8B11C:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r20.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82e8b11c
	if (!ctx.cr0.lt) goto loc_82E8B11C;
loc_82E8B130:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e8b13c
	goto loc_82E8B13C;
loc_82E8B138:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82E8B13C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// stw r11,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e8b20c
	if (!ctx.cr6.gt) goto loc_82E8B20C;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82E8B154:
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b728
	if (!ctx.cr6.eq) goto loc_82E8B728;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b154
	if (ctx.cr6.lt) goto loc_82E8B154;
loc_82E8B20C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b220
	if (!ctx.cr6.gt) goto loc_82E8B220;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B220:
	// bl 0x82625f08
	ctx.lr = 0x82E8B224;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b2ac
	if (ctx.cr6.eq) goto loc_82E8B2AC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B26C:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b26c
	if (ctx.cr6.lt) goto loc_82E8B26C;
loc_82E8B2AC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b2c0
	if (!ctx.cr6.gt) goto loc_82E8B2C0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B2C0:
	// bl 0x82625f08
	ctx.lr = 0x82E8B2C4;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B2F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b34c
	if (ctx.cr6.eq) goto loc_82E8B34C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B30C:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b30c
	if (ctx.cr6.lt) goto loc_82E8B30C;
loc_82E8B34C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b3f8
	if (ctx.cr0.eq) goto loc_82E8B3F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b36c
	if (!ctx.cr6.gt) goto loc_82E8B36C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B36C:
	// bl 0x82625f08
	ctx.lr = 0x82E8B370;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b3f8
	if (ctx.cr6.eq) goto loc_82E8B3F8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B3B8:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b3b8
	if (ctx.cr6.lt) goto loc_82E8B3B8;
loc_82E8B3F8:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b4a4
	if (ctx.cr0.eq) goto loc_82E8B4A4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b418
	if (!ctx.cr6.gt) goto loc_82E8B418;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B418:
	// bl 0x82625f08
	ctx.lr = 0x82E8B41C;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b4a4
	if (ctx.cr6.eq) goto loc_82E8B4A4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B464:
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b464
	if (ctx.cr6.lt) goto loc_82E8B464;
loc_82E8B4A4:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b550
	if (ctx.cr0.eq) goto loc_82E8B550;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b4c4
	if (!ctx.cr6.gt) goto loc_82E8B4C4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B4C4:
	// bl 0x82625f08
	ctx.lr = 0x82E8B4C8;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b550
	if (ctx.cr6.eq) goto loc_82E8B550;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B510:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b510
	if (ctx.cr6.lt) goto loc_82E8B510;
loc_82E8B550:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b5fc
	if (ctx.cr0.eq) goto loc_82E8B5FC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b570
	if (!ctx.cr6.gt) goto loc_82E8B570;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B570:
	// bl 0x82625f08
	ctx.lr = 0x82E8B574;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b5fc
	if (ctx.cr6.eq) goto loc_82E8B5FC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B5BC:
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b5bc
	if (ctx.cr6.lt) goto loc_82E8B5BC;
loc_82E8B5FC:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b700
	if (ctx.cr0.eq) goto loc_82E8B700;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8b61c
	if (!ctx.cr6.gt) goto loc_82E8B61C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82E8B61C:
	// bl 0x82625f08
	ctx.lr = 0x82E8B620;
	sub_82625F08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8b720
	if (!ctx.cr6.eq) goto loc_82E8B720;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8b6a8
	if (ctx.cr6.eq) goto loc_82E8B6A8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82E8B668:
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b668
	if (ctx.cr6.lt) goto loc_82E8B668;
loc_82E8B6A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8b700
	if (!ctx.cr6.gt) goto loc_82E8B700;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82E8B6BC:
	// lwz r9,80(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r20,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8b6bc
	if (ctx.cr6.lt) goto loc_82E8B6BC;
	// b 0x82e8b700
	goto loc_82E8B700;
loc_82E8B6DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b738
	if (ctx.cr0.eq) goto loc_82E8B738;
loc_82E8B700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e8b73c
	goto loc_82E8B73C;
loc_82E8B720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82E8B728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8B738:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8B73C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82E8B744"))) PPC_WEAK_FUNC(sub_82E8B744);
PPC_FUNC_IMPL(__imp__sub_82E8B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B748"))) PPC_WEAK_FUNC(sub_82E8B748);
PPC_FUNC_IMPL(__imp__sub_82E8B748) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82e8b7dc
	if (!ctx.cr6.eq) goto loc_82E8B7DC;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r9,-9264(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8b7e4
	if (ctx.cr6.eq) goto loc_82E8B7E4;
loc_82E8B7A8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,170
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 170, ctx.xer);
	// bne cr6,0x82e8b7d4
	if (!ctx.cr6.eq) goto loc_82E8B7D4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8b7a8
	if (ctx.cr6.lt) goto loc_82E8B7A8;
	// b 0x82e8b7e4
	goto loc_82E8B7E4;
loc_82E8B7D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8ba00
	goto loc_82E8BA00;
loc_82E8B7DC:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82e8b7d4
	if (ctx.cr6.lt) goto loc_82E8B7D4;
loc_82E8B7E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8b858
	if (!ctx.cr6.gt) goto loc_82E8B858;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82E8B838:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8b838
	if (ctx.cr6.lt) goto loc_82E8B838;
loc_82E8B858:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 * 20;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8b8b0
	if (ctx.cr0.eq) goto loc_82E8B8B0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// beq cr6,0x82e8b8b0
	if (ctx.cr6.eq) goto loc_82E8B8B0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82E8B894:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8b894
	if (ctx.cr6.lt) goto loc_82E8B894;
loc_82E8B8B0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r9,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8b8d0
	if (ctx.cr0.eq) goto loc_82E8B8D0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_82E8B8D0:
	// rlwinm. r10,r9,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8b8ec
	if (ctx.cr0.eq) goto loc_82E8B8EC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_82E8B8EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// ble cr6,0x82e8b948
	if (!ctx.cr6.gt) goto loc_82E8B948;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82E8B928:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8b928
	if (ctx.cr6.lt) goto loc_82E8B928;
loc_82E8B948:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r9,r8,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// beq 0x82e8b988
	if (ctx.cr0.eq) goto loc_82E8B988;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
loc_82E8B988:
	// rlwinm. r9,r8,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8b99c
	if (ctx.cr0.eq) goto loc_82E8B99C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
loc_82E8B99C:
	// rlwinm. r9,r8,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8b9b0
	if (ctx.cr0.eq) goto loc_82E8B9B0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
loc_82E8B9B0:
	// clrlwi. r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8b9c4
	if (ctx.cr0.eq) goto loc_82E8B9C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82E8B9C4:
	// rlwinm. r10,r8,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8b9fc
	if (ctx.cr0.eq) goto loc_82E8B9FC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e8b9fc
	if (ctx.cr6.eq) goto loc_82E8B9FC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82E8B9E0:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8b9e0
	if (ctx.cr6.lt) goto loc_82E8B9E0;
loc_82E8B9FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8BA00:
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

__attribute__((alias("__imp__sub_82E8BA18"))) PPC_WEAK_FUNC(sub_82E8BA18);
PPC_FUNC_IMPL(__imp__sub_82E8BA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8BA20;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8BA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r30,21
	ctx.r10.s64 = ctx.r30.s64 + 21;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// bne cr6,0x82e8ba78
	if (!ctx.cr6.eq) goto loc_82E8BA78;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8ba80
	goto loc_82E8BA80;
loc_82E8BA78:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BA80:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x82e8bad8
	if (!ctx.cr6.eq) goto loc_82E8BAD8;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r9,-9264(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8bae0
	if (ctx.cr6.eq) goto loc_82E8BAE0;
loc_82E8BAA4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,170
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 170, ctx.xer);
	// bne cr6,0x82e8bad0
	if (!ctx.cr6.eq) goto loc_82E8BAD0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8baa4
	if (ctx.cr6.lt) goto loc_82E8BAA4;
	// b 0x82e8bae0
	goto loc_82E8BAE0;
loc_82E8BAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8c1dc
	goto loc_82E8C1DC;
loc_82E8BAD8:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82e8bad0
	if (ctx.cr6.lt) goto loc_82E8BAD0;
loc_82E8BAE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bb0c
	if (!ctx.cr6.eq) goto loc_82E8BB0C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82e8bb10
	goto loc_82E8BB10;
loc_82E8BB0C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BB10:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8bb44
	if (!ctx.cr6.eq) goto loc_82E8BB44;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8bb48
	goto loc_82E8BB48;
loc_82E8BB44:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BB48:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8bb7c
	if (!ctx.cr6.eq) goto loc_82E8BB7C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8bb80
	goto loc_82E8BB80;
loc_82E8BB7C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BB80:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8bbb4
	if (!ctx.cr6.eq) goto loc_82E8BBB4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8bbb8
	goto loc_82E8BBB8;
loc_82E8BBB4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BBB8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8bbec
	if (!ctx.cr6.eq) goto loc_82E8BBEC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8bbf0
	goto loc_82E8BBF0;
loc_82E8BBEC:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BBF0:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// ble cr6,0x82e8bd20
	if (!ctx.cr6.gt) goto loc_82E8BD20;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82E8BC10:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bc3c
	if (!ctx.cr6.eq) goto loc_82E8BC3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r6,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E8BC3C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bc6c
	if (!ctx.cr6.eq) goto loc_82E8BC6C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82E8BC6C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bc9c
	if (!ctx.cr6.eq) goto loc_82E8BC9C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82E8BC9C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bccc
	if (!ctx.cr6.eq) goto loc_82E8BCCC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82E8BCCC:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bcfc
	if (!ctx.cr6.eq) goto loc_82E8BCFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r6,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E8BCFC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8bc10
	if (ctx.cr6.lt) goto loc_82E8BC10;
loc_82E8BD20:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8bd70
	if (ctx.cr0.eq) goto loc_82E8BD70;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// ble cr6,0x82e8bd70
	if (!ctx.cr6.gt) goto loc_82E8BD70;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82E8BD54:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8bd54
	if (ctx.cr6.lt) goto loc_82E8BD54;
loc_82E8BD70:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8bdd0
	if (ctx.cr0.eq) goto loc_82E8BDD0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8bdd0
	if (!ctx.cr6.gt) goto loc_82E8BDD0;
loc_82E8BD90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bdbc
	if (!ctx.cr6.eq) goto loc_82E8BDBC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8BDBC:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8bd90
	if (ctx.cr6.lt) goto loc_82E8BD90;
loc_82E8BDD0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8be30
	if (ctx.cr0.eq) goto loc_82E8BE30;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8be30
	if (!ctx.cr6.gt) goto loc_82E8BE30;
loc_82E8BDF0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8be1c
	if (!ctx.cr6.eq) goto loc_82E8BE1C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8BE1C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8bdf0
	if (ctx.cr6.lt) goto loc_82E8BDF0;
loc_82E8BE30:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8be5c
	if (!ctx.cr6.eq) goto loc_82E8BE5C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82e8be60
	goto loc_82E8BE60;
loc_82E8BE5C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BE60:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8be94
	if (!ctx.cr6.eq) goto loc_82E8BE94;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8be98
	goto loc_82E8BE98;
loc_82E8BE94:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BE98:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x82e8becc
	if (!ctx.cr6.eq) goto loc_82E8BECC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82e8bed0
	goto loc_82E8BED0;
loc_82E8BECC:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_82E8BED0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x82e8bf70
	if (!ctx.cr6.gt) goto loc_82E8BF70;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82E8BEF0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bf1c
	if (!ctx.cr6.eq) goto loc_82E8BF1C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r6,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82E8BF1C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bf4c
	if (!ctx.cr6.eq) goto loc_82E8BF4C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r6,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82E8BF4C:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e8bef0
	if (ctx.cr6.lt) goto loc_82E8BEF0;
loc_82E8BF70:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8bfc4
	if (!ctx.cr6.gt) goto loc_82E8BFC4;
loc_82E8BF84:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8bfb0
	if (!ctx.cr6.eq) goto loc_82E8BFB0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8BFB0:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8bf84
	if (ctx.cr6.lt) goto loc_82E8BF84;
loc_82E8BFC4:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c018
	if (!ctx.cr6.gt) goto loc_82E8C018;
loc_82E8BFD8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8c004
	if (!ctx.cr6.eq) goto loc_82E8C004;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8C004:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8bfd8
	if (ctx.cr6.lt) goto loc_82E8BFD8;
loc_82E8C018:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8c078
	if (ctx.cr0.eq) goto loc_82E8C078;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c078
	if (!ctx.cr6.gt) goto loc_82E8C078;
loc_82E8C038:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8c064
	if (!ctx.cr6.eq) goto loc_82E8C064;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8C064:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c038
	if (ctx.cr6.lt) goto loc_82E8C038;
loc_82E8C078:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8c0d8
	if (ctx.cr0.eq) goto loc_82E8C0D8;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c0d8
	if (!ctx.cr6.gt) goto loc_82E8C0D8;
loc_82E8C098:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8c0c4
	if (!ctx.cr6.eq) goto loc_82E8C0C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8C0C4:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c098
	if (ctx.cr6.lt) goto loc_82E8C098;
loc_82E8C0D8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8c138
	if (ctx.cr0.eq) goto loc_82E8C138;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c138
	if (!ctx.cr6.gt) goto loc_82E8C138;
loc_82E8C0F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8c124
	if (!ctx.cr6.eq) goto loc_82E8C124;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8C124:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c0f8
	if (ctx.cr6.lt) goto loc_82E8C0F8;
loc_82E8C138:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8c198
	if (ctx.cr0.eq) goto loc_82E8C198;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c198
	if (!ctx.cr6.gt) goto loc_82E8C198;
loc_82E8C158:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e8c184
	if (!ctx.cr6.eq) goto loc_82E8C184;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82E8C184:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c158
	if (ctx.cr6.lt) goto loc_82E8C158;
loc_82E8C198:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8c1d8
	if (ctx.cr0.eq) goto loc_82E8C1D8;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82e8c1d8
	if (!ctx.cr6.gt) goto loc_82E8C1D8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82E8C1BC:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c1bc
	if (ctx.cr6.lt) goto loc_82E8C1BC;
loc_82E8C1D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8C1DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8C1E4"))) PPC_WEAK_FUNC(sub_82E8C1E4);
PPC_FUNC_IMPL(__imp__sub_82E8C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C1E8"))) PPC_WEAK_FUNC(sub_82E8C1E8);
PPC_FUNC_IMPL(__imp__sub_82E8C1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8C1F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8c23c
	if (ctx.cr0.eq) goto loc_82E8C23C;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// b 0x82e8c38c
	goto loc_82E8C38C;
loc_82E8C23C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c25c
	if (ctx.cr0.eq) goto loc_82E8C25C;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82E8C25C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c278
	if (ctx.cr0.eq) goto loc_82E8C278;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82E8C278:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c294
	if (ctx.cr0.eq) goto loc_82E8C294;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82E8C294:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c2b0
	if (ctx.cr0.eq) goto loc_82E8C2B0;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82E8C2B0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c2cc
	if (ctx.cr0.eq) goto loc_82E8C2CC;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82E8C2CC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c2e8
	if (ctx.cr0.eq) goto loc_82E8C2E8;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82E8C2E8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c304
	if (ctx.cr0.eq) goto loc_82E8C304;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82E8C304:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c320
	if (ctx.cr0.eq) goto loc_82E8C320;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82E8C320:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c33c
	if (ctx.cr0.eq) goto loc_82E8C33C;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82E8C33C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c358
	if (ctx.cr0.eq) goto loc_82E8C358;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82E8C358:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c374
	if (ctx.cr0.eq) goto loc_82E8C374;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82E8C374:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c390
	if (ctx.cr0.eq) goto loc_82E8C390;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8C38C:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82E8C390:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8C3B0"))) PPC_WEAK_FUNC(sub_82E8C3B0);
PPC_FUNC_IMPL(__imp__sub_82E8C3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E8C3B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e8c930
	if (!ctx.cr0.eq) goto loc_82E8C930;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31952
	ctx.r28.s64 = -2094006272;
	// beq 0x82e8c440
	if (ctx.cr0.eq) goto loc_82E8C440;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c414
	if (!ctx.cr6.eq) goto loc_82E8C414;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c40c
	if (!ctx.cr6.gt) goto loc_82E8C40C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C40C:
	// bl 0x82625f08
	ctx.lr = 0x82E8C410;
	sub_82625F08(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82E8C414:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c478
	if (!ctx.cr6.eq) goto loc_82E8C478;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c434
	if (!ctx.cr6.gt) goto loc_82E8C434;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C434:
	// bl 0x82625f08
	ctx.lr = 0x82E8C438;
	sub_82625F08(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// b 0x82e8c478
	goto loc_82E8C478;
loc_82E8C440:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c45c
	if (ctx.cr0.eq) goto loc_82E8C45C;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82E8C45C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c478
	if (ctx.cr0.eq) goto loc_82E8C478;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_82E8C478:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8c4e0
	if (ctx.cr0.eq) goto loc_82E8C4E0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c4fc
	if (!ctx.cr6.eq) goto loc_82E8C4FC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c4a4
	if (!ctx.cr6.gt) goto loc_82E8C4A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C4A4:
	// bl 0x82625f08
	ctx.lr = 0x82E8C4A8;
	sub_82625F08(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e8c4fc
	if (!ctx.cr6.gt) goto loc_82E8C4FC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82E8C4C0:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c4c0
	if (ctx.cr6.lt) goto loc_82E8C4C0;
	// b 0x82e8c4fc
	goto loc_82E8C4FC;
loc_82E8C4E0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c4fc
	if (ctx.cr0.eq) goto loc_82E8C4FC;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_82E8C4FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8c5fc
	if (ctx.cr0.eq) goto loc_82E8C5FC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c618
	if (!ctx.cr6.eq) goto loc_82E8C618;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c528
	if (!ctx.cr6.gt) goto loc_82E8C528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C528:
	// bl 0x82625f08
	ctx.lr = 0x82E8C52C;
	sub_82625F08(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8c618
	if (!ctx.cr6.gt) goto loc_82E8C618;
loc_82E8C540:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8c5e8
	if (ctx.cr6.eq) goto loc_82E8C5E8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e8c5e8
	if (!ctx.cr6.lt) goto loc_82E8C5E8;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8c5e8
	if (ctx.cr6.eq) goto loc_82E8C5E8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e8c5e8
	if (ctx.cr0.eq) goto loc_82E8C5E8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// mulli r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
loc_82E8C5E8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8c540
	if (ctx.cr6.lt) goto loc_82E8C540;
	// b 0x82e8c618
	goto loc_82E8C618;
loc_82E8C5FC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c618
	if (ctx.cr0.eq) goto loc_82E8C618;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_82E8C618:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8c76c
	if (ctx.cr0.eq) goto loc_82E8C76C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c7a4
	if (!ctx.cr6.eq) goto loc_82E8C7A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c644
	if (!ctx.cr6.gt) goto loc_82E8C644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C644:
	// bl 0x82625f08
	ctx.lr = 0x82E8C648;
	sub_82625F08(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c660
	if (!ctx.cr6.gt) goto loc_82E8C660;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C660:
	// bl 0x82625f08
	ctx.lr = 0x82E8C664;
	sub_82625F08(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e8c698
	if (!ctx.cr6.gt) goto loc_82E8C698;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82E8C67C:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c67c
	if (ctx.cr6.lt) goto loc_82E8C67C;
loc_82E8C698:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8c6c8
	if (!ctx.cr6.gt) goto loc_82E8C6C8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8C6AC:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r27,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c6ac
	if (ctx.cr6.lt) goto loc_82E8C6AC;
loc_82E8C6C8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8c7a4
	if (!ctx.cr6.gt) goto loc_82E8C7A4;
loc_82E8C6D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8c758
	if (ctx.cr6.eq) goto loc_82E8C758;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8c758
	if (!ctx.cr6.lt) goto loc_82E8C758;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82e8c758
	if (ctx.cr6.eq) goto loc_82E8C758;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8c758
	if (ctx.cr0.eq) goto loc_82E8C758;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_82E8C758:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8c6d8
	if (ctx.cr6.lt) goto loc_82E8C6D8;
	// b 0x82e8c7a4
	goto loc_82E8C7A4;
loc_82E8C76C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c788
	if (ctx.cr0.eq) goto loc_82E8C788;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_82E8C788:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c7a4
	if (ctx.cr0.eq) goto loc_82E8C7A4;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_82E8C7A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8c8f8
	if (ctx.cr0.eq) goto loc_82E8C8F8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8c930
	if (!ctx.cr6.eq) goto loc_82E8C930;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c7d0
	if (!ctx.cr6.gt) goto loc_82E8C7D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C7D0:
	// bl 0x82625f08
	ctx.lr = 0x82E8C7D4;
	sub_82625F08(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8c7ec
	if (!ctx.cr6.gt) goto loc_82E8C7EC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8C7EC:
	// bl 0x82625f08
	ctx.lr = 0x82E8C7F0;
	sub_82625F08(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e8c824
	if (!ctx.cr6.gt) goto loc_82E8C824;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82E8C808:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c808
	if (ctx.cr6.lt) goto loc_82E8C808;
loc_82E8C824:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8c854
	if (!ctx.cr6.gt) goto loc_82E8C854;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8C838:
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r27,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8c838
	if (ctx.cr6.lt) goto loc_82E8C838;
loc_82E8C854:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8c930
	if (!ctx.cr6.gt) goto loc_82E8C930;
loc_82E8C864:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8c8e4
	if (ctx.cr6.eq) goto loc_82E8C8E4;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8c8e4
	if (!ctx.cr6.lt) goto loc_82E8C8E4;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82e8c8e4
	if (ctx.cr6.eq) goto loc_82E8C8E4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8c8e4
	if (ctx.cr0.eq) goto loc_82E8C8E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_82E8C8E4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8c864
	if (ctx.cr6.lt) goto loc_82E8C864;
	// b 0x82e8c930
	goto loc_82E8C930;
loc_82E8C8F8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c914
	if (ctx.cr0.eq) goto loc_82E8C914;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82E8C914:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c930
	if (ctx.cr0.eq) goto loc_82E8C930;
	// lwz r11,-9868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_82E8C930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E8C938"))) PPC_WEAK_FUNC(sub_82E8C938);
PPC_FUNC_IMPL(__imp__sub_82E8C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-25856
	ctx.r10.s64 = ctx.r11.s64 + -25856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C96C"))) PPC_WEAK_FUNC(sub_82E8C96C);
PPC_FUNC_IMPL(__imp__sub_82E8C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C970"))) PPC_WEAK_FUNC(sub_82E8C970);
PPC_FUNC_IMPL(__imp__sub_82E8C970) {
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
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// addi r11,r11,-25856
	ctx.r11.s64 = ctx.r11.s64 + -25856;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e8c9b0
	if (ctx.cr0.eq) goto loc_82E8C9B0;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8C9B0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c9c8
	if (ctx.cr0.eq) goto loc_82E8C9C8;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8C9C8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c9e0
	if (ctx.cr0.eq) goto loc_82E8C9E0;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8C9E0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8c9f8
	if (ctx.cr0.eq) goto loc_82E8C9F8;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8C9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8C9F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
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

__attribute__((alias("__imp__sub_82E8CA1C"))) PPC_WEAK_FUNC(sub_82E8CA1C);
PPC_FUNC_IMPL(__imp__sub_82E8CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CA20"))) PPC_WEAK_FUNC(sub_82E8CA20);
PPC_FUNC_IMPL(__imp__sub_82E8CA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E8CA28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e8cb80
	if (ctx.cr6.eq) goto loc_82E8CB80;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8ca5c
	if (ctx.cr0.eq) goto loc_82E8CA5C;
	// lwz r11,-9868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8CA5C:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8ca74
	if (ctx.cr0.eq) goto loc_82E8CA74;
	// lwz r11,-9868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8CA74:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8ca8c
	if (ctx.cr0.eq) goto loc_82E8CA8C;
	// lwz r11,-9868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8CA8C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8caa4
	if (ctx.cr0.eq) goto loc_82E8CAA4;
	// lwz r11,-9868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8CAA4:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// bne cr6,0x82e8cacc
	if (!ctx.cr6.eq) goto loc_82E8CACC;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// b 0x82e8cb80
	goto loc_82E8CB80;
loc_82E8CACC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82e8cae8
	if (!ctx.cr6.gt) goto loc_82E8CAE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8CAE8:
	// bl 0x82625f08
	ctx.lr = 0x82E8CAEC;
	sub_82625F08(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8cb00
	if (!ctx.cr6.gt) goto loc_82E8CB00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8CB00:
	// bl 0x82625f08
	ctx.lr = 0x82E8CB04;
	sub_82625F08(ctx, base);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mulli r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 * 12;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8cb20
	if (!ctx.cr6.gt) goto loc_82E8CB20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8CB20:
	// bl 0x82625f08
	ctx.lr = 0x82E8CB24;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8cb60
	if (ctx.cr0.eq) goto loc_82E8CB60;
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82e8cb58
	if (ctx.cr0.lt) goto loc_82E8CB58;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82E8CB40:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82e8cb40
	if (!ctx.cr0.lt) goto loc_82E8CB40;
loc_82E8CB58:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e8cb64
	goto loc_82E8CB64;
loc_82E8CB60:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E8CB64:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8cb78
	if (!ctx.cr6.gt) goto loc_82E8CB78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8CB78:
	// bl 0x82625f08
	ctx.lr = 0x82E8CB7C;
	sub_82625F08(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_82E8CB80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E8CB88"))) PPC_WEAK_FUNC(sub_82E8CB88);
PPC_FUNC_IMPL(__imp__sub_82E8CB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82e8cb9c
	if (!ctx.cr0.eq) goto loc_82E8CB9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E8CB9C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f8,f12,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82E8CBE4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82e8cc18
	if (!ctx.cr6.lt) goto loc_82E8CC18;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82E8CC18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8cbe4
	if (ctx.cr6.lt) goto loc_82E8CBE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8CC2C"))) PPC_WEAK_FUNC(sub_82E8CC2C);
PPC_FUNC_IMPL(__imp__sub_82E8CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CC30"))) PPC_WEAK_FUNC(sub_82E8CC30);
PPC_FUNC_IMPL(__imp__sub_82E8CC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e8cc98
	if (ctx.cr0.eq) goto loc_82E8CC98;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82E8CC4C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e8cc7c
	if (!ctx.cr6.eq) goto loc_82E8CC7C;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82e8cc7c
	if (!ctx.cr6.eq) goto loc_82E8CC7C;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82e8cc80
	if (ctx.cr6.eq) goto loc_82E8CC80;
loc_82E8CC7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E8CC80:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8cc4c
	if (ctx.cr6.lt) goto loc_82E8CC4C;
loc_82E8CC98:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8CCA0"))) PPC_WEAK_FUNC(sub_82E8CCA0);
PPC_FUNC_IMPL(__imp__sub_82E8CCA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25896
	ctx.r11.s64 = ctx.r11.s64 + -25896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e8c1e8
	ctx.lr = 0x82E8CCC4;
	sub_82E8C1E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E8CCE4"))) PPC_WEAK_FUNC(sub_82E8CCE4);
PPC_FUNC_IMPL(__imp__sub_82E8CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CCE8"))) PPC_WEAK_FUNC(sub_82E8CCE8);
PPC_FUNC_IMPL(__imp__sub_82E8CCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82E8CCF0;
	sub_82CA2BD8(ctx, base);
	// li r12,-32544
	ctx.r12.s64 = -32544;
	// bl 0x82ca9e84
	ctx.lr = 0x82E8CCF8;
	sub_82CA9E84(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82e8cd54
	if (ctx.cr6.eq) goto loc_82E8CD54;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8d1ac
	goto loc_82E8D1AC;
loc_82E8CD54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82e8cdc0
	if (ctx.cr6.eq) goto loc_82E8CDC0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E8CDA0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e8d1ac
	goto loc_82E8D1AC;
loc_82E8CDC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x82e8cdf8
	if (!ctx.cr0.eq) goto loc_82E8CDF8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82e8cda0
	goto loc_82E8CDA0;
loc_82E8CDF8:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// mulli r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 * 20;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8ce20
	if (!ctx.cr6.gt) goto loc_82E8CE20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8CE20:
	// bl 0x82625f08
	ctx.lr = 0x82E8CE24;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8ce68
	if (ctx.cr0.eq) goto loc_82E8CE68;
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82e8ce60
	if (ctx.cr0.lt) goto loc_82E8CE60;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82E8CE40:
	// stw r27,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r27.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82e8ce40
	if (!ctx.cr0.lt) goto loc_82E8CE40;
loc_82E8CE60:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e8ce6c
	goto loc_82E8CE6C;
loc_82E8CE68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E8CE6C:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82e8cf8c
	if (ctx.cr0.eq) goto loc_82E8CF8C;
loc_82E8CE7C:
	// cmplwi cr6,r28,800
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 800, ctx.xer);
	// li r30,800
	ctx.r30.s64 = 800;
	// bgt cr6,0x82e8ce8c
	if (ctx.cr6.gt) goto loc_82E8CE8C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8CE8C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 * 20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e8d03c
	if (!ctx.cr6.eq) goto loc_82E8D03C;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8cf84
	if (ctx.cr6.eq) goto loc_82E8CF84;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82E8CECC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 * 20;
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 * 20;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne 0x82e8cecc
	if (!ctx.cr0.eq) goto loc_82E8CECC;
loc_82E8CF84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e8ce7c
	if (!ctx.cr6.eq) goto loc_82E8CE7C;
loc_82E8CF8C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8CFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8d03c
	if (!ctx.cr6.eq) goto loc_82E8D03C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq 0x82e8d1a8
	if (ctx.cr0.eq) goto loc_82E8D1A8;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8d008
	if (!ctx.cr6.gt) goto loc_82E8D008;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8D008:
	// bl 0x82625f08
	ctx.lr = 0x82E8D00C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8d044
	if (ctx.cr0.eq) goto loc_82E8D044;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt 0x82e8d034
	if (ctx.cr0.lt) goto loc_82E8D034;
loc_82E8D020:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82e8d020
	if (!ctx.cr0.lt) goto loc_82E8D020;
loc_82E8D034:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82e8d048
	goto loc_82E8D048;
loc_82E8D03C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82e8cda0
	goto loc_82E8CDA0;
loc_82E8D044:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82E8D048:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82e8d068
	if (!ctx.cr6.gt) goto loc_82E8D068;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8D068:
	// bl 0x82625f08
	ctx.lr = 0x82E8D06C;
	sub_82625F08(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8d084
	if (!ctx.cr6.gt) goto loc_82E8D084;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82E8D084:
	// bl 0x82625f08
	ctx.lr = 0x82E8D088;
	sub_82625F08(ctx, base);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82e8d19c
	if (ctx.cr0.eq) goto loc_82E8D19C;
loc_82E8D098:
	// cmplwi cr6,r28,2048
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2048, ctx.xer);
	// li r29,2048
	ctx.r29.s64 = 2048;
	// bgt cr6,0x82e8d0a8
	if (ctx.cr6.gt) goto loc_82E8D0A8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82E8D0A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,16080
	ctx.r5.s64 = ctx.r1.s64 + 16080;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e8d03c
	if (!ctx.cr6.eq) goto loc_82E8D03C;
	// rlwinm. r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e8d114
	if (ctx.cr0.eq) goto loc_82E8D114;
	// addi r10,r1,16080
	ctx.r10.s64 = ctx.r1.s64 + 16080;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82E8D0E4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82e8d0e4
	if (!ctx.cr0.eq) goto loc_82E8D0E4;
loc_82E8D114:
	// subf r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e8d194
	if (ctx.cr6.eq) goto loc_82E8D194;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r11,r1,16080
	ctx.r11.s64 = ctx.r1.s64 + 16080;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82E8D130:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwx r7,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bne 0x82e8d130
	if (!ctx.cr0.eq) goto loc_82E8D130;
loc_82E8D194:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e8d098
	if (!ctx.cr6.eq) goto loc_82E8D098;
loc_82E8D19C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82e8c3b0
	ctx.lr = 0x82E8D1A8;
	sub_82E8C3B0(ctx, base);
loc_82E8D1A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8D1AC:
	// addi r1,r1,32544
	ctx.r1.s64 = ctx.r1.s64 + 32544;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82E8D1B4"))) PPC_WEAK_FUNC(sub_82E8D1B4);
PPC_FUNC_IMPL(__imp__sub_82E8D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D1B8"))) PPC_WEAK_FUNC(sub_82E8D1B8);
PPC_FUNC_IMPL(__imp__sub_82E8D1B8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82e8d258
	if (!ctx.cr0.eq) goto loc_82E8D258;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r10,r8,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82E8D258:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-9856
	ctx.r30.s64 = ctx.r11.s64 + -9856;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8d2ac
	if (!ctx.cr6.eq) goto loc_82E8D2AC;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e8d2b0
	if (ctx.cr6.eq) goto loc_82E8D2B0;
loc_82E8D2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8D2B0:
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

__attribute__((alias("__imp__sub_82E8D2C8"))) PPC_WEAK_FUNC(sub_82E8D2C8);
PPC_FUNC_IMPL(__imp__sub_82E8D2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8D2D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82639868
	ctx.lr = 0x82E8D2FC;
	sub_82639868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82639068
	ctx.lr = 0x82E8D30C;
	sub_82639068(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8d3c8
	if (!ctx.cr0.eq) goto loc_82E8D3C8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r11,r3,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r11,r11,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwimi r9,r29,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r10,r29,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82E8D3C8:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-9856
	ctx.r31.s64 = ctx.r11.s64 + -9856;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8d488
	if (!ctx.cr6.eq) goto loc_82E8D488;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8d488
	if (!ctx.cr6.eq) goto loc_82E8D488;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8d488
	if (!ctx.cr6.eq) goto loc_82E8D488;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8d488
	if (!ctx.cr6.eq) goto loc_82E8D488;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e8d48c
	if (ctx.cr6.eq) goto loc_82E8D48C;
loc_82E8D488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8D48C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8D494"))) PPC_WEAK_FUNC(sub_82E8D494);
PPC_FUNC_IMPL(__imp__sub_82E8D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D498"))) PPC_WEAK_FUNC(sub_82E8D498);
PPC_FUNC_IMPL(__imp__sub_82E8D498) {
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
	// bl 0x82e8c970
	ctx.lr = 0x82E8D4B8;
	sub_82E8C970(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8d4d4
	if (ctx.cr0.eq) goto loc_82E8D4D4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8D4D4:
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

__attribute__((alias("__imp__sub_82E8D4F0"))) PPC_WEAK_FUNC(sub_82E8D4F0);
PPC_FUNC_IMPL(__imp__sub_82E8D4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8D4F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bne cr6,0x82e8d520
	if (!ctx.cr6.eq) goto loc_82E8D520;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8d54c
	if (ctx.cr6.eq) goto loc_82E8D54C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82e8d54c
	goto loc_82E8D54C;
loc_82E8D520:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82e8d54c
	if (!ctx.cr6.eq) goto loc_82E8D54C;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e8d54c
	if (!ctx.cr6.gt) goto loc_82E8D54C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e8d544
	if (!ctx.cr6.eq) goto loc_82E8D544;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82e8d544
	goto loc_82E8D544;
loc_82E8D540:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82E8D544:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82e8d540
	if (ctx.cr6.lt) goto loc_82E8D540;
loc_82E8D54C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82e8d560
	if (!ctx.cr6.gt) goto loc_82E8D560;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// b 0x82e8d564
	goto loc_82E8D564;
loc_82E8D560:
	// stw r4,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r4.u32);
loc_82E8D564:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8d66c
	if (ctx.cr6.eq) goto loc_82E8D66C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82e8d57c
	if (ctx.cr6.lt) goto loc_82E8D57C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82E8D57C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// beq cr6,0x82e8d5f4
	if (ctx.cr6.eq) goto loc_82E8D5F4;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e8d5a4
	if (!ctx.cr6.gt) goto loc_82E8D5A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E8D5A4:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8d5b4
	if (ctx.cr6.gt) goto loc_82E8D5B4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82E8D5B4:
	// bl 0x82625f08
	ctx.lr = 0x82E8D5B8;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8d5f4
	if (ctx.cr0.eq) goto loc_82E8D5F4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt 0x82e8d5ec
	if (ctx.cr0.lt) goto loc_82E8D5EC;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r8,r8,-26584
	ctx.r8.s64 = ctx.r8.s64 + -26584;
loc_82E8D5DC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82e8d5dc
	if (!ctx.cr0.lt) goto loc_82E8D5DC;
loc_82E8D5EC:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82e8d5f8
	goto loc_82E8D5F8;
loc_82E8D5F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E8D5F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8d62c
	if (ctx.cr6.eq) goto loc_82E8D62C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E8D60C:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82e8d60c
	if (!ctx.cr0.eq) goto loc_82E8D60C;
loc_82E8D62C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8d668
	if (ctx.cr0.eq) goto loc_82E8D668;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e8d664
	if (ctx.cr6.eq) goto loc_82E8D664;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8d668
	goto loc_82E8D668;
loc_82E8D664:
	// bl 0x824fe010
	ctx.lr = 0x82E8D668;
	sub_824FE010(ctx, base);
loc_82E8D668:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82E8D66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8D674"))) PPC_WEAK_FUNC(sub_82E8D674);
PPC_FUNC_IMPL(__imp__sub_82E8D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D678"))) PPC_WEAK_FUNC(sub_82E8D678);
PPC_FUNC_IMPL(__imp__sub_82E8D678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8D680;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bne cr6,0x82e8d6a8
	if (!ctx.cr6.eq) goto loc_82E8D6A8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8d6d4
	if (ctx.cr6.eq) goto loc_82E8D6D4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82e8d6d4
	goto loc_82E8D6D4;
loc_82E8D6A8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82e8d6d4
	if (!ctx.cr6.eq) goto loc_82E8D6D4;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e8d6d4
	if (!ctx.cr6.gt) goto loc_82E8D6D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e8d6cc
	if (!ctx.cr6.eq) goto loc_82E8D6CC;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82e8d6cc
	goto loc_82E8D6CC;
loc_82E8D6C8:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82E8D6CC:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82e8d6c8
	if (ctx.cr6.lt) goto loc_82E8D6C8;
loc_82E8D6D4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82e8d6e8
	if (!ctx.cr6.gt) goto loc_82E8D6E8;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// b 0x82e8d6ec
	goto loc_82E8D6EC;
loc_82E8D6E8:
	// stw r4,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r4.u32);
loc_82E8D6EC:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8d7f4
	if (ctx.cr6.eq) goto loc_82E8D7F4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82e8d704
	if (ctx.cr6.lt) goto loc_82E8D704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82E8D704:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// beq cr6,0x82e8d77c
	if (ctx.cr6.eq) goto loc_82E8D77C;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e8d72c
	if (!ctx.cr6.gt) goto loc_82E8D72C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E8D72C:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8d73c
	if (ctx.cr6.gt) goto loc_82E8D73C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82E8D73C:
	// bl 0x82625f08
	ctx.lr = 0x82E8D740;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8d77c
	if (ctx.cr0.eq) goto loc_82E8D77C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt 0x82e8d774
	if (ctx.cr0.lt) goto loc_82E8D774;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r8,r8,-26584
	ctx.r8.s64 = ctx.r8.s64 + -26584;
loc_82E8D764:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82e8d764
	if (!ctx.cr0.lt) goto loc_82E8D764;
loc_82E8D774:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82e8d780
	goto loc_82E8D780;
loc_82E8D77C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E8D780:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8d7b4
	if (ctx.cr6.eq) goto loc_82E8D7B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E8D794:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82e8d794
	if (!ctx.cr0.eq) goto loc_82E8D794;
loc_82E8D7B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8d7f0
	if (ctx.cr0.eq) goto loc_82E8D7F0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e8d7ec
	if (ctx.cr6.eq) goto loc_82E8D7EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8d7f0
	goto loc_82E8D7F0;
loc_82E8D7EC:
	// bl 0x824fe010
	ctx.lr = 0x82E8D7F0;
	sub_824FE010(ctx, base);
loc_82E8D7F0:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82E8D7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8D7FC"))) PPC_WEAK_FUNC(sub_82E8D7FC);
PPC_FUNC_IMPL(__imp__sub_82E8D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D800"))) PPC_WEAK_FUNC(sub_82E8D800);
PPC_FUNC_IMPL(__imp__sub_82E8D800) {
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
	// bl 0x82e8cca0
	ctx.lr = 0x82E8D820;
	sub_82E8CCA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8d83c
	if (ctx.cr0.eq) goto loc_82E8D83C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8D83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8D83C:
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

__attribute__((alias("__imp__sub_82E8D858"))) PPC_WEAK_FUNC(sub_82E8D858);
PPC_FUNC_IMPL(__imp__sub_82E8D858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82E8D860;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e8dfbc
	if (!ctx.cr0.eq) goto loc_82E8DFBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-26580
	ctx.r27.s64 = ctx.r11.s64 + -26580;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8D8A0;
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8d944
	if (!ctx.cr6.gt) goto loc_82E8D944;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
loc_82E8D8C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82e8d8e4
	if (!ctx.cr6.eq) goto loc_82E8D8E4;
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
	// b 0x82e8d92c
	goto loc_82E8D92C;
loc_82E8D8E4:
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_82E8D92C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8d8c8
	if (ctx.cr6.lt) goto loc_82E8D8C8;
loc_82E8D944:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8D968;
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8d9f0
	if (!ctx.cr6.gt) goto loc_82E8D9F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
loc_82E8D98C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82e8d9a8
	if (!ctx.cr6.eq) goto loc_82E8D9A8;
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// b 0x82e8d9d8
	goto loc_82E8D9D8;
loc_82E8D9A8:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_82E8D9D8:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8d98c
	if (ctx.cr6.lt) goto loc_82E8D98C;
loc_82E8D9F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DA20;
	sub_82E8D4F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DA30;
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8dabc
	if (!ctx.cr6.gt) goto loc_82E8DABC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_82E8DA50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8daa4
	if (ctx.cr6.eq) goto loc_82E8DAA4;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_82E8DAA4:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8da50
	if (ctx.cr6.lt) goto loc_82E8DA50;
loc_82E8DABC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8dafc
	if (ctx.cr6.eq) goto loc_82E8DAFC;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82E8DAD4:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82e8dad4
	if (!ctx.cr0.eq) goto loc_82E8DAD4;
loc_82E8DAFC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8dbd8
	if (ctx.cr6.eq) goto loc_82E8DBD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DB28;
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8dba0
	if (!ctx.cr6.gt) goto loc_82E8DBA0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
loc_82E8DB44:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8db88
	if (ctx.cr6.eq) goto loc_82E8DB88;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8db70
	if (!ctx.cr6.eq) goto loc_82E8DB70;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82e8db88
	goto loc_82E8DB88;
loc_82E8DB70:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82E8DB88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8db44
	if (ctx.cr6.lt) goto loc_82E8DB44;
loc_82E8DBA0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e8dbd0
	if (ctx.cr6.eq) goto loc_82E8DBD0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E8DBB4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dbb4
	if (!ctx.cr0.eq) goto loc_82E8DBB4;
loc_82E8DBD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	ctx.lr = 0x82E8DBD8;
	sub_82E86428(ctx, base);
loc_82E8DBD8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8dcb4
	if (ctx.cr6.eq) goto loc_82E8DCB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DC04;
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8dc7c
	if (!ctx.cr6.gt) goto loc_82E8DC7C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
loc_82E8DC20:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8dc64
	if (ctx.cr6.eq) goto loc_82E8DC64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8dc4c
	if (!ctx.cr6.eq) goto loc_82E8DC4C;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82e8dc64
	goto loc_82E8DC64;
loc_82E8DC4C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82E8DC64:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8dc20
	if (ctx.cr6.lt) goto loc_82E8DC20;
loc_82E8DC7C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e8dcac
	if (ctx.cr6.eq) goto loc_82E8DCAC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E8DC90:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dc90
	if (!ctx.cr0.eq) goto loc_82E8DC90;
loc_82E8DCAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	ctx.lr = 0x82E8DCB4;
	sub_82E86428(ctx, base);
loc_82E8DCB4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8dd90
	if (ctx.cr6.eq) goto loc_82E8DD90;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DCE0;
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8dd58
	if (!ctx.cr6.gt) goto loc_82E8DD58;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r26,4
	ctx.r6.s64 = ctx.r26.s64 + 4;
loc_82E8DCFC:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8dd40
	if (ctx.cr6.eq) goto loc_82E8DD40;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8dd28
	if (!ctx.cr6.eq) goto loc_82E8DD28;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82e8dd40
	goto loc_82E8DD40;
loc_82E8DD28:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82E8DD40:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8dcfc
	if (ctx.cr6.lt) goto loc_82E8DCFC;
loc_82E8DD58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8dd88
	if (ctx.cr6.eq) goto loc_82E8DD88;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E8DD6C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dd6c
	if (!ctx.cr0.eq) goto loc_82E8DD6C;
loc_82E8DD88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	ctx.lr = 0x82E8DD90;
	sub_82E86428(ctx, base);
loc_82E8DD90:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8de6c
	if (ctx.cr6.eq) goto loc_82E8DE6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82e8d4f0
	ctx.lr = 0x82E8DDBC;
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8de34
	if (!ctx.cr6.gt) goto loc_82E8DE34;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r26,4
	ctx.r6.s64 = ctx.r26.s64 + 4;
loc_82E8DDD8:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8de1c
	if (ctx.cr6.eq) goto loc_82E8DE1C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8de04
	if (!ctx.cr6.eq) goto loc_82E8DE04;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82e8de1c
	goto loc_82E8DE1C;
loc_82E8DE04:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82E8DE1C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ddd8
	if (ctx.cr6.lt) goto loc_82E8DDD8;
loc_82E8DE34:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8de64
	if (ctx.cr6.eq) goto loc_82E8DE64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E8DE48:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8de48
	if (!ctx.cr0.eq) goto loc_82E8DE48;
loc_82E8DE64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	ctx.lr = 0x82E8DE6C;
	sub_82E86428(ctx, base);
loc_82E8DE6C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8df2c
	if (ctx.cr6.eq) goto loc_82E8DF2C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r11,r11,-26580
	ctx.r11.s64 = ctx.r11.s64 + -26580;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82e8d678
	ctx.lr = 0x82E8DEA0;
	sub_82E8D678(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8def4
	if (!ctx.cr6.gt) goto loc_82E8DEF4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
loc_82E8DEBC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82e8dedc
	if (ctx.cr6.eq) goto loc_82E8DEDC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_82E8DEDC:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8debc
	if (ctx.cr6.lt) goto loc_82E8DEBC;
loc_82E8DEF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8df24
	if (ctx.cr6.eq) goto loc_82E8DF24;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E8DF08:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8df08
	if (!ctx.cr0.eq) goto loc_82E8DF08;
loc_82E8DF24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	ctx.lr = 0x82E8DF2C;
	sub_82E86428(ctx, base);
loc_82E8DF2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// bge cr6,0x82e8df68
	if (!ctx.cr6.lt) goto loc_82E8DF68;
	// mulli r10,r24,20
	ctx.r10.s64 = ctx.r24.s64 * 20;
loc_82E8DF48:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8df48
	if (ctx.cr6.lt) goto loc_82E8DF48;
loc_82E8DF68:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8df9c
	if (!ctx.cr6.lt) goto loc_82E8DF9C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82E8DF7C:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e8df7c
	if (ctx.cr6.lt) goto loc_82E8DF7C;
loc_82E8DF9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e86428
	ctx.lr = 0x82E8DFA4;
	sub_82E86428(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86428
	ctx.lr = 0x82E8DFAC;
	sub_82E86428(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e86428
	ctx.lr = 0x82E8DFB4;
	sub_82E86428(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86428
	ctx.lr = 0x82E8DFBC;
	sub_82E86428(ctx, base);
loc_82E8DFBC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82E8DFC4"))) PPC_WEAK_FUNC(sub_82E8DFC4);
PPC_FUNC_IMPL(__imp__sub_82E8DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8DFC8"))) PPC_WEAK_FUNC(sub_82E8DFC8);
PPC_FUNC_IMPL(__imp__sub_82E8DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8DFD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-9856
	ctx.r30.s64 = ctx.r11.s64 + -9856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,11956
	ctx.r4.s64 = ctx.r11.s64 + 11956;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8DFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e8e008
	if (!ctx.cr0.eq) goto loc_82E8E008;
loc_82E8E000:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8e170
	goto loc_82E8E170;
loc_82E8E008:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8d858
	ctx.lr = 0x82E8E010;
	sub_82E8D858(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = ctx.r11.s64 + -25920;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bne cr6,0x82e8e000
	if (!ctx.cr6.eq) goto loc_82E8E000;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e8e000
	if (!ctx.cr6.eq) goto loc_82E8E000;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r5,1
	ctx.r5.s64 = 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r11,r11,-25852
	ctx.r11.s64 = ctx.r11.s64 + -25852;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82e878b0
	ctx.lr = 0x82E8E110;
	sub_82E878B0(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e87960
	ctx.lr = 0x82E8E15C;
	sub_82E87960(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8E170:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8E178"))) PPC_WEAK_FUNC(sub_82E8E178);
PPC_FUNC_IMPL(__imp__sub_82E8E178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82E8E180;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8e1bc
	if (ctx.cr0.eq) goto loc_82E8E1BC;
	// clrlwi. r10,r21,31
	ctx.r10.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8e1bc
	if (ctx.cr0.eq) goto loc_82E8E1BC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8e1bc
	if (!ctx.cr6.eq) goto loc_82E8E1BC;
loc_82E8E1B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8E1B4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82E8E1BC:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e8e1dc
	if (ctx.cr0.eq) goto loc_82E8E1DC;
	// rlwinm. r9,r21,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8e1dc
	if (ctx.cr0.eq) goto loc_82E8E1DC;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E1DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1f8
	if (ctx.cr6.eq) goto loc_82E8E1F8;
	// rlwinm. r9,r21,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8e1f8
	if (ctx.cr0.eq) goto loc_82E8E1F8;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E1F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e214
	if (ctx.cr6.eq) goto loc_82E8E214;
	// rlwinm. r9,r21,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8e214
	if (ctx.cr0.eq) goto loc_82E8E214;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E214:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8e230
	if (ctx.cr6.eq) goto loc_82E8E230;
	// rlwinm. r9,r21,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8e230
	if (ctx.cr0.eq) goto loc_82E8E230;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E230:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e24c
	if (ctx.cr6.eq) goto loc_82E8E24C;
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8e24c
	if (ctx.cr0.eq) goto loc_82E8E24C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E24C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8e268
	if (ctx.cr6.eq) goto loc_82E8E268;
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8e268
	if (ctx.cr0.eq) goto loc_82E8E268;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e1b0
	if (ctx.cr6.eq) goto loc_82E8E1B0;
loc_82E8E268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8d858
	ctx.lr = 0x82E8E270;
	sub_82E8D858(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,-9856
	ctx.r30.s64 = ctx.r11.s64 + -9856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = ctx.r11.s64 + 11956;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e8e1b0
	if (ctx.cr0.eq) goto loc_82E8E1B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = ctx.r11.s64 + -25920;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bne cr6,0x82e8e1b0
	if (!ctx.cr6.eq) goto loc_82E8E1B0;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82e8e300
	if (ctx.cr6.eq) goto loc_82E8E300;
loc_82E8E2EC:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8e1b0
	goto loc_82E8E1B0;
loc_82E8E300:
	// li r11,170
	ctx.r11.s64 = 170;
	// lis r27,-31952
	ctx.r27.s64 = -2094006272;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,-9264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e360
	if (ctx.cr6.eq) goto loc_82E8E360;
loc_82E8E320:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-9264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9264);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e320
	if (ctx.cr6.lt) goto loc_82E8E320;
loc_82E8E360:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwimi r11,r21,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r21,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e664
	if (!ctx.cr6.gt) goto loc_82E8E664;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8E4E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e650
	if (ctx.cr6.eq) goto loc_82E8E650;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E650:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e4e0
	if (ctx.cr6.lt) goto loc_82E8E4E0;
loc_82E8E664:
	// clrlwi. r22,r21,31
	ctx.r22.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82e8e6cc
	if (ctx.cr0.eq) goto loc_82E8E6CC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e6cc
	if (!ctx.cr6.gt) goto loc_82E8E6CC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E8E680:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e6b8
	if (ctx.cr6.eq) goto loc_82E8E6B8;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E6B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e680
	if (ctx.cr6.lt) goto loc_82E8E680;
loc_82E8E6CC:
	// rlwinm. r24,r21,0,27,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82e8e760
	if (ctx.cr0.eq) goto loc_82E8E760;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e760
	if (!ctx.cr6.gt) goto loc_82E8E760;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8E6EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e748
	if (ctx.cr6.eq) goto loc_82E8E748;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E748:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e6ec
	if (ctx.cr6.lt) goto loc_82E8E6EC;
loc_82E8E760:
	// rlwinm. r25,r21,0,28,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82e8e7f4
	if (ctx.cr0.eq) goto loc_82E8E7F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e7f4
	if (!ctx.cr6.gt) goto loc_82E8E7F4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8E780:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e7dc
	if (ctx.cr6.eq) goto loc_82E8E7DC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E7DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e780
	if (ctx.cr6.lt) goto loc_82E8E780;
loc_82E8E7F4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e970
	if (!ctx.cr6.gt) goto loc_82E8E970;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E8E8E0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e95c
	if (ctx.cr6.eq) goto loc_82E8E95C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E95C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e8e0
	if (ctx.cr6.lt) goto loc_82E8E8E0;
loc_82E8E970:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e9fc
	if (!ctx.cr6.gt) goto loc_82E8E9FC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8E988:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8e9e4
	if (ctx.cr6.eq) goto loc_82E8E9E4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8E9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8E9E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e988
	if (ctx.cr6.lt) goto loc_82E8E988;
loc_82E8E9FC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ea88
	if (!ctx.cr6.gt) goto loc_82E8EA88;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8EA14:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8ea70
	if (ctx.cr6.eq) goto loc_82E8EA70;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8EA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8EA70:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ea14
	if (ctx.cr6.lt) goto loc_82E8EA14;
loc_82E8EA88:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8eb1c
	if (!ctx.cr6.gt) goto loc_82E8EB1C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8EAA0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8eb04
	if (ctx.cr6.eq) goto loc_82E8EB04;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e8eb04
	if (ctx.cr6.eq) goto loc_82E8EB04;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8EAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8EB04:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8eaa0
	if (ctx.cr6.lt) goto loc_82E8EAA0;
loc_82E8EB1C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ebb0
	if (!ctx.cr6.gt) goto loc_82E8EBB0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E8EB34:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8eb98
	if (ctx.cr6.eq) goto loc_82E8EB98;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e8eb98
	if (ctx.cr6.eq) goto loc_82E8EB98;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8EB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8EB98:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8eb34
	if (ctx.cr6.lt) goto loc_82E8EB34;
loc_82E8EBB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ec38
	if (!ctx.cr6.gt) goto loc_82E8EC38;
	// rlwinm r26,r21,0,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E8EBC8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e8ec24
	if (ctx.cr6.eq) goto loc_82E8EC24;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8EC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8EC24:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ebc8
	if (ctx.cr6.lt) goto loc_82E8EBC8;
loc_82E8EC38:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ecbc
	if (!ctx.cr6.gt) goto loc_82E8ECBC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E8EC4C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e8eca8
	if (ctx.cr6.eq) goto loc_82E8ECA8;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8ECA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8e2ec
	if (!ctx.cr6.eq) goto loc_82E8E2EC;
loc_82E8ECA8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ec4c
	if (ctx.cr6.lt) goto loc_82E8EC4C;
loc_82E8ECBC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ed24
	if (!ctx.cr6.gt) goto loc_82E8ED24;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E8ECD0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8ed10
	if (ctx.cr6.eq) goto loc_82E8ED10;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8ed10
	if (ctx.cr0.eq) goto loc_82E8ED10;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8ED08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8ed2c
	if (!ctx.cr6.eq) goto loc_82E8ED2C;
loc_82E8ED10:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ecd0
	if (ctx.cr6.lt) goto loc_82E8ECD0;
loc_82E8ED24:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82e8ed30
	goto loc_82E8ED30;
loc_82E8ED2C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82E8ED30:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8ED40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e8e1b4
	goto loc_82E8E1B4;
}

__attribute__((alias("__imp__sub_82E8ED48"))) PPC_WEAK_FUNC(sub_82E8ED48);
PPC_FUNC_IMPL(__imp__sub_82E8ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82E8ED50;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8ed90
	if (ctx.cr0.eq) goto loc_82E8ED90;
	// clrlwi. r10,r20,31
	ctx.r10.u64 = ctx.r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8ed90
	if (ctx.cr0.eq) goto loc_82E8ED90;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8ed90
	if (!ctx.cr6.eq) goto loc_82E8ED90;
loc_82E8ED84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8ED88:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82E8ED90:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e8edb0
	if (ctx.cr0.eq) goto loc_82E8EDB0;
	// rlwinm. r9,r20,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8edb0
	if (ctx.cr0.eq) goto loc_82E8EDB0;
	// lwz r9,80(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EDB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8edcc
	if (ctx.cr6.eq) goto loc_82E8EDCC;
	// rlwinm. r9,r20,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8edcc
	if (ctx.cr0.eq) goto loc_82E8EDCC;
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EDCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ede8
	if (ctx.cr6.eq) goto loc_82E8EDE8;
	// rlwinm. r9,r20,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8ede8
	if (ctx.cr0.eq) goto loc_82E8EDE8;
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EDE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8ee04
	if (ctx.cr6.eq) goto loc_82E8EE04;
	// rlwinm. r9,r20,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8ee04
	if (ctx.cr0.eq) goto loc_82E8EE04;
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EE04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ee20
	if (ctx.cr6.eq) goto loc_82E8EE20;
	// rlwinm. r11,r20,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8ee20
	if (ctx.cr0.eq) goto loc_82E8EE20;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EE20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8ee3c
	if (ctx.cr6.eq) goto loc_82E8EE3C;
	// rlwinm. r11,r20,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8ee3c
	if (ctx.cr0.eq) goto loc_82E8EE3C;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed84
	if (ctx.cr6.eq) goto loc_82E8ED84;
loc_82E8EE3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8d858
	ctx.lr = 0x82E8EE44;
	sub_82E8D858(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-9856
	ctx.r27.s64 = ctx.r11.s64 + -9856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = ctx.r11.s64 + 11956;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82e8ed84
	if (ctx.cr0.eq) goto loc_82E8ED84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = ctx.r11.s64 + -25920;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bne cr6,0x82e8ed84
	if (!ctx.cr6.eq) goto loc_82E8ED84;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// beq cr6,0x82e8eea4
	if (ctx.cr6.eq) goto loc_82E8EEA4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82E8EEA4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82e8eee0
	if (ctx.cr6.eq) goto loc_82E8EEE0;
loc_82E8EECC:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8ed84
	goto loc_82E8ED84;
loc_82E8EEE0:
	// li r11,170
	ctx.r11.s64 = 170;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,-9264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ef40
	if (ctx.cr6.eq) goto loc_82E8EF40;
loc_82E8EF00:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-9264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9264);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ef00
	if (ctx.cr6.lt) goto loc_82E8EF00;
loc_82E8EF40:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8ef6c
	if (!ctx.cr6.eq) goto loc_82E8EF6C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwimi r11,r20,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r20,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82e8ef70
	goto loc_82E8EF70;
loc_82E8EF6C:
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
loc_82E8EF70:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8efc4
	if (!ctx.cr6.eq) goto loc_82E8EFC4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8EFC4:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8EFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f014
	if (!ctx.cr6.eq) goto loc_82E8F014;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F014:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f064
	if (!ctx.cr6.eq) goto loc_82E8F064;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F064:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f0b4
	if (!ctx.cr6.eq) goto loc_82E8F0B4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F0B4:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f298
	if (!ctx.cr6.gt) goto loc_82E8F298;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F0F0:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f284
	if (ctx.cr6.eq) goto loc_82E8F284;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f128
	if (!ctx.cr6.eq) goto loc_82E8F128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F128:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8f180
	if (!ctx.cr6.eq) goto loc_82E8F180;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F180:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8f1d8
	if (!ctx.cr6.eq) goto loc_82E8F1D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F1D8:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8f230
	if (!ctx.cr6.eq) goto loc_82E8F230;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F230:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F284:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f0f0
	if (ctx.cr6.lt) goto loc_82E8F0F0;
loc_82E8F298:
	// clrlwi. r23,r20,31
	ctx.r23.u64 = ctx.r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82e8f304
	if (ctx.cr0.eq) goto loc_82E8F304;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f304
	if (!ctx.cr6.gt) goto loc_82E8F304;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F2B4:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f2f0
	if (ctx.cr6.eq) goto loc_82E8F2F0;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F2F0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f2b4
	if (ctx.cr6.lt) goto loc_82E8F2B4;
loc_82E8F304:
	// rlwinm. r24,r20,0,27,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82e8f3a0
	if (ctx.cr0.eq) goto loc_82E8F3A0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f3a0
	if (!ctx.cr6.gt) goto loc_82E8F3A0;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F324:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f388
	if (ctx.cr6.eq) goto loc_82E8F388;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f360
	if (!ctx.cr6.eq) goto loc_82E8F360;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F360:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F388:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f324
	if (ctx.cr6.lt) goto loc_82E8F324;
loc_82E8F3A0:
	// rlwinm. r25,r20,0,28,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82e8f43c
	if (ctx.cr0.eq) goto loc_82E8F43C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f43c
	if (!ctx.cr6.gt) goto loc_82E8F43C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F3C0:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f424
	if (ctx.cr6.eq) goto loc_82E8F424;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f3fc
	if (!ctx.cr6.eq) goto loc_82E8F3FC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F3FC:
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F424:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f3c0
	if (ctx.cr6.lt) goto loc_82E8F3C0;
loc_82E8F43C:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f464
	if (!ctx.cr6.eq) goto loc_82E8F464;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F464:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f4b4
	if (!ctx.cr6.eq) goto loc_82E8F4B4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F4B4:
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f504
	if (!ctx.cr6.eq) goto loc_82E8F504;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F504:
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f5dc
	if (!ctx.cr6.gt) goto loc_82E8F5DC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F540:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f5c8
	if (ctx.cr6.eq) goto loc_82E8F5C8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82e8f574
	if (!ctx.cr6.eq) goto loc_82E8F574;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F574:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F5C8:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f540
	if (ctx.cr6.lt) goto loc_82E8F540;
loc_82E8F5DC:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f670
	if (!ctx.cr6.gt) goto loc_82E8F670;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F5F4:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f658
	if (ctx.cr6.eq) goto loc_82E8F658;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f630
	if (!ctx.cr6.eq) goto loc_82E8F630;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F630:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F658:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f5f4
	if (ctx.cr6.lt) goto loc_82E8F5F4;
loc_82E8F670:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f704
	if (!ctx.cr6.gt) goto loc_82E8F704;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F688:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f6ec
	if (ctx.cr6.eq) goto loc_82E8F6EC;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f6c4
	if (!ctx.cr6.eq) goto loc_82E8F6C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F6C4:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F6EC:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f688
	if (ctx.cr6.lt) goto loc_82E8F688;
loc_82E8F704:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f7a0
	if (!ctx.cr6.gt) goto loc_82E8F7A0;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F71C:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f788
	if (ctx.cr6.eq) goto loc_82E8F788;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e8f788
	if (ctx.cr6.eq) goto loc_82E8F788;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f760
	if (!ctx.cr6.eq) goto loc_82E8F760;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F760:
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F788:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f71c
	if (ctx.cr6.lt) goto loc_82E8F71C;
loc_82E8F7A0:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f83c
	if (!ctx.cr6.gt) goto loc_82E8F83C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82E8F7B8:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f824
	if (ctx.cr6.eq) goto loc_82E8F824;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e8f824
	if (ctx.cr6.eq) goto loc_82E8F824;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x82e8f7fc
	if (!ctx.cr6.eq) goto loc_82E8F7FC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F7FC:
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F824:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f7b8
	if (ctx.cr6.lt) goto loc_82E8F7B8;
loc_82E8F83C:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f8cc
	if (!ctx.cr6.gt) goto loc_82E8F8CC;
	// rlwinm r29,r20,0,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F854:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8f8b8
	if (ctx.cr6.eq) goto loc_82E8F8B8;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8f890
	if (!ctx.cr6.eq) goto loc_82E8F890;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F890:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F8B8:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f854
	if (ctx.cr6.lt) goto loc_82E8F854;
loc_82E8F8CC:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f958
	if (!ctx.cr6.gt) goto loc_82E8F958;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F8E0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e8f944
	if (ctx.cr6.eq) goto loc_82E8F944;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82e8f91c
	if (!ctx.cr6.eq) goto loc_82E8F91C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8F91C:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8eecc
	if (!ctx.cr6.eq) goto loc_82E8EECC;
loc_82E8F944:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f8e0
	if (ctx.cr6.lt) goto loc_82E8F8E0;
loc_82E8F958:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f9c4
	if (!ctx.cr6.gt) goto loc_82E8F9C4;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F96C:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8f9b0
	if (ctx.cr6.eq) goto loc_82E8F9B0;
	// rlwinm. r11,r20,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8f9b0
	if (ctx.cr0.eq) goto loc_82E8F9B0;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8f9cc
	if (!ctx.cr6.eq) goto loc_82E8F9CC;
loc_82E8F9B0:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8f96c
	if (ctx.cr6.lt) goto loc_82E8F96C;
loc_82E8F9C4:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82e8f9d0
	goto loc_82E8F9D0;
loc_82E8F9CC:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E8F9D0:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e8ed88
	goto loc_82E8ED88;
}

__attribute__((alias("__imp__sub_82E8F9E8"))) PPC_WEAK_FUNC(sub_82E8F9E8);
PPC_FUNC_IMPL(__imp__sub_82E8F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,23468
	ctx.r3.s64 = ctx.r11.s64 + 23468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8F9F4"))) PPC_WEAK_FUNC(sub_82E8F9F4);
PPC_FUNC_IMPL(__imp__sub_82E8F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F9F8"))) PPC_WEAK_FUNC(sub_82E8F9F8);
PPC_FUNC_IMPL(__imp__sub_82E8F9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E8FA00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8fa20
	if (ctx.cr0.eq) goto loc_82E8FA20;
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// b 0x82e8fa6c
	goto loc_82E8FA6C;
loc_82E8FA20:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8fa3c
	if (ctx.cr0.eq) goto loc_82E8FA3C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8FA3C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8fa54
	if (ctx.cr0.eq) goto loc_82E8FA54;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8FA54:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8fa6c
	if (ctx.cr0.eq) goto loc_82E8FA6C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8FA6C:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E8FA80"))) PPC_WEAK_FUNC(sub_82E8FA80);
PPC_FUNC_IMPL(__imp__sub_82E8FA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E8FA88;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82e8fe68
	if (ctx.cr0.eq) goto loc_82E8FE68;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8fe68
	if (ctx.cr0.eq) goto loc_82E8FE68;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11840
	ctx.r11.s64 = ctx.r11.s64 + -11840;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8FAF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82e8faf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8FAF4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FB28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82e8fe5c
	if (!ctx.cr6.eq) goto loc_82E8FE5C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82e8fe50
	if (!ctx.cr6.eq) goto loc_82E8FE50;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-25828
	ctx.r3.s64 = ctx.r11.s64 + -25828;
	// bl 0x82ca6320
	ctx.lr = 0x82E8FB6C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8fe50
	if (!ctx.cr0.eq) goto loc_82E8FE50;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82e8fe50
	if (ctx.cr6.gt) goto loc_82E8FE50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8fe50
	if (ctx.cr6.eq) goto loc_82E8FE50;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82e8fc94
	if (ctx.cr6.lt) goto loc_82E8FC94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8fc20
	if (!ctx.cr6.eq) goto loc_82E8FC20;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,-9248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8fc20
	if (ctx.cr6.eq) goto loc_82E8FC20;
loc_82E8FBD0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e8fe68
	if (!ctx.cr6.eq) goto loc_82E8FE68;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bne cr6,0x82e8fe68
	if (!ctx.cr6.eq) goto loc_82E8FE68;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-9248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9248);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8fbd0
	if (ctx.cr6.lt) goto loc_82E8FBD0;
loc_82E8FC20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82e8fc70
	if (ctx.cr6.eq) goto loc_82E8FC70;
loc_82E8FC4C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82E8FC50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e8fe6c
	goto loc_82E8FE6C;
loc_82E8FC70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82E8FC94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e8fe3c
	if (!ctx.cr0.gt) goto loc_82E8FE3C;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// li r29,-1
	ctx.r29.s64 = -1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82e8fcc0
	if (!ctx.cr6.gt) goto loc_82E8FCC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E8FCC0:
	// bl 0x82625f08
	ctx.lr = 0x82E8FCC4;
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8fce0
	if (!ctx.cr6.gt) goto loc_82E8FCE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E8FCE0:
	// bl 0x82625f08
	ctx.lr = 0x82E8FCE4;
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8fcfc
	if (!ctx.cr6.gt) goto loc_82E8FCFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E8FCFC:
	// bl 0x82625f08
	ctx.lr = 0x82E8FD00;
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mulli r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 * 12;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e8fc4c
	if (!ctx.cr6.eq) goto loc_82E8FC4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8fd90
	if (!ctx.cr6.gt) goto loc_82E8FD90;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82E8FD4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e8fd4c
	if (ctx.cr6.lt) goto loc_82E8FD4C;
loc_82E8FD90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulli r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 * 12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e8fc4c
	if (!ctx.cr6.eq) goto loc_82E8FC4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8fe1c
	if (!ctx.cr6.gt) goto loc_82E8FE1C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82E8FDD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e8fdd8
	if (ctx.cr6.lt) goto loc_82E8FDD8;
loc_82E8FE1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e8fe6c
	goto loc_82E8FE6C;
loc_82E8FE3C:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// b 0x82e8fc50
	goto loc_82E8FC50;
loc_82E8FE50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82E8FE5C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8FE68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8FE6C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E8FE74"))) PPC_WEAK_FUNC(sub_82E8FE74);
PPC_FUNC_IMPL(__imp__sub_82E8FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8FE78"))) PPC_WEAK_FUNC(sub_82E8FE78);
PPC_FUNC_IMPL(__imp__sub_82E8FE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23464);
	// bne cr6,0x82e8fe94
	if (!ctx.cr6.eq) goto loc_82E8FE94;
loc_82E8FE8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e8fec0
	goto loc_82E8FEC0;
loc_82E8FE94:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8fe8c
	if (!ctx.cr6.lt) goto loc_82E8FE8C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e8fec0
	if (ctx.cr6.eq) goto loc_82E8FEC0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E8FEC0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8fef4
	if (ctx.cr6.eq) goto loc_82E8FEF4;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8fef4
	if (!ctx.cr6.lt) goto loc_82E8FEF4;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e8fef8
	if (!ctx.cr6.eq) goto loc_82E8FEF8;
loc_82E8FEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8FEF8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e8ff0c
	if (!ctx.cr6.lt) goto loc_82E8FF0C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E8FF0C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8FF20"))) PPC_WEAK_FUNC(sub_82E8FF20);
PPC_FUNC_IMPL(__imp__sub_82E8FF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23464);
	// bne cr6,0x82e8ff3c
	if (!ctx.cr6.eq) goto loc_82E8FF3C;
loc_82E8FF34:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e8ff68
	goto loc_82E8FF68;
loc_82E8FF3C:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8ff34
	if (!ctx.cr6.lt) goto loc_82E8FF34;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e8ff68
	if (ctx.cr6.eq) goto loc_82E8FF68;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E8FF68:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8ff9c
	if (ctx.cr6.eq) goto loc_82E8FF9C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8ff9c
	if (!ctx.cr6.lt) goto loc_82E8FF9C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e8ffa0
	if (!ctx.cr6.eq) goto loc_82E8FFA0;
loc_82E8FF9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8FFA0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e8ffb4
	if (!ctx.cr6.lt) goto loc_82E8FFB4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E8FFB4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8FFC8"))) PPC_WEAK_FUNC(sub_82E8FFC8);
PPC_FUNC_IMPL(__imp__sub_82E8FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23464);
	// bne cr6,0x82e8ffe4
	if (!ctx.cr6.eq) goto loc_82E8FFE4;
loc_82E8FFDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e90010
	goto loc_82E90010;
loc_82E8FFE4:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e8ffdc
	if (!ctx.cr6.lt) goto loc_82E8FFDC;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e90010
	if (ctx.cr6.eq) goto loc_82E90010;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E90010:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90044
	if (ctx.cr6.eq) goto loc_82E90044;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90044
	if (!ctx.cr6.lt) goto loc_82E90044;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90048
	if (!ctx.cr6.eq) goto loc_82E90048;
loc_82E90044:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90048:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e9005c
	if (!ctx.cr6.lt) goto loc_82E9005C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E9005C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E90070"))) PPC_WEAK_FUNC(sub_82E90070);
PPC_FUNC_IMPL(__imp__sub_82E90070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E90078;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900bc
	if (!ctx.cr6.gt) goto loc_82E900BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E900BC:
	// bl 0x82625f08
	ctx.lr = 0x82E900C0;
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900dc
	if (!ctx.cr6.gt) goto loc_82E900DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E900DC:
	// bl 0x82625f08
	ctx.lr = 0x82E900E0;
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900f8
	if (!ctx.cr6.gt) goto loc_82E900F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E900F8:
	// bl 0x82625f08
	ctx.lr = 0x82E900FC;
	sub_82625F08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e90160
	if (!ctx.cr6.gt) goto loc_82E90160;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E90114:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e90114
	if (ctx.cr6.lt) goto loc_82E90114;
loc_82E90160:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r10,-32023
	ctx.r10.s64 = -2098659328;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,-392
	ctx.r6.s64 = ctx.r10.s64 + -392;
	// stw r11,23464(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23464, ctx.r11.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ca5868
	ctx.lr = 0x82E90184;
	sub_82CA5868(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-224
	ctx.r6.s64 = ctx.r11.s64 + -224;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca5868
	ctx.lr = 0x82E901A4;
	sub_82CA5868(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-56
	ctx.r6.s64 = ctx.r11.s64 + -56;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca5868
	ctx.lr = 0x82E901C4;
	sub_82CA5868(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E901CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e90280
	if (!ctx.cr6.gt) goto loc_82E90280;
loc_82E901DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e9022c
	if (!ctx.cr0.gt) goto loc_82E9022C;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82E90200:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82e9021c
	if (ctx.cr6.eq) goto loc_82E9021C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e90200
	if (ctx.cr6.lt) goto loc_82E90200;
	// b 0x82e9022c
	goto loc_82E9022C;
loc_82E9021C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82E9022C:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e90270
	if (ctx.cr0.eq) goto loc_82E90270;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r11,r11
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mulli r11,r10,33
	ctx.r11.s64 = ctx.r10.s64 * 33;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	// twlgei r11,-1
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E90270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90270:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e901dc
	if (ctx.cr6.lt) goto loc_82E901DC;
loc_82E90280:
	// addi r29,r29,33
	ctx.r29.s64 = ctx.r29.s64 + 33;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,99
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 99, ctx.xer);
	// blt cr6,0x82e901cc
	if (ctx.cr6.lt) goto loc_82E901CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E9029C"))) PPC_WEAK_FUNC(sub_82E9029C);
PPC_FUNC_IMPL(__imp__sub_82E9029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E902A0"))) PPC_WEAK_FUNC(sub_82E902A0);
PPC_FUNC_IMPL(__imp__sub_82E902A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82E902A8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e902dc
	if (!ctx.cr6.gt) goto loc_82E902DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e90508
	if (ctx.cr6.eq) goto loc_82E90508;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e90508
	if (ctx.cr6.eq) goto loc_82E90508;
loc_82E902DC:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r28,r11,-9856
	ctx.r28.s64 = ctx.r11.s64 + -9856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = ctx.r11.s64 + 11956;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E902F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82e90508
	if (ctx.cr0.eq) goto loc_82E90508;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// beq cr6,0x82e90310
	if (ctx.cr6.eq) goto loc_82E90310;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82E90310:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r11,-25828
	ctx.r3.s64 = ctx.r11.s64 + -25828;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82e90508
	if (!ctx.cr6.eq) goto loc_82E90508;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e90508
	if (!ctx.cr6.eq) goto loc_82E90508;
	// li r11,170
	ctx.r11.s64 = 170;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,-9248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e903c0
	if (ctx.cr6.eq) goto loc_82E903C0;
loc_82E90380:
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e90508
	if (!ctx.cr6.eq) goto loc_82E90508;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-9248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9248);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e90380
	if (ctx.cr6.lt) goto loc_82E90380;
loc_82E903C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82e903ec
	if (!ctx.cr6.eq) goto loc_82E903EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82e903f0
	goto loc_82E903F0;
loc_82E903EC:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
loc_82E903F0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e90508
	if (!ctx.cr6.eq) goto loc_82E90508;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e90608
	if (!ctx.cr6.eq) goto loc_82E90608;
	// ble 0x82e90454
	if (!ctx.cr0.gt) goto loc_82E90454;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9044c
	if (!ctx.cr6.gt) goto loc_82E9044C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9044C:
	// bl 0x82625f08
	ctx.lr = 0x82E90450;
	sub_82625F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E90454:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e904ac
	if (!ctx.cr6.gt) goto loc_82E904AC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82E9046C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e9046c
	if (ctx.cr6.lt) goto loc_82E9046C;
loc_82E904AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 * 3;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E904CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e90514
	if (ctx.cr6.eq) goto loc_82E90514;
loc_82E904DC:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E904EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e90508
	if (ctx.cr6.eq) goto loc_82E90508;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
loc_82E90500:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9050C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82E90514:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e90564
	if (!ctx.cr6.gt) goto loc_82E90564;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82E90524:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e90524
	if (ctx.cr6.lt) goto loc_82E90524;
loc_82E90564:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 * 3;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e904dc
	if (!ctx.cr6.eq) goto loc_82E904DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e905b0
	if (ctx.cr6.eq) goto loc_82E905B0;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E905B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E905B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e90764
	if (!ctx.cr6.gt) goto loc_82E90764;
loc_82E905C4:
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E905E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e905fc
	if (!ctx.cr6.eq) goto loc_82E905FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e905c4
	if (ctx.cr6.lt) goto loc_82E905C4;
	// b 0x82e90764
	goto loc_82E90764;
loc_82E905FC:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82e90500
	goto loc_82E90500;
loc_82E90608:
	// ble 0x82e90630
	if (!ctx.cr0.gt) goto loc_82E90630;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e90628
	if (!ctx.cr6.gt) goto loc_82E90628;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E90628:
	// bl 0x82625f08
	ctx.lr = 0x82E9062C;
	sub_82625F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E90630:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e9066c
	if (!ctx.cr6.gt) goto loc_82E9066C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E90648:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e90648
	if (ctx.cr6.lt) goto loc_82E90648;
loc_82E9066C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 * 3;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9068C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e904dc
	if (!ctx.cr6.eq) goto loc_82E904DC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e906d0
	if (!ctx.cr6.gt) goto loc_82E906D0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E906AC:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e906ac
	if (ctx.cr6.lt) goto loc_82E906AC;
loc_82E906D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 * 3;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E906F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e904dc
	if (!ctx.cr6.eq) goto loc_82E904DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e9071c
	if (ctx.cr6.eq) goto loc_82E9071C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9071C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9071C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e90764
	if (!ctx.cr6.gt) goto loc_82E90764;
loc_82E90730:
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9074C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e905fc
	if (!ctx.cr6.eq) goto loc_82E905FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e90730
	if (ctx.cr6.lt) goto loc_82E90730;
loc_82E90764:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9050c
	goto loc_82E9050C;
}

__attribute__((alias("__imp__sub_82E9077C"))) PPC_WEAK_FUNC(sub_82E9077C);
PPC_FUNC_IMPL(__imp__sub_82E9077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90780"))) PPC_WEAK_FUNC(sub_82E90780);
PPC_FUNC_IMPL(__imp__sub_82E90780) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82625f08
	ctx.lr = 0x82E9079C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e907e8
	if (ctx.cr0.eq) goto loc_82E907E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,-25796
	ctx.r11.s64 = ctx.r11.s64 + -25796;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82e907cc
	if (ctx.cr6.eq) goto loc_82E907CC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82e907d0
	goto loc_82E907D0;
loc_82E907CC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82E907D0:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// b 0x82e907ec
	goto loc_82E907EC;
loc_82E907E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E907EC:
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

__attribute__((alias("__imp__sub_82E90800"))) PPC_WEAK_FUNC(sub_82E90800);
PPC_FUNC_IMPL(__imp__sub_82E90800) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25796
	ctx.r11.s64 = ctx.r11.s64 + -25796;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e8f9f8
	ctx.lr = 0x82E90824;
	sub_82E8F9F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E90844"))) PPC_WEAK_FUNC(sub_82E90844);
PPC_FUNC_IMPL(__imp__sub_82E90844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90848"))) PPC_WEAK_FUNC(sub_82E90848);
PPC_FUNC_IMPL(__imp__sub_82E90848) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19184
	ctx.r4.s64 = ctx.r11.s64 + -19184;
	// bl 0x82e7d750
	ctx.lr = 0x82E9086C;
	sub_82E7D750(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82e9087c
	if (!ctx.cr0.eq) goto loc_82E9087C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e90884
	goto loc_82E90884;
loc_82E9087C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8fa80
	ctx.lr = 0x82E90884;
	sub_82E8FA80(ctx, base);
loc_82E90884:
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

__attribute__((alias("__imp__sub_82E90898"))) PPC_WEAK_FUNC(sub_82E90898);
PPC_FUNC_IMPL(__imp__sub_82E90898) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e902a0
	sub_82E902A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908A0"))) PPC_WEAK_FUNC(sub_82E908A0);
PPC_FUNC_IMPL(__imp__sub_82E908A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e90a50
	if (ctx.cr0.eq) goto loc_82E90A50;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e90bec
	if (ctx.cr6.eq) goto loc_82E90BEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e9090c
	if (ctx.cr6.eq) goto loc_82E9090C;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e9090c
	if (!ctx.cr6.lt) goto loc_82E9090C;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90910
	if (!ctx.cr6.eq) goto loc_82E90910;
loc_82E9090C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90910:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e90920
	if (!ctx.cr6.eq) goto loc_82E90920;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90934
	goto loc_82E90934;
loc_82E90920:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e90930
	if (!ctx.cr6.eq) goto loc_82E90930;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90934
	goto loc_82E90934;
loc_82E90930:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90934:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90bec
	if (!ctx.cr6.eq) goto loc_82E90BEC;
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e909e0
	if (!ctx.cr0.gt) goto loc_82E909E0;
loc_82E9094C:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90990
	if (ctx.cr6.eq) goto loc_82E90990;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90990
	if (!ctx.cr6.lt) goto loc_82E90990;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90994
	if (!ctx.cr6.eq) goto loc_82E90994;
loc_82E90990:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90994:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e909a4
	if (!ctx.cr6.eq) goto loc_82E909A4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e909b8
	goto loc_82E909B8;
loc_82E909A4:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e909b4
	if (!ctx.cr6.eq) goto loc_82E909B4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e909b8
	goto loc_82E909B8;
loc_82E909B4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E909B8:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82e90bec
	if (ctx.cr6.gt) goto loc_82E90BEC;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82e909d0
	if (!ctx.cr6.lt) goto loc_82E909D0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82e909d4
	goto loc_82E909D4;
loc_82E909D0:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82E909D4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e9094c
	if (ctx.cr6.lt) goto loc_82E9094C;
loc_82E909E0:
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90a18
	if (ctx.cr6.eq) goto loc_82E90A18;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90a18
	if (!ctx.cr6.lt) goto loc_82E90A18;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90a1c
	if (!ctx.cr6.eq) goto loc_82E90A1C;
loc_82E90A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90A1C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e90a2c
	if (!ctx.cr6.eq) goto loc_82E90A2C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90a40
	goto loc_82E90A40;
loc_82E90A2C:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e90a3c
	if (!ctx.cr6.eq) goto loc_82E90A3C;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90a40
	goto loc_82E90A40;
loc_82E90A3C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90A40:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90be8
	if (!ctx.cr6.eq) goto loc_82E90BE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e90bec
	goto loc_82E90BEC;
loc_82E90A50:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e90bec
	if (ctx.cr6.eq) goto loc_82E90BEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90aac
	if (ctx.cr6.eq) goto loc_82E90AAC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90aac
	if (!ctx.cr6.lt) goto loc_82E90AAC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90ab0
	if (!ctx.cr6.eq) goto loc_82E90AB0;
loc_82E90AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90AB0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e90ac0
	if (!ctx.cr6.eq) goto loc_82E90AC0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90ad4
	goto loc_82E90AD4;
loc_82E90AC0:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e90ad0
	if (!ctx.cr6.eq) goto loc_82E90AD0;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90ad4
	goto loc_82E90AD4;
loc_82E90AD0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90AD4:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90bec
	if (!ctx.cr6.eq) goto loc_82E90BEC;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// b 0x82e90b70
	goto loc_82E90B70;
loc_82E90AE8:
	// add r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90b2c
	if (ctx.cr6.eq) goto loc_82E90B2C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90b2c
	if (!ctx.cr6.lt) goto loc_82E90B2C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90b30
	if (!ctx.cr6.eq) goto loc_82E90B30;
loc_82E90B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90B30:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e90b40
	if (!ctx.cr6.eq) goto loc_82E90B40;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90b54
	goto loc_82E90B54;
loc_82E90B40:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e90b50
	if (!ctx.cr6.eq) goto loc_82E90B50;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90b54
	goto loc_82E90B54;
loc_82E90B50:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90B54:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82e90bec
	if (ctx.cr6.lt) goto loc_82E90BEC;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82e90b6c
	if (!ctx.cr6.gt) goto loc_82E90B6C;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x82e90b70
	goto loc_82E90B70;
loc_82E90B6C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82E90B70:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e90ae8
	if (ctx.cr6.lt) goto loc_82E90AE8;
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90bb4
	if (ctx.cr6.eq) goto loc_82E90BB4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90bb4
	if (!ctx.cr6.lt) goto loc_82E90BB4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90bb8
	if (!ctx.cr6.eq) goto loc_82E90BB8;
loc_82E90BB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90BB8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e90bc8
	if (!ctx.cr6.eq) goto loc_82E90BC8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90bdc
	goto loc_82E90BDC;
loc_82E90BC8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82e90bd8
	if (!ctx.cr6.eq) goto loc_82E90BD8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90bdc
	goto loc_82E90BDC;
loc_82E90BD8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90BDC:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// beq cr6,0x82e90bec
	if (ctx.cr6.eq) goto loc_82E90BEC;
loc_82E90BE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E90BEC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E90BF8"))) PPC_WEAK_FUNC(sub_82E90BF8);
PPC_FUNC_IMPL(__imp__sub_82E90BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E90C00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e90cc4
	if (!ctx.cr0.gt) goto loc_82E90CC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r30,r11,r5
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
loc_82E90C30:
	// add r11,r4,r29
	ctx.r11.u64 = ctx.r4.u64 + ctx.r29.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90c74
	if (ctx.cr6.eq) goto loc_82E90C74;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90c74
	if (!ctx.cr6.lt) goto loc_82E90C74;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90c78
	if (!ctx.cr6.eq) goto loc_82E90C78;
loc_82E90C74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90C78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e90c88
	if (!ctx.cr6.eq) goto loc_82E90C88;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90c9c
	goto loc_82E90C9C;
loc_82E90C88:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82e90c98
	if (!ctx.cr6.eq) goto loc_82E90C98;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90c9c
	goto loc_82E90C9C;
loc_82E90C98:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90C9C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e90cac
	if (!ctx.cr6.lt) goto loc_82E90CAC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82e90cb8
	goto loc_82E90CB8;
loc_82E90CAC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82e90d1c
	if (!ctx.cr6.gt) goto loc_82E90D1C;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82E90CB8:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e90c30
	if (ctx.cr6.lt) goto loc_82E90C30;
loc_82E90CC4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90d08
	if (ctx.cr6.eq) goto loc_82E90D08;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90d08
	if (!ctx.cr6.lt) goto loc_82E90D08;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90d0c
	if (!ctx.cr6.eq) goto loc_82E90D0C;
loc_82E90D08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90D0C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e90d28
	if (!ctx.cr6.eq) goto loc_82E90D28;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e90d3c
	goto loc_82E90D3C;
loc_82E90D1C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82e90e0c
	goto loc_82E90E0C;
loc_82E90D28:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82e90d38
	if (!ctx.cr6.eq) goto loc_82E90D38;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e90d3c
	goto loc_82E90D3C;
loc_82E90D38:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_82E90D3C:
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e90d74
	if (ctx.cr6.eq) goto loc_82E90D74;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e90d74
	if (!ctx.cr6.lt) goto loc_82E90D74;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e90d78
	if (!ctx.cr6.eq) goto loc_82E90D78;
loc_82E90D74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E90D78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e90d88
	if (!ctx.cr6.eq) goto loc_82E90D88;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90d9c
	goto loc_82E90D9C;
loc_82E90D88:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82e90d98
	if (!ctx.cr6.eq) goto loc_82E90D98;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e90d9c
	goto loc_82E90D9C;
loc_82E90D98:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82E90D9C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e90dbc
	if (ctx.cr0.eq) goto loc_82E90DBC;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82e90dbc
	if (!ctx.cr6.lt) goto loc_82E90DBC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e90dbc
	if (!ctx.cr6.lt) goto loc_82E90DBC;
loc_82E90DB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e90e14
	goto loc_82E90E14;
loc_82E90DBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e90ddc
	if (!ctx.cr6.eq) goto loc_82E90DDC;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82e90dd4
	if (!ctx.cr6.gt) goto loc_82E90DD4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e90db4
	if (ctx.cr6.gt) goto loc_82E90DB4;
loc_82E90DD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e90df8
	if (ctx.cr6.eq) goto loc_82E90DF8;
loc_82E90DDC:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// blt cr6,0x82e90df0
	if (ctx.cr6.lt) goto loc_82E90DF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82e90e10
	goto loc_82E90E10;
loc_82E90DF0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82e90e10
	goto loc_82E90E10;
loc_82E90DF8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e90e08
	if (ctx.cr6.gt) goto loc_82E90E08;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82e90e0c
	goto loc_82E90E0C;
loc_82E90E08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E90E0C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82E90E10:
	// bl 0x82e908a0
	ctx.lr = 0x82E90E14;
	sub_82E908A0(ctx, base);
loc_82E90E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E90E1C"))) PPC_WEAK_FUNC(sub_82E90E1C);
PPC_FUNC_IMPL(__imp__sub_82E90E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90E20"))) PPC_WEAK_FUNC(sub_82E90E20);
PPC_FUNC_IMPL(__imp__sub_82E90E20) {
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
	// bl 0x82e90800
	ctx.lr = 0x82E90E40;
	sub_82E90800(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e90e5c
	if (ctx.cr0.eq) goto loc_82E90E5C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90E5C:
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

__attribute__((alias("__imp__sub_82E90E78"))) PPC_WEAK_FUNC(sub_82E90E78);
PPC_FUNC_IMPL(__imp__sub_82E90E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E90E80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e90ea8
	if (!ctx.cr6.eq) goto loc_82E90EA8;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e90ebc
	goto loc_82E90EBC;
loc_82E90EA8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82e90eb8
	if (!ctx.cr6.eq) goto loc_82E90EB8;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e90ebc
	goto loc_82E90EBC;
loc_82E90EB8:
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82E90EBC:
	// li r6,1
	ctx.r6.s64 = 1;
	// fsubs f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e90bf8
	ctx.lr = 0x82E90ED0;
	sub_82E90BF8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82e90ee4
	if (!ctx.cr6.eq) goto loc_82E90EE4;
loc_82E90EDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e90f10
	goto loc_82E90F10;
loc_82E90EE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e90bf8
	ctx.lr = 0x82E90EF8;
	sub_82E90BF8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e90edc
	if (ctx.cr6.eq) goto loc_82E90EDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82E90F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E90F18"))) PPC_WEAK_FUNC(sub_82E90F18);
PPC_FUNC_IMPL(__imp__sub_82E90F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82E90F20;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e90f48
	if (!ctx.cr6.eq) goto loc_82E90F48;
loc_82E90F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9108c
	goto loc_82E9108C;
loc_82E90F48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
loc_82E90F60:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e90f84
	if (!ctx.cr6.eq) goto loc_82E90F84;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// fmr f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f9.f64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82e90fa0
	goto loc_82E90FA0;
loc_82E90F84:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E90FA0:
	// bl 0x82e90e78
	ctx.lr = 0x82E90FA4;
	sub_82E90E78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e90f40
	if (ctx.cr6.eq) goto loc_82E90F40;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82e90fbc
	if (ctx.cr6.eq) goto loc_82E90FBC;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82e90fc4
	if (!ctx.cr6.lt) goto loc_82E90FC4;
loc_82E90FBC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82E90FC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82e90f60
	if (ctx.cr6.lt) goto loc_82E90F60;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82e91080
	if (ctx.cr6.gt) goto loc_82E91080;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E90FF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91018:
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82e91048
	if (ctx.cr6.eq) goto loc_82E91048;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r30,r10,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82e9105c
	if (ctx.cr6.lt) goto loc_82E9105C;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lwzx r30,r10,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82e9105c
	if (ctx.cr6.gt) goto loc_82E9105C;
loc_82E91048:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x82e91018
	if (ctx.cr6.lt) goto loc_82E91018;
loc_82E9105C:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82e91074
	if (!ctx.cr6.eq) goto loc_82E91074;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82E91074:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82e90ff0
	if (!ctx.cr6.gt) goto loc_82E90FF0;
loc_82E91080:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82E9108C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82E91094"))) PPC_WEAK_FUNC(sub_82E91094);
PPC_FUNC_IMPL(__imp__sub_82E91094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91098"))) PPC_WEAK_FUNC(sub_82E91098);
PPC_FUNC_IMPL(__imp__sub_82E91098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82E910A0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e910c8
	if (!ctx.cr6.eq) goto loc_82E910C8;
loc_82E910C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e911ec
	goto loc_82E911EC;
loc_82E910C8:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E910DC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e90e78
	ctx.lr = 0x82E91100;
	sub_82E90E78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e910c0
	if (ctx.cr0.eq) goto loc_82E910C0;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82e91118
	if (ctx.cr6.eq) goto loc_82E91118;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82e91120
	if (!ctx.cr6.lt) goto loc_82E91120;
loc_82E91118:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82E91120:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x82e910dc
	if (ctx.cr6.lt) goto loc_82E910DC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82e911e0
	if (ctx.cr6.gt) goto loc_82E911E0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E91150:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91178:
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82e911a8
	if (ctx.cr6.eq) goto loc_82E911A8;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82e911bc
	if (ctx.cr6.lt) goto loc_82E911BC;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x82e911bc
	if (ctx.cr6.gt) goto loc_82E911BC;
loc_82E911A8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x82e91178
	if (ctx.cr6.lt) goto loc_82E91178;
loc_82E911BC:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82e911d4
	if (!ctx.cr6.eq) goto loc_82E911D4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82E911D4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82e91150
	if (!ctx.cr6.gt) goto loc_82E91150;
loc_82E911E0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82E911EC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82E911F4"))) PPC_WEAK_FUNC(sub_82E911F4);
PPC_FUNC_IMPL(__imp__sub_82E911F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E911F8"))) PPC_WEAK_FUNC(sub_82E911F8);
PPC_FUNC_IMPL(__imp__sub_82E911F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E91200;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e9121c
	if (!ctx.cr6.eq) goto loc_82E9121C;
loc_82E91214:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E9121C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-25732
	ctx.r30.s64 = ctx.r11.s64 + -25732;
	// bl 0x826b4b60
	ctx.lr = 0x82E9122C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E91234;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82e91260
	if (!ctx.cr0.eq) goto loc_82E91260;
	// bl 0x82b568c0
	ctx.lr = 0x82E91244;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91214
	if (ctx.cr0.eq) goto loc_82E91214;
	// bl 0x82ca3b30
	ctx.lr = 0x82E91250;
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E91260:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-25748
	ctx.r30.s64 = ctx.r11.s64 + -25748;
	// bl 0x826b4b60
	ctx.lr = 0x82E9126C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E91274;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e912a0
	if (!ctx.cr0.eq) goto loc_82E912A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E91284;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91214
	if (ctx.cr0.eq) goto loc_82E91214;
	// bl 0x82ca3b30
	ctx.lr = 0x82E91290;
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E912A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826330b0
	ctx.lr = 0x82E912AC;
	sub_826330B0(ctx, base);
loc_82E912AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E912B4"))) PPC_WEAK_FUNC(sub_82E912B4);
PPC_FUNC_IMPL(__imp__sub_82E912B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E912B8"))) PPC_WEAK_FUNC(sub_82E912B8);
PPC_FUNC_IMPL(__imp__sub_82E912B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E912C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91320
	if (!ctx.cr6.gt) goto loc_82E91320;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E912E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e9130c
	if (ctx.cr6.eq) goto loc_82E9130C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9130C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9130C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e912e0
	if (ctx.cr6.lt) goto loc_82E912E0;
loc_82E91320:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E9132C"))) PPC_WEAK_FUNC(sub_82E9132C);
PPC_FUNC_IMPL(__imp__sub_82E9132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91330"))) PPC_WEAK_FUNC(sub_82E91330);
PPC_FUNC_IMPL(__imp__sub_82E91330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E91338;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91398
	if (!ctx.cr6.gt) goto loc_82E91398;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E91358:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e91384
	if (ctx.cr6.eq) goto loc_82E91384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91384:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e91358
	if (ctx.cr6.lt) goto loc_82E91358;
loc_82E91398:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E913A4"))) PPC_WEAK_FUNC(sub_82E913A4);
PPC_FUNC_IMPL(__imp__sub_82E913A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E913A8"))) PPC_WEAK_FUNC(sub_82E913A8);
PPC_FUNC_IMPL(__imp__sub_82E913A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E913B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e913d4
	if (ctx.cr6.lt) goto loc_82E913D4;
loc_82E913CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91504
	goto loc_82E91504;
loc_82E913D4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x82e914a4
	if (!ctx.cr0.eq) goto loc_82E914A4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E9140C;
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq 0x82e913cc
	if (ctx.cr0.eq) goto loc_82E913CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91500
	if (!ctx.cr6.gt) goto loc_82E91500;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E9142C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r28,r11,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e91488
	if (ctx.cr0.eq) goto loc_82E91488;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91488
	if (!ctx.cr6.gt) goto loc_82E91488;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E91458:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e91458
	if (ctx.cr6.lt) goto loc_82E91458;
loc_82E91488:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e9142c
	if (ctx.cr6.lt) goto loc_82E9142C;
	// b 0x82e91500
	goto loc_82E91500;
loc_82E914A4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91500
	if (!ctx.cr6.gt) goto loc_82E91500;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E914B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e914e8
	if (ctx.cr0.eq) goto loc_82E914E8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E914E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E914E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e914b8
	if (ctx.cr6.lt) goto loc_82E914B8;
loc_82E91500:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E91504:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E9150C"))) PPC_WEAK_FUNC(sub_82E9150C);
PPC_FUNC_IMPL(__imp__sub_82E9150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91510"))) PPC_WEAK_FUNC(sub_82E91510);
PPC_FUNC_IMPL(__imp__sub_82E91510) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e91580
	if (ctx.cr0.eq) goto loc_82E91580;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82E91558:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e9157c
	if (ctx.cr6.eq) goto loc_82E9157C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82e91558
	if (ctx.cr6.lt) goto loc_82E91558;
	// b 0x82e91580
	goto loc_82E91580;
loc_82E9157C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E91580:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e915d4
	if (ctx.cr0.eq) goto loc_82E915D4;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e915c0
	if (!ctx.cr6.lt) goto loc_82E915C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91598:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e91598
	if (ctx.cr6.lt) goto loc_82E91598;
loc_82E915C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82e915d8
	goto loc_82E915D8;
loc_82E915D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E915D8:
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

__attribute__((alias("__imp__sub_82E915F0"))) PPC_WEAK_FUNC(sub_82E915F0);
PPC_FUNC_IMPL(__imp__sub_82E915F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e91610
	if (!ctx.cr6.eq) goto loc_82E91610;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82E91610:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e91624
	if (!ctx.cr6.eq) goto loc_82E91624;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82E91624:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e91638
	if (ctx.cr0.eq) goto loc_82E91638;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82E91638:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e9164c
	if (ctx.cr0.eq) goto loc_82E9164C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_82E9164C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E91668"))) PPC_WEAK_FUNC(sub_82E91668);
PPC_FUNC_IMPL(__imp__sub_82E91668) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
loc_82E9169C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e916ec
	if (ctx.cr6.eq) goto loc_82E916EC;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e9169c
	if (!ctx.cr0.eq) goto loc_82E9169C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E916B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e916d4
	if (ctx.cr0.eq) goto loc_82E916D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E916D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E916D4:
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
loc_82E916EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e916b4
	goto loc_82E916B4;
}

__attribute__((alias("__imp__sub_82E916F4"))) PPC_WEAK_FUNC(sub_82E916F4);
PPC_FUNC_IMPL(__imp__sub_82E916F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E916F8"))) PPC_WEAK_FUNC(sub_82E916F8);
PPC_FUNC_IMPL(__imp__sub_82E916F8) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
loc_82E9172C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e9177c
	if (ctx.cr6.eq) goto loc_82E9177C;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e9172c
	if (!ctx.cr0.eq) goto loc_82E9172C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E91744:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e91764
	if (ctx.cr0.eq) goto loc_82E91764;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91764:
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
loc_82E9177C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e91744
	goto loc_82E91744;
}

__attribute__((alias("__imp__sub_82E91784"))) PPC_WEAK_FUNC(sub_82E91784);
PPC_FUNC_IMPL(__imp__sub_82E91784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91788"))) PPC_WEAK_FUNC(sub_82E91788);
PPC_FUNC_IMPL(__imp__sub_82E91788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E91790;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27288
	ctx.r11.s64 = ctx.r11.s64 + -27288;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82e918b0
	if (ctx.cr6.eq) goto loc_82E918B0;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// ble cr6,0x82e917e8
	if (!ctx.cr6.gt) goto loc_82E917E8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E917E8:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e917f8
	if (ctx.cr6.gt) goto loc_82E917F8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82E917F8:
	// bl 0x82625f08
	ctx.lr = 0x82E917FC;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91844
	if (ctx.cr0.eq) goto loc_82E91844;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82e9183c
	if (ctx.cr0.lt) goto loc_82E9183C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-30208
	ctx.r9.s64 = ctx.r9.s64 + -30208;
loc_82E91820:
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x82e91820
	if (!ctx.cr0.lt) goto loc_82E91820;
loc_82E9183C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82e91848
	goto loc_82E91848;
loc_82E91844:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E91848:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82e9189c
	if (!ctx.cr6.gt) goto loc_82E9189C;
	// li r11,28
	ctx.r11.s64 = 28;
loc_82E91868:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e91868
	if (ctx.cr6.lt) goto loc_82E91868;
loc_82E9189C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82E918B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E918BC"))) PPC_WEAK_FUNC(sub_82E918BC);
PPC_FUNC_IMPL(__imp__sub_82E918BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E918C0"))) PPC_WEAK_FUNC(sub_82E918C0);
PPC_FUNC_IMPL(__imp__sub_82E918C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e918f4
	if (!ctx.cr0.eq) goto loc_82E918F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82E918F4:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82e91984
	if (!ctx.cr6.eq) goto loc_82E91984;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e91968
	if (!ctx.cr0.eq) goto loc_82E91968;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E91968:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E91984:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// beq 0x82e919a4
	if (ctx.cr0.eq) goto loc_82E919A4;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E919A4:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82E919A8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E919C8"))) PPC_WEAK_FUNC(sub_82E919C8);
PPC_FUNC_IMPL(__imp__sub_82E919C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E919D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9692
	ctx.r11.s64 = ctx.r11.s64 + 9692;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lis r10,-32023
	ctx.r10.s64 = -2098659328;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,5736
	ctx.r4.s64 = ctx.r10.s64 + 5736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -720);
	// bl 0x82e7c9c0
	ctx.lr = 0x82E91A04;
	sub_82E7C9C0(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -720);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,5880
	ctx.r4.s64 = ctx.r11.s64 + 5880;
	// bl 0x82e7c9e0
	ctx.lr = 0x82E91A18;
	sub_82E7C9E0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E91A3C"))) PPC_WEAK_FUNC(sub_82E91A3C);
PPC_FUNC_IMPL(__imp__sub_82E91A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91A40"))) PPC_WEAK_FUNC(sub_82E91A40);
PPC_FUNC_IMPL(__imp__sub_82E91A40) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,9692
	ctx.r10.s64 = ctx.r10.s64 + 9692;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x82e91aa0
	if (ctx.cr0.eq) goto loc_82E91AA0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e91a9c
	if (ctx.cr6.eq) goto loc_82E91A9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e91aa0
	goto loc_82E91AA0;
loc_82E91A9C:
	// bl 0x824fe010
	ctx.lr = 0x82E91AA0;
	sub_824FE010(ctx, base);
loc_82E91AA0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91abc
	if (ctx.cr0.eq) goto loc_82E91ABC;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91ABC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91adc
	if (ctx.cr0.eq) goto loc_82E91ADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91ADC:
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,5736
	ctx.r4.s64 = ctx.r11.s64 + 5736;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -720);
	// bl 0x82e7c9d0
	ctx.lr = 0x82E91AF4;
	sub_82E7C9D0(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -720);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,5880
	ctx.r4.s64 = ctx.r11.s64 + 5880;
	// bl 0x82e7c9f0
	ctx.lr = 0x82E91B08;
	sub_82E7C9F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
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

__attribute__((alias("__imp__sub_82E91B2C"))) PPC_WEAK_FUNC(sub_82E91B2C);
PPC_FUNC_IMPL(__imp__sub_82E91B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91B30"))) PPC_WEAK_FUNC(sub_82E91B30);
PPC_FUNC_IMPL(__imp__sub_82E91B30) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E91B74;
	sub_82267BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82e7ebc0
	ctx.lr = 0x82E91B88;
	sub_82E7EBC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e91b98
	if (!ctx.cr0.eq) goto loc_82E91B98;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91c1c
	goto loc_82E91C1C;
loc_82E91B98:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e91bb4
	if (!ctx.cr6.gt) goto loc_82E91BB4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E91BB4:
	// bl 0x82625f08
	ctx.lr = 0x82E91BB8;
	sub_82625F08(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e91bf0
	if (!ctx.cr6.gt) goto loc_82E91BF0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E91BD0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e91bd0
	if (ctx.cr6.lt) goto loc_82E91BD0;
loc_82E91BF0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	ctx.lr = 0x82E91BF8;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91c10
	if (ctx.cr0.eq) goto loc_82E91C10;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82e91788
	ctx.lr = 0x82E91C08;
	sub_82E91788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e91c14
	goto loc_82E91C14;
loc_82E91C10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E91C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82E91C1C:
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

__attribute__((alias("__imp__sub_82E91C34"))) PPC_WEAK_FUNC(sub_82E91C34);
PPC_FUNC_IMPL(__imp__sub_82E91C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91C38"))) PPC_WEAK_FUNC(sub_82E91C38);
PPC_FUNC_IMPL(__imp__sub_82E91C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82E91C40;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-17100
	ctx.r28.s64 = ctx.r11.s64 + -17100;
	// bne cr6,0x82e91d1c
	if (!ctx.cr6.eq) goto loc_82E91D1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r3,28
	ctx.r3.s64 = 28;
	// beq cr6,0x82e91c9c
	if (ctx.cr6.eq) goto loc_82E91C9C;
	// bl 0x82625f08
	ctx.lr = 0x82E91C84;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91cc0
	if (ctx.cr0.eq) goto loc_82E91CC0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82e91cb4
	goto loc_82E91CB4;
loc_82E91C9C:
	// bl 0x82625f08
	ctx.lr = 0x82E91CA0;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91cc0
	if (ctx.cr0.eq) goto loc_82E91CC0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82E91CB4:
	// bl 0x82e91788
	ctx.lr = 0x82E91CB8;
	sub_82E91788(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82e91cc4
	goto loc_82E91CC4;
loc_82E91CC0:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82E91CC4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e91cf0
	goto loc_82E91CF0;
loc_82E91CD0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e918c0
	ctx.lr = 0x82E91CEC;
	sub_82E918C0(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82E91CF0:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e91cd0
	if (!ctx.cr0.eq) goto loc_82E91CD0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91d18
	if (ctx.cr0.eq) goto loc_82E91D18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91D18:
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_82E91D1C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82e918c0
	ctx.lr = 0x82E91D44;
	sub_82E918C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82E91D4C"))) PPC_WEAK_FUNC(sub_82E91D4C);
PPC_FUNC_IMPL(__imp__sub_82E91D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91D50"))) PPC_WEAK_FUNC(sub_82E91D50);
PPC_FUNC_IMPL(__imp__sub_82E91D50) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82e91d9c
	goto loc_82E91D9C;
loc_82E91D74:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82e91d98
	if (!ctx.cr6.eq) goto loc_82E91D98;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82e91d98
	if (!ctx.cr6.eq) goto loc_82E91D98;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e91dac
	if (ctx.cr6.eq) goto loc_82E91DAC;
loc_82E91D98:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82E91D9C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82e91d74
	if (!ctx.cr0.eq) goto loc_82E91D74;
	// b 0x82e91db4
	goto loc_82E91DB4;
loc_82E91DAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e915f0
	ctx.lr = 0x82E91DB4;
	sub_82E915F0(ctx, base);
loc_82E91DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E91DC4"))) PPC_WEAK_FUNC(sub_82E91DC4);
PPC_FUNC_IMPL(__imp__sub_82E91DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91DC8"))) PPC_WEAK_FUNC(sub_82E91DC8);
PPC_FUNC_IMPL(__imp__sub_82E91DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E91DD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e91e1c
	goto loc_82E91E1C;
loc_82E91DE8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e91e04
	if (ctx.cr6.eq) goto loc_82E91E04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e91e04
	if (ctx.cr6.eq) goto loc_82E91E04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e91e18
	if (!ctx.cr6.eq) goto loc_82E91E18;
loc_82E91E04:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91E18:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82E91E1C:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e91de8
	if (!ctx.cr0.eq) goto loc_82E91DE8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E91E2C"))) PPC_WEAK_FUNC(sub_82E91E2C);
PPC_FUNC_IMPL(__imp__sub_82E91E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91E30"))) PPC_WEAK_FUNC(sub_82E91E30);
PPC_FUNC_IMPL(__imp__sub_82E91E30) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82625f08
	ctx.lr = 0x82E91E44;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e91e54
	if (ctx.cr0.eq) goto loc_82E91E54;
	// bl 0x82e919c8
	ctx.lr = 0x82E91E50;
	sub_82E919C8(ctx, base);
	// b 0x82e91e58
	goto loc_82E91E58;
loc_82E91E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E91E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E91E68"))) PPC_WEAK_FUNC(sub_82E91E68);
PPC_FUNC_IMPL(__imp__sub_82E91E68) {
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
	// bl 0x82e91a40
	ctx.lr = 0x82E91E88;
	sub_82E91A40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e91ea4
	if (ctx.cr0.eq) goto loc_82E91EA4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91EA4:
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

__attribute__((alias("__imp__sub_82E91EC0"))) PPC_WEAK_FUNC(sub_82E91EC0);
PPC_FUNC_IMPL(__imp__sub_82E91EC0) {
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
	// bl 0x82e87420
	ctx.lr = 0x82E91ED8;
	sub_82E87420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82e91f40
	if (!ctx.cr0.gt) goto loc_82E91F40;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82E91EF4:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E91F00:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e91f24
	if (ctx.cr0.eq) goto loc_82E91F24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e91f00
	if (ctx.cr6.eq) goto loc_82E91F00;
loc_82E91F24:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e91f50
	if (ctx.cr0.eq) goto loc_82E91F50;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e91ef4
	if (ctx.cr6.lt) goto loc_82E91EF4;
loc_82E91F40:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82e91f5c
	if (!ctx.cr6.eq) goto loc_82E91F5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91f74
	goto loc_82E91F74;
loc_82E91F50:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x82e91f70
	goto loc_82E91F70;
loc_82E91F5C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_82E91F70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E91F74:
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

__attribute__((alias("__imp__sub_82E91F88"))) PPC_WEAK_FUNC(sub_82E91F88);
PPC_FUNC_IMPL(__imp__sub_82E91F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E91F90;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-1124
	ctx.r9.s64 = ctx.r11.s64 + -1124;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E91FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82e91fc0
	if (!ctx.cr0.eq) goto loc_82E91FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e91ec0
	ctx.lr = 0x82E91FDC;
	sub_82E91EC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e91fec
	if (!ctx.cr0.eq) goto loc_82E91FEC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82e91ff8
	goto loc_82E91FF8;
loc_82E91FEC:
	// bl 0x82e87420
	ctx.lr = 0x82E91FF0;
	sub_82E87420(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82E91FF8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x82e9201c
	if (!ctx.cr6.eq) goto loc_82E9201C;
	// bl 0x82e7ca00
	ctx.lr = 0x82E92014;
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x82e92024
	goto loc_82E92024;
loc_82E9201C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82E92024:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e92040
	if (ctx.cr0.eq) goto loc_82E92040;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9704);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9704, ctx.r10.u32);
loc_82E92040:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E9204C"))) PPC_WEAK_FUNC(sub_82E9204C);
PPC_FUNC_IMPL(__imp__sub_82E9204C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92050"))) PPC_WEAK_FUNC(sub_82E92050);
PPC_FUNC_IMPL(__imp__sub_82E92050) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e91f88
	ctx.lr = 0x82E92074;
	sub_82E91F88(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25688
	ctx.r11.s64 = ctx.r11.s64 + -25688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E92098"))) PPC_WEAK_FUNC(sub_82E92098);
PPC_FUNC_IMPL(__imp__sub_82E92098) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e920c0
	if (!ctx.cr6.eq) goto loc_82E920C0;
loc_82E920B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e92100
	goto loc_82E92100;
loc_82E920C0:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82e920b8
	if (ctx.cr0.eq) goto loc_82E920B8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E920E0;
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e920b8
	if (ctx.cr0.eq) goto loc_82E920B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e757b8
	ctx.lr = 0x82E920F0;
	sub_82E757B8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82E92100:
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

__attribute__((alias("__imp__sub_82E92118"))) PPC_WEAK_FUNC(sub_82E92118);
PPC_FUNC_IMPL(__imp__sub_82E92118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92124"))) PPC_WEAK_FUNC(sub_82E92124);
PPC_FUNC_IMPL(__imp__sub_82E92124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92128"))) PPC_WEAK_FUNC(sub_82E92128);
PPC_FUNC_IMPL(__imp__sub_82E92128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82e92158
	if (ctx.cr6.eq) goto loc_82E92158;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e92158
	if (!ctx.cr6.lt) goto loc_82E92158;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e9215c
	if (!ctx.cr6.eq) goto loc_82E9215C;
loc_82E92158:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E9215C:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92164"))) PPC_WEAK_FUNC(sub_82E92164);
PPC_FUNC_IMPL(__imp__sub_82E92164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92168"))) PPC_WEAK_FUNC(sub_82E92168);
PPC_FUNC_IMPL(__imp__sub_82E92168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,24020
	ctx.r3.s64 = ctx.r11.s64 + 24020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92174"))) PPC_WEAK_FUNC(sub_82E92174);
PPC_FUNC_IMPL(__imp__sub_82E92174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92178"))) PPC_WEAK_FUNC(sub_82E92178);
PPC_FUNC_IMPL(__imp__sub_82E92178) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	ctx.lr = 0x82E9218C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e921ac
	if (ctx.cr0.eq) goto loc_82E921AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25680
	ctx.r11.s64 = ctx.r11.s64 + -25680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82e921b0
	goto loc_82E921B0;
loc_82E921AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E921B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E921C0"))) PPC_WEAK_FUNC(sub_82E921C0);
PPC_FUNC_IMPL(__imp__sub_82E921C0) {
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
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// addi r11,r11,-25616
	ctx.r11.s64 = ctx.r11.s64 + -25616;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e9220c
	if (ctx.cr0.eq) goto loc_82E9220C;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e9220c
	if (!ctx.cr6.eq) goto loc_82E9220C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9220C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9220C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92230
	if (ctx.cr0.eq) goto loc_82E92230;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e92230
	if (!ctx.cr6.eq) goto loc_82E92230;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92230:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
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

__attribute__((alias("__imp__sub_82E92254"))) PPC_WEAK_FUNC(sub_82E92254);
PPC_FUNC_IMPL(__imp__sub_82E92254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92258"))) PPC_WEAK_FUNC(sub_82E92258);
PPC_FUNC_IMPL(__imp__sub_82E92258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E92260;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9229c
	if (ctx.cr0.eq) goto loc_82E9229C;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e9229c
	if (!ctx.cr6.eq) goto loc_82E9229C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82E9229C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e922c4
	if (ctx.cr0.eq) goto loc_82E922C4;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e922c4
	if (!ctx.cr6.eq) goto loc_82E922C4;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E922C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82E922C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// ble cr6,0x82e922ec
	if (!ctx.cr6.gt) goto loc_82E922EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E922EC:
	// bl 0x82625f08
	ctx.lr = 0x82E922F0;
	sub_82625F08(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e92308
	if (!ctx.cr6.gt) goto loc_82E92308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E92308:
	// bl 0x82625f08
	ctx.lr = 0x82E9230C;
	sub_82625F08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E92330"))) PPC_WEAK_FUNC(sub_82E92330);
PPC_FUNC_IMPL(__imp__sub_82E92330) {
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
	// bl 0x82e85648
	ctx.lr = 0x82E92348;
	sub_82E85648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E92370"))) PPC_WEAK_FUNC(sub_82E92370);
PPC_FUNC_IMPL(__imp__sub_82E92370) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e923ac
	if (!ctx.cr6.gt) goto loc_82E923AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e923c4
	if (ctx.cr6.eq) goto loc_82E923C4;
loc_82E923AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E923C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82E923C4:
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

__attribute__((alias("__imp__sub_82E923DC"))) PPC_WEAK_FUNC(sub_82E923DC);
PPC_FUNC_IMPL(__imp__sub_82E923DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E923E0"))) PPC_WEAK_FUNC(sub_82E923E0);
PPC_FUNC_IMPL(__imp__sub_82E923E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92454"))) PPC_WEAK_FUNC(sub_82E92454);
PPC_FUNC_IMPL(__imp__sub_82E92454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92458"))) PPC_WEAK_FUNC(sub_82E92458);
PPC_FUNC_IMPL(__imp__sub_82E92458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E92460;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e92534
	if (!ctx.cr6.gt) goto loc_82E92534;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-9856
	ctx.r31.s64 = ctx.r11.s64 + -9856;
loc_82E92484:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e924bc
	if (ctx.cr6.eq) goto loc_82E924BC;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e924bc
	if (!ctx.cr6.lt) goto loc_82E924BC;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e924c0
	if (!ctx.cr6.eq) goto loc_82E924C0;
loc_82E924BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E924C0:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e92520
	if (ctx.cr6.eq) goto loc_82E92520;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,255
	ctx.r7.s64 = 255;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r6,255
	ctx.r6.s64 = 255;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r27,72(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// mulli r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 * 20;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82E92520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92520:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e92484
	if (ctx.cr6.lt) goto loc_82E92484;
loc_82E92534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E9253C"))) PPC_WEAK_FUNC(sub_82E9253C);
PPC_FUNC_IMPL(__imp__sub_82E9253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92540"))) PPC_WEAK_FUNC(sub_82E92540);
PPC_FUNC_IMPL(__imp__sub_82E92540) {
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
	// bl 0x82e85580
	ctx.lr = 0x82E92558;
	sub_82E85580(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-25616
	ctx.r10.s64 = ctx.r11.s64 + -25616;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82E925B4"))) PPC_WEAK_FUNC(sub_82E925B4);
PPC_FUNC_IMPL(__imp__sub_82E925B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E925B8"))) PPC_WEAK_FUNC(sub_82E925B8);
PPC_FUNC_IMPL(__imp__sub_82E925B8) {
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
	// bl 0x82e921c0
	ctx.lr = 0x82E925D8;
	sub_82E921C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e925f4
	if (ctx.cr0.eq) goto loc_82E925F4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E925F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E925F4:
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

__attribute__((alias("__imp__sub_82E92610"))) PPC_WEAK_FUNC(sub_82E92610);
PPC_FUNC_IMPL(__imp__sub_82E92610) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e85d08
	ctx.lr = 0x82E92634;
	sub_82E85D08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e92644
	if (ctx.cr0.eq) goto loc_82E92644;
loc_82E9263C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e926ec
	goto loc_82E926EC;
loc_82E92644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E9264C;
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E92660;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82e92684
	if (!ctx.cr0.eq) goto loc_82E92684;
	// bl 0x82b568c0
	ctx.lr = 0x82E92670;
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	ctx.lr = 0x82E92674;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e92258
	ctx.lr = 0x82E92680;
	sub_82E92258(ctx, base);
	// b 0x82e9263c
	goto loc_82E9263C;
loc_82E92684:
	// bl 0x826b4b60
	ctx.lr = 0x82E92688;
	sub_826B4B60(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,30936
	ctx.r11.s64 = ctx.r11.s64 + 30936;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E9269C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e926e8
	if (!ctx.cr0.eq) goto loc_82E926E8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e926bc
	if (ctx.cr0.eq) goto loc_82E926BC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82e926c4
	goto loc_82E926C4;
loc_82E926BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82E926C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E926CC;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82E926D0;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x82e926ec
	goto loc_82E926EC;
loc_82E926E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E926EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82E92708"))) PPC_WEAK_FUNC(sub_82E92708);
PPC_FUNC_IMPL(__imp__sub_82E92708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E92710;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e92734
	if (!ctx.cr6.eq) goto loc_82E92734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e929a8
	goto loc_82E929A8;
loc_82E92734:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e929a4
	if (ctx.cr0.eq) goto loc_82E929A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e929a4
	if (ctx.cr6.eq) goto loc_82E929A4;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e927a8
	if (ctx.cr0.eq) goto loc_82E927A8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82E927A8:
	// fmuls f13,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82e929a4
	if (ctx.cr6.gt) goto loc_82E929A4;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e92850
	if (!ctx.cr0.eq) goto loc_82E92850;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e928b0
	if (ctx.cr0.eq) goto loc_82E928B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82E927DC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e9280c
	if (ctx.cr6.eq) goto loc_82E9280C;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e9280c
	if (!ctx.cr6.lt) goto loc_82E9280C;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e92810
	if (!ctx.cr6.eq) goto loc_82E92810;
loc_82E9280C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E92810:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,60(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e929a4
	if (ctx.cr6.eq) goto loc_82E929A4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e927dc
	if (ctx.cr6.lt) goto loc_82E927DC;
	// b 0x82e928b0
	goto loc_82E928B0;
loc_82E92850:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e928b0
	if (ctx.cr0.eq) goto loc_82E928B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82E92860:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e92890
	if (ctx.cr6.eq) goto loc_82E92890;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e92890
	if (!ctx.cr6.lt) goto loc_82E92890;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e92894
	if (!ctx.cr6.eq) goto loc_82E92894;
loc_82E92890:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E92894:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e929a4
	if (ctx.cr6.eq) goto loc_82E929A4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e92860
	if (ctx.cr6.lt) goto loc_82E92860;
loc_82E928B0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82e928c0
	if (ctx.cr6.gt) goto loc_82E928C0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82E928C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e928e4
	if (!ctx.cr6.gt) goto loc_82E928E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e92990
	goto loc_82E92990;
loc_82E928E4:
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82e92924
	if (!ctx.cr6.gt) goto loc_82E92924;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82E928F4:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e92914
	if (!ctx.cr6.lt) goto loc_82E92914;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82e92918
	goto loc_82E92918;
loc_82E92914:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E92918:
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82e928f4
	if (ctx.cr6.gt) goto loc_82E928F4;
loc_82E92924:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82e92944
	if (!ctx.cr6.lt) goto loc_82E92944;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e92944
	if (!ctx.cr6.gt) goto loc_82E92944;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82E92944:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82e92980
	if (!ctx.cr6.gt) goto loc_82E92980;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_82E92954:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne 0x82e92954
	if (!ctx.cr0.eq) goto loc_82E92954;
loc_82E92980:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E92990:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82E929A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E929A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E929B0"))) PPC_WEAK_FUNC(sub_82E929B0);
PPC_FUNC_IMPL(__imp__sub_82E929B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e92ac0
	if (ctx.cr6.eq) goto loc_82E92AC0;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82e929f0
	if (!ctx.cr6.eq) goto loc_82E929F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82e92a58
	goto loc_82E92A58;
loc_82E929F0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e92a2c
	if (ctx.cr6.eq) goto loc_82E92A2C;
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82e92a2c
	if (!ctx.cr6.lt) goto loc_82E92A2C;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e92a30
	if (!ctx.cr6.eq) goto loc_82E92A30;
loc_82E92A2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E92A30:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E92A58:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-25520
	ctx.r11.s64 = ctx.r11.s64 + -25520;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826243d8
	ctx.lr = 0x82E92AB8;
	sub_826243D8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82E92AC0:
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

__attribute__((alias("__imp__sub_82E92AD4"))) PPC_WEAK_FUNC(sub_82E92AD4);
PPC_FUNC_IMPL(__imp__sub_82E92AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92AD8"))) PPC_WEAK_FUNC(sub_82E92AD8);
PPC_FUNC_IMPL(__imp__sub_82E92AD8) {
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e92b00
	if (!ctx.cr6.eq) goto loc_82E92B00;
loc_82E92AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e92b78
	goto loc_82E92B78;
loc_82E92B00:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e92b14
	if (!ctx.cr6.eq) goto loc_82E92B14;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82E92B14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e929b0
	ctx.lr = 0x82E92B1C;
	sub_82E929B0(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e92af8
	if (ctx.cr6.eq) goto loc_82E92AF8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e92b68
	if (ctx.cr6.eq) goto loc_82E92B68;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e92b68
	if (!ctx.cr6.lt) goto loc_82E92B68;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e92b6c
	if (!ctx.cr6.eq) goto loc_82E92B6C;
loc_82E92B68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E92B6C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82E92B78:
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

__attribute__((alias("__imp__sub_82E92B8C"))) PPC_WEAK_FUNC(sub_82E92B8C);
PPC_FUNC_IMPL(__imp__sub_82E92B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92B90"))) PPC_WEAK_FUNC(sub_82E92B90);
PPC_FUNC_IMPL(__imp__sub_82E92B90) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e92ad8
	sub_82E92AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92B98"))) PPC_WEAK_FUNC(sub_82E92B98);
PPC_FUNC_IMPL(__imp__sub_82E92B98) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82e92bc4
	if (!ctx.cr6.eq) goto loc_82E92BC4;
	// li r10,-2
	ctx.r10.s64 = -2;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x82e92c00
	goto loc_82E92C00;
loc_82E92BC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e92ad8
	ctx.lr = 0x82E92BD0;
	sub_82E92AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92bfc
	if (ctx.cr0.eq) goto loc_82E92BFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e92c00
	goto loc_82E92C00;
loc_82E92BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92C10"))) PPC_WEAK_FUNC(sub_82E92C10);
PPC_FUNC_IMPL(__imp__sub_82E92C10) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e92c7c
	if (ctx.cr6.eq) goto loc_82E92C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E92C38;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92c7c
	if (ctx.cr0.eq) goto loc_82E92C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E92C48;
	sub_826B4B60(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82e92c74
	if (ctx.cr6.eq) goto loc_82E92C74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
	// bl 0x826b4b60
	ctx.lr = 0x82E92C64;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E92C6C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e92c7c
	if (!ctx.cr0.eq) goto loc_82E92C7C;
loc_82E92C74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e92c80
	goto loc_82E92C80;
loc_82E92C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92C80:
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

__attribute__((alias("__imp__sub_82E92C98"))) PPC_WEAK_FUNC(sub_82E92C98);
PPC_FUNC_IMPL(__imp__sub_82E92C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E92CA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82ecb620
	ctx.lr = 0x82E92CB4;
	sub_82ECB620(ctx, base);
	// lwz r28,52(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e92d2c
	if (ctx.cr0.eq) goto loc_82E92D2C;
loc_82E92CC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e92cf4
	if (ctx.cr6.eq) goto loc_82E92CF4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82e92cc4
	if (ctx.cr6.lt) goto loc_82E92CC4;
	// b 0x82e92d2c
	goto loc_82E92D2C;
loc_82E92CF4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e92d18
	if (!ctx.cr6.eq) goto loc_82E92D18;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e92d2c
	if (ctx.cr6.eq) goto loc_82E92D2C;
loc_82E92D18:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92D2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E92D34"))) PPC_WEAK_FUNC(sub_82E92D34);
PPC_FUNC_IMPL(__imp__sub_82E92D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92D38"))) PPC_WEAK_FUNC(sub_82E92D38);
PPC_FUNC_IMPL(__imp__sub_82E92D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E92D40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82ecb620
	ctx.lr = 0x82E92D54;
	sub_82ECB620(ctx, base);
	// lwz r28,52(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e92dcc
	if (ctx.cr0.eq) goto loc_82E92DCC;
loc_82E92D64:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e92d94
	if (ctx.cr6.eq) goto loc_82E92D94;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82e92d64
	if (ctx.cr6.lt) goto loc_82E92D64;
	// b 0x82e92dcc
	goto loc_82E92DCC;
loc_82E92D94:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e92db8
	if (!ctx.cr6.eq) goto loc_82E92DB8;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e92dcc
	if (ctx.cr6.eq) goto loc_82E92DCC;
loc_82E92DB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92DCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E92DD4"))) PPC_WEAK_FUNC(sub_82E92DD4);
PPC_FUNC_IMPL(__imp__sub_82E92DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92DD8"))) PPC_WEAK_FUNC(sub_82E92DD8);
PPC_FUNC_IMPL(__imp__sub_82E92DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,24572
	ctx.r3.s64 = ctx.r11.s64 + 24572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92DE4"))) PPC_WEAK_FUNC(sub_82E92DE4);
PPC_FUNC_IMPL(__imp__sub_82E92DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92DE8"))) PPC_WEAK_FUNC(sub_82E92DE8);
PPC_FUNC_IMPL(__imp__sub_82E92DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E92DF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27288
	ctx.r11.s64 = ctx.r11.s64 + -27288;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82e92f10
	if (ctx.cr6.eq) goto loc_82E92F10;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// ble cr6,0x82e92e48
	if (!ctx.cr6.gt) goto loc_82E92E48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E92E48:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e92e58
	if (ctx.cr6.gt) goto loc_82E92E58;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82E92E58:
	// bl 0x82625f08
	ctx.lr = 0x82E92E5C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92ea4
	if (ctx.cr0.eq) goto loc_82E92EA4;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82e92e9c
	if (ctx.cr0.lt) goto loc_82E92E9C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-25496
	ctx.r9.s64 = ctx.r9.s64 + -25496;
loc_82E92E80:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82e92e80
	if (!ctx.cr0.lt) goto loc_82E92E80;
loc_82E92E9C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82e92ea8
	goto loc_82E92EA8;
loc_82E92EA4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E92EA8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82e92efc
	if (!ctx.cr6.gt) goto loc_82E92EFC;
	// li r11,20
	ctx.r11.s64 = 20;
loc_82E92EC8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-20
	ctx.r8.s64 = ctx.r9.s64 + -20;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e92ec8
	if (ctx.cr6.lt) goto loc_82E92EC8;
loc_82E92EFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82E92F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E92F1C"))) PPC_WEAK_FUNC(sub_82E92F1C);
PPC_FUNC_IMPL(__imp__sub_82E92F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92F20"))) PPC_WEAK_FUNC(sub_82E92F20);
PPC_FUNC_IMPL(__imp__sub_82E92F20) {
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
	// bl 0x82625f08
	ctx.lr = 0x82E92F34;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92f54
	if (ctx.cr0.eq) goto loc_82E92F54;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25492
	ctx.r11.s64 = ctx.r11.s64 + -25492;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82e92f58
	goto loc_82E92F58;
loc_82E92F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E92F68"))) PPC_WEAK_FUNC(sub_82E92F68);
PPC_FUNC_IMPL(__imp__sub_82E92F68) {
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
	// addi r11,r11,-25492
	ctx.r11.s64 = ctx.r11.s64 + -25492;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e93014
	if (ctx.cr6.eq) goto loc_82E93014;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r4,r11,-4424
	ctx.r4.s64 = ctx.r11.s64 + -4424;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E92FAC;
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92ff4
	if (ctx.cr0.eq) goto loc_82E92FF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e92fec
	goto loc_82E92FEC;
loc_82E92FC0:
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// bl 0x82ec64f8
	ctx.lr = 0x82E92FD4;
	sub_82EC64F8(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,11576
	ctx.r4.s64 = ctx.r11.s64 + 11576;
	// bl 0x82ec66f0
	ctx.lr = 0x82E92FE8;
	sub_82EC66F0(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82E92FEC:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e92fc0
	if (!ctx.cr0.eq) goto loc_82E92FC0;
loc_82E92FF4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93014
	if (ctx.cr0.eq) goto loc_82E93014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93014:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
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
}

__attribute__((alias("__imp__sub_82E93038"))) PPC_WEAK_FUNC(sub_82E93038);
PPC_FUNC_IMPL(__imp__sub_82E93038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E93040;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e930e4
	if (!ctx.cr6.gt) goto loc_82E930E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-25476
	ctx.r27.s64 = ctx.r11.s64 + -25476;
loc_82E93068:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82E93074;
	sub_82E7D860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e930a8
	if (ctx.cr0.eq) goto loc_82E930A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E93084;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e930a8
	if (ctx.cr0.eq) goto loc_82E930A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E93094;
	sub_826B4B60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E9309C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e930a8
	if (!ctx.cr0.eq) goto loc_82E930A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82E930A8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93068
	if (ctx.cr6.lt) goto loc_82E93068;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e930e4
	if (ctx.cr6.eq) goto loc_82E930E4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	ctx.lr = 0x82E930C8;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e930dc
	if (ctx.cr0.eq) goto loc_82E930DC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e92de8
	ctx.lr = 0x82E930D8;
	sub_82E92DE8(ctx, base);
	// b 0x82e930e0
	goto loc_82E930E0;
loc_82E930DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E930E0:
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
loc_82E930E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ea45b0
	ctx.lr = 0x82E930F0;
	sub_82EA45B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E930F8"))) PPC_WEAK_FUNC(sub_82E930F8);
PPC_FUNC_IMPL(__imp__sub_82E930F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E93100;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e92c10
	ctx.lr = 0x82E93110;
	sub_82E92C10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93120
	if (ctx.cr0.eq) goto loc_82E93120;
loc_82E93118:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e931d8
	goto loc_82E931D8;
loc_82E93120:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-25476
	ctx.r29.s64 = ctx.r11.s64 + -25476;
	// bl 0x826b4b60
	ctx.lr = 0x82E93130;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E93138;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e931d4
	if (!ctx.cr0.eq) goto loc_82E931D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E93148;
	sub_82B568C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e93118
	if (ctx.cr0.eq) goto loc_82E93118;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r4,r11,-4424
	ctx.r4.s64 = ctx.r11.s64 + -4424;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82E93164;
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e931d4
	if (ctx.cr0.eq) goto loc_82E931D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ec7ed8
	ctx.lr = 0x82E93174;
	sub_82EC7ED8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq 0x82e931d4
	if (ctx.cr0.eq) goto loc_82E931D4;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec6398
	ctx.lr = 0x82E93194;
	sub_82EC6398(ctx, base);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11576
	ctx.r4.s64 = ctx.r11.s64 + 11576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec6590
	ctx.lr = 0x82E931A8;
	sub_82EC6590(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ebac38
	ctx.lr = 0x82E931D0;
	sub_82EBAC38(ctx, base);
	// b 0x82e93118
	goto loc_82E93118;
loc_82E931D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E931D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E931E0"))) PPC_WEAK_FUNC(sub_82E931E0);
PPC_FUNC_IMPL(__imp__sub_82E931E0) {
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
	// bl 0x82e92f68
	ctx.lr = 0x82E93200;
	sub_82E92F68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e9321c
	if (ctx.cr0.eq) goto loc_82E9321C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9321C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9321C:
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

__attribute__((alias("__imp__sub_82E93238"))) PPC_WEAK_FUNC(sub_82E93238);
PPC_FUNC_IMPL(__imp__sub_82E93238) {
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
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// addi r11,r11,-25432
	ctx.r11.s64 = ctx.r11.s64 + -25432;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e93278
	if (ctx.cr0.eq) goto loc_82E93278;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93278:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93290
	if (ctx.cr0.eq) goto loc_82E93290;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e99598
	ctx.lr = 0x82E93298;
	sub_82E99598(ctx, base);
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

__attribute__((alias("__imp__sub_82E932B0"))) PPC_WEAK_FUNC(sub_82E932B0);
PPC_FUNC_IMPL(__imp__sub_82E932B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,24852
	ctx.r3.s64 = ctx.r11.s64 + 24852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E932BC"))) PPC_WEAK_FUNC(sub_82E932BC);
PPC_FUNC_IMPL(__imp__sub_82E932BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E932C0"))) PPC_WEAK_FUNC(sub_82E932C0);
PPC_FUNC_IMPL(__imp__sub_82E932C0) {
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
	// bl 0x82e99750
	ctx.lr = 0x82E932D8;
	sub_82E99750(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82E932F4"))) PPC_WEAK_FUNC(sub_82E932F4);
PPC_FUNC_IMPL(__imp__sub_82E932F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E932F8"))) PPC_WEAK_FUNC(sub_82E932F8);
PPC_FUNC_IMPL(__imp__sub_82E932F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E93300;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e997d0
	ctx.lr = 0x82E9330C;
	sub_82E997D0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,3972
	ctx.r11.s64 = ctx.r11.s64 + 3972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r11,-9856
	ctx.r28.s64 = ctx.r11.s64 + -9856;
	// ble cr6,0x82e933d0
	if (!ctx.cr6.gt) goto loc_82E933D0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e933d0
	if (ctx.cr0.eq) goto loc_82E933D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93364
	if (ctx.cr6.lt) goto loc_82E93364;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93388
	goto loc_82E93388;
loc_82E93364:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93388:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e933bc
	if (!ctx.cr6.eq) goto loc_82E933BC;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e933bc
	if (ctx.cr6.eq) goto loc_82E933BC;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E933BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E933BC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93364
	if (ctx.cr6.lt) goto loc_82E93364;
loc_82E933D0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e93404
	if (ctx.cr6.eq) goto loc_82E93404;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e93404
	if (ctx.cr6.eq) goto loc_82E93404;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E9340C"))) PPC_WEAK_FUNC(sub_82E9340C);
PPC_FUNC_IMPL(__imp__sub_82E9340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93410"))) PPC_WEAK_FUNC(sub_82E93410);
PPC_FUNC_IMPL(__imp__sub_82E93410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,24848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24848);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24848, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93424"))) PPC_WEAK_FUNC(sub_82E93424);
PPC_FUNC_IMPL(__imp__sub_82E93424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93428"))) PPC_WEAK_FUNC(sub_82E93428);
PPC_FUNC_IMPL(__imp__sub_82E93428) {
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
	// bl 0x82e93238
	ctx.lr = 0x82E93448;
	sub_82E93238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93464
	if (ctx.cr0.eq) goto loc_82E93464;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93464:
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

__attribute__((alias("__imp__sub_82E93480"))) PPC_WEAK_FUNC(sub_82E93480);
PPC_FUNC_IMPL(__imp__sub_82E93480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E93488;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e93610
	if (!ctx.cr6.eq) goto loc_82E93610;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e93534
	if (!ctx.cr6.gt) goto loc_82E93534;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E934D4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e934e8
	if (ctx.cr6.lt) goto loc_82E934E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e934f4
	goto loc_82E934F4;
loc_82E934E8:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_82E934F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e93520
	if (!ctx.cr6.eq) goto loc_82E93520;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9357c
	if (!ctx.cr0.eq) goto loc_82E9357C;
loc_82E93520:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e934d4
	if (ctx.cr6.lt) goto loc_82E934D4;
loc_82E93534:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,3972
	ctx.r11.s64 = ctx.r11.s64 + 3972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82e935e8
	if (!ctx.cr6.gt) goto loc_82E935E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E93568:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93584
	if (ctx.cr6.lt) goto loc_82E93584;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e935a8
	goto loc_82E935A8;
loc_82E9357C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e93614
	goto loc_82E93614;
loc_82E93584:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82E935A8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e935d4
	if (!ctx.cr6.eq) goto loc_82E935D4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E935CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9357c
	if (!ctx.cr0.eq) goto loc_82E9357C;
loc_82E935D4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93568
	if (ctx.cr6.lt) goto loc_82E93568;
loc_82E935E8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82eccfb0
	ctx.lr = 0x82E935F0;
	sub_82ECCFB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_82E93610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E93614:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E9361C"))) PPC_WEAK_FUNC(sub_82E9361C);
PPC_FUNC_IMPL(__imp__sub_82E9361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93620"))) PPC_WEAK_FUNC(sub_82E93620);
PPC_FUNC_IMPL(__imp__sub_82E93620) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9364c
	if (!ctx.cr0.eq) goto loc_82E9364C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e936e0
	if (!ctx.cr6.gt) goto loc_82E936E0;
loc_82E9364C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r4,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9366c
	if (ctx.cr0.eq) goto loc_82E9366C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9366C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9366C:
	// lwz r31,108(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82e936d0
	if (ctx.cr0.eq) goto loc_82E936D0;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 * 12;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93690
	if (!ctx.cr6.gt) goto loc_82E93690;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93690:
	// bl 0x82625f08
	ctx.lr = 0x82E93694;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e936d0
	if (ctx.cr0.eq) goto loc_82E936D0;
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82e936c8
	if (ctx.cr0.lt) goto loc_82E936C8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82E936B0:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82e936b0
	if (!ctx.cr0.lt) goto loc_82E936B0;
loc_82E936C8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e936d4
	goto loc_82E936D4;
loc_82E936D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E936D4:
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82E936E0:
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

__attribute__((alias("__imp__sub_82E936F8"))) PPC_WEAK_FUNC(sub_82E936F8);
PPC_FUNC_IMPL(__imp__sub_82E936F8) {
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
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93724
	if (!ctx.cr0.eq) goto loc_82E93724;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93780
	if (!ctx.cr6.gt) goto loc_82E93780;
loc_82E93724:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93744
	if (ctx.cr0.eq) goto loc_82E93744;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93744:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e9375c
	if (!ctx.cr0.eq) goto loc_82E9375C;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// b 0x82e9377c
	goto loc_82E9377C;
loc_82E9375C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e93774
	if (!ctx.cr6.gt) goto loc_82E93774;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93774:
	// bl 0x82625f08
	ctx.lr = 0x82E93778;
	sub_82625F08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_82E9377C:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_82E93780:
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

__attribute__((alias("__imp__sub_82E93798"))) PPC_WEAK_FUNC(sub_82E93798);
PPC_FUNC_IMPL(__imp__sub_82E93798) {
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
	// bl 0x82e99528
	ctx.lr = 0x82E937B0;
	sub_82E99528(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// addi r9,r11,-25432
	ctx.r9.s64 = ctx.r11.s64 + -25432;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,-6136
	ctx.r8.s64 = ctx.r8.s64 + -6136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r7,r11,16936
	ctx.r7.s64 = ctx.r11.s64 + 16936;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E93834"))) PPC_WEAK_FUNC(sub_82E93834);
PPC_FUNC_IMPL(__imp__sub_82E93834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93838"))) PPC_WEAK_FUNC(sub_82E93838);
PPC_FUNC_IMPL(__imp__sub_82E93838) {
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
	// bl 0x82e99cd0
	ctx.lr = 0x82E93850;
	sub_82E99CD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93860
	if (!ctx.cr0.eq) goto loc_82E93860;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9389c
	goto loc_82E9389C;
loc_82E93860:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e9387c
	if (!ctx.cr6.eq) goto loc_82E9387C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e936f8
	ctx.lr = 0x82E9387C;
	sub_82E936F8(ctx, base);
loc_82E9387C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e93898
	if (!ctx.cr6.eq) goto loc_82E93898;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e93620
	ctx.lr = 0x82E93898;
	sub_82E93620(ctx, base);
loc_82E93898:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9389C:
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

__attribute__((alias("__imp__sub_82E938B0"))) PPC_WEAK_FUNC(sub_82E938B0);
PPC_FUNC_IMPL(__imp__sub_82E938B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E938B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e938d4
	if (!ctx.cr6.eq) goto loc_82E938D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e93970
	goto loc_82E93970;
loc_82E938D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-30720
	ctx.r30.s64 = ctx.r11.s64 + -30720;
	// bl 0x826b4b60
	ctx.lr = 0x82E938E4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E938EC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82e93920
	if (!ctx.cr0.eq) goto loc_82E93920;
	// bl 0x82b568c0
	ctx.lr = 0x82E938FC;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93964
	if (ctx.cr0.eq) goto loc_82E93964;
	// bl 0x82ca3b30
	ctx.lr = 0x82E93908;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e93620
	ctx.lr = 0x82E93918;
	sub_82E93620(ctx, base);
loc_82E93918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e93970
	goto loc_82E93970;
loc_82E93920:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-30744
	ctx.r30.s64 = ctx.r11.s64 + -30744;
	// bl 0x826b4b60
	ctx.lr = 0x82E9392C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E93934;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e93964
	if (!ctx.cr0.eq) goto loc_82E93964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E93944;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93964
	if (ctx.cr0.eq) goto loc_82E93964;
	// bl 0x82ca3b30
	ctx.lr = 0x82E93950;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e936f8
	ctx.lr = 0x82E93960;
	sub_82E936F8(ctx, base);
	// b 0x82e93918
	goto loc_82E93918;
loc_82E93964:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e99a58
	ctx.lr = 0x82E93970;
	sub_82E99A58(ctx, base);
loc_82E93970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E93978"))) PPC_WEAK_FUNC(sub_82E93978);
PPC_FUNC_IMPL(__imp__sub_82E93978) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82625f08
	ctx.lr = 0x82E9398C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9399c
	if (ctx.cr0.eq) goto loc_82E9399C;
	// bl 0x82e93798
	ctx.lr = 0x82E93998;
	sub_82E93798(ctx, base);
	// b 0x82e939a0
	goto loc_82E939A0;
loc_82E9399C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E939A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E939B0"))) PPC_WEAK_FUNC(sub_82E939B0);
PPC_FUNC_IMPL(__imp__sub_82E939B0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E939D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e93a00
	if (!ctx.cr6.eq) goto loc_82E93A00;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// b 0x82e93a14
	goto loc_82E93A14;
loc_82E93A00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E93A14:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82E93A2C"))) PPC_WEAK_FUNC(sub_82E93A2C);
PPC_FUNC_IMPL(__imp__sub_82E93A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93A30"))) PPC_WEAK_FUNC(sub_82E93A30);
PPC_FUNC_IMPL(__imp__sub_82E93A30) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e93a80
	if (!ctx.cr6.eq) goto loc_82E93A80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// b 0x82e93a94
	goto loc_82E93A94;
loc_82E93A80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E93A94:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82E93AAC"))) PPC_WEAK_FUNC(sub_82E93AAC);
PPC_FUNC_IMPL(__imp__sub_82E93AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93AB0"))) PPC_WEAK_FUNC(sub_82E93AB0);
PPC_FUNC_IMPL(__imp__sub_82E93AB0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x82e93b10
	if (!ctx.cr6.eq) goto loc_82E93B10;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,124(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82e93b28
	goto loc_82E93B28;
loc_82E93B10:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82E93B28:
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

__attribute__((alias("__imp__sub_82E93B3C"))) PPC_WEAK_FUNC(sub_82E93B3C);
PPC_FUNC_IMPL(__imp__sub_82E93B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93B40"))) PPC_WEAK_FUNC(sub_82E93B40);
PPC_FUNC_IMPL(__imp__sub_82E93B40) {
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
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// addi r11,r11,-25312
	ctx.r11.s64 = ctx.r11.s64 + -25312;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e93b80
	if (ctx.cr0.eq) goto loc_82E93B80;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93B80:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93b98
	if (ctx.cr0.eq) goto loc_82E93B98;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9adc0
	ctx.lr = 0x82E93BA0;
	sub_82E9ADC0(ctx, base);
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

__attribute__((alias("__imp__sub_82E93BB8"))) PPC_WEAK_FUNC(sub_82E93BB8);
PPC_FUNC_IMPL(__imp__sub_82E93BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,25132
	ctx.r3.s64 = ctx.r11.s64 + 25132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93BC4"))) PPC_WEAK_FUNC(sub_82E93BC4);
PPC_FUNC_IMPL(__imp__sub_82E93BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93BC8"))) PPC_WEAK_FUNC(sub_82E93BC8);
PPC_FUNC_IMPL(__imp__sub_82E93BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e99d70
	sub_82E99D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93BCC"))) PPC_WEAK_FUNC(sub_82E93BCC);
PPC_FUNC_IMPL(__imp__sub_82E93BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93BD0"))) PPC_WEAK_FUNC(sub_82E93BD0);
PPC_FUNC_IMPL(__imp__sub_82E93BD0) {
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
	// bl 0x82e9aea8
	ctx.lr = 0x82E93BE8;
	sub_82E9AEA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82E93C04"))) PPC_WEAK_FUNC(sub_82E93C04);
PPC_FUNC_IMPL(__imp__sub_82E93C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93C08"))) PPC_WEAK_FUNC(sub_82E93C08);
PPC_FUNC_IMPL(__imp__sub_82E93C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E93C10;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e9aef0
	ctx.lr = 0x82E93C1C;
	sub_82E9AEF0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,3972
	ctx.r11.s64 = ctx.r11.s64 + 3972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r11,-9856
	ctx.r28.s64 = ctx.r11.s64 + -9856;
	// ble cr6,0x82e93ce0
	if (!ctx.cr6.gt) goto loc_82E93CE0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e93ce0
	if (ctx.cr0.eq) goto loc_82E93CE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93c74
	if (ctx.cr6.lt) goto loc_82E93C74;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93c98
	goto loc_82E93C98;
loc_82E93C74:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93C98:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e93ccc
	if (!ctx.cr6.eq) goto loc_82E93CCC;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e93ccc
	if (ctx.cr6.eq) goto loc_82E93CCC;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93CCC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93c74
	if (ctx.cr6.lt) goto loc_82E93C74;
loc_82E93CE0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e93d74
	if (ctx.cr6.eq) goto loc_82E93D74;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e93d74
	if (ctx.cr6.eq) goto loc_82E93D74;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e93d48
	if (ctx.cr6.eq) goto loc_82E93D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e93d48
	if (ctx.cr6.eq) goto loc_82E93D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93D48:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e93d74
	if (ctx.cr6.eq) goto loc_82E93D74;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,150
	ctx.r6.s64 = 150;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93D74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E93D7C"))) PPC_WEAK_FUNC(sub_82E93D7C);
PPC_FUNC_IMPL(__imp__sub_82E93D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93D80"))) PPC_WEAK_FUNC(sub_82E93D80);
PPC_FUNC_IMPL(__imp__sub_82E93D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,25128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,25128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93D94"))) PPC_WEAK_FUNC(sub_82E93D94);
PPC_FUNC_IMPL(__imp__sub_82E93D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93D98"))) PPC_WEAK_FUNC(sub_82E93D98);
PPC_FUNC_IMPL(__imp__sub_82E93D98) {
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
	// bl 0x82e93b40
	ctx.lr = 0x82E93DB8;
	sub_82E93B40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93dd4
	if (ctx.cr0.eq) goto loc_82E93DD4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93DD4:
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

__attribute__((alias("__imp__sub_82E93DF0"))) PPC_WEAK_FUNC(sub_82E93DF0);
PPC_FUNC_IMPL(__imp__sub_82E93DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E93DF8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e9421c
	if (!ctx.cr6.eq) goto loc_82E9421C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ece9d0
	ctx.lr = 0x82E93E14;
	sub_82ECE9D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82ece780
	ctx.lr = 0x82E93E38;
	sub_82ECE780(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e939b0
	ctx.lr = 0x82E93E44;
	sub_82E939B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e93ab0
	ctx.lr = 0x82E93E50;
	sub_82E93AB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82ece840
	ctx.lr = 0x82E93E74;
	sub_82ECE840(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82ecdd10
	ctx.lr = 0x82E93E84;
	sub_82ECDD10(ctx, base);
	// b 0x82e93ea0
	goto loc_82E93EA0;
loc_82E93E88:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e93a30
	ctx.lr = 0x82E93E90;
	sub_82E93A30(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e93eac
	if (ctx.cr6.eq) goto loc_82E93EAC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ecce68
	ctx.lr = 0x82E93EA0;
	sub_82ECCE68(ctx, base);
loc_82E93EA0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82e93e88
	if (!ctx.cr6.eq) goto loc_82E93E88;
	// b 0x82e93eb0
	goto loc_82E93EB0;
loc_82E93EAC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E93EB0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93ec0
	if (!ctx.cr0.eq) goto loc_82E93EC0;
loc_82E93EB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e94220
	goto loc_82E94220;
loc_82E93EC0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e93f78
	if (!ctx.cr6.gt) goto loc_82E93F78;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E93EE0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93ef4
	if (ctx.cr6.lt) goto loc_82E93EF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e93f00
	goto loc_82E93F00;
loc_82E93EF4:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_82E93F00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e93f64
	if (!ctx.cr6.eq) goto loc_82E93F64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93f48
	if (ctx.cr0.eq) goto loc_82E93F48;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93f40
	if (ctx.cr0.eq) goto loc_82E93F40;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93eb8
	if (ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e93f64
	goto loc_82E93F64;
loc_82E93F40:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82e93f60
	goto loc_82E93F60;
loc_82E93F48:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93f5c
	if (ctx.cr0.eq) goto loc_82E93F5C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93eb8
	if (!ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e93f64
	goto loc_82E93F64;
loc_82E93F5C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E93F60:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82E93F64:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93ee0
	if (ctx.cr6.lt) goto loc_82E93EE0;
loc_82E93F78:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,3972
	ctx.r25.s64 = ctx.r11.s64 + 3972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e9405c
	if (!ctx.cr6.gt) goto loc_82E9405C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E93FAC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93fc0
	if (ctx.cr6.lt) goto loc_82E93FC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93fe4
	goto loc_82E93FE4;
loc_82E93FC0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93FE4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e94048
	if (!ctx.cr6.eq) goto loc_82E94048;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e9402c
	if (ctx.cr0.eq) goto loc_82E9402C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e94024
	if (ctx.cr0.eq) goto loc_82E94024;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93eb8
	if (ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e94048
	goto loc_82E94048;
loc_82E94024:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82e94044
	goto loc_82E94044;
loc_82E9402C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e94040
	if (ctx.cr0.eq) goto loc_82E94040;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93eb8
	if (!ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e94048
	goto loc_82E94048;
loc_82E94040:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E94044:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82E94048:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93fac
	if (ctx.cr6.lt) goto loc_82E93FAC;
loc_82E9405C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r28,0
	ctx.r28.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e940f4
	if (!ctx.cr6.gt) goto loc_82E940F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E94080:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94094
	if (ctx.cr6.lt) goto loc_82E94094;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e940a0
	goto loc_82E940A0;
loc_82E94094:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_82E940A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e940e0
	if (!ctx.cr6.eq) goto loc_82E940E0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E940C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e940d8
	if (ctx.cr0.eq) goto loc_82E940D8;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93eb8
	if (ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e940e0
	goto loc_82E940E0;
loc_82E940D8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93eb8
	if (!ctx.cr0.eq) goto loc_82E93EB8;
loc_82E940E0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94080
	if (ctx.cr6.lt) goto loc_82E94080;
loc_82E940F4:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e941ac
	if (!ctx.cr6.gt) goto loc_82E941AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E94120:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94134
	if (ctx.cr6.lt) goto loc_82E94134;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e94158
	goto loc_82E94158;
loc_82E94134:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E94158:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e94198
	if (!ctx.cr6.eq) goto loc_82E94198;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9417C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e94190
	if (ctx.cr0.eq) goto loc_82E94190;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93eb8
	if (ctx.cr0.eq) goto loc_82E93EB8;
	// b 0x82e94198
	goto loc_82E94198;
loc_82E94190:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e93eb8
	if (!ctx.cr0.eq) goto loc_82E93EB8;
loc_82E94198:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94120
	if (ctx.cr6.lt) goto loc_82E94120;
loc_82E941AC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e941e4
	if (ctx.cr0.eq) goto loc_82E941E4;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82e94210
	goto loc_82E94210;
loc_82E941E4:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
loc_82E94210:
	// stfs f9,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82E9421C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E94220:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E94228"))) PPC_WEAK_FUNC(sub_82E94228);
PPC_FUNC_IMPL(__imp__sub_82E94228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E94230;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r10,-30984
	ctx.r30.s64 = ctx.r10.s64 + -30984;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E94278:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e94278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E94278;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r28,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r28.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r29,r10,6288
	ctx.r29.s64 = ctx.r10.s64 + 6288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x821ae8c0
	ctx.lr = 0x82E942A4;
	sub_821AE8C0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82E942D0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e942d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E942D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r28.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821ae8c0
	ctx.lr = 0x82E942F4;
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-9856
	ctx.r11.s64 = ctx.r11.s64 + -9856;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e94310
	if (!ctx.cr6.eq) goto loc_82E94310;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82e94334
	goto loc_82E94334;
loc_82E94310:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
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
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E94334:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E94348"))) PPC_WEAK_FUNC(sub_82E94348);
PPC_FUNC_IMPL(__imp__sub_82E94348) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e94374
	if (!ctx.cr0.eq) goto loc_82E94374;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e94408
	if (!ctx.cr6.gt) goto loc_82E94408;
loc_82E94374:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r4,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e94394
	if (ctx.cr0.eq) goto loc_82E94394;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E94394:
	// lwz r31,120(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82e943f8
	if (ctx.cr0.eq) goto loc_82E943F8;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 * 12;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e943b8
	if (!ctx.cr6.gt) goto loc_82E943B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E943B8:
	// bl 0x82625f08
	ctx.lr = 0x82E943BC;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e943f8
	if (ctx.cr0.eq) goto loc_82E943F8;
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82e943f0
	if (ctx.cr0.lt) goto loc_82E943F0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82E943D8:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82e943d8
	if (!ctx.cr0.lt) goto loc_82E943D8;
loc_82E943F0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e943fc
	goto loc_82E943FC;
loc_82E943F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E943FC:
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
loc_82E94408:
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

__attribute__((alias("__imp__sub_82E94420"))) PPC_WEAK_FUNC(sub_82E94420);
PPC_FUNC_IMPL(__imp__sub_82E94420) {
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
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e9444c
	if (!ctx.cr0.eq) goto loc_82E9444C;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e944a8
	if (!ctx.cr6.gt) goto loc_82E944A8;
loc_82E9444C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9446c
	if (ctx.cr0.eq) goto loc_82E9446C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9446C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9446C:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e94484
	if (!ctx.cr0.eq) goto loc_82E94484;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// b 0x82e944a4
	goto loc_82E944A4;
loc_82E94484:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e9449c
	if (!ctx.cr6.gt) goto loc_82E9449C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9449C:
	// bl 0x82625f08
	ctx.lr = 0x82E944A0;
	sub_82625F08(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_82E944A4:
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_82E944A8:
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

__attribute__((alias("__imp__sub_82E944C0"))) PPC_WEAK_FUNC(sub_82E944C0);
PPC_FUNC_IMPL(__imp__sub_82E944C0) {
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
	// bl 0x82e9ad58
	ctx.lr = 0x82E944D8;
	sub_82E9AD58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// lis r9,-32023
	ctx.r9.s64 = -2098659328;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,-6136
	ctx.r8.s64 = ctx.r8.s64 + -6136;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r9,16936
	ctx.r9.s64 = ctx.r9.s64 + 16936;
	// addi r11,r11,-25312
	ctx.r11.s64 = ctx.r11.s64 + -25312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E9456C"))) PPC_WEAK_FUNC(sub_82E9456C);
PPC_FUNC_IMPL(__imp__sub_82E9456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94570"))) PPC_WEAK_FUNC(sub_82E94570);
PPC_FUNC_IMPL(__imp__sub_82E94570) {
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
	// bl 0x82e99cd0
	ctx.lr = 0x82E94588;
	sub_82E99CD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e94598
	if (!ctx.cr0.eq) goto loc_82E94598;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e945d4
	goto loc_82E945D4;
loc_82E94598:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e945b4
	if (!ctx.cr6.eq) goto loc_82E945B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94420
	ctx.lr = 0x82E945B4;
	sub_82E94420(ctx, base);
loc_82E945B4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e945d0
	if (!ctx.cr6.eq) goto loc_82E945D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94348
	ctx.lr = 0x82E945D0;
	sub_82E94348(ctx, base);
loc_82E945D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E945D4:
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

__attribute__((alias("__imp__sub_82E945E8"))) PPC_WEAK_FUNC(sub_82E945E8);
PPC_FUNC_IMPL(__imp__sub_82E945E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E945F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e9460c
	if (!ctx.cr6.eq) goto loc_82E9460C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e946a8
	goto loc_82E946A8;
loc_82E9460C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-30720
	ctx.r30.s64 = ctx.r11.s64 + -30720;
	// bl 0x826b4b60
	ctx.lr = 0x82E9461C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E94624;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82e94658
	if (!ctx.cr0.eq) goto loc_82E94658;
	// bl 0x82b568c0
	ctx.lr = 0x82E94634;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9469c
	if (ctx.cr0.eq) goto loc_82E9469C;
	// bl 0x82ca3b30
	ctx.lr = 0x82E94640;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e94348
	ctx.lr = 0x82E94650;
	sub_82E94348(ctx, base);
loc_82E94650:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e946a8
	goto loc_82E946A8;
loc_82E94658:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-30744
	ctx.r30.s64 = ctx.r11.s64 + -30744;
	// bl 0x826b4b60
	ctx.lr = 0x82E94664;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E9466C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e9469c
	if (!ctx.cr0.eq) goto loc_82E9469C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E9467C;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9469c
	if (ctx.cr0.eq) goto loc_82E9469C;
	// bl 0x82ca3b30
	ctx.lr = 0x82E94688;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e94420
	ctx.lr = 0x82E94698;
	sub_82E94420(ctx, base);
	// b 0x82e94650
	goto loc_82E94650;
loc_82E9469C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e9b280
	ctx.lr = 0x82E946A8;
	sub_82E9B280(ctx, base);
loc_82E946A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E946B0"))) PPC_WEAK_FUNC(sub_82E946B0);
PPC_FUNC_IMPL(__imp__sub_82E946B0) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82625f08
	ctx.lr = 0x82E946C4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e946d4
	if (ctx.cr0.eq) goto loc_82E946D4;
	// bl 0x82e944c0
	ctx.lr = 0x82E946D0;
	sub_82E944C0(ctx, base);
	// b 0x82e946d8
	goto loc_82E946D8;
loc_82E946D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E946D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E946E8"))) PPC_WEAK_FUNC(sub_82E946E8);
PPC_FUNC_IMPL(__imp__sub_82E946E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,26440
	ctx.r3.s64 = ctx.r11.s64 + 26440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E946F4"))) PPC_WEAK_FUNC(sub_82E946F4);
PPC_FUNC_IMPL(__imp__sub_82E946F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E946F8"))) PPC_WEAK_FUNC(sub_82E946F8);
PPC_FUNC_IMPL(__imp__sub_82E946F8) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e94728
	if (ctx.cr0.eq) goto loc_82E94728;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94720;
	sub_82ECC6B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82E94728:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9473C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82e94750
	if (ctx.cr0.eq) goto loc_82E94750;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc3c0
	ctx.lr = 0x82E9474C;
	sub_82ECC3C0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82E94750:
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

__attribute__((alias("__imp__sub_82E94768"))) PPC_WEAK_FUNC(sub_82E94768);
PPC_FUNC_IMPL(__imp__sub_82E94768) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e94798
	if (ctx.cr0.eq) goto loc_82E94798;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94790;
	sub_82ECC6B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82E94798:
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

__attribute__((alias("__imp__sub_82E947AC"))) PPC_WEAK_FUNC(sub_82E947AC);
PPC_FUNC_IMPL(__imp__sub_82E947AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E947B0"))) PPC_WEAK_FUNC(sub_82E947B0);
PPC_FUNC_IMPL(__imp__sub_82E947B0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	ctx.lr = 0x82E947C4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e947ec
	if (ctx.cr0.eq) goto loc_82E947EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-25192
	ctx.r10.s64 = ctx.r11.s64 + -25192;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82e947f0
	goto loc_82E947F0;
loc_82E947EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E947F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E94800"))) PPC_WEAK_FUNC(sub_82E94800);
PPC_FUNC_IMPL(__imp__sub_82E94800) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,26436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// addi r31,r9,25408
	ctx.r31.s64 = ctx.r9.s64 + 25408;
	// bne 0x82e9485c
	if (!ctx.cr0.eq) goto loc_82E9485C;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-9148(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -9148);
	// stw r11,26436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26436, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82e94848
	if (ctx.cr0.eq) goto loc_82E94848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82E94848:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,4120
	ctx.r3.s64 = ctx.r10.s64 + 4120;
	// stb r11,-9148(r9)
	PPC_STORE_U8(ctx.r9.u32 + -9148, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82E9485C;
	sub_82CA3700(ctx, base);
loc_82E9485C:
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

__attribute__((alias("__imp__sub_82E94874"))) PPC_WEAK_FUNC(sub_82E94874);
PPC_FUNC_IMPL(__imp__sub_82E94874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94878"))) PPC_WEAK_FUNC(sub_82E94878);
PPC_FUNC_IMPL(__imp__sub_82E94878) {
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
	// bl 0x82e94800
	ctx.lr = 0x82E94890;
	sub_82E94800(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82e948f8
	if (!ctx.cr0.gt) goto loc_82E948F8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82E948AC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E948B8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e948dc
	if (ctx.cr0.eq) goto loc_82E948DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e948b8
	if (ctx.cr6.eq) goto loc_82E948B8;
loc_82E948DC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e94908
	if (ctx.cr0.eq) goto loc_82E94908;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e948ac
	if (ctx.cr6.lt) goto loc_82E948AC;
loc_82E948F8:
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82e94914
	if (!ctx.cr6.eq) goto loc_82E94914;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9492c
	goto loc_82E9492C;
loc_82E94908:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x82e94928
	goto loc_82E94928;
loc_82E94914:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
loc_82E94928:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9492C:
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

__attribute__((alias("__imp__sub_82E94940"))) PPC_WEAK_FUNC(sub_82E94940);
PPC_FUNC_IMPL(__imp__sub_82E94940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E94948;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-27084
	ctx.r9.s64 = ctx.r11.s64 + -27084;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E94978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82e94978
	if (!ctx.cr0.eq) goto loc_82E94978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94878
	ctx.lr = 0x82E94994;
	sub_82E94878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e949a4
	if (!ctx.cr0.eq) goto loc_82E949A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82e949b0
	goto loc_82E949B0;
loc_82E949A4:
	// bl 0x82e94800
	ctx.lr = 0x82E949A8;
	sub_82E94800(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82E949B0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bne cr6,0x82e949d4
	if (!ctx.cr6.eq) goto loc_82E949D4;
	// bl 0x82e7ca00
	ctx.lr = 0x82E949CC;
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// b 0x82e949dc
	goto loc_82E949DC;
loc_82E949D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82E949DC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e949f8
	if (ctx.cr0.eq) goto loc_82E949F8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9704);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9704, ctx.r10.u32);
loc_82E949F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E94A04"))) PPC_WEAK_FUNC(sub_82E94A04);
PPC_FUNC_IMPL(__imp__sub_82E94A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94A08"))) PPC_WEAK_FUNC(sub_82E94A08);
PPC_FUNC_IMPL(__imp__sub_82E94A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,26716
	ctx.r3.s64 = ctx.r11.s64 + 26716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E94A14"))) PPC_WEAK_FUNC(sub_82E94A14);
PPC_FUNC_IMPL(__imp__sub_82E94A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94A18"))) PPC_WEAK_FUNC(sub_82E94A18);
PPC_FUNC_IMPL(__imp__sub_82E94A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E94A20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-25112
	ctx.r11.s64 = ctx.r11.s64 + -25112;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e94a58
	if (ctx.cr0.eq) goto loc_82E94A58;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82E94A58:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e94a74
	if (ctx.cr0.eq) goto loc_82E94A74;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82E94A74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E94A88"))) PPC_WEAK_FUNC(sub_82E94A88);
PPC_FUNC_IMPL(__imp__sub_82E94A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82E94A90;
	sub_82CA2BDC(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e94ac0
	if (!ctx.cr6.eq) goto loc_82E94AC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e94ad4
	if (ctx.cr6.eq) goto loc_82E94AD4;
loc_82E94AC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E94AD4:
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x82ecbbe0
	ctx.lr = 0x82E94B08;
	sub_82ECBBE0(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82e94b1c
	if (!ctx.cr0.eq) goto loc_82E94B1C;
loc_82E94B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e94c60
	goto loc_82E94C60;
loc_82E94B1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb688
	ctx.lr = 0x82E94B28;
	sub_82ECB688(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82e94b14
	if (!ctx.cr6.lt) goto loc_82E94B14;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94b68
	if (!ctx.cr6.gt) goto loc_82E94B68;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E94B44:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82ecc2b8
	ctx.lr = 0x82E94B54;
	sub_82ECC2B8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94b44
	if (ctx.cr6.lt) goto loc_82E94B44;
loc_82E94B68:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r27,4
	ctx.r27.s64 = 4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94bc8
	if (!ctx.cr6.gt) goto loc_82E94BC8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E94B80:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ecb688
	ctx.lr = 0x82E94B90;
	sub_82ECB688(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82e94bb4
	if (!ctx.cr6.lt) goto loc_82E94BB4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E94BB4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94b80
	if (ctx.cr6.lt) goto loc_82E94B80;
loc_82E94BC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E94BD0;
	sub_82ECB720(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94c54
	if (!ctx.cr6.gt) goto loc_82E94C54;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82E94BE8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82e94c2c
	if (!ctx.cr6.eq) goto loc_82E94C2C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E94C18;
	sub_82ECC4C8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// b 0x82e94c30
	goto loc_82E94C30;
loc_82E94C2C:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
loc_82E94C30:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stb r25,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r25.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94be8
	if (ctx.cr6.lt) goto loc_82E94BE8;
loc_82E94C54:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E94C5C;
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82E94C60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82E94C68"))) PPC_WEAK_FUNC(sub_82E94C68);
PPC_FUNC_IMPL(__imp__sub_82E94C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E94C70;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94cf8
	if (!ctx.cr6.gt) goto loc_82E94CF8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E94C98:
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e94cdc
	if (!ctx.cr0.eq) goto loc_82E94CDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82ecb688
	ctx.lr = 0x82E94CB8;
	sub_82ECB688(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82e94cdc
	if (!ctx.cr6.lt) goto loc_82E94CDC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E94CDC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94c98
	if (ctx.cr6.lt) goto loc_82E94C98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e94d00
	if (!ctx.cr6.eq) goto loc_82E94D00;
loc_82E94CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e94d94
	goto loc_82E94D94;
loc_82E94D00:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E94D08;
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94d88
	if (!ctx.cr6.gt) goto loc_82E94D88;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E94D20:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e94d40
	if (!ctx.cr0.eq) goto loc_82E94D40;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82e94d70
	if (!ctx.cr6.eq) goto loc_82E94D70;
loc_82E94D40:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E94D5C;
	sub_82ECC4C8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_82E94D70:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94d20
	if (ctx.cr6.lt) goto loc_82E94D20;
loc_82E94D88:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E94D90;
	sub_82ECB740(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E94D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E94D9C"))) PPC_WEAK_FUNC(sub_82E94D9C);
PPC_FUNC_IMPL(__imp__sub_82E94D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94DA0"))) PPC_WEAK_FUNC(sub_82E94DA0);
PPC_FUNC_IMPL(__imp__sub_82E94DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E94DA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e94e5c
	if (ctx.cr0.eq) goto loc_82E94E5C;
	// bl 0x82ecd028
	ctx.lr = 0x82E94DC0;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e94e54
	if (ctx.cr0.eq) goto loc_82E94E54;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94DD4;
	sub_82ECC6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E94DDC;
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94e4c
	if (!ctx.cr6.gt) goto loc_82E94E4C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E94DF4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e94e14
	if (!ctx.cr0.eq) goto loc_82E94E14;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e94e34
	if (ctx.cr0.eq) goto loc_82E94E34;
loc_82E94E14:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E94E30;
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82E94E34:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94df4
	if (ctx.cr6.lt) goto loc_82E94DF4;
loc_82E94E4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E94E54;
	sub_82ECB740(ctx, base);
loc_82E94E54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82eccfd0
	ctx.lr = 0x82E94E5C;
	sub_82ECCFD0(ctx, base);
loc_82E94E5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E94E64"))) PPC_WEAK_FUNC(sub_82E94E64);
PPC_FUNC_IMPL(__imp__sub_82E94E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94E68"))) PPC_WEAK_FUNC(sub_82E94E68);
PPC_FUNC_IMPL(__imp__sub_82E94E68) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94E88;
	sub_82ECC6B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// ble cr6,0x82e94ee8
	if (!ctx.cr6.gt) goto loc_82E94EE8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82E94EAC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x82e94ed4
	if (ctx.cr0.eq) goto loc_82E94ED4;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
loc_82E94ED4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e94eac
	if (ctx.cr6.lt) goto loc_82E94EAC;
loc_82E94EE8:
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

__attribute__((alias("__imp__sub_82E94F00"))) PPC_WEAK_FUNC(sub_82E94F00);
PPC_FUNC_IMPL(__imp__sub_82E94F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E94F08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94F1C;
	sub_82ECC6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E94F24;
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e94f84
	if (!ctx.cr6.gt) goto loc_82E94F84;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E94F3C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e94f6c
	if (ctx.cr0.eq) goto loc_82E94F6C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E94F68;
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82E94F6C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94f3c
	if (ctx.cr6.lt) goto loc_82E94F3C;
loc_82E94F84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E94F8C;
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E94F98"))) PPC_WEAK_FUNC(sub_82E94F98);
PPC_FUNC_IMPL(__imp__sub_82E94F98) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e94fc0
	if (ctx.cr0.eq) goto loc_82E94FC0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94FC0;
	sub_82ECC6B0(ctx, base);
loc_82E94FC0:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e94fd4
	if (ctx.cr0.eq) goto loc_82E94FD4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82E94FD4;
	sub_82ECC6B0(ctx, base);
loc_82E94FD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E94FF8"))) PPC_WEAK_FUNC(sub_82E94FF8);
PPC_FUNC_IMPL(__imp__sub_82E94FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E95000;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e95030
	if (ctx.cr0.eq) goto loc_82E95030;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9502C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_82E95030:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9504c
	if (ctx.cr0.eq) goto loc_82E9504C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E95048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_82E9504C:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e9506c
	if (!ctx.cr6.gt) goto loc_82E9506C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E9506C:
	// bl 0x82625f08
	ctx.lr = 0x82E95070;
	sub_82625F08(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e9508c
	if (!ctx.cr6.gt) goto loc_82E9508C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E9508C:
	// bl 0x82625f08
	ctx.lr = 0x82E95090;
	sub_82625F08(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E9509C"))) PPC_WEAK_FUNC(sub_82E9509C);
PPC_FUNC_IMPL(__imp__sub_82E9509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E950A0"))) PPC_WEAK_FUNC(sub_82E950A0);
PPC_FUNC_IMPL(__imp__sub_82E950A0) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82625f08
	ctx.lr = 0x82E950B4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e950e8
	if (ctx.cr0.eq) goto loc_82E950E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-25112
	ctx.r10.s64 = ctx.r11.s64 + -25112;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x82e950ec
	goto loc_82E950EC;
loc_82E950E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E950EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E950FC"))) PPC_WEAK_FUNC(sub_82E950FC);
PPC_FUNC_IMPL(__imp__sub_82E950FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95100"))) PPC_WEAK_FUNC(sub_82E95100);
PPC_FUNC_IMPL(__imp__sub_82E95100) {
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
	// bl 0x82e94a18
	ctx.lr = 0x82E95120;
	sub_82E94A18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e9513c
	if (ctx.cr0.eq) goto loc_82E9513C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9513C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9513C:
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

__attribute__((alias("__imp__sub_82E95158"))) PPC_WEAK_FUNC(sub_82E95158);
PPC_FUNC_IMPL(__imp__sub_82E95158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E95160;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e951d8
	if (!ctx.cr6.gt) goto loc_82E951D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
loc_82E95184:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82E95190;
	sub_82E7D860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E95198;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E951A0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e951c8
	if (ctx.cr0.eq) goto loc_82E951C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E951C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e951fc
	if (ctx.cr0.eq) goto loc_82E951FC;
loc_82E951C8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e95184
	if (ctx.cr6.lt) goto loc_82E95184;
loc_82E951D8:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e951f0
	if (!ctx.cr6.eq) goto loc_82E951F0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e94ff8
	ctx.lr = 0x82E951F0;
	sub_82E94FF8(ctx, base);
loc_82E951F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E951F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82E951FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e951f4
	goto loc_82E951F4;
}

__attribute__((alias("__imp__sub_82E95204"))) PPC_WEAK_FUNC(sub_82E95204);
PPC_FUNC_IMPL(__imp__sub_82E95204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95208"))) PPC_WEAK_FUNC(sub_82E95208);
PPC_FUNC_IMPL(__imp__sub_82E95208) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82E9522C;
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E95240;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82e95268
	if (!ctx.cr0.eq) goto loc_82E95268;
	// bl 0x82b568c0
	ctx.lr = 0x82E95250;
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	ctx.lr = 0x82E95254;
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e94ff8
	ctx.lr = 0x82E95260;
	sub_82E94FF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e952a8
	goto loc_82E952A8;
loc_82E95268:
	// bl 0x826b4b60
	ctx.lr = 0x82E9526C;
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25068
	ctx.r11.s64 = ctx.r11.s64 + -25068;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82E95280;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e952a4
	if (!ctx.cr0.eq) goto loc_82E952A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82E95290;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82E95294;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e952a8
	goto loc_82E952A8;
loc_82E952A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E952A8:
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

__attribute__((alias("__imp__sub_82E952C0"))) PPC_WEAK_FUNC(sub_82E952C0);
PPC_FUNC_IMPL(__imp__sub_82E952C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E952CC"))) PPC_WEAK_FUNC(sub_82E952CC);
PPC_FUNC_IMPL(__imp__sub_82E952CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E952D0"))) PPC_WEAK_FUNC(sub_82E952D0);
PPC_FUNC_IMPL(__imp__sub_82E952D0) {
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
	// addi r11,r11,-24984
	ctx.r11.s64 = ctx.r11.s64 + -24984;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e95318
	if (ctx.cr0.eq) goto loc_82E95318;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9530C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82E95318:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E95338"))) PPC_WEAK_FUNC(sub_82E95338);
PPC_FUNC_IMPL(__imp__sub_82E95338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E95340;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e95374
	if (ctx.cr6.eq) goto loc_82E95374;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E95374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E95374:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82ecbbe0
	ctx.lr = 0x82E953A0;
	sub_82ECBBE0(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82ecbfb0
	ctx.lr = 0x82E953FC;
	sub_82ECBFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// beq cr6,0x82e95438
	if (ctx.cr6.eq) goto loc_82E95438;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E95420;
	sub_82ECC4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq 0x82e95438
	if (ctx.cr0.eq) goto loc_82E95438;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82e9543c
	goto loc_82E9543C;
loc_82E95438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9543C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E95444"))) PPC_WEAK_FUNC(sub_82E95444);
PPC_FUNC_IMPL(__imp__sub_82E95444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95448"))) PPC_WEAK_FUNC(sub_82E95448);
PPC_FUNC_IMPL(__imp__sub_82E95448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E95450;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e954f0
	if (!ctx.cr6.eq) goto loc_82E954F0;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82e954f0
	if (!ctx.cr6.gt) goto loc_82E954F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb688
	ctx.lr = 0x82E9547C;
	sub_82ECB688(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82e954f0
	if (!ctx.cr6.lt) goto loc_82E954F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E9548C;
	sub_82ECB720(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e954d4
	if (!ctx.cr6.gt) goto loc_82E954D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E954A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E954BC;
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e954a0
	if (ctx.cr6.lt) goto loc_82E954A0;
loc_82E954D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E954DC;
	sub_82ECB740(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82e954f4
	goto loc_82E954F4;
loc_82E954F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E954F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E954FC"))) PPC_WEAK_FUNC(sub_82E954FC);
PPC_FUNC_IMPL(__imp__sub_82E954FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95500"))) PPC_WEAK_FUNC(sub_82E95500);
PPC_FUNC_IMPL(__imp__sub_82E95500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e9551c
	if (!ctx.cr6.eq) goto loc_82E9551C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e9551c
	if (ctx.cr0.eq) goto loc_82E9551C;
	// b 0x82eccfd0
	sub_82ECCFD0(ctx, base);
	return;
loc_82E9551C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E95524"))) PPC_WEAK_FUNC(sub_82E95524);
PPC_FUNC_IMPL(__imp__sub_82E95524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95528"))) PPC_WEAK_FUNC(sub_82E95528);
PPC_FUNC_IMPL(__imp__sub_82E95528) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9553C"))) PPC_WEAK_FUNC(sub_82E9553C);
PPC_FUNC_IMPL(__imp__sub_82E9553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95540"))) PPC_WEAK_FUNC(sub_82E95540);
PPC_FUNC_IMPL(__imp__sub_82E95540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E95548;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e9557c
	if (!ctx.cr6.eq) goto loc_82E9557C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E95574;
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x82e955e8
	goto loc_82E955E8;
loc_82E9557C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82e955e4
	if (!ctx.cr6.eq) goto loc_82E955E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb720
	ctx.lr = 0x82E9558C;
	sub_82ECB720(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e955d4
	if (!ctx.cr6.gt) goto loc_82E955D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E955A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82E955BC;
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e955a0
	if (ctx.cr6.lt) goto loc_82E955A0;
loc_82E955D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ecb740
	ctx.lr = 0x82E955DC;
	sub_82ECB740(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82e955e8
	goto loc_82E955E8;
loc_82E955E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E955E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

