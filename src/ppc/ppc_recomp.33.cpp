#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8249ED38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r8,r10,-27456
	ctx.r8.s64 = ctx.r10.s64 + -27456;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// addi r7,r9,368
	ctx.r7.s64 = ctx.r9.s64 + 368;
	// lfs f12,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = static_cast<float>(ctx.f11.f64 - ctx.f0.f64);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// mfcr r6
	ctx.r6.u64 = 0;
	ctx.r6.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r6.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r6.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r6.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r6.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r6.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r6.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r6.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r6.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r6.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r6.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r6.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r6.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r6.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r6.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r6.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r6.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r6.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r6.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r6.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r6.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r6.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r6.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r6.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r6.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f9,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f11,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f7,f8,f12
	ctx.f7.f64 = static_cast<float>(ctx.f8.f64 - ctx.f12.f64);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// mfcr r10
	ctx.r10.u64 = 0;
	ctx.r10.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r10.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r10.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r10.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r10.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r10.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r10.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r10.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r10.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r10.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r10.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r10.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r10.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r10.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r10.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r10.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r10.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r10.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r10.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r10.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r10.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r10.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r10.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r10.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r10.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f6,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f6,f12,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// b 0x824a72b0
	sub_824A72B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249ED38) {
	__imp__sub_8249ED38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249EDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8249EDB0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-16800
	ctx.r30.s64 = ctx.r11.s64 + -16800;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,368
	ctx.r10.s64 = ctx.r11.s64 + 368;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lfs f30,-10668(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -10668);
	ctx.f30.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f0,-10656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -10656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// mfcr r9
	ctx.r9.u64 = 0;
	ctx.r9.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r9.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r9.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r9.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r9.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r9.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r9.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r9.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r9.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r9.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r9.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r9.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r9.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r9.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r9.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r9.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r9.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r9.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r9.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r9.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r9.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r9.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r9.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r9.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r9.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r9.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r9.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r9.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r9.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r9.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r9.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r9.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f11,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f30
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f0.f64);
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// mfcr r5
	ctx.r5.u64 = 0;
	ctx.r5.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r5.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r5.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r5.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r5.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r5.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r5.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r5.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r5.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r5.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r5.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r5.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r5.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r5.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r5.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r5.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r5.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r5.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r5.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r5.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r5.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r5.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r5.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r5.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r5.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r5.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r5.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r5.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r5.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r5.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r5.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r5.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r11,r5,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lfsx f8,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f0,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x824a72b0
	ctx.lr = 0x8249EE34;
	sub_824A72B0(ctx, base);
	// lbz r8,995(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 995);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8249eed8
	if (ctx.cr6.eq) goto loc_8249EED8;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8249eed8
	if (!ctx.cr6.gt) goto loc_8249EED8;
	// li r29,44
	ctx.r29.s64 = 44;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8249ee6c
	if (!ctx.cr6.lt) goto loc_8249EE6C;
	// lfs f0,8100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8100);
	ctx.f0.f64 = double(temp.f32);
	// li r29,45
	ctx.r29.s64 = 45;
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8249EE6C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23796
	ctx.r4.s64 = ctx.r11.s64 + 23796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249EE80;
	sub_8222CF18(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,26788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// fctiwz f13,f0
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,28(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x82303f98
	ctx.lr = 0x8249EEB0;
	sub_82303F98(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x823b6d98
	ctx.lr = 0x8249EEC8;
	sub_823B6D98(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	ctx.lr = 0x8249EED0;
	sub_821C6868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249EED8;
	sub_82214F08(ctx, base);
loc_8249EED8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249EDA8) {
	__imp__sub_8249EDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8249EEE8) {
	__imp__sub_8249EEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249EEF0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// addi r8,r9,368
	ctx.r8.s64 = ctx.r9.s64 + 368;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-27456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// stfs f13,68(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f31,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// mfcr r7
	ctx.r7.u64 = 0;
	ctx.r7.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r7.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r7.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r7.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r7.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r7.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r7.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r7.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r7.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r7.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r7.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r7.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r7.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r7.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r7.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r7.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r7.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r7.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r7.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r7.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r7.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r7.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r7.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r7.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r7.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r7.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r7.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r7.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r7.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r7.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r7.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r7.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f0.f64);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// mfcr r11
	ctx.r11.u64 = 0;
	ctx.r11.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r11.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r11.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r11.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r11.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r11.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r11.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r11.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r11.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r11.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r11.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r11.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r11.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r11.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r11.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r11.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r11.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r11.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r11.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r11.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r11.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r11.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r11.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r11.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r11.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r11.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r11.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r11.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r11.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r11.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r11.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r11.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f0,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f7,68(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// bl 0x824a72b0
	ctx.lr = 0x8249EF7C;
	sub_824A72B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r5,r6,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8249f088
	if (ctx.cr6.eq) goto loc_8249F088;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8249efc0
	if (ctx.cr6.eq) goto loc_8249EFC0;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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
	// b 0x8249f08c
	goto loc_8249F08C;
loc_8249EFC0:
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
	// ble 0x8249f030
	if (!ctx.cr0.gt) goto loc_8249F030;
loc_8249EFE0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8249f000
	if (ctx.cr6.lt) goto loc_8249F000;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8249F000:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8249f01c
	if (ctx.cr6.eq) goto loc_8249F01C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8249f024
	goto loc_8249F024;
loc_8249F01C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8249F024:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8249efe0
	if (ctx.cr6.gt) goto loc_8249EFE0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8249F030:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8249f074
	if (ctx.cr6.eq) goto loc_8249F074;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8249f04c
	if (ctx.cr6.gt) goto loc_8249F04C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8249F04C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249f074
	if (!ctx.cr6.eq) goto loc_8249F074;
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
	// b 0x8249f08c
	goto loc_8249F08C;
loc_8249F074:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8249f08c
	goto loc_8249F08C;
loc_8249F088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8249F08C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f0d4
	if (ctx.cr6.eq) goto loc_8249F0D4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249f0b0
	if (ctx.cr6.eq) goto loc_8249F0B0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x821e8870
	ctx.lr = 0x8249F0AC;
	sub_821E8870(ctx, base);
	// b 0x8249f0b4
	goto loc_8249F0B4;
loc_8249F0B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249F0B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f0d4
	if (ctx.cr6.eq) goto loc_8249F0D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8249ed38
	ctx.lr = 0x8249F0CC;
	sub_8249ED38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
loc_8249F0D4:
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

PPC_WEAK_FUNC(sub_8249EEF0) {
	__imp__sub_8249EEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8249F0F0) {
	__imp__sub_8249F0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r9,r10,-27456
	ctx.r9.s64 = ctx.r10.s64 + -27456;
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// addi r7,r8,368
	ctx.r7.s64 = ctx.r8.s64 + 368;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f13,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = 0;
	ctx.r6.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r6.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r6.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r6.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r6.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r6.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r6.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r6.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r6.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r6.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r6.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r6.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r6.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r6.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r6.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r6.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r6.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r6.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r6.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r6.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r6.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r6.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r6.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r6.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r6.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r6.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r6.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f11,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r10
	ctx.r10.u64 = 0;
	ctx.r10.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r10.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r10.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r10.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r10.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r10.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r10.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r10.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r10.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r10.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r10.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r10.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r10.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r10.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r10.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r10.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r10.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r10.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r10.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r10.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r10.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r10.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r10.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r10.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r10.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f8,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f13,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f7,72(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x824a72b0
	sub_824A72B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249F0F8) {
	__imp__sub_8249F0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8249F168) {
	__imp__sub_8249F168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F170) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f244
	if (ctx.cr6.eq) goto loc_8249F244;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23812
	ctx.r4.s64 = ctx.r11.s64 + 23812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249F1AC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x8249F1B8;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249F1C0;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,23828
	ctx.r7.s64 = ctx.r10.s64 + 23828;
	// bl 0x821b2710
	ctx.lr = 0x8249F1D0;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82196e10
	ctx.lr = 0x8249F1D8;
	sub_82196E10(ctx, base);
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r10,r30,-27468
	ctx.r10.s64 = ctx.r30.s64 + -27468;
	// lwz r11,-27380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-27376(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27376);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f31,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmadd f10,f1,f0,f11
	ctx.f10.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fsubs f1,f31,f13
	ctx.f1.f64 = static_cast<float>(ctx.f31.f64 - ctx.f13.f64);
	// stfs f1,80(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fctiwz f9,f10
	ctx.f9.u64 = uint64_t(int32_t(std::trunc(ctx.f10.f64)));
	// stfiwx f9,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f9.u32);
	// bl 0x8249eda8
	ctx.lr = 0x8249F228;
	sub_8249EDA8(ctx, base);
	// lfs f8,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f31,f8
	ctx.f1.f64 = static_cast<float>(ctx.f31.f64 - ctx.f8.f64);
	// stfs f1,84(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249ebe0
	ctx.lr = 0x8249F23C;
	sub_8249EBE0(ctx, base);
	// lfs f0,-27468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8249f274
	goto loc_8249F274;
loc_8249F244:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8249eda8
	ctx.lr = 0x8249F25C;
	sub_8249EDA8(ctx, base);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x8249ebe0
	ctx.lr = 0x8249F26C;
	sub_8249EBE0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
loc_8249F274:
	// stfs f0,2164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2164, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8249F170) {
	__imp__sub_8249F170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8249F2A0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-27752
	ctx.r29.s64 = ctx.r11.s64 + -27752;
	// lfs f0,2164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,284(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8249f6c4
	if (!ctx.cr6.eq) goto loc_8249F6C4;
	// lfs f30,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f30.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x821d9f40
	ctx.lr = 0x8249F2E0;
	sub_821D9F40(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r11,23844
	ctx.r7.s64 = ctx.r11.s64 + 23844;
	// bl 0x821b2710
	ctx.lr = 0x8249F2EC;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8234e0b0
	ctx.lr = 0x8249F2F4;
	sub_8234E0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9ed8
	ctx.lr = 0x8249F300;
	sub_821D9ED8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8249f3b8
	if (ctx.cr6.eq) goto loc_8249F3B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2710
	ctx.lr = 0x8249F314;
	sub_821B2710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fbc40
	ctx.lr = 0x8249F320;
	sub_829FBC40(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822385c0
	ctx.lr = 0x8249F32C;
	sub_822385C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f378
	if (ctx.cr6.eq) goto loc_8249F378;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a8250
	ctx.lr = 0x8249F344;
	sub_824A8250(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,3
	ctx.r4.s64 = 3;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a94b0
	ctx.lr = 0x8249F358;
	sub_824A94B0(ctx, base);
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// and r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8249f37c
	goto loc_8249F37C;
loc_8249F378:
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
loc_8249F37C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8249f390
	if (!ctx.cr6.lt) goto loc_8249F390;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8249F390:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8249f3b4
	if (ctx.cr6.eq) goto loc_8249F3B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
loc_8249F3B4:
	// bl 0x8221be68
	ctx.lr = 0x8249F3B8;
	sub_8221BE68(ctx, base);
loc_8249F3B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8249f4c4
	if (ctx.cr6.eq) goto loc_8249F4C4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8249f400
	if (ctx.cr6.eq) goto loc_8249F400;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8249f4c8
	goto loc_8249F4C8;
loc_8249F400:
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
	// ble 0x8249f46c
	if (!ctx.cr0.gt) goto loc_8249F46C;
loc_8249F41C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8249f43c
	if (ctx.cr6.lt) goto loc_8249F43C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8249F43C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8249f458
	if (ctx.cr6.eq) goto loc_8249F458;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8249f460
	goto loc_8249F460;
loc_8249F458:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8249F460:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8249f41c
	if (ctx.cr6.gt) goto loc_8249F41C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8249F46C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8249f4b0
	if (ctx.cr6.eq) goto loc_8249F4B0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8249f488
	if (ctx.cr6.gt) goto loc_8249F488;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8249F488:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249f4b0
	if (!ctx.cr6.eq) goto loc_8249F4B0;
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
	// b 0x8249f4c8
	goto loc_8249F4C8;
loc_8249F4B0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8249f4c8
	goto loc_8249F4C8;
loc_8249F4C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8249F4C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f510
	if (ctx.cr6.eq) goto loc_8249F510;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8223d5e0
	ctx.lr = 0x8249F4DC;
	sub_8223D5E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f510
	if (ctx.cr6.eq) goto loc_8249F510;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23856
	ctx.r4.s64 = ctx.r11.s64 + 23856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249F4FC;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82545790
	ctx.lr = 0x8249F504;
	sub_82545790(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x82214f08
	ctx.lr = 0x8249F510;
	sub_82214F08(ctx, base);
loc_8249F510:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8249f618
	if (ctx.cr6.eq) goto loc_8249F618;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8249f554
	if (ctx.cr6.eq) goto loc_8249F554;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
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
	// b 0x8249f61c
	goto loc_8249F61C;
loc_8249F554:
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
	// ble 0x8249f5c0
	if (!ctx.cr0.gt) goto loc_8249F5C0;
loc_8249F570:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8249f590
	if (ctx.cr6.lt) goto loc_8249F590;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8249F590:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8249f5ac
	if (ctx.cr6.eq) goto loc_8249F5AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8249f5b4
	goto loc_8249F5B4;
loc_8249F5AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8249F5B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8249f570
	if (ctx.cr6.gt) goto loc_8249F570;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8249F5C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8249f604
	if (ctx.cr6.eq) goto loc_8249F604;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8249f5dc
	if (ctx.cr6.gt) goto loc_8249F5DC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8249F5DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249f604
	if (!ctx.cr6.eq) goto loc_8249F604;
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
	// b 0x8249f61c
	goto loc_8249F61C;
loc_8249F604:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8249f61c
	goto loc_8249F61C;
loc_8249F618:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8249F61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f648
	if (ctx.cr6.eq) goto loc_8249F648;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8249f640
	if (!ctx.cr6.gt) goto loc_8249F640;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823c92f0
	ctx.lr = 0x8249F63C;
	sub_823C92F0(ctx, base);
	// b 0x8249f644
	goto loc_8249F644;
loc_8249F640:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_8249F644:
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
loc_8249F648:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8249f65c
	if (ctx.cr6.gt) goto loc_8249F65C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8249F65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f6c0
	if (ctx.cr6.eq) goto loc_8249F6C0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23812
	ctx.r4.s64 = ctx.r11.s64 + 23812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249F67C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x8249F688;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249F690;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,23876
	ctx.r7.s64 = ctx.r10.s64 + 23876;
	// bl 0x821b2710
	ctx.lr = 0x8249F6A0;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82196e10
	ctx.lr = 0x8249F6A8;
	sub_82196E10(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// beq cr6,0x8249f6b8
	if (ctx.cr6.eq) goto loc_8249F6B8;
	// fdivs f31,f31,f1
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// b 0x8249f6c0
	goto loc_8249F6C0;
loc_8249F6B8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8249F6C0:
	// stfs f31,2164(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2164, temp.u32);
loc_8249F6C4:
	// lfs f1,2164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2164);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249F298) {
	__imp__sub_8249F298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8249F6E8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8219c690
	ctx.lr = 0x8249F700;
	sub_8219C690(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8249f83c
	if (ctx.cr6.eq) goto loc_8249F83C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8249f83c
	if (!ctx.cr0.gt) goto loc_8249F83C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// ld r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r11,-28040
	ctx.r24.s64 = ctx.r11.s64 + -28040;
	// addi r28,r10,23900
	ctx.r28.s64 = ctx.r10.s64 + 23900;
loc_8249F73C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8249f758
	if (!ctx.cr6.eq) goto loc_8249F758;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249f774
	goto loc_8249F774;
loc_8249F758:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249f770
	if (ctx.cr6.eq) goto loc_8249F770;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8249f770
	if (ctx.cr6.eq) goto loc_8249F770;
	// bl 0x8226d750
	ctx.lr = 0x8249F76C;
	sub_8226D750(ctx, base);
	// b 0x8249f774
	goto loc_8249F774;
loc_8249F770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249F774:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f830
	if (ctx.cr6.eq) goto loc_8249F830;
	// std r26,92(r30)
	PPC_STORE_U64(ctx.r30.u32 + 92, ctx.r26.u64);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8282ea08
	ctx.lr = 0x8249F798;
	sub_8282EA08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249F7A8;
	sub_8222CF18(ctx, base);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x8219c758
	ctx.lr = 0x8249F7C4;
	sub_8219C758(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// li r31,1
	ctx.r31.s64 = 1;
	// bge cr6,0x8249f7d4
	if (!ctx.cr6.lt) goto loc_8249F7D4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8249F7D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249F7DC;
	sub_82214F08(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f7f4
	if (ctx.cr6.eq) goto loc_8249F7F4;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a0100
	ctx.lr = 0x8249F7F4;
	sub_824A0100(ctx, base);
loc_8249F7F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249fb88
	ctx.lr = 0x8249F800;
	sub_8249FB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82301d40
	ctx.lr = 0x8249F80C;
	sub_82301D40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f820
	if (ctx.cr6.eq) goto loc_8249F820;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8249F820:
	// addi r3,r30,1280
	ctx.r3.s64 = ctx.r30.s64 + 1280;
	// bl 0x82ee1d08
	ctx.lr = 0x8249F828;
	sub_82EE1D08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	ctx.lr = 0x8249F830;
	sub_821C6868(ctx, base);
loc_8249F830:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8249f73c
	if (!ctx.cr0.eq) goto loc_8249F73C;
loc_8249F83C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249F6E0) {
	__imp__sub_8249F6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F848) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8219c690
	ctx.lr = 0x8249F86C;
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249f884
	if (ctx.cr6.eq) goto loc_8249F884;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82343b68
	ctx.lr = 0x8249F884;
	sub_82343B68(ctx, base);
loc_8249F884:
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

PPC_WEAK_FUNC(sub_8249F848) {
	__imp__sub_8249F848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249F8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8249F8A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f13,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8249fab0
	if (ctx.cr6.lt) goto loc_8249FAB0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8249f930
	if (ctx.cr6.lt) goto loc_8249F930;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// bl 0x822641f0
	ctx.lr = 0x8249F8EC;
	sub_822641F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249f930
	if (ctx.cr6.eq) goto loc_8249F930;
	// bl 0x82455f20
	ctx.lr = 0x8249F8F8;
	sub_82455F20(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8249f920
	if (!ctx.cr6.eq) goto loc_8249F920;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8249f924
	if (ctx.cr6.eq) goto loc_8249F924;
loc_8249F920:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8249F924:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249fab0
	if (!ctx.cr6.eq) goto loc_8249FAB0;
loc_8249F930:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x8249F93C;
	sub_8219C690(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249fab0
	if (ctx.cr6.eq) goto loc_8249FAB0;
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,124(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8249f9c0
	if (ctx.cr6.eq) goto loc_8249F9C0;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8249F974:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8249f988
	if (!ctx.cr6.eq) goto loc_8249F988;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249f9a8
	goto loc_8249F9A8;
loc_8249F988:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249f9a4
	if (ctx.cr6.eq) goto loc_8249F9A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8249f9a4
	if (ctx.cr6.eq) goto loc_8249F9A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226d750
	ctx.lr = 0x8249F9A0;
	sub_8226D750(ctx, base);
	// b 0x8249f9a8
	goto loc_8249F9A8;
loc_8249F9A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249F9A8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249f9c0
	if (!ctx.cr6.eq) goto loc_8249F9C0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8249f974
	if (!ctx.cr6.eq) goto loc_8249F974;
loc_8249F9C0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8249fab0
	if (!ctx.cr6.eq) goto loc_8249FAB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// bl 0x82343b68
	ctx.lr = 0x8249F9D4;
	sub_82343B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ac560
	ctx.lr = 0x8249F9DC;
	sub_824AC560(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r11,11896
	ctx.r7.s64 = ctx.r11.s64 + 11896;
	// bl 0x821b2710
	ctx.lr = 0x8249F9EC;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	ctx.lr = 0x8249F9F4;
	sub_822A97A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249fab0
	if (ctx.cr6.eq) goto loc_8249FAB0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,23940
	ctx.r4.s64 = ctx.r11.s64 + 23940;
	// bl 0x82345978
	ctx.lr = 0x8249FA08;
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8249FA18;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249faa8
	if (ctx.cr6.eq) goto loc_8249FAA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249faa8
	if (ctx.cr6.eq) goto loc_8249FAA8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,52(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x821f0108
	ctx.lr = 0x8249FA4C;
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82301d40
	ctx.lr = 0x8249FA58;
	sub_82301D40(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x8249FA60;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249faa0
	if (ctx.cr6.eq) goto loc_8249FAA0;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-32412
	ctx.r4.s64 = ctx.r11.s64 + -32412;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x823bd140
	ctx.lr = 0x8249FA80;
	sub_823BD140(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249faa0
	if (ctx.cr6.eq) goto loc_8249FAA0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c780
	ctx.lr = 0x8249FA94;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8240d440
	ctx.lr = 0x8249FAA0;
	sub_8240D440(ctx, base);
loc_8249FAA0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	ctx.lr = 0x8249FAA8;
	sub_821C6868(ctx, base);
loc_8249FAA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249FAB0;
	sub_82214F08(ctx, base);
loc_8249FAB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249F8A0) {
	__imp__sub_8249F8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FAB8) {
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
	// lwz r31,108(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x824af6f0
	ctx.lr = 0x8249FAF8;
	sub_824AF6F0(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
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

PPC_WEAK_FUNC(sub_8249FAB8) {
	__imp__sub_8249FAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FB20) {
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
	// lwz r31,124(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x824af6f0
	ctx.lr = 0x8249FB60;
	sub_824AF6F0(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
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

PPC_WEAK_FUNC(sub_8249FB20) {
	__imp__sub_8249FB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FB88) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8249FBAC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8249fbac
	if (!ctx.cr0.eq) goto loc_8249FBAC;
	// lwz r6,92(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// addi r3,r4,92
	ctx.r3.s64 = ctx.r4.s64 + 92;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8249fc08
	if (ctx.cr6.eq) goto loc_8249FC08;
	// bl 0x821b2710
	ctx.lr = 0x8249FBDC;
	sub_821B2710(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,11896
	ctx.r4.s64 = ctx.r11.s64 + 11896;
	// bl 0x822a97a8
	ctx.lr = 0x8249FBE8;
	sub_822A97A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249fc08
	if (ctx.cr6.eq) goto loc_8249FC08;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,2460
	ctx.r4.s64 = ctx.r11.s64 + 2460;
	// bl 0x82345978
	ctx.lr = 0x8249FBFC;
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275368
	ctx.lr = 0x8249FC08;
	sub_82275368(ctx, base);
loc_8249FC08:
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

PPC_WEAK_FUNC(sub_8249FB88) {
	__imp__sub_8249FB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FC20) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8249fc54
	if (ctx.cr6.eq) goto loc_8249FC54;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8249fc58
	if (!ctx.cr6.eq) goto loc_8249FC58;
loc_8249FC54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8249FC58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249fd20
	if (ctx.cr6.eq) goto loc_8249FD20;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249fd20
	if (ctx.cr6.eq) goto loc_8249FD20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r11,11896
	ctx.r7.s64 = ctx.r11.s64 + 11896;
	// bl 0x821b2710
	ctx.lr = 0x8249FC80;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	ctx.lr = 0x8249FC88;
	sub_822A97A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8249fd20
	if (ctx.cr6.eq) goto loc_8249FD20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8249FCA8;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x829fb978
	ctx.lr = 0x8249FCB8;
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249fcc8
	if (ctx.cr6.eq) goto loc_8249FCC8;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8249fccc
	goto loc_8249FCCC;
loc_8249FCC8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8249FCCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8249fd20
	if (ctx.cr6.eq) goto loc_8249FD20;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8249FCEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,101
	ctx.r8.s64 = 101;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,26912(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26912);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82279a40
	ctx.lr = 0x8249FD20;
	sub_82279A40(ctx, base);
loc_8249FD20:
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

PPC_WEAK_FUNC(sub_8249FC20) {
	__imp__sub_8249FC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FD38) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 + 208;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8249FD38) {
	__imp__sub_8249FD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8249FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8249FD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,211
	ctx.r11.s64 = ctx.r30.s64 + 211;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r10,23980
	ctx.r28.s64 = ctx.r10.s64 + 23980;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// bne cr6,0x8249fdcc
	if (!ctx.cr6.eq) goto loc_8249FDCC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249FD9C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8249fb20
	ctx.lr = 0x8249FDAC;
	sub_8249FB20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249fdcc
	if (!ctx.cr6.eq) goto loc_8249FDCC;
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// lwz r10,916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8249fdd0
	if (!ctx.cr6.lt) goto loc_8249FDD0;
loc_8249FDCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8249FDD0:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8249fde8
	if (ctx.cr6.eq) goto loc_8249FDE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249FDE8;
	sub_82214F08(ctx, base);
loc_8249FDE8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249fe18
	if (ctx.cr6.eq) goto loc_8249FE18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8249FE04;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249f8a0
	ctx.lr = 0x8249FE10;
	sub_8249F8A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8249FE18;
	sub_82214F08(ctx, base);
loc_8249FE18:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FE28;
	sub_822D9508(ctx, base);
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x8249fe48
	if (!ctx.cr6.eq) goto loc_8249FE48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FE40;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FE48:
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8249fffc
	if (ctx.cr6.gt) goto loc_8249FFFC;
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,-404
	ctx.r12.s64 = ctx.r12.s64 + -404;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8249FEA4;
	case 1:
		goto loc_8249FEBC;
	case 2:
		goto loc_8249FED4;
	case 3:
		goto loc_8249FEEC;
	case 4:
		goto loc_8249FF04;
	case 5:
		goto loc_8249FF1C;
	case 6:
		goto loc_8249FFFC;
	case 7:
		goto loc_8249FF34;
	case 8:
		goto loc_8249FF4C;
	case 9:
		goto loc_8249FF64;
	case 10:
		goto loc_8249FFC4;
	case 11:
		goto loc_8249FF7C;
	case 12:
		goto loc_8249FF94;
	case 13:
		goto loc_8249FFAC;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-348(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -348);
	// lwz r18,-324(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -324);
	// lwz r18,-300(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -300);
	// lwz r18,-276(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -276);
	// lwz r18,-252(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -252);
	// lwz r18,-228(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -228);
	// lwz r18,-4(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r18,-204(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	// lwz r18,-180(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -180);
	// lwz r18,-156(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -156);
	// lwz r18,-60(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -60);
	// lwz r18,-132(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -132);
	// lwz r18,-108(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -108);
	// lwz r18,-84(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + -84);
loc_8249FEA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,121
	ctx.r4.s64 = 121;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FEB4;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FEBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FECC;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FED4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FEE4;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FEEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FEFC;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF04:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF14;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF2C;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF34:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF44;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF5C;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF64:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF74;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FF8C;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FF94:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FFA4;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FFAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9508
	ctx.lr = 0x8249FFBC;
	sub_822D9508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_8249FFC4:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x8249FFE4;
	sub_82232748(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8249fffc
	if (ctx.cr6.eq) goto loc_8249FFFC;
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
loc_8249FFFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8249FD48) {
	__imp__sub_8249FD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0008) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A0008) {
	__imp__sub_824A0008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,1024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A0018) {
	__imp__sub_824A0018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x824A0038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x824A0068;
	sub_82232748(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a00b0
	if (ctx.cr6.eq) goto loc_824A00B0;
	// addi r11,r31,87
	ctx.r11.s64 = ctx.r31.s64 + 87;
	// cmplwi cr6,r31,122
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 122, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// bgt cr6,0x824a00b0
	if (ctx.cr6.gt) goto loc_824A00B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6538
	ctx.lr = 0x824A0090;
	sub_824A6538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x824a00b0
	if (!ctx.cr6.gt) goto loc_824A00B0;
	// bl 0x8217e3f8
	ctx.lr = 0x824A00A0;
	sub_8217E3F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x822ec140
	ctx.lr = 0x824A00B0;
	sub_822EC140(ctx, base);
loc_824A00B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0030) {
	__imp__sub_824A0030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A00B8) {
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
	// addi r4,r4,-12
	ctx.r4.s64 = ctx.r4.s64 + -12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249fb88
	ctx.lr = 0x824A00D8;
	sub_8249FB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301d40
	ctx.lr = 0x824A00E4;
	sub_82301D40(ctx, base);
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

PPC_WEAK_FUNC(sub_824A00B8) {
	__imp__sub_824A00B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x824A0108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x824a0454
	if (ctx.cr6.eq) goto loc_824A0454;
	// cmpwi cr6,r28,51
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 51, ctx.xer);
	// bge cr6,0x824a0454
	if (!ctx.cr6.lt) goto loc_824A0454;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x824A0140;
	sub_82232748(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0454
	if (ctx.cr6.eq) goto loc_824A0454;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lbz r9,2091(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2091);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0454
	if (ctx.cr6.eq) goto loc_824A0454;
	// addi r3,r28,-1
	ctx.r3.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// bgt cr6,0x824a017c
	if (ctx.cr6.gt) goto loc_824A017C;
	// bl 0x824a6028
	ctx.lr = 0x824A0174;
	sub_824A6028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x824a0180
	goto loc_824A0180;
loc_824A017C:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_824A0180:
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x824A0190;
	sub_8222C210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a01b4
	if (ctx.cr6.eq) goto loc_824A01B4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a01b8
	if (!ctx.cr6.eq) goto loc_824A01B8;
loc_824A01B4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A01B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a02e8
	if (ctx.cr6.eq) goto loc_824A02E8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a02c8
	if (ctx.cr6.eq) goto loc_824A02C8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0204
	if (ctx.cr6.eq) goto loc_824A0204;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a02cc
	goto loc_824A02CC;
loc_824A0204:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a0270
	if (!ctx.cr0.gt) goto loc_824A0270;
loc_824A0220:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a0240
	if (ctx.cr6.lt) goto loc_824A0240;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A0240:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a025c
	if (ctx.cr6.eq) goto loc_824A025C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a0264
	goto loc_824A0264;
loc_824A025C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A0264:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a0220
	if (ctx.cr6.gt) goto loc_824A0220;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A0270:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a02b4
	if (ctx.cr6.eq) goto loc_824A02B4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a028c
	if (ctx.cr6.gt) goto loc_824A028C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A028C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a02b4
	if (!ctx.cr6.eq) goto loc_824A02B4;
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
	// b 0x824a02cc
	goto loc_824A02CC;
loc_824A02B4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a02cc
	goto loc_824A02CC;
loc_824A02C8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A02CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a02e8
	if (ctx.cr6.eq) goto loc_824A02E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824a0850
	ctx.lr = 0x824A02E8;
	sub_824A0850(ctx, base);
loc_824A02E8:
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x824A0300;
	sub_828BEEC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0320
	if (ctx.cr6.eq) goto loc_824A0320;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a0324
	if (!ctx.cr6.eq) goto loc_824A0324;
loc_824A0320:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A0324:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0454
	if (ctx.cr6.eq) goto loc_824A0454;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0434
	if (ctx.cr6.eq) goto loc_824A0434;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0370
	if (ctx.cr6.eq) goto loc_824A0370;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0438
	goto loc_824A0438;
loc_824A0370:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a03dc
	if (!ctx.cr0.gt) goto loc_824A03DC;
loc_824A038C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a03ac
	if (ctx.cr6.lt) goto loc_824A03AC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A03AC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a03c8
	if (ctx.cr6.eq) goto loc_824A03C8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a03d0
	goto loc_824A03D0;
loc_824A03C8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A03D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a038c
	if (ctx.cr6.gt) goto loc_824A038C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A03DC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a0420
	if (ctx.cr6.eq) goto loc_824A0420;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a03f8
	if (ctx.cr6.gt) goto loc_824A03F8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A03F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a0420
	if (!ctx.cr6.eq) goto loc_824A0420;
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
	// b 0x824a0438
	goto loc_824A0438;
loc_824A0420:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0438
	goto loc_824A0438;
loc_824A0434:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A0438:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0454
	if (ctx.cr6.eq) goto loc_824A0454;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824a0850
	ctx.lr = 0x824A0454;
	sub_824A0850(ctx, base);
loc_824A0454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0100) {
	__imp__sub_824A0100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x824A0468;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x824A049C;
	sub_82232748(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r9,2091(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2091);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x824A04D0;
	sub_8222C210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a04f4
	if (ctx.cr6.eq) goto loc_824A04F4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a04f8
	if (!ctx.cr6.eq) goto loc_824A04F8;
loc_824A04F4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A04F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0628
	if (ctx.cr6.eq) goto loc_824A0628;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0608
	if (ctx.cr6.eq) goto loc_824A0608;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0544
	if (ctx.cr6.eq) goto loc_824A0544;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a060c
	goto loc_824A060C;
loc_824A0544:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a05b0
	if (!ctx.cr0.gt) goto loc_824A05B0;
loc_824A0560:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a0580
	if (ctx.cr6.lt) goto loc_824A0580;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A0580:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a059c
	if (ctx.cr6.eq) goto loc_824A059C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a05a4
	goto loc_824A05A4;
loc_824A059C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A05A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a0560
	if (ctx.cr6.gt) goto loc_824A0560;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A05B0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a05f4
	if (ctx.cr6.eq) goto loc_824A05F4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a05cc
	if (ctx.cr6.gt) goto loc_824A05CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A05CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a05f4
	if (!ctx.cr6.eq) goto loc_824A05F4;
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
	// b 0x824a060c
	goto loc_824A060C;
loc_824A05F4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a060c
	goto loc_824A060C;
loc_824A0608:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A060C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0628
	if (ctx.cr6.eq) goto loc_824A0628;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824a0850
	ctx.lr = 0x824A0628;
	sub_824A0850(ctx, base);
loc_824A0628:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338d20
	ctx.lr = 0x824A0630;
	sub_82338D20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x824A0654;
	sub_828BEEC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0674
	if (ctx.cr6.eq) goto loc_824A0674;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a0678
	if (!ctx.cr6.eq) goto loc_824A0678;
loc_824A0674:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A0678:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0788
	if (ctx.cr6.eq) goto loc_824A0788;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a06c4
	if (ctx.cr6.eq) goto loc_824A06C4;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a078c
	goto loc_824A078C;
loc_824A06C4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a0730
	if (!ctx.cr0.gt) goto loc_824A0730;
loc_824A06E0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a0700
	if (ctx.cr6.lt) goto loc_824A0700;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A0700:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a071c
	if (ctx.cr6.eq) goto loc_824A071C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a0724
	goto loc_824A0724;
loc_824A071C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A0724:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a06e0
	if (ctx.cr6.gt) goto loc_824A06E0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A0730:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a0774
	if (ctx.cr6.eq) goto loc_824A0774;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a074c
	if (ctx.cr6.gt) goto loc_824A074C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A074C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a0774
	if (!ctx.cr6.eq) goto loc_824A0774;
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
	// b 0x824a078c
	goto loc_824A078C;
loc_824A0774:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a078c
	goto loc_824A078C;
loc_824A0788:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A078C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a07a8
	if (ctx.cr6.eq) goto loc_824A07A8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824a0850
	ctx.lr = 0x824A07A8;
	sub_824A0850(ctx, base);
loc_824A07A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0460) {
	__imp__sub_824A0460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A07B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x824A07B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x824a0844
	if (ctx.cr6.eq) goto loc_824A0844;
	// cmpwi cr6,r30,51
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 51, ctx.xer);
	// bge cr6,0x824a0844
	if (!ctx.cr6.lt) goto loc_824A0844;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x824A07F4;
	sub_82232748(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0844
	if (ctx.cr6.eq) goto loc_824A0844;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r9,2091(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2091);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0844
	if (ctx.cr6.eq) goto loc_824A0844;
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// bgt cr6,0x824a0830
	if (ctx.cr6.gt) goto loc_824A0830;
	// bl 0x824a6028
	ctx.lr = 0x824A0828;
	sub_824A6028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x824a0834
	goto loc_824A0834;
loc_824A0830:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_824A0834:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a0850
	ctx.lr = 0x824A0844;
	sub_824A0850(ctx, base);
loc_824A0844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A07B0) {
	__imp__sub_824A07B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x824A0858;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r27,26912(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a08b8
	if (ctx.cr6.eq) goto loc_824A08B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a08b0
	if (ctx.cr6.eq) goto loc_824A08B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x824a08bc
	goto loc_824A08BC;
loc_824A08B0:
	// bl 0x821940c8
	ctx.lr = 0x824A08B4;
	sub_821940C8(ctx, base);
	// lwz r27,26912(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
loc_824A08B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A08BC:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0954
	if (ctx.cr6.eq) goto loc_824A0954;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824a0954
	if (!ctx.cr6.eq) goto loc_824A0954;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0904
	if (ctx.cr6.eq) goto loc_824A0904;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a0908
	if (!ctx.cr6.eq) goto loc_824A0908;
loc_824A0904:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0908:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0954
	if (ctx.cr6.eq) goto loc_824A0954;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r10,r11,17996
	ctx.r10.s64 = ctx.r11.s64 + 17996;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r31,140(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x824A093C;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824af798
	ctx.lr = 0x824A094C;
	sub_824AF798(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_824A0954:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0a60
	if (ctx.cr6.eq) goto loc_824A0A60;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0998
	if (ctx.cr6.eq) goto loc_824A0998;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
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
	// b 0x824a0a64
	goto loc_824A0A64;
loc_824A0998:
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
	// ble 0x824a0a08
	if (!ctx.cr0.gt) goto loc_824A0A08;
loc_824A09B8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a09d8
	if (ctx.cr6.lt) goto loc_824A09D8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A09D8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a09f4
	if (ctx.cr6.eq) goto loc_824A09F4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a09fc
	goto loc_824A09FC;
loc_824A09F4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A09FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a09b8
	if (ctx.cr6.gt) goto loc_824A09B8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A0A08:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a0a4c
	if (ctx.cr6.eq) goto loc_824A0A4C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a0a24
	if (ctx.cr6.gt) goto loc_824A0A24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a0a4c
	if (!ctx.cr6.eq) goto loc_824A0A4C;
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
	// b 0x824a0a64
	goto loc_824A0A64;
loc_824A0A4C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0a64
	goto loc_824A0A64;
loc_824A0A60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0A64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r10,996(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 996);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e6680
	ctx.lr = 0x824A0A94;
	sub_824E6680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x824a0ad4
	if (ctx.cr6.eq) goto loc_824A0AD4;
	// cmpwi cr6,r25,51
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 51, ctx.xer);
	// bge cr6,0x824a0acc
	if (!ctx.cr6.lt) goto loc_824A0ACC;
	// lbz r11,992(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0b24
	if (ctx.cr6.eq) goto loc_824A0B24;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lbz r10,941(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 941);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x824a0b1c
	goto loc_824A0B1C;
loc_824A0ACC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824a0b2c
	goto loc_824A0B2C;
loc_824A0AD4:
	// lbz r11,992(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 992);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0b24
	if (ctx.cr6.eq) goto loc_824A0B24;
	// addi r31,r28,2176
	ctx.r31.s64 = ctx.r28.s64 + 2176;
	// lwz r30,2180(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2180);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82728a68
	ctx.lr = 0x824A0AFC;
	sub_82728A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0b10
	if (ctx.cr6.eq) goto loc_824A0B10;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x824a0b14
	if (ctx.cr6.eq) goto loc_824A0B14;
loc_824A0B10:
	// twi 31,r0,22
loc_824A0B14:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
loc_824A0B1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a0b28
	if (!ctx.cr6.eq) goto loc_824A0B28;
loc_824A0B24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0B28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_824A0B2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a0c3c
	if (!ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x823216c0
	ctx.lr = 0x824A0B4C;
	sub_823216C0(ctx, base);
	// lbz r10,992(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 992);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0b80
	if (ctx.cr6.eq) goto loc_824A0B80;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x824a0b70
	if (ctx.cr6.eq) goto loc_824A0B70;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 941, ctx.r10.u8);
	// b 0x824a0b80
	goto loc_824A0B80;
loc_824A0B70:
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// addi r4,r28,2176
	ctx.r4.s64 = ctx.r28.s64 + 2176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8282ea08
	ctx.lr = 0x824A0B80;
	sub_8282EA08(ctx, base);
loc_824A0B80:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,27152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0ba0
	if (ctx.cr6.eq) goto loc_824A0BA0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A0BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A0BA0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824a0c3c
	if (!ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0bdc
	if (ctx.cr6.eq) goto loc_824A0BDC;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a0be0
	if (!ctx.cr6.eq) goto loc_824A0BE0;
loc_824A0BDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0BE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x824A0BFC;
	sub_8222C210(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a0c3c
	if (ctx.cr6.eq) goto loc_824A0C3C;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r10,r11,17996
	ctx.r10.s64 = ctx.r11.s64 + 17996;
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x824A0C2C;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824af798
	ctx.lr = 0x824A0C3C;
	sub_824AF798(ctx, base);
loc_824A0C3C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0850) {
	__imp__sub_824A0850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x824A0C50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r31,r28,-1
	ctx.r31.s64 = ctx.r28.s64 + -1;
	// stw r27,2168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2168, ctx.r27.u32);
	// cmplwi cr6,r31,80
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 80, ctx.xer);
	// stw r27,2172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2172, ctx.r27.u32);
	// bgt cr6,0x824a0c84
	if (ctx.cr6.gt) goto loc_824A0C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6a20
	ctx.lr = 0x824A0C7C;
	sub_824A6A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x824a0c88
	goto loc_824A0C88;
loc_824A0C84:
	// li r29,0
	ctx.r29.s64 = 0;
loc_824A0C88:
	// bl 0x8217e3f8
	ctx.lr = 0x824A0C8C;
	sub_8217E3F8(ctx, base);
	// cmplwi cr6,r31,80
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 80, ctx.xer);
	// stw r29,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r29.u32);
	// bgt cr6,0x824a0ca8
	if (ctx.cr6.gt) goto loc_824A0CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6a20
	ctx.lr = 0x824A0CA0;
	sub_824A6A20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824a0cac
	goto loc_824A0CAC;
loc_824A0CA8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824A0CAC:
	// bl 0x8217e3f8
	ctx.lr = 0x824A0CB0;
	sub_8217E3F8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r31,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, ctx.r31.u32);
	// stw r28,2152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2152, ctx.r28.u32);
	// lwz r10,26912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lbz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0ce4
	if (ctx.cr6.eq) goto loc_824A0CE4;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a0ce8
	if (!ctx.cr6.eq) goto loc_824A0CE8;
loc_824A0CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A0CE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0d2c
	if (ctx.cr6.eq) goto loc_824A0D2C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r11,19220
	ctx.r9.s64 = ctx.r11.s64 + 19220;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,140(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x824A0D1C;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824af8d0
	ctx.lr = 0x824A0D2C;
	sub_824AF8D0(ctx, base);
loc_824A0D2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0C48) {
	__imp__sub_824A0C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x824A0D40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x824a0df8
	if (!ctx.cr6.gt) goto loc_824A0DF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x824a0df8
	if (!ctx.cr6.gt) goto loc_824A0DF8;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// stw r28,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r28.u32);
	// bl 0x8217e3f8
	ctx.lr = 0x824A0D74;
	sub_8217E3F8(ctx, base);
	// stw r30,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r30.u32);
	// lwz r27,2172(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2172);
	// bl 0x8217e3f8
	ctx.lr = 0x824A0D80;
	sub_8217E3F8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r27,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, ctx.r27.u32);
	// lwz r10,26912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lbz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0db0
	if (ctx.cr6.eq) goto loc_824A0DB0;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a0db4
	if (!ctx.cr6.eq) goto loc_824A0DB4;
loc_824A0DB0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824A0DB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0df8
	if (ctx.cr6.eq) goto loc_824A0DF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r9,r11,19220
	ctx.r9.s64 = ctx.r11.s64 + 19220;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,140(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x824A0DE8;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824af8d0
	ctx.lr = 0x824A0DF8;
	sub_824AF8D0(ctx, base);
loc_824A0DF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0D38) {
	__imp__sub_824A0D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-27376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27376);
	// fdiv f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A0E00) {
	__imp__sub_824A0E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r11.u32);
	// b 0x824a0100
	sub_824A0100(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0E30) {
	__imp__sub_824A0E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A0E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x824A0E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,1244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1244, ctx.r11.u32);
	// lwz r5,26912(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0f0c
	if (ctx.cr6.eq) goto loc_824A0F0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0f04
	if (ctx.cr6.eq) goto loc_824A0F04;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0eb8
	if (ctx.cr6.eq) goto loc_824A0EB8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a0ebc
	if (!ctx.cr6.eq) goto loc_824A0EBC;
loc_824A0EB8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A0EBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1054
	if (ctx.cr6.eq) goto loc_824A1054;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a0fd8
	if (ctx.cr6.eq) goto loc_824A0FD8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0f14
	if (ctx.cr6.eq) goto loc_824A0F14;
	// lbz r10,250(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 250);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0fdc
	goto loc_824A0FDC;
loc_824A0F04:
	// bl 0x821940c8
	ctx.lr = 0x824A0F08;
	sub_821940C8(ctx, base);
	// lwz r5,26912(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
loc_824A0F0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x824a0eb8
	goto loc_824A0EB8;
loc_824A0F14:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a0f80
	if (!ctx.cr0.gt) goto loc_824A0F80;
loc_824A0F30:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,250
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 250, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a0f50
	if (ctx.cr6.lt) goto loc_824A0F50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A0F50:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a0f6c
	if (ctx.cr6.eq) goto loc_824A0F6C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a0f74
	goto loc_824A0F74;
loc_824A0F6C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A0F74:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a0f30
	if (ctx.cr6.gt) goto loc_824A0F30;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A0F80:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a0fc4
	if (ctx.cr6.eq) goto loc_824A0FC4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a0f9c
	if (ctx.cr6.gt) goto loc_824A0F9C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A0F9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a0fc4
	if (!ctx.cr6.eq) goto loc_824A0FC4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0fdc
	goto loc_824A0FDC;
loc_824A0FC4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a0fdc
	goto loc_824A0FDC;
loc_824A0FD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A0FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1054
	if (ctx.cr6.eq) goto loc_824A1054;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r31,r11,172
	ctx.r31.s64 = ctx.r11.s64 + 172;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1054
	if (ctx.cr6.eq) goto loc_824A1054;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a1054
	if (ctx.cr6.eq) goto loc_824A1054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828924a8
	ctx.lr = 0x824A102C;
	sub_828924A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828923b8
	ctx.lr = 0x824A103C;
	sub_828923B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82892960
	ctx.lr = 0x824A104C;
	sub_82892960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8288d768
	ctx.lr = 0x824A1054;
	sub_8288D768(ctx, base);
loc_824A1054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A0E48) {
	__imp__sub_824A0E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A1060) {
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
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x824a11dc
	if (ctx.cr6.gt) goto loc_824A11DC;
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,4248
	ctx.r12.s64 = ctx.r12.s64 + 4248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824A10D4;
	case 1:
		goto loc_824A10EC;
	case 2:
		goto loc_824A1104;
	case 3:
		goto loc_824A111C;
	case 4:
		goto loc_824A11DC;
	case 5:
		goto loc_824A11DC;
	case 6:
		goto loc_824A1134;
	case 7:
		goto loc_824A114C;
	case 8:
		goto loc_824A11DC;
	case 9:
		goto loc_824A1164;
	case 10:
		goto loc_824A117C;
	case 11:
		goto loc_824A11DC;
	case 12:
		goto loc_824A1194;
	case 13:
		goto loc_824A11AC;
	case 14:
		goto loc_824A11C4;
	default:
		__builtin_unreachable();
	}
	// lwz r18,4308(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4308);
	// lwz r18,4332(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4332);
	// lwz r18,4356(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4356);
	// lwz r18,4380(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4380);
	// lwz r18,4572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4572);
	// lwz r18,4572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4572);
	// lwz r18,4404(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4404);
	// lwz r18,4428(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4428);
	// lwz r18,4572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4572);
	// lwz r18,4452(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4452);
	// lwz r18,4476(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4476);
	// lwz r18,4572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4572);
	// lwz r18,4500(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4500);
	// lwz r18,4524(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4524);
	// lwz r18,4548(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4548);
loc_824A10D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24084
	ctx.r4.s64 = ctx.r11.s64 + 24084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A10E8;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A10EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24088
	ctx.r4.s64 = ctx.r11.s64 + 24088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1100;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A1104:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24096
	ctx.r4.s64 = ctx.r11.s64 + 24096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1118;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A111C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24104
	ctx.r4.s64 = ctx.r11.s64 + 24104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1130;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A1134:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24112
	ctx.r4.s64 = ctx.r11.s64 + 24112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1148;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A114C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24124
	ctx.r4.s64 = ctx.r11.s64 + 24124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1160;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A1164:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24136
	ctx.r4.s64 = ctx.r11.s64 + 24136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1178;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A117C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24148
	ctx.r4.s64 = ctx.r11.s64 + 24148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A1190;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A1194:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24160
	ctx.r4.s64 = ctx.r11.s64 + 24160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A11A8;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A11AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24168
	ctx.r4.s64 = ctx.r11.s64 + 24168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A11C0;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A11C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24176
	ctx.r4.s64 = ctx.r11.s64 + 24176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A11D8;
	sub_8222CF18(ctx, base);
	// b 0x824a11ec
	goto loc_824A11EC;
loc_824A11DC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23404
	ctx.r4.s64 = ctx.r11.s64 + 23404;
	// bl 0x821f0108
	ctx.lr = 0x824A11EC;
	sub_821F0108(ctx, base);
loc_824A11EC:
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

PPC_WEAK_FUNC(sub_824A1060) {
	__imp__sub_824A1060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A1208) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a131c
	if (ctx.cr6.eq) goto loc_824A131C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1258
	if (ctx.cr6.eq) goto loc_824A1258;
	// lbz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 116);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1320
	goto loc_824A1320;
loc_824A1258:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a12c4
	if (!ctx.cr0.gt) goto loc_824A12C4;
loc_824A1274:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,116
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 116, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a1294
	if (ctx.cr6.lt) goto loc_824A1294;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_824A1294:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a12b0
	if (ctx.cr6.eq) goto loc_824A12B0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a12b8
	goto loc_824A12B8;
loc_824A12B0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A12B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a1274
	if (ctx.cr6.gt) goto loc_824A1274;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A12C4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a1308
	if (ctx.cr6.eq) goto loc_824A1308;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a12e0
	if (ctx.cr6.gt) goto loc_824A12E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A12E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1308
	if (!ctx.cr6.eq) goto loc_824A1308;
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
	// b 0x824a1320
	goto loc_824A1320;
loc_824A1308:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1320
	goto loc_824A1320;
loc_824A131C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A1320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1340
	if (ctx.cr6.eq) goto loc_824A1340;
	// bl 0x822da728
	ctx.lr = 0x824A1330;
	sub_822DA728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824A1340:
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

PPC_WEAK_FUNC(sub_824A1208) {
	__imp__sub_824A1208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A1358) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824a1208
	ctx.lr = 0x824A1378;
	sub_824A1208(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x824a139c
	if (!ctx.cr6.gt) goto loc_824A139C;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c690
	ctx.lr = 0x824A1398;
	sub_8246C690(ctx, base);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_824A139C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
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

PPC_WEAK_FUNC(sub_824A1358) {
	__imp__sub_824A1358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A13B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x824A13C0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a14f8
	if (ctx.cr6.eq) goto loc_824A14F8;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1434
	if (ctx.cr6.eq) goto loc_824A1434;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a14fc
	goto loc_824A14FC;
loc_824A1434:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a14a0
	if (!ctx.cr0.gt) goto loc_824A14A0;
loc_824A1450:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a1470
	if (ctx.cr6.lt) goto loc_824A1470;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_824A1470:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a148c
	if (ctx.cr6.eq) goto loc_824A148C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a1494
	goto loc_824A1494;
loc_824A148C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A1494:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a1450
	if (ctx.cr6.gt) goto loc_824A1450;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_824A14A0:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824a14e4
	if (ctx.cr6.eq) goto loc_824A14E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a14bc
	if (ctx.cr6.gt) goto loc_824A14BC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824A14BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a14e4
	if (!ctx.cr6.eq) goto loc_824A14E4;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a14fc
	goto loc_824A14FC;
loc_824A14E4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a14fc
	goto loc_824A14FC;
loc_824A14F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824A14FC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f29,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x824a179c
	if (ctx.cr6.eq) goto loc_824A179C;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1614
	if (ctx.cr6.eq) goto loc_824A1614;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1550
	if (ctx.cr6.eq) goto loc_824A1550;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
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
	// b 0x824a1618
	goto loc_824A1618;
loc_824A1550:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a15bc
	if (!ctx.cr0.gt) goto loc_824A15BC;
loc_824A156C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a158c
	if (ctx.cr6.lt) goto loc_824A158C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_824A158C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a15a8
	if (ctx.cr6.eq) goto loc_824A15A8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a15b0
	goto loc_824A15B0;
loc_824A15A8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A15B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a156c
	if (ctx.cr6.gt) goto loc_824A156C;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_824A15BC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a1600
	if (ctx.cr6.eq) goto loc_824A1600;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a15d8
	if (ctx.cr6.gt) goto loc_824A15D8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824A15D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1600
	if (!ctx.cr6.eq) goto loc_824A1600;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1618
	goto loc_824A1618;
loc_824A1600:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1618
	goto loc_824A1618;
loc_824A1614:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824A1618:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a179c
	if (ctx.cr6.eq) goto loc_824A179C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824a1060
	ctx.lr = 0x824A1634;
	sub_824A1060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2cc8
	ctx.lr = 0x824A1644;
	sub_821E2CC8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x824A164C;
	sub_82214F08(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a1208
	ctx.lr = 0x824A1658;
	sub_824A1208(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x824a1668
	if (!ctx.cr6.gt) goto loc_824A1668;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_824A1668:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x824a1794
	if (!ctx.cr6.gt) goto loc_824A1794;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f3c58
	ctx.lr = 0x824A168C;
	sub_823F3C58(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1794
	if (ctx.cr6.eq) goto loc_824A1794;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	ctx.lr = 0x824A16A0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a16c0
	if (ctx.cr6.eq) goto loc_824A16C0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822837a0
	ctx.lr = 0x824A16BC;
	sub_822837A0(ctx, base);
	// b 0x824a16c4
	goto loc_824A16C4;
loc_824A16C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_824A16C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// beq cr6,0x824a178c
	if (ctx.cr6.eq) goto loc_824A178C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x824A16DC;
	sub_8254C780(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a16f4
	if (ctx.cr6.eq) goto loc_824A16F4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r24,56
	ctx.r3.s64 = ctx.r24.s64 + 56;
	// bl 0x827f18f0
	ctx.lr = 0x824A16F4;
	sub_827F18F0(ctx, base);
loc_824A16F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225fb20
	ctx.lr = 0x824A1700;
	sub_8225FB20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1758
	if (ctx.cr6.eq) goto loc_824A1758;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_824A171C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a171c
	if (!ctx.cr0.eq) goto loc_824A171C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a1754
	if (!ctx.cr6.eq) goto loc_824A1754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A1754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A1754:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_824A1758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8272e450
	ctx.lr = 0x824A1764;
	sub_8272E450(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x824A176C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A1774;
	sub_82214F08(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_824A178C:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// b 0x824a16f4
	goto loc_824A16F4;
loc_824A1794:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A179C;
	sub_82214F08(ctx, base);
loc_824A179C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A13B8) {
	__imp__sub_824A13B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A17B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x824A17C0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a18e8
	if (ctx.cr6.eq) goto loc_824A18E8;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1824
	if (ctx.cr6.eq) goto loc_824A1824;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a18ec
	goto loc_824A18EC;
loc_824A1824:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a1890
	if (!ctx.cr0.gt) goto loc_824A1890;
loc_824A1840:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a1860
	if (ctx.cr6.lt) goto loc_824A1860;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A1860:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a187c
	if (ctx.cr6.eq) goto loc_824A187C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a1884
	goto loc_824A1884;
loc_824A187C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A1884:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a1840
	if (ctx.cr6.gt) goto loc_824A1840;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_824A1890:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824a18d4
	if (ctx.cr6.eq) goto loc_824A18D4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a18ac
	if (ctx.cr6.gt) goto loc_824A18AC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A18AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a18d4
	if (!ctx.cr6.eq) goto loc_824A18D4;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a18ec
	goto loc_824A18EC;
loc_824A18D4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a18ec
	goto loc_824A18EC;
loc_824A18E8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A18EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1ef0
	if (ctx.cr6.eq) goto loc_824A1EF0;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a19fc
	if (ctx.cr6.eq) goto loc_824A19FC;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1938
	if (ctx.cr6.eq) goto loc_824A1938;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1a00
	goto loc_824A1A00;
loc_824A1938:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a19a4
	if (!ctx.cr0.gt) goto loc_824A19A4;
loc_824A1954:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a1974
	if (ctx.cr6.lt) goto loc_824A1974;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A1974:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a1990
	if (ctx.cr6.eq) goto loc_824A1990;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a1998
	goto loc_824A1998;
loc_824A1990:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A1998:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a1954
	if (ctx.cr6.gt) goto loc_824A1954;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_824A19A4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a19e8
	if (ctx.cr6.eq) goto loc_824A19E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a19c0
	if (ctx.cr6.gt) goto loc_824A19C0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A19C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a19e8
	if (!ctx.cr6.eq) goto loc_824A19E8;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1a00
	goto loc_824A1A00;
loc_824A19E8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a1a00
	goto loc_824A1A00;
loc_824A19FC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A1A00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1ef0
	if (ctx.cr6.eq) goto loc_824A1EF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x824a1a5c
	if (!ctx.cr6.eq) goto loc_824A1A5C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
loc_824A1A2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x824a1a50
	if (ctx.cr6.eq) goto loc_824A1A50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a1a2c
	if (ctx.cr6.eq) goto loc_824A1A2C;
loc_824A1A50:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x824a1a70
	goto loc_824A1A70;
loc_824A1A5C:
	// addi r4,r11,3608
	ctx.r4.s64 = ctx.r11.s64 + 3608;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x824A1A68;
	sub_8226D7A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824A1A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1b44
	if (!ctx.cr6.eq) goto loc_824A1B44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x824a1ac0
	if (!ctx.cr6.eq) goto loc_824A1AC0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,3428
	ctx.r11.s64 = ctx.r11.s64 + 3428;
loc_824A1A90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x824a1ab4
	if (ctx.cr6.eq) goto loc_824A1AB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a1a90
	if (ctx.cr6.eq) goto loc_824A1A90;
loc_824A1AB4:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x824a1ad4
	goto loc_824A1AD4;
loc_824A1AC0:
	// addi r4,r11,3428
	ctx.r4.s64 = ctx.r11.s64 + 3428;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x824A1ACC;
	sub_8226D7A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824A1AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1b44
	if (!ctx.cr6.eq) goto loc_824A1B44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// bne cr6,0x824a1b24
	if (!ctx.cr6.eq) goto loc_824A1B24;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-6576
	ctx.r11.s64 = ctx.r11.s64 + -6576;
loc_824A1AF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x824a1b18
	if (ctx.cr6.eq) goto loc_824A1B18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a1af4
	if (ctx.cr6.eq) goto loc_824A1AF4;
loc_824A1B18:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x824a1b38
	goto loc_824A1B38;
loc_824A1B24:
	// addi r4,r11,-6576
	ctx.r4.s64 = ctx.r11.s64 + -6576;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x824A1B30;
	sub_8226D7A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824A1B38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1ef0
	if (ctx.cr6.eq) goto loc_824A1EF0;
loc_824A1B44:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1b88
	if (ctx.cr6.eq) goto loc_824A1B88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1b74
	if (!ctx.cr6.eq) goto loc_824A1B74;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x824a1b8c
	goto loc_824A1B8C;
loc_824A1B74:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x824a1b8c
	goto loc_824A1B8C;
loc_824A1B88:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A1B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1b9c
	if (ctx.cr6.eq) goto loc_824A1B9C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A1B9C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1ef0
	if (ctx.cr6.eq) goto loc_824A1EF0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x824A1BB0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a1be0
	if (ctx.cr6.eq) goto loc_824A1BE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8272cbc0
	ctx.lr = 0x824A1BC4;
	sub_8272CBC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,5104
	ctx.r10.s64 = ctx.r11.s64 + 5104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82283ad8
	ctx.lr = 0x824A1BD8;
	sub_82283AD8(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x824a1be4
	goto loc_824A1BE4;
loc_824A1BE0:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_824A1BE4:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a1c20
	if (ctx.cr6.eq) goto loc_824A1C20;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x824A1BF8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1c20
	if (ctx.cr6.eq) goto loc_824A1C20;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-32320
	ctx.r10.s64 = ctx.r11.s64 + -32320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x824a1c24
	goto loc_824A1C24;
loc_824A1C20:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_824A1C24:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r30,r11,-27456
	ctx.r30.s64 = ctx.r11.s64 + -27456;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,18756(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 18756);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1C54;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1C78;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1C9C;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1CC0;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1CE4;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1D08;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1D2C;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1D50;
	sub_824A13B8(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1D74;
	sub_824A13B8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1D98;
	sub_824A13B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f31,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// bl 0x8225fb20
	ctx.lr = 0x824A1DA8;
	sub_8225FB20(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a1edc
	if (ctx.cr6.eq) goto loc_824A1EDC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_824A1DB8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a1db8
	if (!ctx.cr0.eq) goto loc_824A1DB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a1df4
	if (!ctx.cr6.eq) goto loc_824A1DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A1DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A1DF4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824a1edc
	if (!ctx.cr6.gt) goto loc_824A1EDC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x824a1e38
	if (!ctx.cr6.lt) goto loc_824A1E38;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// fsubs f1,f0,f31
	ctx.f1.f64 = static_cast<float>(ctx.f0.f64 - ctx.f31.f64);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a13b8
	ctx.lr = 0x824A1E38;
	sub_824A13B8(ctx, base);
loc_824A1E38:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// beq cr6,0x824a1e64
	if (ctx.cr6.eq) goto loc_824A1E64;
loc_824A1E48:
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
	// bne 0x824a1e48
	if (!ctx.cr0.eq) goto loc_824A1E48;
loc_824A1E64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a1e78
	if (ctx.cr6.eq) goto loc_824A1E78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r24,56
	ctx.r3.s64 = ctx.r24.s64 + 56;
	// bl 0x827f18f0
	ctx.lr = 0x824A1E78;
	sub_827F18F0(ctx, base);
loc_824A1E78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x824A1E80;
	sub_829FF648(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a1eac
	if (ctx.cr6.eq) goto loc_824A1EAC;
loc_824A1E90:
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
	// bne 0x824a1e90
	if (!ctx.cr0.eq) goto loc_824A1E90;
loc_824A1EAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8272d630
	ctx.lr = 0x824A1EB8;
	sub_8272D630(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x824A1EC0;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x824A1EC8;
	sub_829FF648(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_824A1EDC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x824A1EE4;
	sub_829FF648(ctx, base);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x824A1EF0;
	sub_829FF648(ctx, base);
loc_824A1EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A17B8) {
	__imp__sub_824A17B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A1F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x824A1F10;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a2024
	if (ctx.cr6.eq) goto loc_824A2024;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1f68
	if (ctx.cr6.eq) goto loc_824A1F68;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
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
	// b 0x824a2028
	goto loc_824A2028;
loc_824A1F68:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
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
	// ble 0x824a1fd4
	if (!ctx.cr0.gt) goto loc_824A1FD4;
loc_824A1F84:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a1fa4
	if (ctx.cr6.lt) goto loc_824A1FA4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_824A1FA4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a1fc0
	if (ctx.cr6.eq) goto loc_824A1FC0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a1fc8
	goto loc_824A1FC8;
loc_824A1FC0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A1FC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a1f84
	if (ctx.cr6.gt) goto loc_824A1F84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A1FD4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a2014
	if (ctx.cr6.eq) goto loc_824A2014;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a1ff0
	if (ctx.cr6.gt) goto loc_824A1FF0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A1FF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2014
	if (!ctx.cr6.eq) goto loc_824A2014;
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
	// b 0x824a2028
	goto loc_824A2028;
loc_824A2014:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824a2028
	goto loc_824A2028;
loc_824A2024:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_824A2028:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a2084
	if (ctx.cr6.eq) goto loc_824A2084;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2074
	if (ctx.cr6.eq) goto loc_824A2074;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2060
	if (!ctx.cr6.eq) goto loc_824A2060;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// b 0x824a2078
	goto loc_824A2078;
loc_824A2060:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// b 0x824a2078
	goto loc_824A2078;
loc_824A2074:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A2078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a233c
	if (!ctx.cr6.eq) goto loc_824A233C;
loc_824A2084:
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a2108
	if (ctx.cr6.eq) goto loc_824A2108;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2100
	if (!ctx.cr6.eq) goto loc_824A2100;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a2100
	if (!ctx.cr0.gt) goto loc_824A2100;
loc_824A20B4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a20d4
	if (ctx.cr6.lt) goto loc_824A20D4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_824A20D4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a20f0
	if (ctx.cr6.eq) goto loc_824A20F0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a20f8
	goto loc_824A20F8;
loc_824A20F0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A20F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a20b4
	if (ctx.cr6.gt) goto loc_824A20B4;
loc_824A2100:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a210c
	goto loc_824A210C;
loc_824A2108:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A210C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a233c
	if (ctx.cr6.eq) goto loc_824A233C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8246c600
	ctx.lr = 0x824A2120;
	sub_8246C600(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A2130;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A2144;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,6
	ctx.r4.s64 = 6;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A2158;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,7
	ctx.r4.s64 = 7;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A216C;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A2180;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,11
	ctx.r4.s64 = 11;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A2194;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,13
	ctx.r4.s64 = 13;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A21A8;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,14
	ctx.r4.s64 = 14;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A21BC;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,16
	ctx.r4.s64 = 16;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A21D0;
	sub_824A1358(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,17
	ctx.r4.s64 = 17;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a1358
	ctx.lr = 0x824A21E4;
	sub_824A1358(ctx, base);
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x824a2334
	if (!ctx.cr6.gt) goto loc_824A2334;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x821f0890
	ctx.lr = 0x824A2214;
	sub_821F0890(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,-27468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// beq cr6,0x824a2334
	if (ctx.cr6.eq) goto loc_824A2334;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824A224C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x824a22b0
	if (!ctx.cr6.lt) goto loc_824A22B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2260
	if (!ctx.cr6.eq) goto loc_824A2260;
	// twi 31,r0,22
loc_824A2260:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a2270
	if (!ctx.cr6.eq) goto loc_824A2270;
	// twi 31,r0,22
loc_824A2270:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x8273f9d8
	ctx.lr = 0x824A2280;
	sub_8273F9D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2298
	if (ctx.cr6.eq) goto loc_824A2298;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a229c
	if (ctx.cr6.eq) goto loc_824A229C;
loc_824A2298:
	// twi 31,r0,22
loc_824A229C:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824a224c
	if (!ctx.cr6.eq) goto loc_824A224C;
	// b 0x824a22b4
	goto loc_824A22B4;
loc_824A22B0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_824A22B4:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a2334
	if (ctx.cr6.eq) goto loc_824A2334;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a22cc
	if (!ctx.cr6.eq) goto loc_824A22CC;
	// twi 31,r0,22
loc_824A22CC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a22dc
	if (!ctx.cr6.eq) goto loc_824A22DC;
	// twi 31,r0,22
loc_824A22DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824a1060
	ctx.lr = 0x824A22EC;
	sub_824A1060(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6572
	ctx.r4.s64 = ctx.r11.s64 + -6572;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A2304;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ec668
	ctx.lr = 0x824A2310;
	sub_821EC668(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2318;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8246c798
	ctx.lr = 0x824A2320;
	sub_8246C798(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_824A2334:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8246c798
	ctx.lr = 0x824A233C;
	sub_8246C798(ctx, base);
loc_824A233C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-6572
	ctx.r4.s64 = ctx.r11.s64 + -6572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A2350;
	sub_8222CF18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A1F08) {
	__imp__sub_824A1F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A2368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,1232(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1232, temp.u32);
	// stfs f10,1236(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A2368) {
	__imp__sub_824A2368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A23B0) {
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
	// bl 0x824a72b0
	ctx.lr = 0x824A23C8;
	sub_824A72B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a24d0
	if (ctx.cr6.eq) goto loc_824A24D0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a240c
	if (ctx.cr6.eq) goto loc_824A240C;
	// lbz r10,17(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a24d4
	goto loc_824A24D4;
loc_824A240C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a2478
	if (!ctx.cr0.gt) goto loc_824A2478;
loc_824A2428:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a2448
	if (ctx.cr6.lt) goto loc_824A2448;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_824A2448:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a2464
	if (ctx.cr6.eq) goto loc_824A2464;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a246c
	goto loc_824A246C;
loc_824A2464:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A246C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a2428
	if (ctx.cr6.gt) goto loc_824A2428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A2478:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a24bc
	if (ctx.cr6.eq) goto loc_824A24BC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a2494
	if (ctx.cr6.gt) goto loc_824A2494;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A2494:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a24bc
	if (!ctx.cr6.eq) goto loc_824A24BC;
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
	// b 0x824a24d4
	goto loc_824A24D4;
loc_824A24BC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a24d4
	goto loc_824A24D4;
loc_824A24D0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A24D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a24e4
	if (ctx.cr6.eq) goto loc_824A24E4;
	// bl 0x824686c8
	ctx.lr = 0x824A24E4;
	sub_824686C8(ctx, base);
loc_824A24E4:
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

PPC_WEAK_FUNC(sub_824A23B0) {
	__imp__sub_824A23B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A24F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x824A2500;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31927
	ctx.r25.s64 = -2092367872;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1052(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1052, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,1056(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1056, ctx.r11.u32);
	// beq cr6,0x824a2638
	if (ctx.cr6.eq) goto loc_824A2638;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24196
	ctx.r4.s64 = ctx.r11.s64 + 24196;
	// bl 0x82196e10
	ctx.lr = 0x824A2564;
	sub_82196E10(ctx, base);
	// stfs f1,20(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,24208
	ctx.r4.s64 = ctx.r10.s64 + 24208;
	// bl 0x82196e10
	ctx.lr = 0x824A2578;
	sub_82196E10(ctx, base);
	// lfs f0,20(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// stfs f1,24(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
	// addi r11,r11,-17748
	ctx.r11.s64 = ctx.r11.s64 + -17748;
	// lfs f0,-25888(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-10200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10200);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824a25a4
	if (!ctx.cr6.lt) goto loc_824A25A4;
	// stfs f31,20(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
loc_824A25A4:
	// lfs f13,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x824a25bc
	if (!ctx.cr6.lt) goto loc_824A25BC;
	// stfs f30,24(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
loc_824A25BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24220
	ctx.r4.s64 = ctx.r11.s64 + 24220;
	// bl 0x823b12e8
	ctx.lr = 0x824A25CC;
	sub_823B12E8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r9,24232
	ctx.r4.s64 = ctx.r9.s64 + 24232;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b12e8
	ctx.lr = 0x824A25F4;
	sub_823B12E8(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lfs f11,40(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-25888(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f7,44(r26)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + 44, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x824a2624
	if (!ctx.cr6.lt) goto loc_824A2624;
	// stfs f31,40(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 40, temp.u32);
loc_824A2624:
	// lfs f13,44(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x824a2638
	if (!ctx.cr6.lt) goto loc_824A2638;
	// stfs f30,44(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 44, temp.u32);
loc_824A2638:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6892
	ctx.r4.s64 = ctx.r11.s64 + 6892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A264C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x824A2658;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2660;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,24244
	ctx.r7.s64 = ctx.r10.s64 + 24244;
	// bl 0x821b2710
	ctx.lr = 0x824A2670;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	ctx.lr = 0x824A2678;
	sub_822A97A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a2718
	if (ctx.cr6.eq) goto loc_824A2718;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829fbc40
	ctx.lr = 0x824A268C;
	sub_829FBC40(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x824a2710
	if (ctx.cr6.eq) goto loc_824A2710;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r28,-31926
	ctx.r28.s64 = -2092302336;
	// addi r29,r11,-7836
	ctx.r29.s64 = ctx.r11.s64 + -7836;
loc_824A26AC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824a26e8
	if (ctx.cr6.eq) goto loc_824A26E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x824a26e8
	if (!ctx.cr6.eq) goto loc_824A26E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-7848(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824a26e8
	if (!ctx.cr6.eq) goto loc_824A26E8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_824A26E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x824a2704
	if (ctx.cr6.eq) goto loc_824A2704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,204
	ctx.r3.s64 = ctx.r26.s64 + 204;
	// bl 0x822f5c68
	ctx.lr = 0x824A2704;
	sub_822F5C68(ctx, base);
loc_824A2704:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x824a26ac
	if (!ctx.cr6.eq) goto loc_824A26AC;
loc_824A2710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x824A2718;
	sub_8221BE68(ctx, base);
loc_824A2718:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23684
	ctx.r4.s64 = ctx.r11.s64 + 23684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A272C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c690
	ctx.lr = 0x824A2738;
	sub_8219C690(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2740;
	sub_82214F08(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a2768
	if (ctx.cr6.eq) goto loc_824A2768;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r11,24280
	ctx.r7.s64 = ctx.r11.s64 + 24280;
	// bl 0x821b2710
	ctx.lr = 0x824A275C;
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x823b12e8
	ctx.lr = 0x824A2764;
	sub_823B12E8(ctx, base);
	// stw r3,916(r26)
	PPC_STORE_U32(ctx.r26.u32 + 916, ctx.r3.u32);
loc_824A2768:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a278c
	if (ctx.cr6.eq) goto loc_824A278C;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a2790
	if (!ctx.cr6.eq) goto loc_824A2790;
loc_824A278C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2790:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a27b4
	if (ctx.cr6.eq) goto loc_824A27B4;
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x824A27B4;
	sub_82232748(ctx, base);
loc_824A27B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2848
	if (ctx.cr6.eq) goto loc_824A2848;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r26,1072
	ctx.r30.s64 = ctx.r26.s64 + 1072;
	// addi r27,r11,26908
	ctx.r27.s64 = ctx.r11.s64 + 26908;
loc_824A27D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r28,7
	ctx.r29.s64 = ctx.r28.s64 + 7;
loc_824A27D8:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ab068
	ctx.lr = 0x824A27F0;
	sub_824AB068(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2810
	if (ctx.cr6.eq) goto loc_824A2810;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821b2710
	ctx.lr = 0x824A2804;
	sub_821B2710(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823b12e8
	ctx.lr = 0x824A280C;
	sub_823B12E8(ctx, base);
	// b 0x824a2814
	goto loc_824A2814;
loc_824A2810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2814:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x824a27d8
	if (ctx.cr6.lt) goto loc_824A27D8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x824a27d0
	if (ctx.cr6.lt) goto loc_824A27D0;
loc_824A2848:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82392c88
	ctx.lr = 0x824A2854;
	sub_82392C88(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A24F8) {
	__imp__sub_824A24F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A2868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x824A2870;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30244
	ctx.r4.s64 = ctx.r11.s64 + -30244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// bl 0x8222cf18
	ctx.lr = 0x824A2898;
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r15,r11,63
	ctx.r15.s64 = ctx.r11.s64 + 63;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a28b4
	if (ctx.cr6.eq) goto loc_824A28B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A28B4:
	// addi r5,r17,16
	ctx.r5.s64 = ctx.r17.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A28C0;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A28C8;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24332
	ctx.r4.s64 = ctx.r11.s64 + 24332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A28DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a28f0
	if (ctx.cr6.eq) goto loc_824A28F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A28F0:
	// addi r5,r17,28
	ctx.r5.s64 = ctx.r17.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A28FC;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2904;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24340
	ctx.r4.s64 = ctx.r11.s64 + 24340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2918;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a292c
	if (ctx.cr6.eq) goto loc_824A292C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A292C:
	// addi r5,r17,36
	ctx.r5.s64 = ctx.r17.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2938;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2940;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2954;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2968
	if (ctx.cr6.eq) goto loc_824A2968;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2968:
	// addi r5,r17,48
	ctx.r5.s64 = ctx.r17.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2974;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A297C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24380
	ctx.r4.s64 = ctx.r11.s64 + 24380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2990;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a29a4
	if (ctx.cr6.eq) goto loc_824A29A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A29A4:
	// addi r5,r17,52
	ctx.r5.s64 = ctx.r17.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A29B0;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A29B8;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24396
	ctx.r4.s64 = ctx.r11.s64 + 24396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A29CC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a29e0
	if (ctx.cr6.eq) goto loc_824A29E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A29E0:
	// addi r5,r17,56
	ctx.r5.s64 = ctx.r17.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A29EC;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A29F4;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24412
	ctx.r4.s64 = ctx.r11.s64 + 24412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2A08;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2a1c
	if (ctx.cr6.eq) goto loc_824A2A1C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2A1C:
	// addi r5,r17,60
	ctx.r5.s64 = ctx.r17.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2A28;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2A30;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24432
	ctx.r4.s64 = ctx.r11.s64 + 24432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2A44;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2a58
	if (ctx.cr6.eq) goto loc_824A2A58;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2A58:
	// addi r5,r17,64
	ctx.r5.s64 = ctx.r17.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2A64;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2A6C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24452
	ctx.r4.s64 = ctx.r11.s64 + 24452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2A80;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2a94
	if (ctx.cr6.eq) goto loc_824A2A94;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2A94:
	// addi r5,r17,68
	ctx.r5.s64 = ctx.r17.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2AA0;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2AA8;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24468
	ctx.r4.s64 = ctx.r11.s64 + 24468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2ABC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2ad0
	if (ctx.cr6.eq) goto loc_824A2AD0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2AD0:
	// addi r5,r17,72
	ctx.r5.s64 = ctx.r17.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2ADC;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2AE4;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24484
	ctx.r4.s64 = ctx.r11.s64 + 24484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2AF8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2b0c
	if (ctx.cr6.eq) goto loc_824A2B0C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2B0C:
	// addi r5,r17,76
	ctx.r5.s64 = ctx.r17.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2B18;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2B20;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24508
	ctx.r4.s64 = ctx.r11.s64 + 24508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2B34;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2b48
	if (ctx.cr6.eq) goto loc_824A2B48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2B48:
	// addi r5,r17,80
	ctx.r5.s64 = ctx.r17.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2B54;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2B5C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24532
	ctx.r4.s64 = ctx.r11.s64 + 24532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2B70;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2b84
	if (ctx.cr6.eq) goto loc_824A2B84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2B84:
	// addi r5,r17,84
	ctx.r5.s64 = ctx.r17.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2B90;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2B98;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2BAC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2bc0
	if (ctx.cr6.eq) goto loc_824A2BC0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2BC0:
	// addi r5,r17,88
	ctx.r5.s64 = ctx.r17.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2BCC;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2BD4;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24568
	ctx.r4.s64 = ctx.r11.s64 + 24568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2BE8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2bfc
	if (ctx.cr6.eq) goto loc_824A2BFC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2BFC:
	// addi r5,r17,2156
	ctx.r5.s64 = ctx.r17.s64 + 2156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2C08;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2C10;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24592
	ctx.r4.s64 = ctx.r11.s64 + 24592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2C24;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2c38
	if (ctx.cr6.eq) goto loc_824A2C38;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2C38:
	// addi r5,r17,268
	ctx.r5.s64 = ctx.r17.s64 + 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2C44;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2C4C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24608
	ctx.r4.s64 = ctx.r11.s64 + 24608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2C60;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2c74
	if (ctx.cr6.eq) goto loc_824A2C74;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2C74:
	// addi r5,r17,1000
	ctx.r5.s64 = ctx.r17.s64 + 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2C80;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2C88;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24628
	ctx.r4.s64 = ctx.r11.s64 + 24628;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2C9C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2cb0
	if (ctx.cr6.eq) goto loc_824A2CB0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2CB0:
	// addi r5,r17,1004
	ctx.r5.s64 = ctx.r17.s64 + 1004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2CBC;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2CC4;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24648
	ctx.r4.s64 = ctx.r11.s64 + 24648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2CD8;
	sub_8222CF18(ctx, base);
	// addi r5,r17,1008
	ctx.r5.s64 = ctx.r17.s64 + 1008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17080
	ctx.lr = 0x824A2CE8;
	sub_82A17080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2CF0;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,24656
	ctx.r4.s64 = ctx.r10.s64 + 24656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2D04;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2d18
	if (ctx.cr6.eq) goto loc_824A2D18;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2D18:
	// addi r5,r17,1024
	ctx.r5.s64 = ctx.r17.s64 + 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2D24;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2D2C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24672
	ctx.r4.s64 = ctx.r11.s64 + 24672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2D40;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2d54
	if (ctx.cr6.eq) goto loc_824A2D54;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2D54:
	// addi r5,r17,1028
	ctx.r5.s64 = ctx.r17.s64 + 1028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2D60;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2D68;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24688
	ctx.r4.s64 = ctx.r11.s64 + 24688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2D7C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2d90
	if (ctx.cr6.eq) goto loc_824A2D90;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2D90:
	// addi r5,r17,1032
	ctx.r5.s64 = ctx.r17.s64 + 1032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2D9C;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2DA4;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24708
	ctx.r4.s64 = ctx.r11.s64 + 24708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2DB8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2dcc
	if (ctx.cr6.eq) goto loc_824A2DCC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2DCC:
	// addi r5,r17,1036
	ctx.r5.s64 = ctx.r17.s64 + 1036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2DD8;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2DE0;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24740
	ctx.r4.s64 = ctx.r11.s64 + 24740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2DF4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2e08
	if (ctx.cr6.eq) goto loc_824A2E08;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2E08:
	// addi r5,r17,1040
	ctx.r5.s64 = ctx.r17.s64 + 1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2E14;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2E1C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24780
	ctx.r4.s64 = ctx.r11.s64 + 24780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2E30;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2e44
	if (ctx.cr6.eq) goto loc_824A2E44;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2E44:
	// addi r5,r17,1044
	ctx.r5.s64 = ctx.r17.s64 + 1044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2E50;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2E58;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24812
	ctx.r4.s64 = ctx.r11.s64 + 24812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2E6C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2e80
	if (ctx.cr6.eq) goto loc_824A2E80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2E80:
	// addi r5,r17,1048
	ctx.r5.s64 = ctx.r17.s64 + 1048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2E8C;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2E94;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24848
	ctx.r4.s64 = ctx.r11.s64 + 24848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2EA8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2ebc
	if (ctx.cr6.eq) goto loc_824A2EBC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2EBC:
	// addi r5,r17,1052
	ctx.r5.s64 = ctx.r17.s64 + 1052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2EC8;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2ED0;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24864
	ctx.r4.s64 = ctx.r11.s64 + 24864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2EE4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2ef8
	if (ctx.cr6.eq) goto loc_824A2EF8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2EF8:
	// addi r5,r17,1056
	ctx.r5.s64 = ctx.r17.s64 + 1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2F04;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2F0C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24880
	ctx.r4.s64 = ctx.r11.s64 + 24880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2F20;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2f34
	if (ctx.cr6.eq) goto loc_824A2F34;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2F34:
	// addi r5,r17,1060
	ctx.r5.s64 = ctx.r17.s64 + 1060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A2F40;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2F48;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24904
	ctx.r4.s64 = ctx.r11.s64 + 24904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2F5C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2f70
	if (ctx.cr6.eq) goto loc_824A2F70;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2F70:
	// addi r5,r17,1240
	ctx.r5.s64 = ctx.r17.s64 + 1240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2F7C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2F84;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24924
	ctx.r4.s64 = ctx.r11.s64 + 24924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2F98;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2fac
	if (ctx.cr6.eq) goto loc_824A2FAC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2FAC:
	// addi r5,r17,1244
	ctx.r5.s64 = ctx.r17.s64 + 1244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2FB8;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2FC0;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24940
	ctx.r4.s64 = ctx.r11.s64 + 24940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A2FD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2fe8
	if (ctx.cr6.eq) goto loc_824A2FE8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A2FE8:
	// addi r5,r17,1248
	ctx.r5.s64 = ctx.r17.s64 + 1248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A2FF4;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A2FFC;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24964
	ctx.r4.s64 = ctx.r11.s64 + 24964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3010;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3024
	if (ctx.cr6.eq) goto loc_824A3024;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3024:
	// addi r5,r17,1252
	ctx.r5.s64 = ctx.r17.s64 + 1252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3030;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3038;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25000
	ctx.r4.s64 = ctx.r11.s64 + 25000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A304C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3060
	if (ctx.cr6.eq) goto loc_824A3060;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3060:
	// addi r5,r17,1256
	ctx.r5.s64 = ctx.r17.s64 + 1256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A306C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3074;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25028
	ctx.r4.s64 = ctx.r11.s64 + 25028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3088;
	sub_8222CF18(ctx, base);
	// addi r5,r17,994
	ctx.r5.s64 = ctx.r17.s64 + 994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A3098;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A30A0;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25052
	ctx.r4.s64 = ctx.r10.s64 + 25052;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A30B4;
	sub_8222CF18(ctx, base);
	// addi r5,r17,995
	ctx.r5.s64 = ctx.r17.s64 + 995;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A30C4;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A30CC;
	sub_82214F08(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,25076
	ctx.r4.s64 = ctx.r9.s64 + 25076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A30E0;
	sub_8222CF18(ctx, base);
	// addi r5,r17,996
	ctx.r5.s64 = ctx.r17.s64 + 996;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A30F0;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A30F8;
	sub_82214F08(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,25100
	ctx.r4.s64 = ctx.r8.s64 + 25100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A310C;
	sub_8222CF18(ctx, base);
	// addi r5,r17,997
	ctx.r5.s64 = ctx.r17.s64 + 997;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A311C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3124;
	sub_82214F08(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,25132
	ctx.r4.s64 = ctx.r7.s64 + 25132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3138;
	sub_8222CF18(ctx, base);
	// addi r5,r17,998
	ctx.r5.s64 = ctx.r17.s64 + 998;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A3148;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3150;
	sub_82214F08(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,25164
	ctx.r4.s64 = ctx.r6.s64 + 25164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3164;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3178
	if (ctx.cr6.eq) goto loc_824A3178;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3178:
	// addi r5,r17,1232
	ctx.r5.s64 = ctx.r17.s64 + 1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A3184;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A318C;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25192
	ctx.r4.s64 = ctx.r11.s64 + 25192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A31A0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a31b4
	if (ctx.cr6.eq) goto loc_824A31B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A31B4:
	// addi r5,r17,1236
	ctx.r5.s64 = ctx.r17.s64 + 1236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A31C0;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A31C8;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25224
	ctx.r4.s64 = ctx.r11.s64 + 25224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A31DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a31f0
	if (ctx.cr6.eq) goto loc_824A31F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A31F0:
	// addi r5,r17,1272
	ctx.r5.s64 = ctx.r17.s64 + 1272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A31FC;
	sub_825CBB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3204;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25264
	ctx.r4.s64 = ctx.r11.s64 + 25264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3218;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a322c
	if (ctx.cr6.eq) goto loc_824A322C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A322C:
	// addi r5,r17,1276
	ctx.r5.s64 = ctx.r17.s64 + 1276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3238;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3240;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25296
	ctx.r4.s64 = ctx.r11.s64 + 25296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3254;
	sub_8222CF18(ctx, base);
	// addi r5,r17,2160
	ctx.r5.s64 = ctx.r17.s64 + 2160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16ec0
	ctx.lr = 0x824A3264;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A326C;
	sub_82214F08(ctx, base);
	// ld r9,1264(r17)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r17.u32 + 1264);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r4,r10,25312
	ctx.r4.s64 = ctx.r10.s64 + 25312;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3290;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a32a4
	if (ctx.cr6.eq) goto loc_824A32A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A32A4:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x824A32B0;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A32B8;
	sub_82214F08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25344
	ctx.r4.s64 = ctx.r11.s64 + 25344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A32CC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a32e0
	if (ctx.cr6.eq) goto loc_824A32E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A32E0:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x824A32EC;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A32F4;
	sub_82214F08(ctx, base);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,92(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 92);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25376
	ctx.r4.s64 = ctx.r11.s64 + 25376;
	// rldimi r7,r8,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// std r7,1264(r17)
	PPC_STORE_U64(ctx.r17.u32 + 1264, ctx.r7.u64);
	// bl 0x8222cf18
	ctx.lr = 0x824A3320;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3334
	if (ctx.cr6.eq) goto loc_824A3334;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3334:
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x824A3340;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x824A3348;
	sub_82214F08(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x821d9ed8
	ctx.lr = 0x824A3354;
	sub_821D9ED8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,92(r17)
	PPC_STORE_U32(ctx.r17.u32 + 92, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,96(r17)
	PPC_STORE_U32(ctx.r17.u32 + 96, ctx.r9.u32);
	// beq cr6,0x824a419c
	if (ctx.cr6.eq) goto loc_824A419C;
	// lwz r9,108(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 108);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r8,104(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 104);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r23,r11,28344
	ctx.r23.s64 = ctx.r11.s64 + 28344;
	// srawi. r29,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r10,-31524
	ctx.r27.s64 = ctx.r10.s64 + -31524;
	// ble 0x824a342c
	if (!ctx.cr0.gt) goto loc_824A342C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r26,r11,25392
	ctx.r26.s64 = ctx.r11.s64 + 25392;
loc_824A33A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A33BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x824A33CC;
	sub_8222CF18(ctx, base);
	// lwz r11,104(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82a16ec0
	ctx.lr = 0x824A33E0;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c67d8
	ctx.lr = 0x824A33E8;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A33EC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a33ec
	if (!ctx.cr0.eq) goto loc_824A33EC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A3420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x824a33a4
	if (!ctx.cr0.eq) goto loc_824A33A4;
loc_824A342C:
	// lwz r11,124(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 124);
	// lwz r10,120(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 120);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r29,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x824a34d4
	if (!ctx.cr0.gt) goto loc_824A34D4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r26,r11,25416
	ctx.r26.s64 = ctx.r11.s64 + 25416;
loc_824A344C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x824A3474;
	sub_8222CF18(ctx, base);
	// lwz r11,120(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82a16ec0
	ctx.lr = 0x824A3488;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c67d8
	ctx.lr = 0x824A3490;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A3494:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3494
	if (!ctx.cr0.eq) goto loc_824A3494;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A34C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x824a344c
	if (!ctx.cr0.eq) goto loc_824A344C;
loc_824A34D4:
	// lwz r11,196(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 196);
	// addi r29,r17,192
	ctx.r29.s64 = ctx.r17.s64 + 192;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,25444
	ctx.r28.s64 = ctx.r11.s64 + 25444;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_824A34F8:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3510
	if (ctx.cr6.eq) goto loc_824A3510;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824a3514
	if (ctx.cr6.eq) goto loc_824A3514;
loc_824A3510:
	// twi 31,r0,22
loc_824A3514:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a3560
	if (ctx.cr6.eq) goto loc_824A3560;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a352c
	if (!ctx.cr6.eq) goto loc_824A352C;
	// twi 31,r0,22
loc_824A352C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a353c
	if (!ctx.cr6.eq) goto loc_824A353C;
	// twi 31,r0,22
loc_824A353C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82395be0
	ctx.lr = 0x824A3554;
	sub_82395BE0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a596f0
	ctx.lr = 0x824A355C;
	sub_82A596F0(ctx, base);
	// b 0x824a34f8
	goto loc_824A34F8;
loc_824A3560:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r18,r17,156
	ctx.r18.s64 = ctx.r17.s64 + 156;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r26,r17,132
	ctx.r26.s64 = ctx.r17.s64 + 132;
	// addi r20,r11,25484
	ctx.r20.s64 = ctx.r11.s64 + 25484;
	// addi r22,r10,25472
	ctx.r22.s64 = ctx.r10.s64 + 25472;
	// addi r21,r9,23012
	ctx.r21.s64 = ctx.r9.s64 + 23012;
	// addi r24,r8,3764
	ctx.r24.s64 = ctx.r8.s64 + 3764;
	// addi r19,r7,25456
	ctx.r19.s64 = ctx.r7.s64 + 25456;
loc_824A3594:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a35ec
	if (!ctx.cr6.eq) goto loc_824A35EC;
loc_824A35B0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x824a35c4
	if (ctx.cr6.lt) goto loc_824A35C4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824A35C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a35d8
	if (ctx.cr6.eq) goto loc_824A35D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824a35e0
	goto loc_824A35E0;
loc_824A35D8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A35E0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a35b0
	if (ctx.cr6.eq) goto loc_824A35B0;
loc_824A35EC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a3628
	if (ctx.cr6.eq) goto loc_824A3628;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a3614
	if (ctx.cr6.lt) goto loc_824A3614;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A3614:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a3628
	if (!ctx.cr6.eq) goto loc_824A3628;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// b 0x824a3634
	goto loc_824A3634;
loc_824A3628:
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
loc_824A3634:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// lwz r29,256(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a3654
	if (ctx.cr6.eq) goto loc_824A3654;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824a3658
	if (ctx.cr6.eq) goto loc_824A3658;
loc_824A3654:
	// twi 31,r0,22
loc_824A3658:
	// lwz r28,260(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824a37c8
	if (ctx.cr6.eq) goto loc_824A37C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A367C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x824A368C;
	sub_8222CF18(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a36a4
	if (ctx.cr6.eq) goto loc_824A36A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A36A4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A36B0;
	sub_825CBB08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x821c67d8
	ctx.lr = 0x824A36C0;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A36C4:
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
	// bne 0x824a36c4
	if (!ctx.cr0.eq) goto loc_824A36C4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8222cf18
	ctx.lr = 0x824A36F4;
	sub_8222CF18(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824a3700
	if (!ctx.cr6.eq) goto loc_824A3700;
	// twi 31,r0,22
loc_824A3700:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a3710
	if (!ctx.cr6.eq) goto loc_824A3710;
	// twi 31,r0,22
loc_824A3710:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r28,16
	ctx.r5.s64 = ctx.r28.s64 + 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3728
	if (ctx.cr6.eq) goto loc_824A3728;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A3730;
	sub_825CBB90(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821c67d8
	ctx.lr = 0x824A3738;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A373C:
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
	// bne 0x824a373c
	if (!ctx.cr0.eq) goto loc_824A373C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8222cf18
	ctx.lr = 0x824A376C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r17,144
	ctx.r3.s64 = ctx.r17.s64 + 144;
	// bl 0x82401d00
	ctx.lr = 0x824A3778;
	sub_82401D00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a16ec0
	ctx.lr = 0x824A3788;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821c67d8
	ctx.lr = 0x824A3790;
	sub_821C67D8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_824A3794:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3794
	if (!ctx.cr0.eq) goto loc_824A3794;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A37C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A37C8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824aea38
	ctx.lr = 0x824A37D8;
	sub_824AEA38(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r29,224(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a37f0
	if (ctx.cr6.eq) goto loc_824A37F0;
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x824a37f4
	if (ctx.cr6.eq) goto loc_824A37F4;
loc_824A37F0:
	// twi 31,r0,22
loc_824A37F4:
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824a38b8
	if (ctx.cr6.eq) goto loc_824A38B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3828;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3840
	if (ctx.cr6.eq) goto loc_824A3840;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3840:
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A384C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3854;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3858:
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
	// bne 0x824a3858
	if (!ctx.cr0.eq) goto loc_824A3858;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x824a3884
	if (!ctx.cr6.eq) goto loc_824A3884;
	// twi 31,r0,22
loc_824A3884:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a3894
	if (!ctx.cr6.eq) goto loc_824A3894;
	// twi 31,r0,22
loc_824A3894:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x8249c5c8
	ctx.lr = 0x824A38A4;
	sub_8249C5C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A38B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A38B8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,13
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 13, ctx.xer);
	// blt cr6,0x824a3594
	if (ctx.cr6.lt) goto loc_824A3594;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r28,r17,920
	ctx.r28.s64 = ctx.r17.s64 + 920;
	// addi r29,r11,25528
	ctx.r29.s64 = ctx.r11.s64 + 25528;
	// addi r26,r10,25520
	ctx.r26.s64 = ctx.r10.s64 + 25520;
	// addi r27,r9,25500
	ctx.r27.s64 = ctx.r9.s64 + 25500;
loc_824A38E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A38FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A390C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3920
	if (ctx.cr6.eq) goto loc_824A3920;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3920:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A392C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3934;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3938:
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
	// bne 0x824a3938
	if (!ctx.cr0.eq) goto loc_824A3938;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A3968;
	sub_8222CF18(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82a16e20
	ctx.lr = 0x824A397C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A3984;
	sub_821C67D8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_824A3988:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3988
	if (!ctx.cr0.eq) goto loc_824A3988;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A39BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// blt cr6,0x824a38e4
	if (ctx.cr6.lt) goto loc_824A38E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r29,r11,25340
	ctx.r29.s64 = ctx.r11.s64 + 25340;
	// addi r28,r10,25536
	ctx.r28.s64 = ctx.r10.s64 + 25536;
loc_824A39E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A39FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3A0C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3a20
	if (ctx.cr6.eq) goto loc_824A3A20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3A20:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3A2C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3A34;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3A38:
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
	// bne 0x824a3a38
	if (!ctx.cr0.eq) goto loc_824A3A38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A3A68;
	sub_8222CF18(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,68
	ctx.r7.s64 = ctx.r8.s64 + 68;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a3a8c
	if (ctx.cr6.eq) goto loc_824A3A8C;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A3A8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3A94;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A3A9C;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3AA0:
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
	// bne 0x824a3aa0
	if (!ctx.cr0.eq) goto loc_824A3AA0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A3AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x824a39e4
	if (ctx.cr6.lt) goto loc_824A39E4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r29,r11,25560
	ctx.r29.s64 = ctx.r11.s64 + 25560;
	// addi r28,r10,25548
	ctx.r28.s64 = ctx.r10.s64 + 25548;
loc_824A3AFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3B24;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3b38
	if (ctx.cr6.eq) goto loc_824A3B38;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3B38:
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3B44;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3B4C;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3B50:
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
	// bne 0x824a3b50
	if (!ctx.cr0.eq) goto loc_824A3B50;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A3B80;
	sub_8222CF18(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,87
	ctx.r7.s64 = ctx.r8.s64 + 87;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a3ba4
	if (ctx.cr6.eq) goto loc_824A3BA4;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A3BA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3BAC;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A3BB4;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3BB8:
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
	// bne 0x824a3bb8
	if (!ctx.cr0.eq) goto loc_824A3BB8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A3BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// blt cr6,0x824a3afc
	if (ctx.cr6.lt) goto loc_824A3AFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r29,r11,25584
	ctx.r29.s64 = ctx.r11.s64 + 25584;
	// addi r28,r10,25568
	ctx.r28.s64 = ctx.r10.s64 + 25568;
loc_824A3C14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3C3C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3c50
	if (ctx.cr6.eq) goto loc_824A3C50;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A3C50:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3C5C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3C64;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3C68:
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
	// bne 0x824a3c68
	if (!ctx.cr0.eq) goto loc_824A3C68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A3C98;
	sub_8222CF18(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,211
	ctx.r7.s64 = ctx.r8.s64 + 211;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a3cbc
	if (ctx.cr6.eq) goto loc_824A3CBC;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A3CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A3CC4;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A3CCC;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A3CD0:
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
	// bne 0x824a3cd0
	if (!ctx.cr0.eq) goto loc_824A3CD0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A3D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x824a3c14
	if (ctx.cr6.lt) goto loc_824A3C14;
	// lwz r11,228(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 228);
	// addi r27,r17,220
	ctx.r27.s64 = ctx.r17.s64 + 220;
	// lwz r10,224(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 224);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824a3de4
	if (ctx.cr0.eq) goto loc_824A3DE4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r11,25612
	ctx.r26.s64 = ctx.r11.s64 + 25612;
	// addi r25,r10,25592
	ctx.r25.s64 = ctx.r10.s64 + 25592;
loc_824A3D48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3D70;
	sub_8222CF18(ctx, base);
	// lwz r11,224(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 224);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8244dae0
	ctx.lr = 0x824A3D84;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3D8C;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A3D90:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3d90
	if (!ctx.cr0.eq) goto loc_824A3D90;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A3DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a3d48
	if (ctx.cr6.lt) goto loc_824A3D48;
loc_824A3DE4:
	// lwz r11,244(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 244);
	// addi r27,r17,236
	ctx.r27.s64 = ctx.r17.s64 + 236;
	// lwz r10,240(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 240);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824a3eb0
	if (ctx.cr0.eq) goto loc_824A3EB0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r11,25648
	ctx.r26.s64 = ctx.r11.s64 + 25648;
	// addi r25,r10,25628
	ctx.r25.s64 = ctx.r10.s64 + 25628;
loc_824A3E14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3E3C;
	sub_8222CF18(ctx, base);
	// lwz r11,240(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 240);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8244dae0
	ctx.lr = 0x824A3E50;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3E58;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A3E5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3e5c
	if (!ctx.cr0.eq) goto loc_824A3E5C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A3E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a3e14
	if (ctx.cr6.lt) goto loc_824A3E14;
loc_824A3EB0:
	// lwz r11,260(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 260);
	// addi r27,r17,252
	ctx.r27.s64 = ctx.r17.s64 + 252;
	// lwz r10,256(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 256);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824a3f7c
	if (ctx.cr0.eq) goto loc_824A3F7C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r11,25680
	ctx.r26.s64 = ctx.r11.s64 + 25680;
	// addi r25,r10,25664
	ctx.r25.s64 = ctx.r10.s64 + 25664;
loc_824A3EE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3F08;
	sub_8222CF18(ctx, base);
	// lwz r11,256(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 256);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8244dae0
	ctx.lr = 0x824A3F1C;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3F24;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A3F28:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3f28
	if (!ctx.cr0.eq) goto loc_824A3F28;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A3F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a3ee0
	if (ctx.cr6.lt) goto loc_824A3EE0;
loc_824A3F7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r17,937
	ctx.r26.s64 = ctx.r17.s64 + 937;
	// addi r28,r11,25732
	ctx.r28.s64 = ctx.r11.s64 + 25732;
	// addi r27,r10,25696
	ctx.r27.s64 = ctx.r10.s64 + 25696;
loc_824A3F94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A3FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A3FBC;
	sub_8222CF18(ctx, base);
	// add r5,r26,r29
	ctx.r5.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A3FCC;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A3FD4;
	sub_821C67D8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A3FD8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a3fd8
	if (!ctx.cr0.eq) goto loc_824A3FD8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A400C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x824a3f94
	if (ctx.cr6.lt) goto loc_824A3F94;
	// lwz r11,172(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 172);
	// addi r26,r17,168
	ctx.r26.s64 = ctx.r17.s64 + 168;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r25,r10,25780
	ctx.r25.s64 = ctx.r10.s64 + 25780;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r24,r9,25764
	ctx.r24.s64 = ctx.r9.s64 + 25764;
	// addi r27,r11,25792
	ctx.r27.s64 = ctx.r11.s64 + 25792;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_824A4048:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a405c
	if (ctx.cr6.eq) goto loc_824A405C;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824a4060
	if (ctx.cr6.eq) goto loc_824A4060;
loc_824A405C:
	// twi 31,r0,22
loc_824A4060:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824a50ec
	if (ctx.cr6.eq) goto loc_824A50EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824a408c
	if (!ctx.cr6.eq) goto loc_824A408C;
	// twi 31,r0,22
loc_824A408C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a409c
	if (!ctx.cr6.eq) goto loc_824A409C;
	// twi 31,r0,22
loc_824A409C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a40b4
	if (!ctx.cr6.eq) goto loc_824A40B4;
	// twi 31,r0,22
loc_824A40B4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// bl 0x8222cf18
	ctx.lr = 0x824A40CC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a40e0
	if (ctx.cr6.eq) goto loc_824A40E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A40E0:
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x824A40EC;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A40F4;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A40F8:
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
	// bne 0x824a40f8
	if (!ctx.cr0.eq) goto loc_824A40F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A4128;
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a413c
	if (ctx.cr6.eq) goto loc_824A413C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A413C:
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4148;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4150;
	sub_821C67D8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_824A4154:
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
	// bne 0x824a4154
	if (!ctx.cr0.eq) goto loc_824A4154;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8273f9d8
	ctx.lr = 0x824A4190;
	sub_8273F9D8(ctx, base);
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x824a4048
	goto loc_824A4048;
loc_824A419C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,25392
	ctx.r28.s64 = ctx.r11.s64 + 25392;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A41BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
	// addi r27,r10,-31524
	ctx.r27.s64 = ctx.r10.s64 + -31524;
	// beq cr6,0x824a42bc
	if (ctx.cr6.eq) goto loc_824A42BC;
	// addi r26,r17,100
	ctx.r26.s64 = ctx.r17.s64 + 100;
loc_824A41E0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_824A41E8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a41e8
	if (!ctx.cr0.eq) goto loc_824A41E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4214;
	sub_8222CF18(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16ec0
	ctx.lr = 0x824A4224;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A422C;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_824A4230:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a4230
	if (!ctx.cr0.eq) goto loc_824A4230;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82343b68
	ctx.lr = 0x824A425C;
	sub_82343B68(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A4270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4278;
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_824A427C:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a427c
	if (!ctx.cr0.eq) goto loc_824A427C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A42B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a41e0
	if (!ctx.cr6.eq) goto loc_824A41E0;
loc_824A42BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,25416
	ctx.r28.s64 = ctx.r11.s64 + 25416;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A42DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a43c8
	if (ctx.cr6.eq) goto loc_824A43C8;
	// addi r26,r17,116
	ctx.r26.s64 = ctx.r17.s64 + 116;
loc_824A42EC:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_824A42F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a42f4
	if (!ctx.cr0.eq) goto loc_824A42F4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4320;
	sub_8222CF18(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16ec0
	ctx.lr = 0x824A4330;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4338;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_824A433C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a433c
	if (!ctx.cr0.eq) goto loc_824A433C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82343b68
	ctx.lr = 0x824A4368;
	sub_82343B68(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A437C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4384;
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_824A4388:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a4388
	if (!ctx.cr0.eq) goto loc_824A4388;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A43BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a42ec
	if (!ctx.cr6.eq) goto loc_824A42EC;
loc_824A43C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r28,r11,25444
	ctx.r28.s64 = ctx.r11.s64 + 25444;
loc_824A43D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A43EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a442c
	if (ctx.cr6.eq) goto loc_824A442C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4410;
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
	ctx.lr = 0x824A4424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a4430
	goto loc_824A4430;
loc_824A442C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A4430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a445c
	if (ctx.cr6.eq) goto loc_824A445C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a43d4
	if (ctx.cr6.eq) goto loc_824A43D4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r17,192
	ctx.r4.s64 = ctx.r17.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8282ea08
	ctx.lr = 0x824A4458;
	sub_8282EA08(ctx, base);
	// b 0x824a43d4
	goto loc_824A43D4;
loc_824A445C:
	// addi r28,r17,132
	ctx.r28.s64 = ctx.r17.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82367a90
	ctx.lr = 0x824A4468;
	sub_82367A90(ctx, base);
	// addi r27,r17,144
	ctx.r27.s64 = ctx.r17.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824ae3f0
	ctx.lr = 0x824A4474;
	sub_824AE3F0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,25456
	ctx.r26.s64 = ctx.r11.s64 + 25456;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r22,r11,3764
	ctx.r22.s64 = ctx.r11.s64 + 3764;
	// beq cr6,0x824a4680
	if (ctx.cr6.eq) goto loc_824A4680;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r25,r11,3224
	ctx.r25.s64 = ctx.r11.s64 + 3224;
	// lfs f31,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r10,25472
	ctx.r24.s64 = ctx.r10.s64 + 25472;
	// addi r23,r9,23012
	ctx.r23.s64 = ctx.r9.s64 + 23012;
loc_824A44C8:
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A44DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a44f4
	if (ctx.cr6.eq) goto loc_824A44F4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A44F4:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4500;
	sub_825CBB08(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x824A4510;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_824A4514:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a4514
	if (!ctx.cr0.eq) goto loc_824A4514;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A4544;
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4558
	if (ctx.cr6.eq) goto loc_824A4558;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A4558:
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x824A4564;
	sub_825CBB90(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A456C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4570:
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
	// bne 0x824a4570
	if (!ctx.cr0.eq) goto loc_824A4570;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x824A45A0;
	sub_8222CF18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8222cf18
	ctx.lr = 0x824A45B0;
	sub_8222CF18(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a16ec0
	ctx.lr = 0x824A45C0;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821c67d8
	ctx.lr = 0x824A45C8;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_824A45CC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a45cc
	if (!ctx.cr0.eq) goto loc_824A45CC;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ae2e8
	ctx.lr = 0x824A45F8;
	sub_824AE2E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r21,r1,96
	ctx.r21.s64 = ctx.r1.s64 + 96;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bl 0x82401d00
	ctx.lr = 0x824A4614;
	sub_82401D00(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82265160
	ctx.lr = 0x824A461C;
	sub_82265160(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A4630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c67d8
	ctx.lr = 0x824A4638;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_824A463C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a463c
	if (!ctx.cr0.eq) goto loc_824A463C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824A4674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824a44c8
	if (!ctx.cr6.eq) goto loc_824A44C8;
loc_824A4680:
	// addi r28,r17,156
	ctx.r28.s64 = ctx.r17.s64 + 156;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ae9e0
	ctx.lr = 0x824A468C;
	sub_824AE9E0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25484
	ctx.r27.s64 = ctx.r11.s64 + 25484;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A46AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a4790
	if (ctx.cr6.eq) goto loc_824A4790;
loc_824A46B8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A46C8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a46e0
	if (ctx.cr6.eq) goto loc_824A46E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A46E0:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A46EC;
	sub_825CBB08(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x824A46FC;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_824A4700:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a4700
	if (!ctx.cr0.eq) goto loc_824A4700;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8249c5c8
	ctx.lr = 0x824A4730;
	sub_8249C5C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ae448
	ctx.lr = 0x824A473C;
	sub_824AE448(ctx, base);
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A476C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A4784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a46b8
	if (!ctx.cr6.eq) goto loc_824A46B8;
loc_824A4790:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,25500
	ctx.r28.s64 = ctx.r11.s64 + 25500;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A47B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r25,r11,25520
	ctx.r25.s64 = ctx.r11.s64 + 25520;
	// beq cr6,0x824a48b8
	if (ctx.cr6.eq) goto loc_824A48B8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r17,920
	ctx.r26.s64 = ctx.r17.s64 + 920;
	// addi r27,r11,25528
	ctx.r27.s64 = ctx.r11.s64 + 25528;
loc_824A47D0:
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A47E4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a47f8
	if (ctx.cr6.eq) goto loc_824A47F8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A47F8:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4804;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A480C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4810:
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
	// bne 0x824a4810
	if (!ctx.cr0.eq) goto loc_824A4810;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A4840;
	sub_8222CF18(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r5,r26,r11
	ctx.r5.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82a16e20
	ctx.lr = 0x824A4854;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A485C;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_824A4860:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824a4860
	if (!ctx.cr0.eq) goto loc_824A4860;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A4894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A48AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a47d0
	if (!ctx.cr6.eq) goto loc_824A47D0;
loc_824A48B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25536
	ctx.r27.s64 = ctx.r11.s64 + 25536;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A48D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a49ec
	if (ctx.cr6.eq) goto loc_824A49EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,25340
	ctx.r28.s64 = ctx.r11.s64 + 25340;
loc_824A48EC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4900;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4914
	if (ctx.cr6.eq) goto loc_824A4914;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A4914:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4920;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4928;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A492C:
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
	// bne 0x824a492c
	if (!ctx.cr0.eq) goto loc_824A492C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A495C;
	sub_8222CF18(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,68
	ctx.r7.s64 = ctx.r8.s64 + 68;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a4980
	if (ctx.cr6.eq) goto loc_824A4980;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A4980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4988;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4990;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4994:
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
	// bne 0x824a4994
	if (!ctx.cr0.eq) goto loc_824A4994;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A49C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A49E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a48ec
	if (!ctx.cr6.eq) goto loc_824A48EC;
loc_824A49EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25548
	ctx.r27.s64 = ctx.r11.s64 + 25548;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4b20
	if (ctx.cr6.eq) goto loc_824A4B20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,25560
	ctx.r28.s64 = ctx.r11.s64 + 25560;
loc_824A4A20:
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4A34;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4a48
	if (ctx.cr6.eq) goto loc_824A4A48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A4A48:
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4A54;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4A5C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4A60:
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
	// bne 0x824a4a60
	if (!ctx.cr0.eq) goto loc_824A4A60;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A4A90;
	sub_8222CF18(ctx, base);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,87
	ctx.r7.s64 = ctx.r8.s64 + 87;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a4ab4
	if (ctx.cr6.eq) goto loc_824A4AB4;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A4AB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4ABC;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4AC4;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4AC8:
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
	// bne 0x824a4ac8
	if (!ctx.cr0.eq) goto loc_824A4AC8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4a20
	if (!ctx.cr6.eq) goto loc_824A4A20;
loc_824A4B20:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25568
	ctx.r27.s64 = ctx.r11.s64 + 25568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4c54
	if (ctx.cr6.eq) goto loc_824A4C54;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,25584
	ctx.r28.s64 = ctx.r11.s64 + 25584;
loc_824A4B54:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4B68;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4b7c
	if (ctx.cr6.eq) goto loc_824A4B7C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A4B7C:
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4B88;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4B90;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4B94:
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
	// bne 0x824a4b94
	if (!ctx.cr0.eq) goto loc_824A4B94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A4BC4;
	sub_8222CF18(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r7,r8,211
	ctx.r7.s64 = ctx.r8.s64 + 211;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x824a4be8
	if (ctx.cr6.eq) goto loc_824A4BE8;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824A4BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A4BF0;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A4BF8;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4BFC:
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
	// bne 0x824a4bfc
	if (!ctx.cr0.eq) goto loc_824A4BFC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4b54
	if (!ctx.cr6.eq) goto loc_824A4B54;
loc_824A4C54:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25592
	ctx.r27.s64 = ctx.r11.s64 + 25592;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4d24
	if (ctx.cr6.eq) goto loc_824A4D24;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r17,220
	ctx.r26.s64 = ctx.r17.s64 + 220;
	// addi r28,r11,25612
	ctx.r28.s64 = ctx.r11.s64 + 25612;
loc_824A4C8C:
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4CA4;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8244dae0
	ctx.lr = 0x824A4CB4;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4CBC;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4CC0:
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
	// bne 0x824a4cc0
	if (!ctx.cr0.eq) goto loc_824A4CC0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d2c00
	ctx.lr = 0x824A4CEC;
	sub_823D2C00(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4c8c
	if (!ctx.cr6.eq) goto loc_824A4C8C;
loc_824A4D24:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25628
	ctx.r27.s64 = ctx.r11.s64 + 25628;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4df4
	if (ctx.cr6.eq) goto loc_824A4DF4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r17,236
	ctx.r26.s64 = ctx.r17.s64 + 236;
	// addi r28,r11,25648
	ctx.r28.s64 = ctx.r11.s64 + 25648;
loc_824A4D5C:
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4D74;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8244dae0
	ctx.lr = 0x824A4D84;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4D8C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4D90:
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
	// bne 0x824a4d90
	if (!ctx.cr0.eq) goto loc_824A4D90;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d2c00
	ctx.lr = 0x824A4DBC;
	sub_823D2C00(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4d5c
	if (!ctx.cr6.eq) goto loc_824A4D5C;
loc_824A4DF4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25664
	ctx.r27.s64 = ctx.r11.s64 + 25664;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4ec4
	if (ctx.cr6.eq) goto loc_824A4EC4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r17,252
	ctx.r26.s64 = ctx.r17.s64 + 252;
	// addi r28,r11,25680
	ctx.r28.s64 = ctx.r11.s64 + 25680;
loc_824A4E2C:
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4E44;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8244dae0
	ctx.lr = 0x824A4E54;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4E5C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4E60:
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
	// bne 0x824a4e60
	if (!ctx.cr0.eq) goto loc_824A4E60;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d2c00
	ctx.lr = 0x824A4E8C;
	sub_823D2C00(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4e2c
	if (!ctx.cr6.eq) goto loc_824A4E2C;
loc_824A4EC4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,25696
	ctx.r26.s64 = ctx.r11.s64 + 25696;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a4f84
	if (ctx.cr6.eq) goto loc_824A4F84;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r17,937
	ctx.r28.s64 = ctx.r17.s64 + 937;
	// addi r27,r11,25732
	ctx.r27.s64 = ctx.r11.s64 + 25732;
loc_824A4EFC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4F0C;
	sub_8222CF18(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	ctx.lr = 0x824A4F1C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A4F24;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A4F28:
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
	// bne 0x824a4f28
	if (!ctx.cr0.eq) goto loc_824A4F28;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A4F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A4F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a4efc
	if (!ctx.cr6.eq) goto loc_824A4EFC;
loc_824A4F84:
	// addi r28,r17,168
	ctx.r28.s64 = ctx.r17.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82367a90
	ctx.lr = 0x824A4F90;
	sub_82367A90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,25764
	ctx.r27.s64 = ctx.r11.s64 + 25764;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a50dc
	if (ctx.cr6.eq) goto loc_824A50DC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r10,25792
	ctx.r26.s64 = ctx.r10.s64 + 25792;
	// addi r25,r11,25780
	ctx.r25.s64 = ctx.r11.s64 + 25780;
loc_824A4FCC:
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x824A4FE4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4ff8
	if (ctx.cr6.eq) goto loc_824A4FF8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A4FF8:
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x824A5004;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x824A500C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A5010:
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
	// bne 0x824a5010
	if (!ctx.cr0.eq) goto loc_824A5010;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x824A5040;
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5054
	if (ctx.cr6.eq) goto loc_824A5054;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824A5054:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x824A5060;
	sub_825CBB08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x824A5068;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_824A506C:
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
	// bne 0x824a506c
	if (!ctx.cr0.eq) goto loc_824A506C;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365ff0
	ctx.lr = 0x824A5098;
	sub_82365FF0(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824A50B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A50D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a4fcc
	if (!ctx.cr6.eq) goto loc_824A4FCC;
loc_824A50DC:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824a72b0
	ctx.lr = 0x824A50E4;
	sub_824A72B0(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824a7648
	ctx.lr = 0x824A50EC;
	sub_824A7648(ctx, base);
loc_824A50EC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A2868) {
	__imp__sub_824A2868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A50F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x824A5100;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r24,995(r27)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r27.u32 + 995);
	// stb r26,995(r27)
	PPC_STORE_U8(ctx.r27.u32 + 995, ctx.r26.u8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a5204
	if (ctx.cr6.eq) goto loc_824A5204;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5154
	if (ctx.cr6.eq) goto loc_824A5154;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x824a5200
	goto loc_824A5200;
loc_824A5154:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a51c0
	if (!ctx.cr0.gt) goto loc_824A51C0;
loc_824A5170:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a5190
	if (ctx.cr6.lt) goto loc_824A5190;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_824A5190:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a51ac
	if (ctx.cr6.eq) goto loc_824A51AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a51b4
	goto loc_824A51B4;
loc_824A51AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A51B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a5170
	if (ctx.cr6.gt) goto loc_824A5170;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A51C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a51f8
	if (ctx.cr6.eq) goto loc_824A51F8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a51dc
	if (ctx.cr6.gt) goto loc_824A51DC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A51DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a51f8
	if (!ctx.cr6.eq) goto loc_824A51F8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x824a51fc
	goto loc_824A51FC;
loc_824A51F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_824A51FC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_824A5200:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_824A5204:
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a5224
	if (ctx.cr6.eq) goto loc_824A5224;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26821);
	// b 0x824a5228
	goto loc_824A5228;
loc_824A5224:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A5228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5260
	if (ctx.cr6.eq) goto loc_824A5260;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5258
	if (ctx.cr6.eq) goto loc_824A5258;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a525c
	if (!ctx.cr6.eq) goto loc_824A525C;
loc_824A5258:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A525C:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_824A5260:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f13,16(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f0.f64);
	// addi r30,r11,11192
	ctx.r30.s64 = ctx.r11.s64 + 11192;
	// beq cr6,0x824a52e8
	if (ctx.cr6.eq) goto loc_824A52E8;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-28492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28492);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x824a529c
	if (ctx.cr6.lt) goto loc_824A529C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A529C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a52e8
	if (!ctx.cr6.eq) goto loc_824A52E8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a52e8
	if (ctx.cr6.eq) goto loc_824A52E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r11,16904
	ctx.r10.s64 = ctx.r11.s64 + 16904;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x824A52CC;
	sub_821B25A8(ctx, base);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,140(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8238b9d0
	ctx.lr = 0x824A52E0;
	sub_8238B9D0(ctx, base);
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_824A52E8:
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fctiwz f13,f0
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lfs f10,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = static_cast<float>(ctx.f10.f64 - ctx.f9.f64);
	// fctiwz f7,f8
	ctx.f7.u64 = uint64_t(int32_t(std::trunc(ctx.f8.f64)));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// beq cr6,0x824a5388
	if (ctx.cr6.eq) goto loc_824A5388;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a5388
	if (ctx.cr6.eq) goto loc_824A5388;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5388
	if (ctx.cr6.eq) goto loc_824A5388;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r9,r10,16916
	ctx.r9.s64 = ctx.r10.s64 + 16916;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x824A536C;
	sub_821B25A8(ctx, base);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x8238b9d0
	ctx.lr = 0x824A5380;
	sub_8238B9D0(ctx, base);
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_824A5388:
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r10.u32);
	// beq cr6,0x824a53e4
	if (ctx.cr6.eq) goto loc_824A53E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a53e4
	if (ctx.cr6.eq) goto loc_824A53E4;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a53e4
	if (ctx.cr6.eq) goto loc_824A53E4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r10,16928
	ctx.r9.s64 = ctx.r10.s64 + 16928;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x824A53CC;
	sub_821B25A8(ctx, base);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8238b7e8
	ctx.lr = 0x824A53E0;
	sub_8238B7E8(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_824A53E4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r25,20
	ctx.r30.s64 = ctx.r25.s64 + 20;
loc_824A53EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a9698
	ctx.lr = 0x824A5400;
	sub_824A9698(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// blt cr6,0x824a53ec
	if (ctx.cr6.lt) goto loc_824A53EC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a5518
	if (ctx.cr6.eq) goto loc_824A5518;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5454
	if (ctx.cr6.eq) goto loc_824A5454;
	// lbz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a551c
	goto loc_824A551C;
loc_824A5454:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a54c0
	if (!ctx.cr0.gt) goto loc_824A54C0;
loc_824A5470:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,56
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 56, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a5490
	if (ctx.cr6.lt) goto loc_824A5490;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_824A5490:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a54ac
	if (ctx.cr6.eq) goto loc_824A54AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a54b4
	goto loc_824A54B4;
loc_824A54AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A54B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a5470
	if (ctx.cr6.gt) goto loc_824A5470;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_824A54C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a5504
	if (ctx.cr6.eq) goto loc_824A5504;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a54dc
	if (ctx.cr6.gt) goto loc_824A54DC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A54DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5504
	if (!ctx.cr6.eq) goto loc_824A5504;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a551c
	goto loc_824A551C;
loc_824A5504:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a551c
	goto loc_824A551C;
loc_824A5518:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824A551C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a552c
	if (ctx.cr6.eq) goto loc_824A552C;
	// bl 0x8242ca18
	ctx.lr = 0x824A552C;
	sub_8242CA18(ctx, base);
loc_824A552C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,112(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a6e00
	ctx.lr = 0x824A5538;
	sub_824A6E00(ctx, base);
	// lbz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 116);
	// addi r4,r25,120
	ctx.r4.s64 = ctx.r25.s64 + 120;
	// addi r3,r27,1280
	ctx.r3.s64 = ctx.r27.s64 + 1280;
	// stb r11,996(r27)
	PPC_STORE_U8(ctx.r27.u32 + 996, ctx.r11.u8);
	// bl 0x824a5558
	ctx.lr = 0x824A554C;
	sub_824A5558(ctx, base);
	// stb r24,995(r27)
	PPC_STORE_U8(ctx.r27.u32 + 995, ctx.r24.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A50F8) {
	__imp__sub_824A50F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A5558) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,128
	ctx.r10.s64 = 128;
loc_824A5564:
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x824a5564
	if (!ctx.cr0.eq) goto loc_824A5564;
	// ld r8,264(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 264);
	// addi r11,r3,328
	ctx.r11.s64 = ctx.r3.s64 + 328;
	// li r10,128
	ctx.r10.s64 = 128;
	// std r8,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r8.u64);
	// ld r7,272(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// std r7,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r7.u64);
	// ld r6,280(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 280);
	// std r6,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, ctx.r6.u64);
	// ld r5,288(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 288);
	// std r5,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r5.u64);
	// ld r8,296(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 296);
	// std r8,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r8.u64);
	// ld r7,304(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 304);
	// std r7,304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 304, ctx.r7.u64);
	// lwz r6,312(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// stw r6,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r6.u32);
	// lbz r5,316(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 316);
	// stb r5,316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 316, ctx.r5.u8);
	// ld r8,320(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 320);
	// std r8,320(r3)
	PPC_STORE_U64(ctx.r3.u32 + 320, ctx.r8.u64);
loc_824A55C8:
	// lhzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x824a55c8
	if (!ctx.cr0.eq) goto loc_824A55C8;
	// addi r11,r3,584
	ctx.r11.s64 = ctx.r3.s64 + 584;
	// li r10,128
	ctx.r10.s64 = 128;
loc_824A55E4:
	// lhzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x824a55e4
	if (!ctx.cr0.eq) goto loc_824A55E4;
	// addi r11,r3,840
	ctx.r11.s64 = ctx.r3.s64 + 840;
	// li r10,15
	ctx.r10.s64 = 15;
loc_824A5600:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x824a5600
	if (!ctx.cr0.eq) goto loc_824A5600;
	// ld r11,856(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 856);
	// std r11,856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 856, ctx.r11.u64);
	// lwz r10,864(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 864);
	// stw r10,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r10.u32);
	// lbz r9,868(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 868);
	// stb r9,868(r3)
	PPC_STORE_U8(ctx.r3.u32 + 868, ctx.r9.u8);
	// lbz r8,869(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 869);
	// stb r8,869(r3)
	PPC_STORE_U8(ctx.r3.u32 + 869, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A5558) {
	__imp__sub_824A5558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A5638) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a5750
	if (ctx.cr6.eq) goto loc_824A5750;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5688
	if (ctx.cr6.eq) goto loc_824A5688;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
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
	// b 0x824a5754
	goto loc_824A5754;
loc_824A5688:
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
	// ble 0x824a56f8
	if (!ctx.cr0.gt) goto loc_824A56F8;
loc_824A56A8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a56c8
	if (ctx.cr6.lt) goto loc_824A56C8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A56C8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a56e4
	if (ctx.cr6.eq) goto loc_824A56E4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a56ec
	goto loc_824A56EC;
loc_824A56E4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A56EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a56a8
	if (ctx.cr6.gt) goto loc_824A56A8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A56F8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a573c
	if (ctx.cr6.eq) goto loc_824A573C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a5714
	if (ctx.cr6.gt) goto loc_824A5714;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a573c
	if (!ctx.cr6.eq) goto loc_824A573C;
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
	// b 0x824a5754
	goto loc_824A5754;
loc_824A573C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5754
	goto loc_824A5754;
loc_824A5750:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5754:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5778
	if (ctx.cr6.eq) goto loc_824A5778;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824a5778
	if (!ctx.cr6.eq) goto loc_824A5778;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,1280
	ctx.r3.s64 = ctx.r3.s64 + 1280;
	// bl 0x82ee2040
	ctx.lr = 0x824A5778;
	sub_82EE2040(ctx, base);
loc_824A5778:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A5638) {
	__imp__sub_824A5638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A5788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x824A5790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a58a4
	if (ctx.cr6.eq) goto loc_824A58A4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a57e0
	if (ctx.cr6.eq) goto loc_824A57E0;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
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
	// b 0x824a58a8
	goto loc_824A58A8;
loc_824A57E0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
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
	// ble 0x824a584c
	if (!ctx.cr0.gt) goto loc_824A584C;
loc_824A57FC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a581c
	if (ctx.cr6.lt) goto loc_824A581C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_824A581C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a5838
	if (ctx.cr6.eq) goto loc_824A5838;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a5840
	goto loc_824A5840;
loc_824A5838:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A5840:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a57fc
	if (ctx.cr6.gt) goto loc_824A57FC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A584C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a5890
	if (ctx.cr6.eq) goto loc_824A5890;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a5868
	if (ctx.cr6.gt) goto loc_824A5868;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824A5868:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5890
	if (!ctx.cr6.eq) goto loc_824A5890;
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
	// b 0x824a58a8
	goto loc_824A58A8;
loc_824A5890:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a58a8
	goto loc_824A58A8;
loc_824A58A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824A58A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a590c
	if (ctx.cr6.eq) goto loc_824A590C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a590c
	if (ctx.cr6.eq) goto loc_824A590C;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,26912(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,148(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// bl 0x824e6680
	ctx.lr = 0x824A58DC;
	sub_824E6680(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824a5900
	if (!ctx.cr6.eq) goto loc_824A5900;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// bl 0x824ed8f0
	ctx.lr = 0x824A5900;
	sub_824ED8F0(ctx, base);
loc_824A5900:
	// stb r29,992(r28)
	PPC_STORE_U8(ctx.r28.u32 + 992, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824a5918
	ctx.lr = 0x824A590C;
	sub_824A5918(ctx, base);
loc_824A590C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A5788) {
	__imp__sub_824A5788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A5918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x824A5920;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,992(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5b9c
	if (!ctx.cr6.eq) goto loc_824A5B9C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a5a44
	if (ctx.cr6.eq) goto loc_824A5A44;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5980
	if (ctx.cr6.eq) goto loc_824A5980;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
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
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x824a5a48
	goto loc_824A5A48;
loc_824A5980:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a59ec
	if (!ctx.cr0.gt) goto loc_824A59EC;
loc_824A599C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x824a59bc
	if (ctx.cr6.lt) goto loc_824A59BC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824A59BC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a59d8
	if (ctx.cr6.eq) goto loc_824A59D8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a59e0
	goto loc_824A59E0;
loc_824A59D8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A59E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a599c
	if (ctx.cr6.gt) goto loc_824A599C;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_824A59EC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a5a30
	if (ctx.cr6.eq) goto loc_824A5A30;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x824a5a08
	if (ctx.cr6.gt) goto loc_824A5A08;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A5A08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5a30
	if (!ctx.cr6.eq) goto loc_824A5A30;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x824a5a48
	goto loc_824A5A48;
loc_824A5A30:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x824a5a48
	goto loc_824A5A48;
loc_824A5A44:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A5A48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5b98
	if (ctx.cr6.eq) goto loc_824A5B98;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,26840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26840);
	// slw r9,r28,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a5b74
	if (ctx.cr6.eq) goto loc_824A5B74;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r8,51
	ctx.r8.s64 = 51;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc3b8
	ctx.lr = 0x824A5A9C;
	sub_82CBC3B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a5b60
	if (!ctx.cr6.eq) goto loc_824A5B60;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82350ec8
	ctx.lr = 0x824A5AB8;
	sub_82350EC8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x82cbcfa8
	ctx.lr = 0x824A5ADC;
	sub_82CBCFA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a5b58
	if (!ctx.cr6.eq) goto loc_824A5B58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5b58
	if (ctx.cr6.eq) goto loc_824A5B58;
loc_824A5AF0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5b44
	if (ctx.cr6.eq) goto loc_824A5B44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,-10
	ctx.r3.s64 = ctx.r10.s64 + -10;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// bgt cr6,0x824a5b30
	if (ctx.cr6.gt) goto loc_824A5B30;
	// bl 0x824a62a0
	ctx.lr = 0x824A5B14;
	sub_824A62A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824a5b30
	if (!ctx.cr6.gt) goto loc_824A5B30;
	// cmpwi cr6,r3,51
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 51, ctx.xer);
	// bge cr6,0x824a5b30
	if (!ctx.cr6.lt) goto loc_824A5B30;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stb r28,941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 941, ctx.r28.u8);
	// b 0x824a5b44
	goto loc_824A5B44;
loc_824A5B30:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,2176
	ctx.r4.s64 = ctx.r29.s64 + 2176;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8282ea08
	ctx.lr = 0x824A5B44;
	sub_8282EA08(ctx, base);
loc_824A5B44:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a5af0
	if (ctx.cr6.lt) goto loc_824A5AF0;
loc_824A5B58:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d2d28
	ctx.lr = 0x824A5B60;
	sub_823D2D28(ctx, base);
loc_824A5B60:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82cbbf60
	ctx.lr = 0x824A5B68;
	sub_82CBBF60(ctx, base);
	// stb r28,992(r29)
	PPC_STORE_U8(ctx.r29.u32 + 992, ctx.r28.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_824A5B74:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r4,r11,2064
	ctx.r4.s64 = ctx.r11.s64 + 2064;
	// bl 0x825bf630
	ctx.lr = 0x824A5B98;
	sub_825BF630(ctx, base);
loc_824A5B98:
	// stb r28,992(r29)
	PPC_STORE_U8(ctx.r29.u32 + 992, ctx.r28.u8);
loc_824A5B9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A5918) {
	__imp__sub_824A5918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A5BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x824A5BB0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-27348
	ctx.r29.s64 = ctx.r11.s64 + -27348;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,1036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824a5d20
	if (!ctx.cr6.gt) goto loc_824A5D20;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,22084(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 22084);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r8,r9,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a5ce4
	if (ctx.cr6.eq) goto loc_824A5CE4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5c28
	if (ctx.cr6.eq) goto loc_824A5C28;
	// lbz r10,122(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 122);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x824a5ce8
	goto loc_824A5CE8;
loc_824A5C28:
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
	// ble 0x824a5c94
	if (!ctx.cr0.gt) goto loc_824A5C94;
loc_824A5C44:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,122
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 122, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a5c64
	if (ctx.cr6.lt) goto loc_824A5C64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_824A5C64:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a5c80
	if (ctx.cr6.eq) goto loc_824A5C80;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a5c88
	goto loc_824A5C88;
loc_824A5C80:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A5C88:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a5c44
	if (ctx.cr6.gt) goto loc_824A5C44;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A5C94:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a5cd4
	if (ctx.cr6.eq) goto loc_824A5CD4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a5cb0
	if (ctx.cr6.gt) goto loc_824A5CB0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A5CB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5cd4
	if (!ctx.cr6.eq) goto loc_824A5CD4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5ce8
	goto loc_824A5CE8;
loc_824A5CD4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5ce8
	goto loc_824A5CE8;
loc_824A5CE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A5CE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5d20
	if (ctx.cr6.eq) goto loc_824A5D20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821c2c18
	ctx.lr = 0x824A5CFC;
	sub_821C2C18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824a5d20
	if (ctx.cr6.eq) goto loc_824A5D20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1044(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,2972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2972);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f0.f64), float(ctx.f12.f64)));
	// bl 0x824d2888
	ctx.lr = 0x824A5D20;
	sub_824D2888(ctx, base);
loc_824A5D20:
	// lfs f0,1040(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824a5d34
	if (!ctx.cr6.gt) goto loc_824A5D34;
	// lfs f13,22080(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 22080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f0,f13,f30
	ctx.f30.f64 = double(std::fma(float(ctx.f0.f64), float(ctx.f13.f64), float(ctx.f30.f64)));
loc_824A5D34:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f0,-108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -108);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,368
	ctx.r7.s64 = ctx.r11.s64 + 368;
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f13,-25888(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// mfcr r10
	ctx.r10.u64 = 0;
	ctx.r10.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r10.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r10.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r10.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r10.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r10.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r10.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r10.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r10.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r10.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r10.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r10.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r10.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r10.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r10.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r10.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r10.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r10.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r10.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r10.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r10.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r10.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r10.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r10.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r10.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r10.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r10.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f11,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = static_cast<float>(ctx.f10.f64 - ctx.f0.f64);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// mfcr r4
	ctx.r4.u64 = 0;
	ctx.r4.u64 |= (ctx.cr0.lt ? 0x80000000 : 0);
	ctx.r4.u64 |= (ctx.cr0.gt ? 0x40000000 : 0);
	ctx.r4.u64 |= (ctx.cr0.eq ? 0x20000000 : 0);
	ctx.r4.u64 |= (ctx.cr0.so ? 0x10000000 : 0);
	ctx.r4.u64 |= (ctx.cr1.lt ? 0x08000000 : 0);
	ctx.r4.u64 |= (ctx.cr1.gt ? 0x04000000 : 0);
	ctx.r4.u64 |= (ctx.cr1.eq ? 0x02000000 : 0);
	ctx.r4.u64 |= (ctx.cr1.so ? 0x01000000 : 0);
	ctx.r4.u64 |= (ctx.cr2.lt ? 0x00800000 : 0);
	ctx.r4.u64 |= (ctx.cr2.gt ? 0x00400000 : 0);
	ctx.r4.u64 |= (ctx.cr2.eq ? 0x00200000 : 0);
	ctx.r4.u64 |= (ctx.cr2.so ? 0x00100000 : 0);
	ctx.r4.u64 |= (ctx.cr3.lt ? 0x00080000 : 0);
	ctx.r4.u64 |= (ctx.cr3.gt ? 0x00040000 : 0);
	ctx.r4.u64 |= (ctx.cr3.eq ? 0x00020000 : 0);
	ctx.r4.u64 |= (ctx.cr3.so ? 0x00010000 : 0);
	ctx.r4.u64 |= (ctx.cr4.lt ? 0x00008000 : 0);
	ctx.r4.u64 |= (ctx.cr4.gt ? 0x00004000 : 0);
	ctx.r4.u64 |= (ctx.cr4.eq ? 0x00002000 : 0);
	ctx.r4.u64 |= (ctx.cr4.so ? 0x00001000 : 0);
	ctx.r4.u64 |= (ctx.cr5.lt ? 0x00000800 : 0);
	ctx.r4.u64 |= (ctx.cr5.gt ? 0x00000400 : 0);
	ctx.r4.u64 |= (ctx.cr5.eq ? 0x00000200 : 0);
	ctx.r4.u64 |= (ctx.cr5.so ? 0x00000100 : 0);
	ctx.r4.u64 |= (ctx.cr6.lt ? 0x00000080 : 0);
	ctx.r4.u64 |= (ctx.cr6.gt ? 0x00000040 : 0);
	ctx.r4.u64 |= (ctx.cr6.eq ? 0x00000020 : 0);
	ctx.r4.u64 |= (ctx.cr6.so ? 0x00000010 : 0);
	ctx.r4.u64 |= (ctx.cr7.lt ? 0x00000008 : 0);
	ctx.r4.u64 |= (ctx.cr7.gt ? 0x00000004 : 0);
	ctx.r4.u64 |= (ctx.cr7.eq ? 0x00000002 : 0);
	ctx.r4.u64 |= (ctx.cr7.so ? 0x00000001 : 0);
	// rlwinm r3,r4,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r11,r4,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// lfsx f8,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f0,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f7,52(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f6,1024(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = static_cast<float>(ctx.f6.f64 - ctx.f5.f64);
	// stfs f31,1036(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1036, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stfs f31,1040(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1040, temp.u32);
	// stfs f31,1044(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1044, temp.u32);
	// ble cr6,0x824a600c
	if (!ctx.cr6.gt) goto loc_824A600C;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5ec4
	if (ctx.cr6.eq) goto loc_824A5EC4;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5e00
	if (ctx.cr6.eq) goto loc_824A5E00;
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5ec8
	goto loc_824A5EC8;
loc_824A5E00:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x824a5e6c
	if (!ctx.cr0.gt) goto loc_824A5E6C;
loc_824A5E1C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a5e3c
	if (ctx.cr6.lt) goto loc_824A5E3C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_824A5E3C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a5e58
	if (ctx.cr6.eq) goto loc_824A5E58;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a5e60
	goto loc_824A5E60;
loc_824A5E58:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A5E60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a5e1c
	if (ctx.cr6.gt) goto loc_824A5E1C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A5E6C:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824a5eb0
	if (ctx.cr6.eq) goto loc_824A5EB0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a5e88
	if (ctx.cr6.gt) goto loc_824A5E88;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A5E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5eb0
	if (!ctx.cr6.eq) goto loc_824A5EB0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5ec8
	goto loc_824A5EC8;
loc_824A5EB0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824a5ec8
	goto loc_824A5EC8;
loc_824A5EC4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A5EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a600c
	if (ctx.cr6.eq) goto loc_824A600C;
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a5fcc
	if (ctx.cr6.eq) goto loc_824A5FCC;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5f10
	if (ctx.cr6.eq) goto loc_824A5F10;
	// lbz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 122);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x824a5fd0
	goto loc_824A5FD0;
loc_824A5F10:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
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
	// ble 0x824a5f7c
	if (!ctx.cr0.gt) goto loc_824A5F7C;
loc_824A5F2C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,122
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 122, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x824a5f4c
	if (ctx.cr6.lt) goto loc_824A5F4C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_824A5F4C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a5f68
	if (ctx.cr6.eq) goto loc_824A5F68;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x824a5f70
	goto loc_824A5F70;
loc_824A5F68:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824A5F70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a5f2c
	if (ctx.cr6.gt) goto loc_824A5F2C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_824A5F7C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a5fbc
	if (ctx.cr6.eq) goto loc_824A5FBC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a5f98
	if (ctx.cr6.gt) goto loc_824A5F98;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824A5F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5fbc
	if (!ctx.cr6.eq) goto loc_824A5FBC;
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
	// b 0x824a5fd0
	goto loc_824A5FD0;
loc_824A5FBC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824a5fd0
	goto loc_824A5FD0;
loc_824A5FCC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_824A5FD0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a600c
	if (ctx.cr6.eq) goto loc_824A600C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c2c18
	ctx.lr = 0x824A5FE4;
	sub_821C2C18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824a600c
	if (ctx.cr6.eq) goto loc_824A600C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,-27496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x8249e9e0
	ctx.lr = 0x824A600C;
	sub_8249E9E0(ctx, base);
loc_824A600C:
	// lfs f0,1024(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1048(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1048, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_824A5BA8) {
	__imp__sub_824A5BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6028) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,24640
	ctx.r12.s64 = ctx.r12.s64 + 24640;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_824A6028) {
	__imp__sub_824A6028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6040) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,25152(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25152);
	// lwz r18,25112(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25112);
	// lwz r18,25008(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25008);
	// lwz r18,24936(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24936);
	// lwz r18,24912(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24912);
	// lwz r18,25216(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25216);
	// lwz r18,25024(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25024);
	// lwz r18,25176(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25176);
	// lwz r18,25056(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25056);
	// lwz r18,25104(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25104);
	// lwz r18,25016(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25016);
	// lwz r18,25208(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25208);
	// lwz r18,24968(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24968);
	// lwz r18,25032(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25032);
	// lwz r18,24904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24904);
	// lwz r18,24920(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24920);
	// lwz r18,25120(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25120);
	// lwz r18,25168(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25168);
	// lwz r18,25144(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25144);
	// lwz r18,25136(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25136);
	// lwz r18,24928(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24928);
	// lwz r18,25200(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25200);
	// lwz r18,25192(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25192);
	// lwz r18,24880(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24880);
	// lwz r18,24872(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24872);
	// lwz r18,24864(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24864);
	// lwz r18,24976(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24976);
	// lwz r18,25184(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25184);
	// lwz r18,25160(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25160);
	// lwz r18,24848(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24848);
	// lwz r18,25072(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25072);
	// lwz r18,24888(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24888);
	// lwz r18,24984(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24984);
	// lwz r18,25080(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25080);
	// lwz r18,25088(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25088);
	// lwz r18,25040(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25040);
	// lwz r18,25048(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25048);
	// lwz r18,25000(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25000);
	// lwz r18,24960(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24960);
	// lwz r18,24856(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24856);
	// lwz r18,25128(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25128);
	// lwz r18,25096(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25096);
	// lwz r18,24944(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24944);
	// lwz r18,24952(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24952);
	// lwz r18,25064(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25064);
	// lwz r18,24840(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24840);
	// lwz r18,24896(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24896);
	// lwz r18,24992(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24992);
	// lwz r18,25232(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25232);
	// lwz r18,25224(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25224);
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6040) {
	__imp__sub_824A6040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6110) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6110) {
	__imp__sub_824A6110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6118) {
	PPC_FUNC_PROLOGUE();
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6118) {
	__imp__sub_824A6118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6120) {
	PPC_FUNC_PROLOGUE();
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6120) {
	__imp__sub_824A6120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6128) {
	PPC_FUNC_PROLOGUE();
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6128) {
	__imp__sub_824A6128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6130) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6130) {
	__imp__sub_824A6130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6138) {
	PPC_FUNC_PROLOGUE();
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6138) {
	__imp__sub_824A6138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6140) {
	PPC_FUNC_PROLOGUE();
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6140) {
	__imp__sub_824A6140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6148) {
	PPC_FUNC_PROLOGUE();
	// li r3,54
	ctx.r3.s64 = 54;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6148) {
	__imp__sub_824A6148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6150) {
	PPC_FUNC_PROLOGUE();
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6150) {
	__imp__sub_824A6150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6158) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6158) {
	__imp__sub_824A6158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6160) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6160) {
	__imp__sub_824A6160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6168) {
	PPC_FUNC_PROLOGUE();
	// li r3,53
	ctx.r3.s64 = 53;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6168) {
	__imp__sub_824A6168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6170) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6170) {
	__imp__sub_824A6170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6178) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6178) {
	__imp__sub_824A6178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6180) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6180) {
	__imp__sub_824A6180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6188) {
	PPC_FUNC_PROLOGUE();
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6188) {
	__imp__sub_824A6188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6190) {
	PPC_FUNC_PROLOGUE();
	// li r3,43
	ctx.r3.s64 = 43;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6190) {
	__imp__sub_824A6190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6198) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6198) {
	__imp__sub_824A6198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61A0) {
	__imp__sub_824A61A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61A8) {
	__imp__sub_824A61A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61B0) {
	__imp__sub_824A61B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61B8) {
	__imp__sub_824A61B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,57
	ctx.r3.s64 = 57;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61C0) {
	__imp__sub_824A61C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61C8) {
	__imp__sub_824A61C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,58
	ctx.r3.s64 = 58;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61D0) {
	__imp__sub_824A61D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61D8) {
	__imp__sub_824A61D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61E0) {
	__imp__sub_824A61E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61E8) {
	__imp__sub_824A61E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61F0) {
	__imp__sub_824A61F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A61F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A61F8) {
	__imp__sub_824A61F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6200) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6200) {
	__imp__sub_824A6200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6208) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6208) {
	__imp__sub_824A6208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6210) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6210) {
	__imp__sub_824A6210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6218) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6218) {
	__imp__sub_824A6218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6220) {
	PPC_FUNC_PROLOGUE();
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6220) {
	__imp__sub_824A6220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6228) {
	PPC_FUNC_PROLOGUE();
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6228) {
	__imp__sub_824A6228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6230) {
	PPC_FUNC_PROLOGUE();
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6230) {
	__imp__sub_824A6230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6238) {
	PPC_FUNC_PROLOGUE();
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6238) {
	__imp__sub_824A6238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6240) {
	PPC_FUNC_PROLOGUE();
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6240) {
	__imp__sub_824A6240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6248) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6248) {
	__imp__sub_824A6248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6250) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6250) {
	__imp__sub_824A6250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6258) {
	PPC_FUNC_PROLOGUE();
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6258) {
	__imp__sub_824A6258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6260) {
	PPC_FUNC_PROLOGUE();
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6260) {
	__imp__sub_824A6260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6268) {
	PPC_FUNC_PROLOGUE();
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6268) {
	__imp__sub_824A6268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6270) {
	PPC_FUNC_PROLOGUE();
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6270) {
	__imp__sub_824A6270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6278) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6278) {
	__imp__sub_824A6278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6280) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6280) {
	__imp__sub_824A6280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6288) {
	PPC_FUNC_PROLOGUE();
	// li r3,55
	ctx.r3.s64 = 55;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6288) {
	__imp__sub_824A6288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6290) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6290) {
	__imp__sub_824A6290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6298) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6298) {
	__imp__sub_824A6298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,25272
	ctx.r12.s64 = ctx.r12.s64 + 25272;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_824A62A0) {
	__imp__sub_824A62A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A62B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,25712(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25712);
	// lwz r18,25776(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25776);
	// lwz r18,25696(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25696);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25752(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25752);
	// lwz r18,25760(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25760);
	// lwz r18,25616(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25616);
	// lwz r18,25608(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25608);
	// lwz r18,25648(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25648);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25512(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25512);
	// lwz r18,25896(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25896);
	// lwz r18,25720(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25720);
	// lwz r18,25768(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25768);
	// lwz r18,25656(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25656);
	// lwz r18,25856(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25856);
	// lwz r18,25504(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25504);
	// lwz r18,25664(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25664);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25624(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25624);
	// lwz r18,25824(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25824);
	// lwz r18,25832(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25832);
	// lwz r18,25592(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25592);
	// lwz r18,25576(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25576);
	// lwz r18,25728(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25728);
	// lwz r18,25632(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25632);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25744(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25744);
	// lwz r18,25736(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25736);
	// lwz r18,25880(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25880);
	// lwz r18,25584(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25584);
	// lwz r18,25640(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25640);
	// lwz r18,25672(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25672);
	// lwz r18,25520(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25520);
	// lwz r18,25848(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25848);
	// lwz r18,25864(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25864);
	// lwz r18,25872(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25872);
	// lwz r18,25816(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25816);
	// lwz r18,25808(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25808);
	// lwz r18,25840(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25840);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25600(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25600);
	// lwz r18,25568(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25568);
	// lwz r18,25888(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25888);
	// lwz r18,25680(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25680);
	// lwz r18,25688(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25688);
	// lwz r18,25704(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25704);
	// lwz r18,25560(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25560);
	// lwz r18,25552(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25552);
	// lwz r18,25904(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// lwz r18,25536(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25536);
	// lwz r18,25528(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25528);
	// lwz r18,25544(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25544);
	// lwz r18,25792(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25792);
	// lwz r18,25800(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25800);
	// lwz r18,25784(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25784);
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A62B8) {
	__imp__sub_824A62B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63A8) {
	__imp__sub_824A63A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63B0) {
	__imp__sub_824A63B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63B8) {
	__imp__sub_824A63B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63C0) {
	__imp__sub_824A63C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63C8) {
	__imp__sub_824A63C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63D0) {
	__imp__sub_824A63D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63D8) {
	__imp__sub_824A63D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63E0) {
	__imp__sub_824A63E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63E8) {
	__imp__sub_824A63E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63F0) {
	__imp__sub_824A63F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A63F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A63F8) {
	__imp__sub_824A63F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6400) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6400) {
	__imp__sub_824A6400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6408) {
	PPC_FUNC_PROLOGUE();
	// li r3,43
	ctx.r3.s64 = 43;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6408) {
	__imp__sub_824A6408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6410) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6410) {
	__imp__sub_824A6410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6418) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6418) {
	__imp__sub_824A6418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6420) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6420) {
	__imp__sub_824A6420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6428) {
	PPC_FUNC_PROLOGUE();
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6428) {
	__imp__sub_824A6428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6430) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6430) {
	__imp__sub_824A6430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6438) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6438) {
	__imp__sub_824A6438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6440) {
	PPC_FUNC_PROLOGUE();
	// li r3,38
	ctx.r3.s64 = 38;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6440) {
	__imp__sub_824A6440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6448) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6448) {
	__imp__sub_824A6448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6450) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6450) {
	__imp__sub_824A6450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6458) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6458) {
	__imp__sub_824A6458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6460) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6460) {
	__imp__sub_824A6460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6468) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6468) {
	__imp__sub_824A6468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6470) {
	PPC_FUNC_PROLOGUE();
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6470) {
	__imp__sub_824A6470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6478) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6478) {
	__imp__sub_824A6478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6480) {
	PPC_FUNC_PROLOGUE();
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6480) {
	__imp__sub_824A6480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6488) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6488) {
	__imp__sub_824A6488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6490) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6490) {
	__imp__sub_824A6490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6498) {
	PPC_FUNC_PROLOGUE();
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6498) {
	__imp__sub_824A6498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64A0) {
	__imp__sub_824A64A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64A8) {
	__imp__sub_824A64A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64B0) {
	__imp__sub_824A64B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64B8) {
	__imp__sub_824A64B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64C0) {
	__imp__sub_824A64C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64C8) {
	__imp__sub_824A64C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64D0) {
	__imp__sub_824A64D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64D8) {
	__imp__sub_824A64D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64E0) {
	__imp__sub_824A64E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64E8) {
	__imp__sub_824A64E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64F0) {
	__imp__sub_824A64F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A64F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A64F8) {
	__imp__sub_824A64F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6500) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6500) {
	__imp__sub_824A6500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6508) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6508) {
	__imp__sub_824A6508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6510) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6510) {
	__imp__sub_824A6510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6518) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6518) {
	__imp__sub_824A6518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6520) {
	PPC_FUNC_PROLOGUE();
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6520) {
	__imp__sub_824A6520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6528) {
	PPC_FUNC_PROLOGUE();
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6528) {
	__imp__sub_824A6528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6530) {
	PPC_FUNC_PROLOGUE();
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6530) {
	__imp__sub_824A6530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6538) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,25936
	ctx.r12.s64 = ctx.r12.s64 + 25936;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_824A6538) {
	__imp__sub_824A6538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6550) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,26428(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26428);
	// lwz r18,26436(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26436);
	// lwz r18,26444(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26444);
	// lwz r18,26452(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26452);
	// lwz r18,26460(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26460);
	// lwz r18,26468(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26468);
	// lwz r18,26476(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26476);
	// lwz r18,26484(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26484);
	// lwz r18,26492(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26492);
	// lwz r18,26500(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26500);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26508(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26508);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26516(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26516);
	// lwz r18,26524(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26524);
	// lwz r18,26532(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26532);
	// lwz r18,26540(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26540);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26548(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	// lwz r18,26556(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26556);
	// lwz r18,26564(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	// lwz r18,26580(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26580);
	// lwz r18,26588(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26588);
	// lwz r18,26596(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26596);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26604(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26604);
	// lwz r18,26612(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26612);
	// lwz r18,26620(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26620);
	// lwz r18,26628(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26628);
	// lwz r18,26636(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26636);
	// lwz r18,26644(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26644);
	// lwz r18,26652(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26652);
	// lwz r18,26660(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26660);
	// lwz r18,26668(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26668);
	// lwz r18,26676(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26676);
	// lwz r18,26684(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26684);
	// lwz r18,26692(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26692);
	// lwz r18,26700(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26700);
	// lwz r18,26708(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26708);
	// lwz r18,26716(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26716);
	// lwz r18,26724(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26724);
	// lwz r18,26732(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26732);
	// lwz r18,26740(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26740);
	// lwz r18,26748(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26748);
	// lwz r18,26756(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26756);
	// lwz r18,26764(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26764);
	// lwz r18,26772(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26772);
	// lwz r18,26780(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26780);
	// lwz r18,26788(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lwz r18,26804(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26804);
	// lwz r18,26812(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26812);
	// lwz r18,26820(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26820);
	// lwz r18,26828(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26828);
	// lwz r18,26836(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26836);
	// lwz r18,26844(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26844);
	// lwz r18,26852(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26852);
	// lwz r18,26860(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26860);
	// lwz r18,26868(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26868);
	// lwz r18,26876(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26876);
	// lwz r18,26884(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26884);
	// lwz r18,26892(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26892);
	// lwz r18,26900(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26900);
	// lwz r18,26908(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26908);
	// lwz r18,26916(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26916);
	// lwz r18,26924(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26924);
	// lwz r18,26932(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26932);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26940(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26940);
	// lwz r18,26948(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26948);
	// lwz r18,26956(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26956);
	// lwz r18,26964(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26964);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26972(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26972);
	// lwz r18,26980(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26980);
	// lwz r18,26988(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26988);
	// lwz r18,26996(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26996);
	// lwz r18,27004(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27004);
	// lwz r18,27012(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27012);
	// lwz r18,27020(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27020);
	// lwz r18,27028(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27028);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,26796(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26796);
	// lwz r18,27036(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27036);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27156(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// lwz r18,27044(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27044);
	// lwz r18,27052(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27052);
	// lwz r18,27060(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27060);
	// lwz r18,27068(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27068);
	// lwz r18,27076(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27076);
	// lwz r18,27084(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27084);
	// lwz r18,27092(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27092);
	// lwz r18,27100(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27100);
	// lwz r18,27108(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27108);
	// lwz r18,27148(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27148);
	// lwz r18,27140(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27140);
	// lwz r18,27132(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27132);
	// lwz r18,27116(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27116);
	// lwz r18,27124(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27124);
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6550) {
	__imp__sub_824A6550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6744) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6744) {
	__imp__sub_824A6744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A674C) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A674C) {
	__imp__sub_824A674C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6754) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6754) {
	__imp__sub_824A6754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A675C) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A675C) {
	__imp__sub_824A675C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6764) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6764) {
	__imp__sub_824A6764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A676C) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A676C) {
	__imp__sub_824A676C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6774) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6774) {
	__imp__sub_824A6774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A677C) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A677C) {
	__imp__sub_824A677C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6784) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6784) {
	__imp__sub_824A6784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A678C) {
	PPC_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A678C) {
	__imp__sub_824A678C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6794) {
	PPC_FUNC_PROLOGUE();
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6794) {
	__imp__sub_824A6794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A679C) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A679C) {
	__imp__sub_824A679C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67A4) {
	PPC_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67A4) {
	__imp__sub_824A67A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67AC) {
	__imp__sub_824A67AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67B4) {
	__imp__sub_824A67B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67BC) {
	PPC_FUNC_PROLOGUE();
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67BC) {
	__imp__sub_824A67BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67C4) {
	__imp__sub_824A67C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67CC) {
	PPC_FUNC_PROLOGUE();
	// li r3,52
	ctx.r3.s64 = 52;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67CC) {
	__imp__sub_824A67CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67D4) {
	PPC_FUNC_PROLOGUE();
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67D4) {
	__imp__sub_824A67D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67DC) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67DC) {
	__imp__sub_824A67DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67E4) {
	PPC_FUNC_PROLOGUE();
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67E4) {
	__imp__sub_824A67E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67EC) {
	PPC_FUNC_PROLOGUE();
	// li r3,53
	ctx.r3.s64 = 53;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67EC) {
	__imp__sub_824A67EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67F4) {
	PPC_FUNC_PROLOGUE();
	// li r3,54
	ctx.r3.s64 = 54;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67F4) {
	__imp__sub_824A67F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A67FC) {
	PPC_FUNC_PROLOGUE();
	// li r3,55
	ctx.r3.s64 = 55;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A67FC) {
	__imp__sub_824A67FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6804) {
	PPC_FUNC_PROLOGUE();
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6804) {
	__imp__sub_824A6804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A680C) {
	PPC_FUNC_PROLOGUE();
	// li r3,57
	ctx.r3.s64 = 57;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A680C) {
	__imp__sub_824A680C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6814) {
	PPC_FUNC_PROLOGUE();
	// li r3,58
	ctx.r3.s64 = 58;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6814) {
	__imp__sub_824A6814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A681C) {
	PPC_FUNC_PROLOGUE();
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A681C) {
	__imp__sub_824A681C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6824) {
	PPC_FUNC_PROLOGUE();
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6824) {
	__imp__sub_824A6824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A682C) {
	PPC_FUNC_PROLOGUE();
	// li r3,61
	ctx.r3.s64 = 61;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A682C) {
	__imp__sub_824A682C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6834) {
	PPC_FUNC_PROLOGUE();
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6834) {
	__imp__sub_824A6834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A683C) {
	PPC_FUNC_PROLOGUE();
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A683C) {
	__imp__sub_824A683C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6844) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6844) {
	__imp__sub_824A6844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A684C) {
	PPC_FUNC_PROLOGUE();
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A684C) {
	__imp__sub_824A684C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6854) {
	PPC_FUNC_PROLOGUE();
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6854) {
	__imp__sub_824A6854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A685C) {
	PPC_FUNC_PROLOGUE();
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A685C) {
	__imp__sub_824A685C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6864) {
	PPC_FUNC_PROLOGUE();
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6864) {
	__imp__sub_824A6864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A686C) {
	PPC_FUNC_PROLOGUE();
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A686C) {
	__imp__sub_824A686C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6874) {
	PPC_FUNC_PROLOGUE();
	// li r3,70
	ctx.r3.s64 = 70;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6874) {
	__imp__sub_824A6874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A687C) {
	PPC_FUNC_PROLOGUE();
	// li r3,71
	ctx.r3.s64 = 71;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A687C) {
	__imp__sub_824A687C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6884) {
	PPC_FUNC_PROLOGUE();
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6884) {
	__imp__sub_824A6884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A688C) {
	PPC_FUNC_PROLOGUE();
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A688C) {
	__imp__sub_824A688C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6894) {
	PPC_FUNC_PROLOGUE();
	// li r3,74
	ctx.r3.s64 = 74;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6894) {
	__imp__sub_824A6894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A689C) {
	PPC_FUNC_PROLOGUE();
	// li r3,75
	ctx.r3.s64 = 75;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A689C) {
	__imp__sub_824A689C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68A4) {
	PPC_FUNC_PROLOGUE();
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68A4) {
	__imp__sub_824A68A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,117
	ctx.r3.s64 = 117;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68AC) {
	__imp__sub_824A68AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68B4) {
	__imp__sub_824A68B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68BC) {
	PPC_FUNC_PROLOGUE();
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68BC) {
	__imp__sub_824A68BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68C4) {
	__imp__sub_824A68C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68CC) {
	PPC_FUNC_PROLOGUE();
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68CC) {
	__imp__sub_824A68CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68D4) {
	PPC_FUNC_PROLOGUE();
	// li r3,83
	ctx.r3.s64 = 83;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68D4) {
	__imp__sub_824A68D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68DC) {
	PPC_FUNC_PROLOGUE();
	// li r3,84
	ctx.r3.s64 = 84;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68DC) {
	__imp__sub_824A68DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68E4) {
	PPC_FUNC_PROLOGUE();
	// li r3,85
	ctx.r3.s64 = 85;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68E4) {
	__imp__sub_824A68E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68EC) {
	PPC_FUNC_PROLOGUE();
	// li r3,86
	ctx.r3.s64 = 86;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68EC) {
	__imp__sub_824A68EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68F4) {
	PPC_FUNC_PROLOGUE();
	// li r3,87
	ctx.r3.s64 = 87;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68F4) {
	__imp__sub_824A68F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A68FC) {
	PPC_FUNC_PROLOGUE();
	// li r3,88
	ctx.r3.s64 = 88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A68FC) {
	__imp__sub_824A68FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6904) {
	PPC_FUNC_PROLOGUE();
	// li r3,89
	ctx.r3.s64 = 89;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6904) {
	__imp__sub_824A6904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A690C) {
	PPC_FUNC_PROLOGUE();
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A690C) {
	__imp__sub_824A690C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6914) {
	PPC_FUNC_PROLOGUE();
	// li r3,91
	ctx.r3.s64 = 91;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6914) {
	__imp__sub_824A6914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A691C) {
	PPC_FUNC_PROLOGUE();
	// li r3,92
	ctx.r3.s64 = 92;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A691C) {
	__imp__sub_824A691C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6924) {
	PPC_FUNC_PROLOGUE();
	// li r3,93
	ctx.r3.s64 = 93;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6924) {
	__imp__sub_824A6924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A692C) {
	PPC_FUNC_PROLOGUE();
	// li r3,94
	ctx.r3.s64 = 94;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A692C) {
	__imp__sub_824A692C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6934) {
	PPC_FUNC_PROLOGUE();
	// li r3,95
	ctx.r3.s64 = 95;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6934) {
	__imp__sub_824A6934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A693C) {
	PPC_FUNC_PROLOGUE();
	// li r3,97
	ctx.r3.s64 = 97;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A693C) {
	__imp__sub_824A693C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6944) {
	PPC_FUNC_PROLOGUE();
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6944) {
	__imp__sub_824A6944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A694C) {
	PPC_FUNC_PROLOGUE();
	// li r3,99
	ctx.r3.s64 = 99;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A694C) {
	__imp__sub_824A694C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6954) {
	PPC_FUNC_PROLOGUE();
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6954) {
	__imp__sub_824A6954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A695C) {
	PPC_FUNC_PROLOGUE();
	// li r3,102
	ctx.r3.s64 = 102;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A695C) {
	__imp__sub_824A695C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6964) {
	PPC_FUNC_PROLOGUE();
	// li r3,103
	ctx.r3.s64 = 103;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6964) {
	__imp__sub_824A6964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A696C) {
	PPC_FUNC_PROLOGUE();
	// li r3,104
	ctx.r3.s64 = 104;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A696C) {
	__imp__sub_824A696C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6974) {
	PPC_FUNC_PROLOGUE();
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6974) {
	__imp__sub_824A6974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A697C) {
	PPC_FUNC_PROLOGUE();
	// li r3,106
	ctx.r3.s64 = 106;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A697C) {
	__imp__sub_824A697C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6984) {
	PPC_FUNC_PROLOGUE();
	// li r3,107
	ctx.r3.s64 = 107;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6984) {
	__imp__sub_824A6984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A698C) {
	PPC_FUNC_PROLOGUE();
	// li r3,108
	ctx.r3.s64 = 108;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A698C) {
	__imp__sub_824A698C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6994) {
	PPC_FUNC_PROLOGUE();
	// li r3,109
	ctx.r3.s64 = 109;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6994) {
	__imp__sub_824A6994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A699C) {
	PPC_FUNC_PROLOGUE();
	// li r3,119
	ctx.r3.s64 = 119;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A699C) {
	__imp__sub_824A699C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69A4) {
	PPC_FUNC_PROLOGUE();
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69A4) {
	__imp__sub_824A69A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,43
	ctx.r3.s64 = 43;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69AC) {
	__imp__sub_824A69AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69B4) {
	__imp__sub_824A69B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69BC) {
	PPC_FUNC_PROLOGUE();
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69BC) {
	__imp__sub_824A69BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69C4) {
	__imp__sub_824A69C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69CC) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69CC) {
	__imp__sub_824A69CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69D4) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69D4) {
	__imp__sub_824A69D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69DC) {
	PPC_FUNC_PROLOGUE();
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69DC) {
	__imp__sub_824A69DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69E4) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69E4) {
	__imp__sub_824A69E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69EC) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69EC) {
	__imp__sub_824A69EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69F4) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69F4) {
	__imp__sub_824A69F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A69FC) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A69FC) {
	__imp__sub_824A69FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6A04) {
	PPC_FUNC_PROLOGUE();
	// li r3,38
	ctx.r3.s64 = 38;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6A04) {
	__imp__sub_824A6A04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6A0C) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6A0C) {
	__imp__sub_824A6A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6A14) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6A14) {
	__imp__sub_824A6A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,27192
	ctx.r12.s64 = ctx.r12.s64 + 27192;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_824A6A20) {
	__imp__sub_824A6A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,28148(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28148);
	// lwz r18,27516(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27516);
	// lwz r18,27524(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	// lwz r18,27532(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27532);
	// lwz r18,27540(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27540);
	// lwz r18,27548(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27548);
	// lwz r18,27556(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27556);
	// lwz r18,27564(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27564);
	// lwz r18,27572(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27572);
	// lwz r18,28148(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28148);
	// lwz r18,27580(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27580);
	// lwz r18,27588(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27588);
	// lwz r18,27596(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27596);
	// lwz r18,27604(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27604);
	// lwz r18,27612(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27612);
	// lwz r18,27620(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27620);
	// lwz r18,27628(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27628);
	// lwz r18,27636(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27636);
	// lwz r18,27644(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27644);
	// lwz r18,27652(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27652);
	// lwz r18,27660(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27660);
	// lwz r18,27668(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27668);
	// lwz r18,27676(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27676);
	// lwz r18,27684(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27684);
	// lwz r18,27692(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27692);
	// lwz r18,27700(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27700);
	// lwz r18,27708(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27708);
	// lwz r18,27716(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27716);
	// lwz r18,27724(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27724);
	// lwz r18,27732(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27732);
	// lwz r18,27740(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27740);
	// lwz r18,27748(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27748);
	// lwz r18,27756(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27756);
	// lwz r18,27764(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27764);
	// lwz r18,27772(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27772);
	// lwz r18,27780(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27780);
	// lwz r18,27788(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27788);
	// lwz r18,27796(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27796);
	// lwz r18,27804(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27804);
	// lwz r18,27812(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27812);
	// lwz r18,27820(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27820);
	// lwz r18,27828(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27828);
	// lwz r18,27836(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27836);
	// lwz r18,27844(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27844);
	// lwz r18,27852(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27852);
	// lwz r18,27860(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27860);
	// lwz r18,27868(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27868);
	// lwz r18,27876(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27876);
	// lwz r18,27884(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27884);
	// lwz r18,27892(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27892);
	// lwz r18,27900(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27900);
	// lwz r18,27908(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27908);
	// lwz r18,27916(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27916);
	// lwz r18,27924(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27924);
	// lwz r18,27932(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27932);
	// lwz r18,27940(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27940);
	// lwz r18,27948(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27948);
	// lwz r18,27956(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27956);
	// lwz r18,27964(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27964);
	// lwz r18,27972(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27972);
	// lwz r18,27980(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27980);
	// lwz r18,27988(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27988);
	// lwz r18,27996(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27996);
	// lwz r18,28004(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28004);
	// lwz r18,28012(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28012);
	// lwz r18,28020(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28020);
	// lwz r18,28028(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28028);
	// lwz r18,28036(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28036);
	// lwz r18,28044(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28044);
	// lwz r18,28052(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28052);
	// lwz r18,28060(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28060);
	// lwz r18,28068(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28068);
	// lwz r18,28076(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28076);
	// lwz r18,28084(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28084);
	// lwz r18,28092(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28092);
	// lwz r18,28100(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28100);
	// lwz r18,28108(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28108);
	// lwz r18,28116(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28116);
	// lwz r18,28124(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28124);
	// lwz r18,28132(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28132);
	// lwz r18,28140(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28140);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6A38) {
	__imp__sub_824A6A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6B84) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6B84) {
	__imp__sub_824A6B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6B8C) {
	PPC_FUNC_PROLOGUE();
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6B8C) {
	__imp__sub_824A6B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6B94) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6B94) {
	__imp__sub_824A6B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6B9C) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6B9C) {
	__imp__sub_824A6B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BA4) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BA4) {
	__imp__sub_824A6BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BAC) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BAC) {
	__imp__sub_824A6BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BB4) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BB4) {
	__imp__sub_824A6BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BBC) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BBC) {
	__imp__sub_824A6BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BC4) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BC4) {
	__imp__sub_824A6BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_824A6BCC) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_824A6BCC) {
	__imp__sub_824A6BCC(ctx, base);
}

