#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83221B38"))) PPC_WEAK_FUNC(sub_83221B38);
PPC_FUNC_IMPL(__imp__sub_83221B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f6,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f5,f6,f8,f10
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r11,r4,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f3,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f5,f9
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f5.f64 : ctx.f9.f64;
	// stfs f2,56(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83221BB4"))) PPC_WEAK_FUNC(sub_83221BB4);
PPC_FUNC_IMPL(__imp__sub_83221BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83221BB8"))) PPC_WEAK_FUNC(sub_83221BB8);
PPC_FUNC_IMPL(__imp__sub_83221BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83221be8
	if (ctx.cr6.eq) goto loc_83221BE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83221be8
	if (ctx.cr6.eq) goto loc_83221BE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// blr 
	return;
loc_83221BE8:
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83221BF8"))) PPC_WEAK_FUNC(sub_83221BF8);
PPC_FUNC_IMPL(__imp__sub_83221BF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82b30af8
	sub_82B30AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83221C0C"))) PPC_WEAK_FUNC(sub_83221C0C);
PPC_FUNC_IMPL(__imp__sub_83221C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83221C10"))) PPC_WEAK_FUNC(sub_83221C10);
PPC_FUNC_IMPL(__imp__sub_83221C10) {
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
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,5928
	ctx.r10.s64 = ctx.r11.s64 + 5928;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x832179c0
	ctx.lr = 0x83221C3C;
	sub_832179C0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221c5c
	if (ctx.cr6.eq) goto loc_83221C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83221C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83221C5C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221c88
	if (ctx.cr6.eq) goto loc_83221C88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83221C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83221C88:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x829ff648
	ctx.lr = 0x83221C90;
	sub_829FF648(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221ca4
	if (ctx.cr6.eq) goto loc_83221CA4;
	// bl 0x8221be68
	ctx.lr = 0x83221CA4;
	sub_8221BE68(ctx, base);
loc_83221CA4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83221CC8"))) PPC_WEAK_FUNC(sub_83221CC8);
PPC_FUNC_IMPL(__imp__sub_83221CC8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83221cf8
	if (ctx.cr6.eq) goto loc_83221CF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83221CF0;
	sub_829FF648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83221CF8:
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

__attribute__((alias("__imp__sub_83221D0C"))) PPC_WEAK_FUNC(sub_83221D0C);
PPC_FUNC_IMPL(__imp__sub_83221D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83221D10"))) PPC_WEAK_FUNC(sub_83221D10);
PPC_FUNC_IMPL(__imp__sub_83221D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83221D18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r9,199(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,5928
	ctx.r8.s64 = ctx.r10.s64 + 5928;
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// stfs f3,60(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f7,76(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,-6744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6744);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83221D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x832179c0
	ctx.lr = 0x83221DA8;
	sub_832179C0(ctx, base);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83221DC0"))) PPC_WEAK_FUNC(sub_83221DC0);
PPC_FUNC_IMPL(__imp__sub_83221DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83221DC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221df8
	if (ctx.cr6.eq) goto loc_83221DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83221DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
loc_83221DF8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x83221f44
	if (ctx.cr6.gt) goto loc_83221F44;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,7716
	ctx.r12.s64 = ctx.r12.s64 + 7716;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83221E34;
	case 1:
		goto loc_83221E6C;
	case 2:
		goto loc_83221E94;
	case 3:
		goto loc_83221EBC;
	default:
		__builtin_unreachable();
	}
	// lwz r25,7732(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7732);
	// lwz r25,7788(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7788);
	// lwz r25,7828(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7828);
	// lwz r25,7868(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7868);
loc_83221E34:
	// li r3,112
	ctx.r3.s64 = 112;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8221f388
	ctx.lr = 0x83221E40;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221e5c
	if (ctx.cr6.eq) goto loc_83221E5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8321caf0
	ctx.lr = 0x83221E50;
	sub_8321CAF0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83221E5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83221E6C:
	// li r3,144
	ctx.r3.s64 = 144;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8221f388
	ctx.lr = 0x83221E78;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221e5c
	if (ctx.cr6.eq) goto loc_83221E5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8321d258
	ctx.lr = 0x83221E88;
	sub_8321D258(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83221E94:
	// li r3,100
	ctx.r3.s64 = 100;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8221f388
	ctx.lr = 0x83221EA0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221e5c
	if (ctx.cr6.eq) goto loc_83221E5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8321b3f8
	ctx.lr = 0x83221EB0;
	sub_8321B3F8(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83221EBC:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8221f388
	ctx.lr = 0x83221EC8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221f3c
	if (ctx.cr6.eq) goto loc_83221F3C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,6340
	ctx.r9.s64 = ctx.r10.s64 + 6340;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r31.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r31.u32);
	// stw r31,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r31.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83221F3C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_83221F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83221F4C"))) PPC_WEAK_FUNC(sub_83221F4C);
PPC_FUNC_IMPL(__imp__sub_83221F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83221F50"))) PPC_WEAK_FUNC(sub_83221F50);
PPC_FUNC_IMPL(__imp__sub_83221F50) {
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
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832179c0
	ctx.lr = 0x83221F74;
	sub_832179C0(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x83221fb0
	if (!ctx.cr6.eq) goto loc_83221FB0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83221fb0
	if (ctx.cr6.eq) goto loc_83221FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83221FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221dc0
	ctx.lr = 0x83221FB0;
	sub_83221DC0(ctx, base);
loc_83221FB0:
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

__attribute__((alias("__imp__sub_83221FC8"))) PPC_WEAK_FUNC(sub_83221FC8);
PPC_FUNC_IMPL(__imp__sub_83221FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83221FD0;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322222c
	if (ctx.cr6.eq) goto loc_8322222C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832221a8
	if (ctx.cr6.eq) goto loc_832221A8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832221a8
	if (!ctx.cr6.eq) goto loc_832221A8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322205c
	if (!ctx.cr6.gt) goto loc_8322205C;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// bl 0x828a05b8
	ctx.lr = 0x83222058;
	sub_828A05B8(ctx, base);
	// b 0x832220b4
	goto loc_832220B4;
loc_8322205C:
	// bge cr6,0x832220b4
	if (!ctx.cr6.lt) goto loc_832220B4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832220b4
	if (ctx.cr6.eq) goto loc_832220B4;
	// subf r8,r11,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r11.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x832220b0
	if (ctx.cr6.eq) goto loc_832220B0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_83222090:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83222090
	if (!ctx.cr6.eq) goto loc_83222090;
loc_832220B0:
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_832220B4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x832220e4
	if (!ctx.cr6.gt) goto loc_832220E4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832220C8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832220c8
	if (ctx.cr6.lt) goto loc_832220C8;
loc_832220E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83222130
	if (!ctx.cr6.eq) goto loc_83222130;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8322da38
	ctx.lr = 0x8322210C;
	sub_8322DA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222130
	if (ctx.cr6.eq) goto loc_83222130;
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v1,r11,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82be4420
	ctx.lr = 0x83222130;
	sub_82BE4420(ctx, base);
loc_83222130:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a090a0
	ctx.lr = 0x8322213C;
	sub_82A090A0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a090a0
	ctx.lr = 0x83222148;
	sub_82A090A0(ctx, base);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// bl 0x82a090a0
	ctx.lr = 0x8322216C;
	sub_82A090A0(ctx, base);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// ld r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// ld r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// bl 0x82a09148
	ctx.lr = 0x83222184;
	sub_82A09148(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83222194
	if (ctx.cr6.eq) goto loc_83222194;
	// bl 0x8221be68
	ctx.lr = 0x83222194;
	sub_8221BE68(ctx, base);
loc_83222194:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x823d2d28
	ctx.lr = 0x832221A0;
	sub_823D2D28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d2d28
	ctx.lr = 0x832221A8;
	sub_823D2D28(ctx, base);
loc_832221A8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r7,r11,-4108
	ctx.r7.s64 = ctx.r11.s64 + -4108;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lfs f7,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f5,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f4,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lfs f3,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r4,32(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r29,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r29.u8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x83217a38
	ctx.lr = 0x8322222C;
	sub_83217A38(ctx, base);
loc_8322222C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83222238"))) PPC_WEAK_FUNC(sub_83222238);
PPC_FUNC_IMPL(__imp__sub_83222238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83222240;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832222c4
	if (ctx.cr6.eq) goto loc_832222C4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x832222c4
	if (ctx.cr6.lt) goto loc_832222C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bl 0x82b30af8
	ctx.lr = 0x83222280;
	sub_82B30AF8(ctx, base);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832222bc
	if (ctx.cr6.eq) goto loc_832222BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x832222A0;
	sub_829FF648(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832222bc
	if (ctx.cr6.eq) goto loc_832222BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832222BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83221dc0
	ctx.lr = 0x832222C4;
	sub_83221DC0(ctx, base);
loc_832222C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832222CC"))) PPC_WEAK_FUNC(sub_832222CC);
PPC_FUNC_IMPL(__imp__sub_832222CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832222D0"))) PPC_WEAK_FUNC(sub_832222D0);
PPC_FUNC_IMPL(__imp__sub_832222D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// addi r10,r10,-27468
	ctx.r10.s64 = ctx.r10.s64 + -27468;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x832222fc
	if (!ctx.cr6.eq) goto loc_832222FC;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_832222FC:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322232C"))) PPC_WEAK_FUNC(sub_8322232C);
PPC_FUNC_IMPL(__imp__sub_8322232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222330"))) PPC_WEAK_FUNC(sub_83222330);
PPC_FUNC_IMPL(__imp__sub_83222330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83222360
	if (ctx.cr6.eq) goto loc_83222360;
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222358
	if (ctx.cr6.eq) goto loc_83222358;
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83222360
	if (ctx.cr6.gt) goto loc_83222360;
loc_83222358:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83222360:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222368"))) PPC_WEAK_FUNC(sub_83222368);
PPC_FUNC_IMPL(__imp__sub_83222368) {
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
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832223b8
	if (ctx.cr6.eq) goto loc_832223B8;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832223AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832223bc
	if (!ctx.cr6.eq) goto loc_832223BC;
loc_832223B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832223BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_832223D4"))) PPC_WEAK_FUNC(sub_832223D4);
PPC_FUNC_IMPL(__imp__sub_832223D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832223D8"))) PPC_WEAK_FUNC(sub_832223D8);
PPC_FUNC_IMPL(__imp__sub_832223D8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222440;
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

__attribute__((alias("__imp__sub_83222458"))) PPC_WEAK_FUNC(sub_83222458);
PPC_FUNC_IMPL(__imp__sub_83222458) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-7248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83222490
	if (!ctx.cr6.eq) goto loc_83222490;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x83222494
	goto loc_83222494;
loc_83222490:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83222494:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832224A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832224e4
	if (ctx.cr6.eq) goto loc_832224E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	ctx.lr = 0x832224D0;
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
	ctx.lr = 0x832224E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832224E4:
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

__attribute__((alias("__imp__sub_832224FC"))) PPC_WEAK_FUNC(sub_832224FC);
PPC_FUNC_IMPL(__imp__sub_832224FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222500"))) PPC_WEAK_FUNC(sub_83222500);
PPC_FUNC_IMPL(__imp__sub_83222500) {
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
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,80
	ctx.r8.s64 = 80;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// std r6,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r6.u64);
	// lvx128 v1,r31,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v2,v0,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// bl 0x8222e6c0
	ctx.lr = 0x8322255C;
	sub_8222E6C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83222578"))) PPC_WEAK_FUNC(sub_83222578);
PPC_FUNC_IMPL(__imp__sub_83222578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-28160
	ctx.r8.s64 = ctx.r10.s64 + -28160;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,1
	ctx.r6.s64 = 1;
	// vaddfp v13,v0,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// lfs f0,-27456(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r6,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r6.u8);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832225B8"))) PPC_WEAK_FUNC(sub_832225B8);
PPC_FUNC_IMPL(__imp__sub_832225B8) {
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
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x8221acc0
	ctx.lr = 0x832225DC;
	sub_8221ACC0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832225EC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x832225ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832225EC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222610"))) PPC_WEAK_FUNC(sub_83222610);
PPC_FUNC_IMPL(__imp__sub_83222610) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222668
	if (ctx.cr6.eq) goto loc_83222668;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83222630:
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stb r31,200(r11)
	PPC_STORE_U8(ctx.r11.u32 + 200, ctx.r31.u8);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322265c
	if (ctx.cr6.eq) goto loc_8322265C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222658
	if (ctx.cr6.eq) goto loc_83222658;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222660
	goto loc_83222660;
loc_83222658:
	// bl 0x821940c8
	ctx.lr = 0x8322265C;
	sub_821940C8(ctx, base);
loc_8322265C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83222660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83222630
	if (!ctx.cr6.eq) goto loc_83222630;
loc_83222668:
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

__attribute__((alias("__imp__sub_8322267C"))) PPC_WEAK_FUNC(sub_8322267C);
PPC_FUNC_IMPL(__imp__sub_8322267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222680"))) PPC_WEAK_FUNC(sub_83222680);
PPC_FUNC_IMPL(__imp__sub_83222680) {
	PPC_FUNC_PROLOGUE();
	// b 0x83222610
	sub_83222610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222684"))) PPC_WEAK_FUNC(sub_83222684);
PPC_FUNC_IMPL(__imp__sub_83222684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222688"))) PPC_WEAK_FUNC(sub_83222688);
PPC_FUNC_IMPL(__imp__sub_83222688) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832226e4
	if (ctx.cr6.eq) goto loc_832226E4;
loc_832226A8:
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stw r31,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r31.u32);
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832226d8
	if (ctx.cr6.eq) goto loc_832226D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832226d4
	if (ctx.cr6.eq) goto loc_832226D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x832226dc
	goto loc_832226DC;
loc_832226D4:
	// bl 0x821940c8
	ctx.lr = 0x832226D8;
	sub_821940C8(ctx, base);
loc_832226D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832226DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832226a8
	if (!ctx.cr6.eq) goto loc_832226A8;
loc_832226E4:
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

__attribute__((alias("__imp__sub_832226F8"))) PPC_WEAK_FUNC(sub_832226F8);
PPC_FUNC_IMPL(__imp__sub_832226F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83222688
	sub_83222688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832226FC"))) PPC_WEAK_FUNC(sub_832226FC);
PPC_FUNC_IMPL(__imp__sub_832226FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222700"))) PPC_WEAK_FUNC(sub_83222700);
PPC_FUNC_IMPL(__imp__sub_83222700) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83222708;
	sub_82CA2BEC(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r7,r10,-28480
	ctx.r7.s64 = ctx.r10.s64 + -28480;
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r5,r9,-28224
	ctx.r5.s64 = ctx.r9.s64 + -28224;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// addi r29,r1,-48
	ctx.r29.s64 = ctx.r1.s64 + -48;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// vand v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// std r6,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,24
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE7));
	// std r9,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r9.u64);
	// vpermwi128 v11,v0,97
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9E));
	// std r31,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r31.u64);
	// vspltw v10,v0,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vpermwi128 v9,v0,134
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x79));
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v8,v0,252
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x3));
	// vmulfp128 v7,v12,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v6,v0,133
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x7A));
	// vpermwi128 v5,v0,98
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9D));
	// vmulfp128 v4,v11,v6
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v3,v9,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32)));
	// vxor v2,v7,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vmaddfp v1,v10,v0,v2
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)));
	// vxor v31,v4,v13
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddfp v30,v1,v31
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v31.f32)));
	// vsubfp v29,v30,v3
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v29,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_832227A8"))) PPC_WEAK_FUNC(sub_832227A8);
PPC_FUNC_IMPL(__imp__sub_832227A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// li r11,80
	ctx.r11.s64 = 80;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r10,-28160
	ctx.r10.s64 = ctx.r10.s64 + -28160;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r8,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v11,v0,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvx128 v10,r8,r5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v9,v0,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v7,v10,v12
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v8,r4,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v6,v10,v12
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v5,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v4,v8,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghw v3,v11,v7
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// li r8,204
	ctx.r8.s64 = 204;
	// vmrglw v2,v11,v7
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v31,v9,v6
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v30,v9,v6
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmsum4fp128 v29,v4,v3
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32), 0xFF));
	// vmsum4fp128 v27,v4,v2
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32), 0xFF));
	// lvlx v1,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmsum4fp128 v26,v4,v31
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v31.f32), 0xFF));
	// vspltw v28,v1,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vmsum4fp128 v25,v4,v30
	_mm_store_ps(ctx.v25.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v30.f32), 0xFF));
	// vmrghw v24,v29,v26
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrghw v23,v27,v25
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v27.u32)));
	// vmrghw v22,v24,v23
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// vmulfp128 v21,v22,v28
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v28.f32)));
	// stvx128 v21,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322284C"))) PPC_WEAK_FUNC(sub_8322284C);
PPC_FUNC_IMPL(__imp__sub_8322284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222850"))) PPC_WEAK_FUNC(sub_83222850);
PPC_FUNC_IMPL(__imp__sub_83222850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83222858;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r27,208(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832228a4
	if (ctx.cr6.eq) goto loc_832228A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83222890;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832228A4:
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832223d8
	ctx.lr = 0x832228B4;
	sub_832223D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832228D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832228DC;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832228E4"))) PPC_WEAK_FUNC(sub_832228E4);
PPC_FUNC_IMPL(__imp__sub_832228E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832228E8"))) PPC_WEAK_FUNC(sub_832228E8);
PPC_FUNC_IMPL(__imp__sub_832228E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832228F0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r28,208(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322293c
	if (ctx.cr6.eq) goto loc_8322293C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83222928;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8322293C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222458
	ctx.lr = 0x83222948;
	sub_83222458(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83222970;
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83222978"))) PPC_WEAK_FUNC(sub_83222978);
PPC_FUNC_IMPL(__imp__sub_83222978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lfs f13,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// addi r11,r9,-4108
	ctx.r11.s64 = ctx.r9.s64 + -4108;
	// lwz r10,27648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f12,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,252(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832229BC"))) PPC_WEAK_FUNC(sub_832229BC);
PPC_FUNC_IMPL(__imp__sub_832229BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832229C0"))) PPC_WEAK_FUNC(sub_832229C0);
PPC_FUNC_IMPL(__imp__sub_832229C0) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832229F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r7,68(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lvx128 v127,r0,r8
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83222A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f10,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v127,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222AA0"))) PPC_WEAK_FUNC(sub_83222AA0);
PPC_FUNC_IMPL(__imp__sub_83222AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83222AA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,22840
	ctx.r9.s64 = ctx.r11.s64 + 22840;
	// addi r30,r10,5732
	ctx.r30.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// bl 0x821940c8
	ctx.lr = 0x83222AD0;
	sub_821940C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// bl 0x821940c8
	ctx.lr = 0x83222AE4;
	sub_821940C8(ctx, base);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83222afc
	if (ctx.cr6.eq) goto loc_83222AFC;
	// bl 0x8221be68
	ctx.lr = 0x83222AFC;
	sub_8221BE68(ctx, base);
loc_83222AFC:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// bl 0x829ff648
	ctx.lr = 0x83222B10;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a410
	ctx.lr = 0x83222B18;
	sub_8229A410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83222B20"))) PPC_WEAK_FUNC(sub_83222B20);
PPC_FUNC_IMPL(__imp__sub_83222B20) {
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
loc_83222B34:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222b68
	if (ctx.cr6.eq) goto loc_83222B68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222b64
	if (ctx.cr6.eq) goto loc_83222B64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222b68
	if (ctx.cr6.eq) goto loc_83222B68;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83222b34
	goto loc_83222B34;
loc_83222B64:
	// bl 0x821940c8
	ctx.lr = 0x83222B68;
	sub_821940C8(ctx, base);
loc_83222B68:
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

__attribute__((alias("__imp__sub_83222B80"))) PPC_WEAK_FUNC(sub_83222B80);
PPC_FUNC_IMPL(__imp__sub_83222B80) {
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
loc_83222B94:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222bc8
	if (ctx.cr6.eq) goto loc_83222BC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222bc4
	if (ctx.cr6.eq) goto loc_83222BC4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222bc8
	if (ctx.cr6.eq) goto loc_83222BC8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83222b94
	goto loc_83222B94;
loc_83222BC4:
	// bl 0x821940c8
	ctx.lr = 0x83222BC8;
	sub_821940C8(ctx, base);
loc_83222BC8:
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

__attribute__((alias("__imp__sub_83222BE0"))) PPC_WEAK_FUNC(sub_83222BE0);
PPC_FUNC_IMPL(__imp__sub_83222BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83222BE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,5732
	ctx.r29.s64 = ctx.r11.s64 + 5732;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822149c8
	ctx.lr = 0x83222C0C;
	sub_822149C8(ctx, base);
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978470
	ctx.lr = 0x83222C1C;
	sub_82978470(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,5732
	ctx.r28.s64 = ctx.r11.s64 + 5732;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x821940c8
	ctx.lr = 0x83222C30;
	sub_821940C8(ctx, base);
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222c8c
	if (ctx.cr6.eq) goto loc_83222C8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222c94
	if (ctx.cr6.eq) goto loc_83222C94;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222c8c
	if (ctx.cr6.eq) goto loc_83222C8C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822149c8
	ctx.lr = 0x83222C68;
	sub_822149C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x825575c8
	ctx.lr = 0x83222C74;
	sub_825575C8(ctx, base);
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82978470
	ctx.lr = 0x83222C80;
	sub_82978470(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	ctx.lr = 0x83222C8C;
	sub_821940C8(ctx, base);
loc_83222C8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_83222C94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x83222C9C;
	sub_821940C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83222CA4"))) PPC_WEAK_FUNC(sub_83222CA4);
PPC_FUNC_IMPL(__imp__sub_83222CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222CA8"))) PPC_WEAK_FUNC(sub_83222CA8);
PPC_FUNC_IMPL(__imp__sub_83222CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83222CB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821d9d28
	ctx.lr = 0x83222CC4;
	sub_821D9D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83222CD4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83222cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83222CD4;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222d10
	if (ctx.cr6.eq) goto loc_83222D10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222d0c
	if (ctx.cr6.eq) goto loc_83222D0C;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222d14
	goto loc_83222D14;
loc_83222D0C:
	// bl 0x821940c8
	ctx.lr = 0x83222D10;
	sub_821940C8(ctx, base);
loc_83222D10:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83222D14:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83222d6c
	if (ctx.cr6.eq) goto loc_83222D6C;
loc_83222D1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83222d6c
	if (ctx.cr6.eq) goto loc_83222D6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9d28
	ctx.lr = 0x83222D2C;
	sub_821D9D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0210
	ctx.lr = 0x83222D38;
	sub_821C0210(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222d60
	if (ctx.cr6.eq) goto loc_83222D60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222d5c
	if (ctx.cr6.eq) goto loc_83222D5C;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222d64
	goto loc_83222D64;
loc_83222D5C:
	// bl 0x821940c8
	ctx.lr = 0x83222D60;
	sub_821940C8(ctx, base);
loc_83222D60:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83222D64:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83222d1c
	if (!ctx.cr6.eq) goto loc_83222D1C;
loc_83222D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83222D74"))) PPC_WEAK_FUNC(sub_83222D74);
PPC_FUNC_IMPL(__imp__sub_83222D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222D78"))) PPC_WEAK_FUNC(sub_83222D78);
PPC_FUNC_IMPL(__imp__sub_83222D78) {
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
	// bl 0x821d9d28
	ctx.lr = 0x83222D98;
	sub_821D9D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83222DA8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83222da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83222DA8;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222de4
	if (ctx.cr6.eq) goto loc_83222DE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222de0
	if (ctx.cr6.eq) goto loc_83222DE0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222de8
	goto loc_83222DE8;
loc_83222DE0:
	// bl 0x821940c8
	ctx.lr = 0x83222DE4;
	sub_821940C8(ctx, base);
loc_83222DE4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83222DE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83222e38
	if (ctx.cr6.eq) goto loc_83222E38;
loc_83222DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9d28
	ctx.lr = 0x83222DF8;
	sub_821D9D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0210
	ctx.lr = 0x83222E04;
	sub_821C0210(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222e2c
	if (ctx.cr6.eq) goto loc_83222E2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222e28
	if (ctx.cr6.eq) goto loc_83222E28;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222e30
	goto loc_83222E30;
loc_83222E28:
	// bl 0x821940c8
	ctx.lr = 0x83222E2C;
	sub_821940C8(ctx, base);
loc_83222E2C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83222E30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83222df0
	if (!ctx.cr6.eq) goto loc_83222DF0;
loc_83222E38:
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

__attribute__((alias("__imp__sub_83222E50"))) PPC_WEAK_FUNC(sub_83222E50);
PPC_FUNC_IMPL(__imp__sub_83222E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222d78
	ctx.lr = 0x83222E70;
	sub_83222D78(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222E94"))) PPC_WEAK_FUNC(sub_83222E94);
PPC_FUNC_IMPL(__imp__sub_83222E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222E98"))) PPC_WEAK_FUNC(sub_83222E98);
PPC_FUNC_IMPL(__imp__sub_83222E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83222EA0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83222b80
	ctx.lr = 0x83222EB4;
	sub_83222B80(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83222850
	ctx.lr = 0x83222EC8;
	sub_83222850(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83222fd0
	if (ctx.cr6.eq) goto loc_83222FD0;
loc_83222ED0:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83222f0c
	if (ctx.cr6.eq) goto loc_83222F0C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83222f10
	if (!ctx.cr6.eq) goto loc_83222F10;
loc_83222F0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83222F10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222f98
	if (ctx.cr6.eq) goto loc_83222F98;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222f44
	if (ctx.cr6.eq) goto loc_83222F44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222f40
	if (ctx.cr6.eq) goto loc_83222F40;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222f48
	goto loc_83222F48;
loc_83222F40:
	// bl 0x821940c8
	ctx.lr = 0x83222F44;
	sub_821940C8(ctx, base);
loc_83222F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83222F48:
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222f7c
	if (ctx.cr6.eq) goto loc_83222F7C;
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
loc_83222F7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83222F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83222F98:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83222fc0
	if (ctx.cr6.eq) goto loc_83222FC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222fbc
	if (ctx.cr6.eq) goto loc_83222FBC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83222fc4
	goto loc_83222FC4;
loc_83222FBC:
	// bl 0x821940c8
	ctx.lr = 0x83222FC0;
	sub_821940C8(ctx, base);
loc_83222FC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83222FC4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83222ed0
	if (!ctx.cr6.eq) goto loc_83222ED0;
loc_83222FD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83222FD8"))) PPC_WEAK_FUNC(sub_83222FD8);
PPC_FUNC_IMPL(__imp__sub_83222FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83222FE0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r27,r11,63
	ctx.r27.s64 = ctx.r11.s64 + 63;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-7252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7252);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x83223014
	if (ctx.cr6.eq) goto loc_83223014;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223014:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223144
	if (ctx.cr6.eq) goto loc_83223144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222b80
	ctx.lr = 0x8322303C;
	sub_83222B80(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832228e8
	ctx.lr = 0x83223050;
	sub_832228E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83223130
	if (ctx.cr6.eq) goto loc_83223130;
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
loc_8322305C:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83223098
	if (ctx.cr6.eq) goto loc_83223098;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322308C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8322309c
	if (!ctx.cr6.eq) goto loc_8322309C;
loc_83223098:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322309C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832230f8
	if (ctx.cr6.eq) goto loc_832230F8;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832230d0
	if (ctx.cr6.eq) goto loc_832230D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832230cc
	if (ctx.cr6.eq) goto loc_832230CC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x832230d4
	goto loc_832230D4;
loc_832230CC:
	// bl 0x821940c8
	ctx.lr = 0x832230D0;
	sub_821940C8(ctx, base);
loc_832230D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832230D4:
	// lwz r10,-7200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7200);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832230ec
	if (ctx.cr6.eq) goto loc_832230EC;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_832230EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x832230F8;
	sub_825CBB08(ctx, base);
loc_832230F8:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223120
	if (ctx.cr6.eq) goto loc_83223120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322311c
	if (ctx.cr6.eq) goto loc_8322311C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83223124
	goto loc_83223124;
loc_8322311C:
	// bl 0x821940c8
	ctx.lr = 0x83223120;
	sub_821940C8(ctx, base);
loc_83223120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83223124:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322305c
	if (!ctx.cr6.eq) goto loc_8322305C;
loc_83223130:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223144:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322314C"))) PPC_WEAK_FUNC(sub_8322314C);
PPC_FUNC_IMPL(__imp__sub_8322314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223150"))) PPC_WEAK_FUNC(sub_83223150);
PPC_FUNC_IMPL(__imp__sub_83223150) {
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
	// bl 0x83222b20
	ctx.lr = 0x83223164;
	sub_83222B20(ctx, base);
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322318c
	if (ctx.cr6.eq) goto loc_8322318C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83223188
	if (ctx.cr6.eq) goto loc_83223188;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83223190
	goto loc_83223190;
loc_83223188:
	// bl 0x821940c8
	ctx.lr = 0x8322318C;
	sub_821940C8(ctx, base);
loc_8322318C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83223190:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832231f0
	if (ctx.cr6.eq) goto loc_832231F0;
loc_83223198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832231AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83223208
	if (!ctx.cr6.eq) goto loc_83223208;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832231e0
	if (ctx.cr6.eq) goto loc_832231E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832231dc
	if (ctx.cr6.eq) goto loc_832231DC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x832231e4
	goto loc_832231E4;
loc_832231DC:
	// bl 0x821940c8
	ctx.lr = 0x832231E0;
	sub_821940C8(ctx, base);
loc_832231E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832231E4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83223198
	if (!ctx.cr6.eq) goto loc_83223198;
loc_832231F0:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_83223208:
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
}

__attribute__((alias("__imp__sub_83223220"))) PPC_WEAK_FUNC(sub_83223220);
PPC_FUNC_IMPL(__imp__sub_83223220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83223228;
	sub_82CA2BE8(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r30,220(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r29,224(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832232ac
	if (ctx.cr6.eq) goto loc_832232AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83223390
	if (ctx.cr6.eq) goto loc_83223390;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832232ac
	if (ctx.cr6.eq) goto loc_832232AC;
	// lwz r3,208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x832232ac
	if (!ctx.cr6.eq) goto loc_832232AC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222d78
	ctx.lr = 0x832232A4;
	sub_83222D78(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v126,r0,r11
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_832232AC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832232e0
	if (ctx.cr6.eq) goto loc_832232E0;
loc_832232B4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832232d4
	if (ctx.cr6.eq) goto loc_832232D4;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83235820
	ctx.lr = 0x832232CC;
	sub_83235820(ctx, base);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v127,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
loc_832232D4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x832232b4
	if (!ctx.cr6.eq) goto loc_832232B4;
loc_832232E0:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-7776
	ctx.r10.s64 = ctx.r11.s64 + -7776;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322333c
	if (ctx.cr6.eq) goto loc_8322333C;
loc_832232F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223330
	if (ctx.cr6.eq) goto loc_83223330;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83223398
	if (ctx.cr6.eq) goto loc_83223398;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83223330
	if (ctx.cr6.eq) goto loc_83223330;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83235820
	ctx.lr = 0x83223328;
	sub_83235820(ctx, base);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v127,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
loc_83223330:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832232f8
	if (!ctx.cr6.eq) goto loc_832232F8;
loc_8322333C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v12,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_83223390:
	// bl 0x821940c8
	ctx.lr = 0x83223394;
	sub_821940C8(ctx, base);
	// b 0x832232ac
	goto loc_832232AC;
loc_83223398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x832233A0;
	sub_821940C8(ctx, base);
	// b 0x83223330
	goto loc_83223330;
}

__attribute__((alias("__imp__sub_832233A4"))) PPC_WEAK_FUNC(sub_832233A4);
PPC_FUNC_IMPL(__imp__sub_832233A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832233A8"))) PPC_WEAK_FUNC(sub_832233A8);
PPC_FUNC_IMPL(__imp__sub_832233A8) {
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
	// addi r6,r6,208
	ctx.r6.s64 = ctx.r6.s64 + 208;
	// addi r5,r5,208
	ctx.r5.s64 = ctx.r5.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832201e8
	ctx.lr = 0x832233D4;
	sub_832201E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832233E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832233F0;
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

__attribute__((alias("__imp__sub_83223408"))) PPC_WEAK_FUNC(sub_83223408);
PPC_FUNC_IMPL(__imp__sub_83223408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83223410;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832234d8
	if (ctx.cr6.eq) goto loc_832234D8;
	// li r11,80
	ctx.r11.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v1,r31,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a1cc60
	ctx.lr = 0x83223440;
	sub_82A1CC60(ctx, base);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	ctx.lr = 0x83223460;
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	ctx.lr = 0x8322346C;
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	ctx.lr = 0x83223478;
	sub_82A1CBF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1cbf8
	ctx.lr = 0x83223484;
	sub_82A1CBF8(ctx, base);
	// lbz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// lwz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832234B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832234D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832234D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x832234E8;
	sub_82A1CB90(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bf630
	ctx.lr = 0x832234F8;
	sub_825BF630(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223520
	if (ctx.cr6.eq) goto loc_83223520;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322351c
	if (ctx.cr6.eq) goto loc_8322351C;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83223524
	goto loc_83223524;
loc_8322351C:
	// bl 0x821940c8
	ctx.lr = 0x83223520;
	sub_821940C8(ctx, base);
loc_83223520:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83223524:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x8322352C;
	sub_82A1CB90(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223558
	if (ctx.cr6.eq) goto loc_83223558;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83223550
	if (ctx.cr6.eq) goto loc_83223550;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322355c
	goto loc_8322355C;
loc_83223550:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821940c8
	ctx.lr = 0x83223558;
	sub_821940C8(ctx, base);
loc_83223558:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8322355C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82a1cb90
	ctx.lr = 0x83223568;
	sub_82A1CB90(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x824ed978
	ctx.lr = 0x8322357C;
	sub_824ED978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223590
	if (ctx.cr6.eq) goto loc_83223590;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83223594
	if (ctx.cr6.eq) goto loc_83223594;
loc_83223590:
	// twi 31,r0,22
loc_83223594:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x832235d0
	if (!ctx.cr6.eq) goto loc_832235D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232da88
	ctx.lr = 0x832235AC;
	sub_8232DA88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832235d0
	if (ctx.cr6.eq) goto loc_832235D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x832235C0;
	sub_825575C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x83222850
	ctx.lr = 0x832235D0;
	sub_83222850(ctx, base);
loc_832235D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832235D8"))) PPC_WEAK_FUNC(sub_832235D8);
PPC_FUNC_IMPL(__imp__sub_832235D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832235E0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r11,63
	ctx.r28.s64 = ctx.r11.s64 + 63;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-7240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7240);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x83223614
	if (ctx.cr6.eq) goto loc_83223614;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832239a8
	if (ctx.cr6.eq) goto loc_832239A8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223890
	if (ctx.cr6.eq) goto loc_83223890;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223658
	if (ctx.cr6.eq) goto loc_83223658;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322366C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223890
	if (ctx.cr6.eq) goto loc_83223890;
	// li r11,80
	ctx.r11.s64 = 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r9,-7232
	ctx.r3.s64 = ctx.r9.s64 + -7232;
	// lvx128 v0,r29,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322ec98
	ctx.lr = 0x8322369C;
	sub_8322EC98(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// ld r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// ld r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7228);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// beq cr6,0x832236c8
	if (ctx.cr6.eq) goto loc_832236C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832236C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832236DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223844
	if (ctx.cr6.eq) goto loc_83223844;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20472
	ctx.r30.s64 = ctx.r11.s64 + -20472;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83223708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83223740
	if (ctx.cr6.eq) goto loc_83223740;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322372C;
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
	ctx.lr = 0x83223740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223740:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223790
	if (ctx.cr6.eq) goto loc_83223790;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322377C;
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
	ctx.lr = 0x83223790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223790:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832237A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832237e0
	if (ctx.cr6.eq) goto loc_832237E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832237CC;
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
	ctx.lr = 0x832237E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832237E0:
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
	ctx.lr = 0x832237F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223830
	if (ctx.cr6.eq) goto loc_83223830;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322381C;
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
	ctx.lr = 0x83223830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223844:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r29,188
	ctx.r5.s64 = ctx.r29.s64 + 188;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ed88
	ctx.lr = 0x83223858;
	sub_8322ED88(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223870
	if (ctx.cr6.eq) goto loc_83223870;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223870:
	// addi r5,r29,256
	ctx.r5.s64 = ctx.r29.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322387C;
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
	ctx.lr = 0x83223890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223890:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832238ac
	if (ctx.cr6.eq) goto loc_832238AC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832238AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08fc8
	ctx.lr = 0x832238B8;
	sub_82A08FC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bf630
	ctx.lr = 0x832238C8;
	sub_825BF630(ctx, base);
	// addi r3,r29,236
	ctx.r3.s64 = ctx.r29.s64 + 236;
	// bl 0x825575c8
	ctx.lr = 0x832238D0;
	sub_825575C8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832238ec
	if (ctx.cr6.eq) goto loc_832238EC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832238EC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08fc8
	ctx.lr = 0x832238F8;
	sub_82A08FC8(ctx, base);
	// addi r29,r29,244
	ctx.r29.s64 = ctx.r29.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x83223904;
	sub_825575C8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-7204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223920
	if (ctx.cr6.eq) goto loc_83223920;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223920:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08fc8
	ctx.lr = 0x8322392C;
	sub_82A08FC8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x824ed978
	ctx.lr = 0x83223940;
	sub_824ED978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223954
	if (ctx.cr6.eq) goto loc_83223954;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83223958
	if (ctx.cr6.eq) goto loc_83223958;
loc_83223954:
	// twi 31,r0,22
loc_83223958:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83223994
	if (!ctx.cr6.eq) goto loc_83223994;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232da88
	ctx.lr = 0x83223970;
	sub_8232DA88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223994
	if (ctx.cr6.eq) goto loc_83223994;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x83223984;
	sub_825575C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x832228e8
	ctx.lr = 0x83223994;
	sub_832228E8(ctx, base);
loc_83223994:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832239A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832239A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832239B0"))) PPC_WEAK_FUNC(sub_832239B0);
PPC_FUNC_IMPL(__imp__sub_832239B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832239B8;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-28224
	ctx.r9.s64 = ctx.r11.s64 + -28224;
	// addi r8,r10,22840
	ctx.r8.s64 = ctx.r10.s64 + 22840;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r11,-27468
	ctx.r28.s64 = ctx.r11.s64 + -27468;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f31,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8223bd98
	ctx.lr = 0x83223A1C;
	sub_8223BD98(ctx, base);
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// li r5,96
	ctx.r5.s64 = 96;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// stvx128 v10,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r4,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r4.u8);
	// stfs f31,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stb r30,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r30.u8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// beq cr6,0x83223a88
	if (ctx.cr6.eq) goto loc_83223A88;
loc_83223A6C:
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
	// bne 0x83223a6c
	if (!ctx.cr0.eq) goto loc_83223A6C;
loc_83223A88:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// addi r26,r11,5732
	ctx.r26.s64 = ctx.r11.s64 + 5732;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r27,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r27.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x821940c8
	ctx.lr = 0x83223AB0;
	sub_821940C8(ctx, base);
	// stw r26,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r26.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x821940c8
	ctx.lr = 0x83223AC0;
	sub_821940C8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 160);
	// stb r9,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r9.u8);
	// lwz r8,164(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,264(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83223B0C"))) PPC_WEAK_FUNC(sub_83223B0C);
PPC_FUNC_IMPL(__imp__sub_83223B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223B10"))) PPC_WEAK_FUNC(sub_83223B10);
PPC_FUNC_IMPL(__imp__sub_83223B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83223B18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,272
	ctx.r3.s64 = 272;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8221f388
	ctx.lr = 0x83223B30;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83223b48
	if (ctx.cr6.eq) goto loc_83223B48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832239b0
	ctx.lr = 0x83223B44;
	sub_832239B0(ctx, base);
	// b 0x83223b4c
	goto loc_83223B4C;
loc_83223B48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83223B4C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83223b64
	if (ctx.cr6.eq) goto loc_83223B64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254c780
	ctx.lr = 0x83223B60;
	sub_8254C780(ctx, base);
	// b 0x83223b6c
	goto loc_83223B6C;
loc_83223B64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83223B6C:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x829fd7b8
	ctx.lr = 0x83223B7C;
	sub_829FD7B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83223B88"))) PPC_WEAK_FUNC(sub_83223B88);
PPC_FUNC_IMPL(__imp__sub_83223B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83223B90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225600
	ctx.lr = 0x83223BA8;
	sub_83225600(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83223be0
	if (ctx.cr6.eq) goto loc_83223BE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83223BC4;
	sub_829FF648(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83223be0
	if (ctx.cr6.eq) goto loc_83223BE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83223BE0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83223BE8;
	sub_829FF648(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x83223c24
	if (ctx.cr6.lt) goto loc_83223C24;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// b 0x83223c34
	goto loc_83223C34;
loc_83223C24:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83223C34;
	sub_82A1B480(ctx, base);
loc_83223C34:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83223C50"))) PPC_WEAK_FUNC(sub_83223C50);
PPC_FUNC_IMPL(__imp__sub_83223C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83223C58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-7248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83223c88
	if (!ctx.cr6.eq) goto loc_83223C88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x83223c8c
	goto loc_83223C8C;
loc_83223C88:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223C8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83223ce8
	if (ctx.cr6.eq) goto loc_83223CE8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832256a0
	ctx.lr = 0x83223CC0;
	sub_832256A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823be9c0
	ctx.lr = 0x83223CCC;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83223CD4;
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
	ctx.lr = 0x83223CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83223CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83223CF0"))) PPC_WEAK_FUNC(sub_83223CF0);
PPC_FUNC_IMPL(__imp__sub_83223CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83223CF8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83223b88
	ctx.lr = 0x83223D30;
	sub_83223B88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83223D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83223D78;
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83223D80"))) PPC_WEAK_FUNC(sub_83223D80);
PPC_FUNC_IMPL(__imp__sub_83223D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83223D88;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x83223c50
	ctx.lr = 0x83223DC4;
	sub_83223C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83223E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83223E0C;
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83223E14"))) PPC_WEAK_FUNC(sub_83223E14);
PPC_FUNC_IMPL(__imp__sub_83223E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223E18"))) PPC_WEAK_FUNC(sub_83223E18);
PPC_FUNC_IMPL(__imp__sub_83223E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83223E20;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x83222b80
	ctx.lr = 0x83223E3C;
	sub_83222B80(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83223cf0
	ctx.lr = 0x83223E58;
	sub_83223CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83223fa8
	if (ctx.cr6.eq) goto loc_83223FA8;
loc_83223E60:
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83223e9c
	if (ctx.cr6.eq) goto loc_83223E9C;
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83223E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83223ea0
	if (!ctx.cr6.eq) goto loc_83223EA0;
loc_83223E9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83223EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223f70
	if (ctx.cr6.eq) goto loc_83223F70;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x83223f00
	if (ctx.cr6.lt) goto loc_83223F00;
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
	// b 0x83223f10
	goto loc_83223F10;
loc_83223F00:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83223F10;
	sub_82A1B480(ctx, base);
loc_83223F10:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83223f48
	if (ctx.cr6.eq) goto loc_83223F48;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83223F48:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83223f70
	if (ctx.cr6.eq) goto loc_83223F70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83223F60;
	sub_82B3D880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832263d0
	ctx.lr = 0x83223F70;
	sub_832263D0(ctx, base);
loc_83223F70:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83223f98
	if (ctx.cr6.eq) goto loc_83223F98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83223f94
	if (ctx.cr6.eq) goto loc_83223F94;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83223f9c
	goto loc_83223F9C;
loc_83223F94:
	// bl 0x821940c8
	ctx.lr = 0x83223F98;
	sub_821940C8(ctx, base);
loc_83223F98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83223F9C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83223e60
	if (!ctx.cr6.eq) goto loc_83223E60;
loc_83223FA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83223FB0"))) PPC_WEAK_FUNC(sub_83223FB0);
PPC_FUNC_IMPL(__imp__sub_83223FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83223FB8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r11,63
	ctx.r25.s64 = ctx.r11.s64 + 63;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-7252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7252);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// beq cr6,0x83223ff4
	if (ctx.cr6.eq) goto loc_83223FF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83223FF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83224008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322412c
	if (ctx.cr6.eq) goto loc_8322412C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222b80
	ctx.lr = 0x8322401C;
	sub_83222B80(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83223d80
	ctx.lr = 0x83224038;
	sub_83223D80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224118
	if (ctx.cr6.eq) goto loc_83224118;
	// lis r29,-31926
	ctx.r29.s64 = -2092302336;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83224048:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322405C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83224084
	if (ctx.cr6.eq) goto loc_83224084;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83224078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x83224088
	if (!ctx.cr6.eq) goto loc_83224088;
loc_83224084:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83224088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832240e0
	if (ctx.cr6.eq) goto loc_832240E0;
	// lwz r11,-7200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7200);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832240ac
	if (ctx.cr6.eq) goto loc_832240AC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832240AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825cbb08
	ctx.lr = 0x832240B8;
	sub_825CBB08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832240e0
	if (ctx.cr6.eq) goto loc_832240E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3d880
	ctx.lr = 0x832240D0;
	sub_82B3D880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832263d0
	ctx.lr = 0x832240E0;
	sub_832263D0(ctx, base);
loc_832240E0:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224108
	if (ctx.cr6.eq) goto loc_83224108;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83224104
	if (ctx.cr6.eq) goto loc_83224104;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322410c
	goto loc_8322410C;
loc_83224104:
	// bl 0x821940c8
	ctx.lr = 0x83224108;
	sub_821940C8(ctx, base);
loc_83224108:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322410C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83224048
	if (!ctx.cr6.eq) goto loc_83224048;
loc_83224118:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322412C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322412C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83224134"))) PPC_WEAK_FUNC(sub_83224134);
PPC_FUNC_IMPL(__imp__sub_83224134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224138"))) PPC_WEAK_FUNC(sub_83224138);
PPC_FUNC_IMPL(__imp__sub_83224138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83224140;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// bgt cr6,0x8322480c
	if (ctx.cr6.gt) goto loc_8322480C;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,16760
	ctx.r12.s64 = ctx.r12.s64 + 16760;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_832241A0;
	case 1:
		goto loc_8322480C;
	case 2:
		goto loc_8322480C;
	case 3:
		goto loc_83224520;
	case 4:
		goto loc_832245B8;
	case 5:
		goto loc_83224650;
	case 6:
		goto loc_8322480C;
	case 7:
		goto loc_832246E8;
	case 8:
		goto loc_83224780;
	case 9:
		goto loc_83224488;
	default:
		__builtin_unreachable();
	}
	// lwz r25,16800(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16800);
	// lwz r25,18444(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18444);
	// lwz r25,18444(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18444);
	// lwz r25,17696(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17696);
	// lwz r25,17848(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17848);
	// lwz r25,18000(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18000);
	// lwz r25,18444(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18444);
	// lwz r25,18152(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18152);
	// lwz r25,18304(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18304);
	// lwz r25,17544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17544);
loc_832241A0:
	// lwz r28,4(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// beq cr6,0x832241e4
	if (ctx.cr6.eq) goto loc_832241E4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x832241C8;
	sub_829FF648(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832241E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832241F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x83224474
	if (ctx.cr6.gt) goto loc_83224474;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,16920
	ctx.r12.s64 = ctx.r12.s64 + 16920;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_83224228;
	case 1:
		goto loc_832242C0;
	case 2:
		goto loc_83224358;
	case 3:
		goto loc_832243F0;
	default:
		__builtin_unreachable();
	}
	// lwz r25,16936(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16936);
	// lwz r25,17088(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17088);
	// lwz r25,17240(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17240);
	// lwz r25,17392(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17392);
loc_83224228:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x83224254
	if (ctx.cr6.eq) goto loc_83224254;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224240;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83224254:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a08b68
	ctx.lr = 0x83224264;
	sub_82A08B68(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322429c
	if (ctx.cr6.eq) goto loc_8322429C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224280;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322429c
	if (ctx.cr6.eq) goto loc_8322429C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322429C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x832242A4;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832242AC;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x832242B4;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832242C0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x832242ec
	if (ctx.cr6.eq) goto loc_832242EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832242D8;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832242EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a08c80
	ctx.lr = 0x832242FC;
	sub_82A08C80(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83224334
	if (ctx.cr6.eq) goto loc_83224334;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224318;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224334
	if (ctx.cr6.eq) goto loc_83224334;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83224334:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8322433C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224344;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322434C;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83224358:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x83224384
	if (ctx.cr6.eq) goto loc_83224384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224370;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83224384:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a08d98
	ctx.lr = 0x83224394;
	sub_82A08D98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832243cc
	if (ctx.cr6.eq) goto loc_832243CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x832243B0;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832243cc
	if (ctx.cr6.eq) goto loc_832243CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832243CC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x832243D4;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832243DC;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x832243E4;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832243F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x8322441c
	if (ctx.cr6.eq) goto loc_8322441C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224408;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8322441C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a08eb0
	ctx.lr = 0x8322442C;
	sub_82A08EB0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83224464
	if (ctx.cr6.eq) goto loc_83224464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224448;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224464
	if (ctx.cr6.eq) goto loc_83224464;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83224464:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8322446C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224474;
	sub_829FF648(ctx, base);
loc_83224474:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322447C;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83224488:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x832244bc
	if (ctx.cr6.eq) goto loc_832244BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832244A8;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832244BC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83228530
	ctx.lr = 0x832244CC;
	sub_83228530(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83224504
	if (ctx.cr6.eq) goto loc_83224504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x832244E8;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224504
	if (ctx.cr6.eq) goto loc_83224504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83224504:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8322450C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224514;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83224520:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x83224554
	if (ctx.cr6.eq) goto loc_83224554;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224540;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83224554:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x83239d98
	ctx.lr = 0x83224564;
	sub_83239D98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322459c
	if (ctx.cr6.eq) goto loc_8322459C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224580;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322459c
	if (ctx.cr6.eq) goto loc_8322459C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322459C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x832245A4;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832245AC;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832245B8:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x832245ec
	if (ctx.cr6.eq) goto loc_832245EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832245D8;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832245EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83235d80
	ctx.lr = 0x832245FC;
	sub_83235D80(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83224634
	if (ctx.cr6.eq) goto loc_83224634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224618;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224634
	if (ctx.cr6.eq) goto loc_83224634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83224634:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ff648
	ctx.lr = 0x8322463C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224644;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83224650:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x83224684
	if (ctx.cr6.eq) goto loc_83224684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224670;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83224684:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8322ab48
	ctx.lr = 0x83224694;
	sub_8322AB48(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832246cc
	if (ctx.cr6.eq) goto loc_832246CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x832246B0;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832246cc
	if (ctx.cr6.eq) goto loc_832246CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832246CC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x829ff648
	ctx.lr = 0x832246D4;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832246DC;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832246E8:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x8322471c
	if (ctx.cr6.eq) goto loc_8322471C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224708;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8322471C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83239630
	ctx.lr = 0x8322472C;
	sub_83239630(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83224764
	if (ctx.cr6.eq) goto loc_83224764;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x83224748;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83224764
	if (ctx.cr6.eq) goto loc_83224764;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83224764:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829ff648
	ctx.lr = 0x8322476C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83224774;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83224780:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x832247b4
	if (ctx.cr6.eq) goto loc_832247B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832247A0;
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832247B4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x83238e68
	ctx.lr = 0x832247C4;
	sub_83238E68(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832247fc
	if (ctx.cr6.eq) goto loc_832247FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x832247E0;
	sub_829FF648(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832247fc
	if (ctx.cr6.eq) goto loc_832247FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832247FC:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x829ff648
	ctx.lr = 0x83224804;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322480C;
	sub_829FF648(ctx, base);
loc_8322480C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83224818"))) PPC_WEAK_FUNC(sub_83224818);
PPC_FUNC_IMPL(__imp__sub_83224818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x83224820;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224bf4
	if (ctx.cr6.eq) goto loc_83224BF4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a1bea8
	ctx.lr = 0x8322484C;
	sub_82A1BEA8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r9,-28160
	ctx.r7.s64 = ctx.r9.s64 + -28160;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r4,176(r25)
	PPC_STORE_U8(ctx.r25.u32 + 176, ctx.r4.u8);
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r3,-28224
	ctx.r11.s64 = ctx.r3.s64 + -28224;
	// lvx128 v11,r0,r8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v10,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v10,r25,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// vand v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stvx128 v8,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x83224904
	if (ctx.cr6.lt) goto loc_83224904;
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
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x83224914
	goto loc_83224914;
loc_83224904:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224914;
	sub_82A1B480(ctx, base);
loc_83224914:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224948
	if (ctx.cr6.eq) goto loc_83224948;
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
loc_83224948:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832249a4
	if (ctx.cr6.lt) goto loc_832249A4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
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
	// b 0x832249b4
	goto loc_832249B4;
loc_832249A4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x832249B4;
	sub_82A1B480(ctx, base);
loc_832249B4:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832249e8
	if (ctx.cr6.eq) goto loc_832249E8;
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
loc_832249E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83224a44
	if (ctx.cr6.lt) goto loc_83224A44;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
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
	// b 0x83224a54
	goto loc_83224A54;
loc_83224A44:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224A54;
	sub_82A1B480(ctx, base);
loc_83224A54:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224a88
	if (ctx.cr6.eq) goto loc_83224A88;
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
loc_83224A88:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83224ae4
	if (ctx.cr6.lt) goto loc_83224AE4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
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
	// b 0x83224af4
	goto loc_83224AF4;
loc_83224AE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224AF4;
	sub_82A1B480(ctx, base);
loc_83224AF4:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224b28
	if (ctx.cr6.eq) goto loc_83224B28;
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
loc_83224B28:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x83222500
	ctx.lr = 0x83224B40;
	sub_83222500(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83224b7c
	if (ctx.cr6.lt) goto loc_83224B7C;
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
	// b 0x83224b8c
	goto loc_83224B8C;
loc_83224B7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224B8C;
	sub_82A1B480(ctx, base);
loc_83224B8C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,188(r25)
	PPC_STORE_U8(ctx.r25.u32 + 188, ctx.r7.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83224bdc
	if (ctx.cr6.lt) goto loc_83224BDC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
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
	// b 0x83224bec
	goto loc_83224BEC;
loc_83224BDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224BEC;
	sub_82A1B480(ctx, base);
loc_83224BEC:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stw r10,256(r25)
	PPC_STORE_U32(ctx.r25.u32 + 256, ctx.r10.u32);
loc_83224BF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83224c48
	if (ctx.cr6.lt) goto loc_83224C48;
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
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x83224c58
	goto loc_83224C58;
loc_83224C48:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224C58;
	sub_82A1B480(ctx, base);
loc_83224C58:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x83224c8c
	if (ctx.cr6.eq) goto loc_83224C8C;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_83224C8C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82b3d880
	ctx.lr = 0x83224CA0;
	sub_82B3D880(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83224cf8
	if (ctx.cr6.lt) goto loc_83224CF8;
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
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x83224d08
	goto loc_83224D08;
loc_83224CF8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224D08;
	sub_82A1B480(ctx, base);
loc_83224D08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x83224d40
	if (ctx.cr6.eq) goto loc_83224D40;
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
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83224D40:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83224d6c
	if (!ctx.cr6.eq) goto loc_83224D6C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,5732
	ctx.r29.s64 = ctx.r11.s64 + 5732;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x821940c8
	ctx.lr = 0x83224D68;
	sub_821940C8(ctx, base);
	// b 0x83224d9c
	goto loc_83224D9C;
loc_83224D6C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83224D78;
	sub_82B3D880(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,5732
	ctx.r29.s64 = ctx.r11.s64 + 5732;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x83224D9C;
	sub_822149C8(ctx, base);
loc_83224D9C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r25,236
	ctx.r3.s64 = ctx.r25.s64 + 236;
	// bl 0x82978470
	ctx.lr = 0x83224DA8;
	sub_82978470(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,5732
	ctx.r28.s64 = ctx.r11.s64 + 5732;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x821940c8
	ctx.lr = 0x83224DBC;
	sub_821940C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83224e10
	if (ctx.cr6.lt) goto loc_83224E10;
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
	// b 0x83224e20
	goto loc_83224E20;
loc_83224E10:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83224E20;
	sub_82A1B480(ctx, base);
loc_83224E20:
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// beq cr6,0x83224e58
	if (ctx.cr6.eq) goto loc_83224E58;
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r10,107(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83224E58:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r27,4(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8246c800
	ctx.lr = 0x83224E70;
	sub_8246C800(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224e84
	if (ctx.cr6.eq) goto loc_83224E84;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83224e88
	if (ctx.cr6.eq) goto loc_83224E88;
loc_83224E84:
	// twi 31,r0,22
loc_83224E88:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83224f8c
	if (!ctx.cr6.eq) goto loc_83224F8C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x83224eb0
	if (!ctx.cr6.eq) goto loc_83224EB0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x821940c8
	ctx.lr = 0x83224EAC;
	sub_821940C8(ctx, base);
	// b 0x83224fb0
	goto loc_83224FB0;
loc_83224EB0:
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223b88
	ctx.lr = 0x83224ECC;
	sub_83223B88(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r26,232(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83224EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83224138
	ctx.lr = 0x83224EFC;
	sub_83224138(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x83224F14;
	sub_822149C8(ctx, base);
	// addi r30,r25,244
	ctx.r30.s64 = ctx.r25.s64 + 244;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978470
	ctx.lr = 0x83224F24;
	sub_82978470(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821940c8
	ctx.lr = 0x83224F30;
	sub_821940C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x83224F38;
	sub_829FF648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232da88
	ctx.lr = 0x83224F44;
	sub_8232DA88(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83224f7c
	if (ctx.cr6.eq) goto loc_83224F7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x83224F58;
	sub_825575C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83224F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83224F7C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ff648
	ctx.lr = 0x83224F84;
	sub_829FF648(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_83224F8C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83224F98;
	sub_82B3D880(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x83224FB0;
	sub_822149C8(ctx, base);
loc_83224FB0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r25,244
	ctx.r3.s64 = ctx.r25.s64 + 244;
	// bl 0x82978470
	ctx.lr = 0x83224FBC;
	sub_82978470(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821940c8
	ctx.lr = 0x83224FC8;
	sub_821940C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_83224FD0"))) PPC_WEAK_FUNC(sub_83224FD0);
PPC_FUNC_IMPL(__imp__sub_83224FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x83224FD8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r26,r11,63
	ctx.r26.s64 = ctx.r11.s64 + 63;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-7240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7240);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x83225014
	if (ctx.cr6.eq) goto loc_83225014;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83225014:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83225474
	if (ctx.cr6.eq) goto loc_83225474;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832251e8
	if (ctx.cr6.eq) goto loc_832251E8;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-7236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225058
	if (ctx.cr6.eq) goto loc_83225058;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83225058:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322506C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832251e8
	if (ctx.cr6.eq) goto loc_832251E8;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r10,-7232
	ctx.r3.s64 = ctx.r10.s64 + -7232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322ec98
	ctx.lr = 0x83225098;
	sub_8322EC98(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r8,-28160
	ctx.r6.s64 = ctx.r8.s64 + -28160;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r3,176(r27)
	PPC_STORE_U8(ctx.r27.u32 + 176, ctx.r3.u8);
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,-28224
	ctx.r9.s64 = ctx.r10.s64 + -28224;
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v10,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v10,r27,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// lwz r11,-7228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vand v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stvx128 v8,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x83225118
	if (ctx.cr6.eq) goto loc_83225118;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83225118:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322512C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322518c
	if (ctx.cr6.eq) goto loc_8322518C;
	// addi r4,r31,6956
	ctx.r4.s64 = ctx.r31.s64 + 6956;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb90
	ctx.lr = 0x83225148;
	sub_825CBB90(ctx, base);
	// addi r4,r31,6960
	ctx.r4.s64 = ctx.r31.s64 + 6960;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb90
	ctx.lr = 0x83225158;
	sub_825CBB90(ctx, base);
	// addi r4,r31,6964
	ctx.r4.s64 = ctx.r31.s64 + 6964;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb90
	ctx.lr = 0x83225168;
	sub_825CBB90(ctx, base);
	// addi r4,r31,6968
	ctx.r4.s64 = ctx.r31.s64 + 6968;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb90
	ctx.lr = 0x83225178;
	sub_825CBB90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322518C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322518C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x83222500
	ctx.lr = 0x8322519C;
	sub_83222500(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r27,188
	ctx.r5.s64 = ctx.r27.s64 + 188;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8322ed88
	ctx.lr = 0x832251B0;
	sub_8322ED88(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-7216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832251c8
	if (ctx.cr6.eq) goto loc_832251C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832251C8:
	// addi r5,r27,256
	ctx.r5.s64 = ctx.r27.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x832251D4;
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
	ctx.lr = 0x832251E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832251E8:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-7212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225200
	if (ctx.cr6.eq) goto loc_83225200;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83225200:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322520C;
	sub_825CBB08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83225218;
	sub_82B3D880(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-7208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225234
	if (ctx.cr6.eq) goto loc_83225234;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83225234:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x83225240;
	sub_825CBB08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8322526c
	if (!ctx.cr6.eq) goto loc_8322526C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,5732
	ctx.r30.s64 = ctx.r11.s64 + 5732;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x821940c8
	ctx.lr = 0x83225268;
	sub_821940C8(ctx, base);
	// b 0x8322529c
	goto loc_8322529C;
loc_8322526C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83225278;
	sub_82B3D880(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,5732
	ctx.r30.s64 = ctx.r11.s64 + 5732;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x8322529C;
	sub_822149C8(ctx, base);
loc_8322529C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r27,236
	ctx.r3.s64 = ctx.r27.s64 + 236;
	// bl 0x82978470
	ctx.lr = 0x832252A8;
	sub_82978470(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r11,5732
	ctx.r29.s64 = ctx.r11.s64 + 5732;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x821940c8
	ctx.lr = 0x832252BC;
	sub_821940C8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-7204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832252d4
	if (ctx.cr6.eq) goto loc_832252D4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832252D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x832252E0;
	sub_825CBB08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x8246c800
	ctx.lr = 0x832252F4;
	sub_8246C800(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225308
	if (ctx.cr6.eq) goto loc_83225308;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8322530c
	if (ctx.cr6.eq) goto loc_8322530C;
loc_83225308:
	// twi 31,r0,22
loc_8322530C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83225424
	if (!ctx.cr6.eq) goto loc_83225424;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8322534c
	if (!ctx.cr6.eq) goto loc_8322534C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x821940c8
	ctx.lr = 0x83225334;
	sub_821940C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r27,244
	ctx.r3.s64 = ctx.r27.s64 + 244;
	// bl 0x82978470
	ctx.lr = 0x83225340;
	sub_82978470(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x8322545c
	goto loc_8322545C;
loc_8322534C:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83223c50
	ctx.lr = 0x83225368;
	sub_83223C50(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r21,232(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x83224138
	ctx.lr = 0x83225398;
	sub_83224138(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x832253B0;
	sub_822149C8(ctx, base);
	// addi r31,r27,244
	ctx.r31.s64 = ctx.r27.s64 + 244;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978470
	ctx.lr = 0x832253C0;
	sub_82978470(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821940c8
	ctx.lr = 0x832253CC;
	sub_821940C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x832253D4;
	sub_829FF648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x832253E0;
	sub_8232DA88(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83225418
	if (ctx.cr6.eq) goto loc_83225418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x832253F4;
	sub_825575C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83225418:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x83225420;
	sub_829FF648(ctx, base);
	// b 0x83225460
	goto loc_83225460;
loc_83225424:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b3d880
	ctx.lr = 0x83225430;
	sub_82B3D880(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822149c8
	ctx.lr = 0x83225448;
	sub_822149C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r27,244
	ctx.r3.s64 = ctx.r27.s64 + 244;
	// bl 0x82978470
	ctx.lr = 0x83225454;
	sub_82978470(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8322545C:
	// bl 0x821940c8
	ctx.lr = 0x83225460;
	sub_821940C8(ctx, base);
loc_83225460:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83225474:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_8322547C"))) PPC_WEAK_FUNC(sub_8322547C);
PPC_FUNC_IMPL(__imp__sub_8322547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225480"))) PPC_WEAK_FUNC(sub_83225480);
PPC_FUNC_IMPL(__imp__sub_83225480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225484"))) PPC_WEAK_FUNC(sub_83225484);
PPC_FUNC_IMPL(__imp__sub_83225484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225488"))) PPC_WEAK_FUNC(sub_83225488);
PPC_FUNC_IMPL(__imp__sub_83225488) {
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

__attribute__((alias("__imp__sub_83225498"))) PPC_WEAK_FUNC(sub_83225498);
PPC_FUNC_IMPL(__imp__sub_83225498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,-7304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832254A4"))) PPC_WEAK_FUNC(sub_832254A4);
PPC_FUNC_IMPL(__imp__sub_832254A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832254A8"))) PPC_WEAK_FUNC(sub_832254A8);
PPC_FUNC_IMPL(__imp__sub_832254A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r11,r11,-7288
	ctx.r11.s64 = ctx.r11.s64 + -7288;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x8247e448
	sub_8247E448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832254B8"))) PPC_WEAK_FUNC(sub_832254B8);
PPC_FUNC_IMPL(__imp__sub_832254B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832254C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-7288
	ctx.r4.s64 = ctx.r10.s64 + -7288;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8323a058
	ctx.lr = 0x832254E8;
	sub_8323A058(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83225520
	if (ctx.cr6.eq) goto loc_83225520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83225504;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225520
	if (ctx.cr6.eq) goto loc_83225520;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83225520:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225528;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83225534"))) PPC_WEAK_FUNC(sub_83225534);
PPC_FUNC_IMPL(__imp__sub_83225534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225538"))) PPC_WEAK_FUNC(sub_83225538);
PPC_FUNC_IMPL(__imp__sub_83225538) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83225584
	if (ctx.cr6.eq) goto loc_83225584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225570;
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
loc_83225584:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// bl 0x8323a1e8
	ctx.lr = 0x83225594;
	sub_8323A1E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322559C;
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

__attribute__((alias("__imp__sub_832255B4"))) PPC_WEAK_FUNC(sub_832255B4);
PPC_FUNC_IMPL(__imp__sub_832255B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832255B8"))) PPC_WEAK_FUNC(sub_832255B8);
PPC_FUNC_IMPL(__imp__sub_832255B8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-7304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7304);
	// bl 0x83220478
	ctx.lr = 0x832255D4;
	sub_83220478(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,-7308
	ctx.r4.s64 = ctx.r10.s64 + -7308;
	// bl 0x832355a0
	ctx.lr = 0x832255E4;
	sub_832355A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832255EC;
	sub_829FF648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832255FC"))) PPC_WEAK_FUNC(sub_832255FC);
PPC_FUNC_IMPL(__imp__sub_832255FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225600"))) PPC_WEAK_FUNC(sub_83225600);
PPC_FUNC_IMPL(__imp__sub_83225600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83225608;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8321f328
	ctx.lr = 0x83225624;
	sub_8321F328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832254b8
	ctx.lr = 0x83225634;
	sub_832254B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83225674
	if (!ctx.cr6.eq) goto loc_83225674;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83220888
	ctx.lr = 0x83225654;
	sub_83220888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be9c0
	ctx.lr = 0x83225660;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225668;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225690
	if (ctx.cr6.eq) goto loc_83225690;
loc_83225674:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83225690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322569C"))) PPC_WEAK_FUNC(sub_8322569C);
PPC_FUNC_IMPL(__imp__sub_8322569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832256A0"))) PPC_WEAK_FUNC(sub_832256A0);
PPC_FUNC_IMPL(__imp__sub_832256A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832256A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8321e7f0
	ctx.lr = 0x832256C8;
	sub_8321E7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x832254b8
	ctx.lr = 0x832256D4;
	sub_832254B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8322573c
	if (!ctx.cr6.eq) goto loc_8322573C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83220888
	ctx.lr = 0x832256F4;
	sub_83220888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be9c0
	ctx.lr = 0x83225700;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225708;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225750
	if (ctx.cr6.eq) goto loc_83225750;
loc_83225714:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8322573C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83225714
	if (!ctx.cr6.eq) goto loc_83225714;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321f2a0
	ctx.lr = 0x83225750;
	sub_8321F2A0(ctx, base);
loc_83225750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322575C"))) PPC_WEAK_FUNC(sub_8322575C);
PPC_FUNC_IMPL(__imp__sub_8322575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225760"))) PPC_WEAK_FUNC(sub_83225760);
PPC_FUNC_IMPL(__imp__sub_83225760) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7288
	ctx.r11.s64 = ctx.r11.s64 + -7288;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x83225788;
	sub_8247E448(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832257dc
	if (ctx.cr6.lt) goto loc_832257DC;
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
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x832257ec
	goto loc_832257EC;
loc_832257DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x832257EC;
	sub_82A1B480(ctx, base);
loc_832257EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83225840
	if (ctx.cr6.lt) goto loc_83225840;
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
	// b 0x83225850
	goto loc_83225850;
loc_83225840:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83225850;
	sub_82A1B480(ctx, base);
loc_83225850:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x83225888
	if (ctx.cr6.eq) goto loc_83225888;
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83225888:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x832258e0
	if (!ctx.cr6.gt) goto loc_832258E0;
loc_83225890:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321f328
	ctx.lr = 0x8322589C;
	sub_8321F328(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83220888
	ctx.lr = 0x832258B0;
	sub_83220888(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832258D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832258D8;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83225890
	if (!ctx.cr0.eq) goto loc_83225890;
loc_832258E0:
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

__attribute__((alias("__imp__sub_832258F8"))) PPC_WEAK_FUNC(sub_832258F8);
PPC_FUNC_IMPL(__imp__sub_832258F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832258FC"))) PPC_WEAK_FUNC(sub_832258FC);
PPC_FUNC_IMPL(__imp__sub_832258FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225900"))) PPC_WEAK_FUNC(sub_83225900);
PPC_FUNC_IMPL(__imp__sub_83225900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225904"))) PPC_WEAK_FUNC(sub_83225904);
PPC_FUNC_IMPL(__imp__sub_83225904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225908"))) PPC_WEAK_FUNC(sub_83225908);
PPC_FUNC_IMPL(__imp__sub_83225908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322590C"))) PPC_WEAK_FUNC(sub_8322590C);
PPC_FUNC_IMPL(__imp__sub_8322590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225910"))) PPC_WEAK_FUNC(sub_83225910);
PPC_FUNC_IMPL(__imp__sub_83225910) {
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

__attribute__((alias("__imp__sub_83225920"))) PPC_WEAK_FUNC(sub_83225920);
PPC_FUNC_IMPL(__imp__sub_83225920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83225928;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-7336
	ctx.r4.s64 = ctx.r10.s64 + -7336;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8323a058
	ctx.lr = 0x83225950;
	sub_8323A058(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83225988
	if (ctx.cr6.eq) goto loc_83225988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322596C;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225988
	if (ctx.cr6.eq) goto loc_83225988;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83225988:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225990;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322599C"))) PPC_WEAK_FUNC(sub_8322599C);
PPC_FUNC_IMPL(__imp__sub_8322599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832259A0"))) PPC_WEAK_FUNC(sub_832259A0);
PPC_FUNC_IMPL(__imp__sub_832259A0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x832259ec
	if (ctx.cr6.eq) goto loc_832259EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832259D8;
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
loc_832259EC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// bl 0x8323a1e8
	ctx.lr = 0x832259FC;
	sub_8323A1E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225A04;
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

__attribute__((alias("__imp__sub_83225A1C"))) PPC_WEAK_FUNC(sub_83225A1C);
PPC_FUNC_IMPL(__imp__sub_83225A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225A20"))) PPC_WEAK_FUNC(sub_83225A20);
PPC_FUNC_IMPL(__imp__sub_83225A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83225A28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83221138
	ctx.lr = 0x83225A44;
	sub_83221138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83225920
	ctx.lr = 0x83225A54;
	sub_83225920(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83225ab8
	if (!ctx.cr6.eq) goto loc_83225AB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83221a60
	ctx.lr = 0x83225A6C;
	sub_83221A60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83225aa4
	if (ctx.cr6.eq) goto loc_83225AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83225A88;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225aa4
	if (ctx.cr6.eq) goto loc_83225AA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83225AA4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83225AAC;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225ad4
	if (ctx.cr6.eq) goto loc_83225AD4;
loc_83225AB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83225AD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83225AE0"))) PPC_WEAK_FUNC(sub_83225AE0);
PPC_FUNC_IMPL(__imp__sub_83225AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83225AE8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83220d10
	ctx.lr = 0x83225B08;
	sub_83220D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83225920
	ctx.lr = 0x83225B14;
	sub_83225920(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83225ba0
	if (!ctx.cr6.eq) goto loc_83225BA0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83221a60
	ctx.lr = 0x83225B2C;
	sub_83221A60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83225b64
	if (ctx.cr6.eq) goto loc_83225B64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83225B48;
	sub_829FF648(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225b64
	if (ctx.cr6.eq) goto loc_83225B64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83225B64:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83225B6C;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225bb4
	if (ctx.cr6.eq) goto loc_83225BB4;
loc_83225B78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_83225BA0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83225b78
	if (!ctx.cr6.eq) goto loc_83225B78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832210b0
	ctx.lr = 0x83225BB4;
	sub_832210B0(ctx, base);
loc_83225BB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83225BC0"))) PPC_WEAK_FUNC(sub_83225BC0);
PPC_FUNC_IMPL(__imp__sub_83225BC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7336
	ctx.r11.s64 = ctx.r11.s64 + -7336;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x83225BE8;
	sub_8247E448(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83225c3c
	if (ctx.cr6.lt) goto loc_83225C3C;
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
	// b 0x83225c4c
	goto loc_83225C4C;
loc_83225C3C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83225C4C;
	sub_82A1B480(ctx, base);
loc_83225C4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83225ca0
	if (ctx.cr6.lt) goto loc_83225CA0;
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
	// b 0x83225cb0
	goto loc_83225CB0;
loc_83225CA0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83225CB0;
	sub_82A1B480(ctx, base);
loc_83225CB0:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x83225ce8
	if (ctx.cr6.eq) goto loc_83225CE8;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83225CE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83225d38
	if (!ctx.cr6.gt) goto loc_83225D38;
loc_83225CF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221138
	ctx.lr = 0x83225CFC;
	sub_83221138(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83221a60
	ctx.lr = 0x83225D08;
	sub_83221A60(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x83225D30;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83225cf0
	if (!ctx.cr0.eq) goto loc_83225CF0;
loc_83225D38:
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

__attribute__((alias("__imp__sub_83225D50"))) PPC_WEAK_FUNC(sub_83225D50);
PPC_FUNC_IMPL(__imp__sub_83225D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225D54"))) PPC_WEAK_FUNC(sub_83225D54);
PPC_FUNC_IMPL(__imp__sub_83225D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225D58"))) PPC_WEAK_FUNC(sub_83225D58);
PPC_FUNC_IMPL(__imp__sub_83225D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225D5C"))) PPC_WEAK_FUNC(sub_83225D5C);
PPC_FUNC_IMPL(__imp__sub_83225D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225D60"))) PPC_WEAK_FUNC(sub_83225D60);
PPC_FUNC_IMPL(__imp__sub_83225D60) {
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

__attribute__((alias("__imp__sub_83225D70"))) PPC_WEAK_FUNC(sub_83225D70);
PPC_FUNC_IMPL(__imp__sub_83225D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r11,r11,-7364
	ctx.r11.s64 = ctx.r11.s64 + -7364;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x8247e448
	sub_8247E448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225D80"))) PPC_WEAK_FUNC(sub_83225D80);
PPC_FUNC_IMPL(__imp__sub_83225D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83225D88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-7364
	ctx.r4.s64 = ctx.r10.s64 + -7364;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8323a058
	ctx.lr = 0x83225DB0;
	sub_8323A058(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83225de8
	if (ctx.cr6.eq) goto loc_83225DE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83225DCC;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225de8
	if (ctx.cr6.eq) goto loc_83225DE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83225DE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225DF0;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83225DFC"))) PPC_WEAK_FUNC(sub_83225DFC);
PPC_FUNC_IMPL(__imp__sub_83225DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225E00"))) PPC_WEAK_FUNC(sub_83225E00);
PPC_FUNC_IMPL(__imp__sub_83225E00) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83225e4c
	if (ctx.cr6.eq) goto loc_83225E4C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225E38;
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
loc_83225E4C:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7364
	ctx.r3.s64 = ctx.r11.s64 + -7364;
	// bl 0x8323a1e8
	ctx.lr = 0x83225E5C;
	sub_8323A1E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83225E64;
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

__attribute__((alias("__imp__sub_83225E7C"))) PPC_WEAK_FUNC(sub_83225E7C);
PPC_FUNC_IMPL(__imp__sub_83225E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225E80"))) PPC_WEAK_FUNC(sub_83225E80);
PPC_FUNC_IMPL(__imp__sub_83225E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83225E88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83217ec8
	ctx.lr = 0x83225EA4;
	sub_83217EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83225d80
	ctx.lr = 0x83225EB4;
	sub_83225D80(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83225eec
	if (!ctx.cr6.eq) goto loc_83225EEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83218b40
	ctx.lr = 0x83225ECC;
	sub_83218B40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be9c0
	ctx.lr = 0x83225ED8;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83225EE0;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225f08
	if (ctx.cr6.eq) goto loc_83225F08;
loc_83225EEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83225F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83225F14"))) PPC_WEAK_FUNC(sub_83225F14);
PPC_FUNC_IMPL(__imp__sub_83225F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225F18"))) PPC_WEAK_FUNC(sub_83225F18);
PPC_FUNC_IMPL(__imp__sub_83225F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83225F20;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83217b90
	ctx.lr = 0x83225F40;
	sub_83217B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83225d80
	ctx.lr = 0x83225F4C;
	sub_83225D80(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83225fac
	if (!ctx.cr6.eq) goto loc_83225FAC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83218b40
	ctx.lr = 0x83225F64;
	sub_83218B40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be9c0
	ctx.lr = 0x83225F70;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83225F78;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83225fc0
	if (ctx.cr6.eq) goto loc_83225FC0;
loc_83225F84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83225FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_83225FAC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83225f84
	if (!ctx.cr6.eq) goto loc_83225F84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83217e40
	ctx.lr = 0x83225FC0;
	sub_83217E40(ctx, base);
loc_83225FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83225FCC"))) PPC_WEAK_FUNC(sub_83225FCC);
PPC_FUNC_IMPL(__imp__sub_83225FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225FD0"))) PPC_WEAK_FUNC(sub_83225FD0);
PPC_FUNC_IMPL(__imp__sub_83225FD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7364
	ctx.r11.s64 = ctx.r11.s64 + -7364;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x83225FF8;
	sub_8247E448(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322604c
	if (ctx.cr6.lt) goto loc_8322604C;
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
	// b 0x8322605c
	goto loc_8322605C;
loc_8322604C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322605C;
	sub_82A1B480(ctx, base);
loc_8322605C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832260b0
	if (ctx.cr6.lt) goto loc_832260B0;
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
	// b 0x832260c0
	goto loc_832260C0;
loc_832260B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x832260C0;
	sub_82A1B480(ctx, base);
loc_832260C0:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x832260f8
	if (ctx.cr6.eq) goto loc_832260F8;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832260F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83226148
	if (!ctx.cr6.gt) goto loc_83226148;
loc_83226100:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217ec8
	ctx.lr = 0x8322610C;
	sub_83217EC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83218b40
	ctx.lr = 0x83226118;
	sub_83218B40(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x83226140;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83226100
	if (!ctx.cr0.eq) goto loc_83226100;
loc_83226148:
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

__attribute__((alias("__imp__sub_83226160"))) PPC_WEAK_FUNC(sub_83226160);
PPC_FUNC_IMPL(__imp__sub_83226160) {
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
	// bl 0x832222d0
	ctx.lr = 0x83226170;
	sub_832222D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83226188
	if (ctx.cr6.eq) goto loc_83226188;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83226188:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322619C"))) PPC_WEAK_FUNC(sub_8322619C);
PPC_FUNC_IMPL(__imp__sub_8322619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832261A0"))) PPC_WEAK_FUNC(sub_832261A0);
PPC_FUNC_IMPL(__imp__sub_832261A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832261A8"))) PPC_WEAK_FUNC(sub_832261A8);
PPC_FUNC_IMPL(__imp__sub_832261A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832261B0"))) PPC_WEAK_FUNC(sub_832261B0);
PPC_FUNC_IMPL(__imp__sub_832261B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832261B4"))) PPC_WEAK_FUNC(sub_832261B4);
PPC_FUNC_IMPL(__imp__sub_832261B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832261B8"))) PPC_WEAK_FUNC(sub_832261B8);
PPC_FUNC_IMPL(__imp__sub_832261B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832261e8
	if (ctx.cr6.eq) goto loc_832261E8;
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832261e0
	if (ctx.cr6.eq) goto loc_832261E0;
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x832261e8
	if (ctx.cr6.gt) goto loc_832261E8;
loc_832261E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832261ec
	goto loc_832261EC;
loc_832261E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832261EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322620c
	if (!ctx.cr6.eq) goto loc_8322620C;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
loc_8322620C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83226214"))) PPC_WEAK_FUNC(sub_83226214);
PPC_FUNC_IMPL(__imp__sub_83226214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226218"))) PPC_WEAK_FUNC(sub_83226218);
PPC_FUNC_IMPL(__imp__sub_83226218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x83226280
	if (!ctx.cr6.eq) goto loc_83226280;
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// lbz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83226294
	if (ctx.cr6.eq) goto loc_83226294;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x83226298
	if (!ctx.cr6.gt) goto loc_83226298;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_83226280:
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83226298
	if (!ctx.cr6.lt) goto loc_83226298;
loc_83226294:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83226298:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832262A0"))) PPC_WEAK_FUNC(sub_832262A0);
PPC_FUNC_IMPL(__imp__sub_832262A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-28160
	ctx.r8.s64 = ctx.r10.s64 + -28160;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// vaddfp v13,v0,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// lfs f0,-27456(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r10.u8);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stb r10,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r10.u8);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832262E4"))) PPC_WEAK_FUNC(sub_832262E4);
PPC_FUNC_IMPL(__imp__sub_832262E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832262E8"))) PPC_WEAK_FUNC(sub_832262E8);
PPC_FUNC_IMPL(__imp__sub_832262E8) {
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
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322631c
	if (ctx.cr6.eq) goto loc_8322631C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83226314;
	sub_829FF648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322631C:
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

__attribute__((alias("__imp__sub_83226330"))) PPC_WEAK_FUNC(sub_83226330);
PPC_FUNC_IMPL(__imp__sub_83226330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-28160
	ctx.r9.s64 = ctx.r11.s64 + -28160;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v12,v1,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322636C"))) PPC_WEAK_FUNC(sub_8322636C);
PPC_FUNC_IMPL(__imp__sub_8322636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226370"))) PPC_WEAK_FUNC(sub_83226370);
PPC_FUNC_IMPL(__imp__sub_83226370) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,5736
	ctx.r9.s64 = ctx.r11.s64 + 5736;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stw r8,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x832263A4;
	sub_821940C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r7,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r7.u32);
	// bl 0x83221c10
	ctx.lr = 0x832263B4;
	sub_83221C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222aa0
	ctx.lr = 0x832263BC;
	sub_83222AA0(ctx, base);
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

__attribute__((alias("__imp__sub_832263D0"))) PPC_WEAK_FUNC(sub_832263D0);
PPC_FUNC_IMPL(__imp__sub_832263D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832263D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832263fc
	if (!ctx.cr6.eq) goto loc_832263FC;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x821940c8
	ctx.lr = 0x832263F4;
	sub_821940C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_832263FC:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83226450
	if (ctx.cr6.eq) goto loc_83226450;
loc_8322640C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322644c
	if (ctx.cr6.eq) goto loc_8322644C;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322643c
	if (ctx.cr6.eq) goto loc_8322643C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83226438
	if (ctx.cr6.eq) goto loc_83226438;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83226440
	goto loc_83226440;
loc_83226438:
	// bl 0x821940c8
	ctx.lr = 0x8322643C;
	sub_821940C8(ctx, base);
loc_8322643C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83226440:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322640c
	if (!ctx.cr6.eq) goto loc_8322640C;
	// b 0x83226450
	goto loc_83226450;
loc_8322644C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83226450:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226468
	if (ctx.cr6.eq) goto loc_83226468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x822149c8
	ctx.lr = 0x83226468;
	sub_822149C8(ctx, base);
loc_83226468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83226470"))) PPC_WEAK_FUNC(sub_83226470);
PPC_FUNC_IMPL(__imp__sub_83226470) {
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
	// addi r3,r30,436
	ctx.r3.s64 = ctx.r30.s64 + 436;
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832264d0
	if (ctx.cr6.eq) goto loc_832264D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832264cc
	if (ctx.cr6.eq) goto loc_832264CC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832264d0
	if (ctx.cr6.eq) goto loc_832264D0;
	// bl 0x825575c8
	ctx.lr = 0x832264B8;
	sub_825575C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83222ca8
	ctx.lr = 0x832264C8;
	sub_83222CA8(ctx, base);
	// b 0x832264dc
	goto loc_832264DC;
loc_832264CC:
	// bl 0x821940c8
	ctx.lr = 0x832264D0;
	sub_821940C8(ctx, base);
loc_832264D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222d78
	ctx.lr = 0x832264DC;
	sub_83222D78(ctx, base);
loc_832264DC:
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

__attribute__((alias("__imp__sub_832264F8"))) PPC_WEAK_FUNC(sub_832264F8);
PPC_FUNC_IMPL(__imp__sub_832264F8) {
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
	// bl 0x8223bd98
	ctx.lr = 0x83226518;
	sub_8223BD98(ctx, base);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r3,r30,436
	ctx.r3.s64 = ctx.r30.s64 + 436;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322654c
	if (ctx.cr6.eq) goto loc_8322654C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83226568
	if (ctx.cr6.eq) goto loc_83226568;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322654c
	if (ctx.cr6.eq) goto loc_8322654C;
	// bl 0x825575c8
	ctx.lr = 0x83226544;
	sub_825575C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83222d78
	ctx.lr = 0x8322654C;
	sub_83222D78(ctx, base);
loc_8322654C:
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
loc_83226568:
	// bl 0x821940c8
	ctx.lr = 0x8322656C;
	sub_821940C8(ctx, base);
	// b 0x8322654c
	goto loc_8322654C;
}

__attribute__((alias("__imp__sub_83226570"))) PPC_WEAK_FUNC(sub_83226570);
PPC_FUNC_IMPL(__imp__sub_83226570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83226578;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832265d0
	if (ctx.cr6.eq) goto loc_832265D0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x832265d0
	if (ctx.cr6.eq) goto loc_832265D0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,-4108
	ctx.r9.s64 = ctx.r11.s64 + -4108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,44(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// bl 0x832264f8
	ctx.lr = 0x832265B8;
	sub_832264F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832265D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832265D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_832265D8"))) PPC_WEAK_FUNC(sub_832265D8);
PPC_FUNC_IMPL(__imp__sub_832265D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832265E0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4108
	ctx.r11.s64 = ctx.r11.s64 + -4108;
	// lwz r10,27648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// ble cr6,0x83226628
	if (!ctx.cr6.gt) goto loc_83226628;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
loc_83226628:
	// lwz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbz r28,220(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 220);
	// beq cr6,0x83226690
	if (ctx.cr6.eq) goto loc_83226690;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x83226678
	if (ctx.cr6.eq) goto loc_83226678;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x832264f8
	ctx.lr = 0x83226660;
	sub_832264F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83226678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226678:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226690:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83226698"))) PPC_WEAK_FUNC(sub_83226698);
PPC_FUNC_IMPL(__imp__sub_83226698) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// beq cr6,0x832266fc
	if (ctx.cr6.eq) goto loc_832266FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832266d4
	if (!ctx.cr6.eq) goto loc_832266D4;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lbz r10,222(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 222);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322671c
	if (ctx.cr6.eq) goto loc_8322671C;
loc_832266D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222b80
	ctx.lr = 0x832266DC;
	sub_83222B80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832263d0
	ctx.lr = 0x832266E8;
	sub_832263D0(ctx, base);
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
loc_832266FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83226714
	if (!ctx.cr6.eq) goto loc_83226714;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lbz r10,222(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 222);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322671c
	if (!ctx.cr6.eq) goto loc_8322671C;
loc_83226714:
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x821940c8
	ctx.lr = 0x8322671C;
	sub_821940C8(ctx, base);
loc_8322671C:
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

__attribute__((alias("__imp__sub_83226730"))) PPC_WEAK_FUNC(sub_83226730);
PPC_FUNC_IMPL(__imp__sub_83226730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83226738;
	sub_82CA2BEC(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832264f8
	ctx.lr = 0x8322675C;
	sub_832264F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,304
	ctx.r10.s64 = 304;
	// li r9,320
	ctx.r9.s64 = 320;
	// addi r29,r11,-27456
	ctx.r29.s64 = ctx.r11.s64 + -27456;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lvx128 v127,r31,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r31,r9
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226818
	if (ctx.cr6.eq) goto loc_83226818;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832267cc
	if (ctx.cr6.eq) goto loc_832267CC;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83226818
	if (ctx.cr6.eq) goto loc_83226818;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832267B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x83226818
	if (!ctx.cr6.eq) goto loc_83226818;
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832267d4
	if (ctx.cr6.eq) goto loc_832267D4;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// b 0x832267dc
	goto loc_832267DC;
loc_832267CC:
	// bl 0x821940c8
	ctx.lr = 0x832267D0;
	sub_821940C8(ctx, base);
	// b 0x83226818
	goto loc_83226818;
loc_832267D4:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
loc_832267DC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bge cr6,0x832267fc
	if (!ctx.cr6.lt) goto loc_832267FC;
	// lfs f1,24524(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24524);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83226800
	goto loc_83226800;
loc_832267FC:
	// bl 0x8322a7c8
	ctx.lr = 0x83226800;
	sub_8322A7C8(ctx, base);
loc_83226800:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp128 v127,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v126,v126,v13
	_mm_store_ps(ctx.v126.f32, _mm_add_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v13.f32)));
loc_83226818:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lvlx v5,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-28160
	ctx.r4.s64 = ctx.r6.s64 + -28160;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v9,v0,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v8,v0,v13
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v7,v12,v11
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmrglw v6,v12,v11
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v4,v9,v9
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v3,v8,v8
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vperm128 v31,v127,v10,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor v1,v7,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vperm128 v2,v126,v5,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor v30,v6,v6
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vmrghw v25,v9,v7
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v24,v9,v7
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vmrghw v23,v8,v6
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vmrghw v29,v4,v1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vmrglw v28,v4,v1
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v17,v2,v25
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v25.f32), 0xFF));
	// vmrghw v27,v3,v30
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmsum4fp128 v16,v2,v24
	_mm_store_ps(ctx.v16.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v24.f32), 0xFF));
	// vmrglw v26,v3,v30
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmsum4fp128 v15,v2,v23
	_mm_store_ps(ctx.v15.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v23.f32), 0xFF));
	// vmrglw v21,v8,v6
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmsum4fp128 v22,v31,v29
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v29.f32), 0xFF));
	// vmsum4fp128 v20,v31,v28
	_mm_store_ps(ctx.v20.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v28.f32), 0xFF));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v19,v31,v27
	_mm_store_ps(ctx.v19.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v27.f32), 0xFF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum4fp128 v18,v31,v26
	_mm_store_ps(ctx.v18.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v26.f32), 0xFF));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmsum4fp128 v14,v2,v21
	_mm_store_ps(ctx.v14.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v21.f32), 0xFF));
	// vmrghw128 v61,v17,v15
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v15.u32), _mm_load_si128((__m128i*)ctx.v17.u32)));
	// vmrghw128 v63,v22,v19
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v19.u32), _mm_load_si128((__m128i*)ctx.v22.u32)));
	// vmrghw128 v62,v20,v18
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v18.u32), _mm_load_si128((__m128i*)ctx.v20.u32)));
	// vmrghw128 v60,v16,v14
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v14.u32), _mm_load_si128((__m128i*)ctx.v16.u32)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v61,v60
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmaxfp128 v57,v59,v58
	_mm_store_ps(ctx.v57.f32, _mm_max_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v58.f32)));
	// vminfp128 v56,v59,v58
	_mm_store_ps(ctx.v56.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v57,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_83226964"))) PPC_WEAK_FUNC(sub_83226964);
PPC_FUNC_IMPL(__imp__sub_83226964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226968"))) PPC_WEAK_FUNC(sub_83226968);
PPC_FUNC_IMPL(__imp__sub_83226968) {
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
	ctx.lr = 0x83226998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832269b8
	if (!ctx.cr6.eq) goto loc_832269B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a08a58
	ctx.lr = 0x832269AC;
	sub_82A08A58(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x8323c610
	ctx.lr = 0x832269B8;
	sub_8323C610(ctx, base);
loc_832269B8:
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

__attribute__((alias("__imp__sub_832269D0"))) PPC_WEAK_FUNC(sub_832269D0);
PPC_FUNC_IMPL(__imp__sub_832269D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x832269D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226a38
	if (ctx.cr6.eq) goto loc_83226A38;
	// li r11,272
	ctx.r11.s64 = 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v1,r30,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a1cc60
	ctx.lr = 0x83226A08;
	sub_82A1CC60(ctx, base);
	// lbz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 432);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83226A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226A38:
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83226A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83226aa0
	if (ctx.cr6.eq) goto loc_83226AA0;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83226aac
	goto loc_83226AAC;
loc_83226AA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x83226AAC;
	sub_82A1CB90(ctx, base);
loc_83226AAC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83223408
	ctx.lr = 0x83226AC0;
	sub_83223408(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83226AC8"))) PPC_WEAK_FUNC(sub_83226AC8);
PPC_FUNC_IMPL(__imp__sub_83226AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83226AD0;
	sub_82CA2BE4(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-7404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7404);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x83226b04
	if (ctx.cr6.eq) goto loc_83226B04;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83226B04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83226c24
	if (ctx.cr6.eq) goto loc_83226C24;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226bac
	if (ctx.cr6.eq) goto loc_83226BAC;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-7400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226b48
	if (ctx.cr6.eq) goto loc_83226B48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83226B48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83226bac
	if (ctx.cr6.eq) goto loc_83226BAC;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r30,272
	ctx.r5.s64 = ctx.r30.s64 + 272;
	// addi r3,r11,-7396
	ctx.r3.s64 = ctx.r11.s64 + -7396;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ec98
	ctx.lr = 0x83226B7C;
	sub_8322EC98(ctx, base);
	// lbz r9,432(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 432);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r3,r10,-7392
	ctx.r3.s64 = ctx.r10.s64 + -7392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x8322ed88
	ctx.lr = 0x83226B98;
	sub_8322ED88(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83226BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226BAC:
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r10,-7388
	ctx.r3.s64 = ctx.r10.s64 + -7388;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x8322ed88
	ctx.lr = 0x83226BD4;
	sub_8322ED88(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83226bfc
	if (ctx.cr6.eq) goto loc_83226BFC;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
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
	ctx.lr = 0x83226BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226BFC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832235d8
	ctx.lr = 0x83226C10;
	sub_832235D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83226C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83226C24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83226C2C"))) PPC_WEAK_FUNC(sub_83226C2C);
PPC_FUNC_IMPL(__imp__sub_83226C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226C30"))) PPC_WEAK_FUNC(sub_83226C30);
PPC_FUNC_IMPL(__imp__sub_83226C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83226C38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x83226c7c
	if (ctx.cr6.eq) goto loc_83226C7C;
loc_83226C60:
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
	// bne 0x83226c60
	if (!ctx.cr0.eq) goto loc_83226C60;
loc_83226C7C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832239b0
	ctx.lr = 0x83226C8C;
	sub_832239B0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83226C94;
	sub_829FF648(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f7,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r4,5736
	ctx.r9.s64 = ctx.r4.s64 + 5736;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r3,272
	ctx.r3.s64 = 272;
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r6,r10,-22548
	ctx.r6.s64 = ctx.r10.s64 + -22548;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v0,r31,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,320
	ctx.r11.s64 = 320;
	// lvlx v8,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v6,v12,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lfs f0,-22548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22548);
	ctx.f0.f64 = double(temp.f32);
	// vrlimi128 v7,v6,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v9,v13,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stvx128 v7,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v10,v9,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f5,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// lbz r9,221(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 221);
	// lfs f4,212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	ctx.f4.f64 = double(temp.f32);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// lfs f3,208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83221d10
	ctx.lr = 0x83226D74;
	sub_83221D10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stb r11,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 425, ctx.r11.u8);
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stb r11,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r11.u8);
	// stw r7,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r7.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stw r6,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r6.u32);
	// bl 0x821940c8
	ctx.lr = 0x83226DAC;
	sub_821940C8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83226DC0"))) PPC_WEAK_FUNC(sub_83226DC0);
PPC_FUNC_IMPL(__imp__sub_83226DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83226DC8;
	sub_82CA2BEC(ctx, base);
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x83226e0c
	if (ctx.cr6.eq) goto loc_83226E0C;
loc_83226DF0:
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
	// bne 0x83226df0
	if (!ctx.cr0.eq) goto loc_83226DF0;
loc_83226E0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832239b0
	ctx.lr = 0x83226E1C;
	sub_832239B0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83226E24;
	sub_829FF648(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f7,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r4,5736
	ctx.r9.s64 = ctx.r4.s64 + 5736;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r3,272
	ctx.r3.s64 = 272;
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r6,r10,-22548
	ctx.r6.s64 = ctx.r10.s64 + -22548;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v0,r31,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,320
	ctx.r11.s64 = 320;
	// lvlx v8,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v6,v12,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lfs f0,-22548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22548);
	ctx.f0.f64 = double(temp.f32);
	// vrlimi128 v7,v6,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v9,v13,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stvx128 v7,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v10,v9,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f5,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// lbz r9,221(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 221);
	// lfs f4,212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	ctx.f4.f64 = double(temp.f32);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// lfs f3,208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83221d10
	ctx.lr = 0x83226F04;
	sub_83221D10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stb r11,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 425, ctx.r11.u8);
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stb r11,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r11.u8);
	// stw r7,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r7.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stw r6,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r6.u32);
	// bl 0x821940c8
	ctx.lr = 0x83226F3C;
	sub_821940C8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83226F50"))) PPC_WEAK_FUNC(sub_83226F50);
PPC_FUNC_IMPL(__imp__sub_83226F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83226F58;
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
	// beq cr6,0x83226fac
	if (ctx.cr6.eq) goto loc_83226FAC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83226F98;
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
loc_83226FAC:
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r30,208(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83226fd8
	if (ctx.cr6.eq) goto loc_83226FD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83226FC4;
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
loc_83226FD8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8323c870
	ctx.lr = 0x83226FEC;
	sub_8323C870(ctx, base);
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
	// beq cr6,0x83227020
	if (ctx.cr6.eq) goto loc_83227020;
loc_83227004:
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
	// bne 0x83227004
	if (!ctx.cr0.eq) goto loc_83227004;
loc_83227020:
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
	ctx.lr = 0x83227038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x83227040;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83227048;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83227050;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83227058;
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

__attribute__((alias("__imp__sub_83227064"))) PPC_WEAK_FUNC(sub_83227064);
PPC_FUNC_IMPL(__imp__sub_83227064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227068"))) PPC_WEAK_FUNC(sub_83227068);
PPC_FUNC_IMPL(__imp__sub_83227068) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,336
	ctx.r3.s64 = ctx.r3.s64 + 336;
	// b 0x83222238
	sub_83222238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83227070"))) PPC_WEAK_FUNC(sub_83227070);
PPC_FUNC_IMPL(__imp__sub_83227070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83227078;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83227114
	if (ctx.cr6.eq) goto loc_83227114;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1bea8
	ctx.lr = 0x832270A8;
	sub_82A1BEA8(ctx, base);
	// li r11,272
	ctx.r11.s64 = 272;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x832270f0
	if (ctx.cr6.lt) goto loc_832270F0;
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
	// b 0x83227100
	goto loc_83227100;
loc_832270F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83227100;
	sub_82A1B480(ctx, base);
loc_83227100:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,432(r30)
	PPC_STORE_U8(ctx.r30.u32 + 432, ctx.r7.u8);
loc_83227114:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83227150
	if (ctx.cr6.lt) goto loc_83227150;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
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
	// b 0x83227160
	goto loc_83227160;
loc_83227150:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83227160;
	sub_82A1B480(ctx, base);
loc_83227160:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832271a0
	if (ctx.cr6.eq) goto loc_832271A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225a20
	ctx.lr = 0x8322717C;
	sub_83225A20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83227194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322719C;
	sub_829FF648(ctx, base);
	// b 0x83227204
	goto loc_83227204;
loc_832271A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832271f4
	if (ctx.cr6.lt) goto loc_832271F4;
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
	// b 0x83227204
	goto loc_83227204;
loc_832271F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83227204;
	sub_82A1B480(ctx, base);
loc_83227204:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83224818
	ctx.lr = 0x83227220;
	sub_83224818(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x8323c610
	ctx.lr = 0x8322722C;
	sub_8323C610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83227234"))) PPC_WEAK_FUNC(sub_83227234);
PPC_FUNC_IMPL(__imp__sub_83227234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227238"))) PPC_WEAK_FUNC(sub_83227238);
PPC_FUNC_IMPL(__imp__sub_83227238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83227240;
	sub_82CA2BDC(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-7404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7404);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8322727c
	if (ctx.cr6.eq) goto loc_8322727C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322727C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83227290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832273bc
	if (ctx.cr6.eq) goto loc_832273BC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322732c
	if (ctx.cr6.eq) goto loc_8322732C;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-7400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832272c0
	if (ctx.cr6.eq) goto loc_832272C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832272C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832272D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322732c
	if (ctx.cr6.eq) goto loc_8322732C;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r30,272
	ctx.r5.s64 = ctx.r30.s64 + 272;
	// addi r3,r11,-7396
	ctx.r3.s64 = ctx.r11.s64 + -7396;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ec98
	ctx.lr = 0x832272F4;
	sub_8322EC98(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-7392
	ctx.r3.s64 = ctx.r9.s64 + -7392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ed88
	ctx.lr = 0x83227310;
	sub_8322ED88(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,432(r30)
	PPC_STORE_U8(ctx.r30.u32 + 432, ctx.r8.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8322732C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322732C:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r3,r11,-7388
	ctx.r3.s64 = ctx.r11.s64 + -7388;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ed88
	ctx.lr = 0x83227340;
	sub_8322ED88(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83227380
	if (ctx.cr6.eq) goto loc_83227380;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225ae0
	ctx.lr = 0x83227360;
	sub_83225AE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83227378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83227380;
	sub_829FF648(ctx, base);
loc_83227380:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83224fd0
	ctx.lr = 0x8322739C;
	sub_83224FD0(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x8323c610
	ctx.lr = 0x832273A8;
	sub_8323C610(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832273BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832273BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_832273C4"))) PPC_WEAK_FUNC(sub_832273C4);
PPC_FUNC_IMPL(__imp__sub_832273C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832273C8"))) PPC_WEAK_FUNC(sub_832273C8);
PPC_FUNC_IMPL(__imp__sub_832273C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832273CC"))) PPC_WEAK_FUNC(sub_832273CC);
PPC_FUNC_IMPL(__imp__sub_832273CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832273D0"))) PPC_WEAK_FUNC(sub_832273D0);
PPC_FUNC_IMPL(__imp__sub_832273D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832273D4"))) PPC_WEAK_FUNC(sub_832273D4);
PPC_FUNC_IMPL(__imp__sub_832273D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832273D8"))) PPC_WEAK_FUNC(sub_832273D8);
PPC_FUNC_IMPL(__imp__sub_832273D8) {
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

__attribute__((alias("__imp__sub_832273E8"))) PPC_WEAK_FUNC(sub_832273E8);
PPC_FUNC_IMPL(__imp__sub_832273E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r11,r11,-7432
	ctx.r11.s64 = ctx.r11.s64 + -7432;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x8247e448
	sub_8247E448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832273F8"))) PPC_WEAK_FUNC(sub_832273F8);
PPC_FUNC_IMPL(__imp__sub_832273F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83227400;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-7432
	ctx.r4.s64 = ctx.r10.s64 + -7432;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8323a058
	ctx.lr = 0x83227428;
	sub_8323A058(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83227460
	if (ctx.cr6.eq) goto loc_83227460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83227444;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83227460
	if (ctx.cr6.eq) goto loc_83227460;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83227460:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83227468;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83227474"))) PPC_WEAK_FUNC(sub_83227474);
PPC_FUNC_IMPL(__imp__sub_83227474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227478"))) PPC_WEAK_FUNC(sub_83227478);
PPC_FUNC_IMPL(__imp__sub_83227478) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x832274c4
	if (ctx.cr6.eq) goto loc_832274C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832274B0;
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
loc_832274C4:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// bl 0x8323a1e8
	ctx.lr = 0x832274D4;
	sub_8323A1E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832274DC;
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

__attribute__((alias("__imp__sub_832274F4"))) PPC_WEAK_FUNC(sub_832274F4);
PPC_FUNC_IMPL(__imp__sub_832274F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832274F8"))) PPC_WEAK_FUNC(sub_832274F8);
PPC_FUNC_IMPL(__imp__sub_832274F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83227500;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83237db8
	ctx.lr = 0x8322751C;
	sub_83237DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832273f8
	ctx.lr = 0x8322752C;
	sub_832273F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83227590
	if (!ctx.cr6.eq) goto loc_83227590;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83237fa0
	ctx.lr = 0x83227544;
	sub_83237FA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322757c
	if (ctx.cr6.eq) goto loc_8322757C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x83227560;
	sub_829FF648(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322757c
	if (ctx.cr6.eq) goto loc_8322757C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8322757C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83227584;
	sub_829FF648(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832275b0
	if (ctx.cr6.eq) goto loc_832275B0;
loc_83227590:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832275B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832275B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832275BC"))) PPC_WEAK_FUNC(sub_832275BC);
PPC_FUNC_IMPL(__imp__sub_832275BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832275C0"))) PPC_WEAK_FUNC(sub_832275C0);
PPC_FUNC_IMPL(__imp__sub_832275C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832275C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7432
	ctx.r11.s64 = ctx.r11.s64 + -7432;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x832275E0;
	sub_8247E448(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83227634
	if (ctx.cr6.lt) goto loc_83227634;
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
	// b 0x83227644
	goto loc_83227644;
loc_83227634:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83227644;
	sub_82A1B480(ctx, base);
loc_83227644:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8322767c
	if (ctx.cr6.eq) goto loc_8322767C;
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8322767C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832276d0
	if (ctx.cr6.lt) goto loc_832276D0;
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
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x832276e0
	goto loc_832276E0;
loc_832276D0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x832276E0;
	sub_82A1B480(ctx, base);
loc_832276E0:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x83227718
	if (ctx.cr6.eq) goto loc_83227718;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83227718:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83227744
	if (!ctx.cr6.gt) goto loc_83227744;
loc_83227720:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832274f8
	ctx.lr = 0x83227734;
	sub_832274F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322773C;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83227720
	if (!ctx.cr0.eq) goto loc_83227720;
loc_83227744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322774C"))) PPC_WEAK_FUNC(sub_8322774C);
PPC_FUNC_IMPL(__imp__sub_8322774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227750"))) PPC_WEAK_FUNC(sub_83227750);
PPC_FUNC_IMPL(__imp__sub_83227750) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227758"))) PPC_WEAK_FUNC(sub_83227758);
PPC_FUNC_IMPL(__imp__sub_83227758) {
	PPC_FUNC_PROLOGUE();
	// li r11,512
	ctx.r11.s64 = 512;
	// lvx128 v0,r4,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227768"))) PPC_WEAK_FUNC(sub_83227768);
PPC_FUNC_IMPL(__imp__sub_83227768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83227770;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832222d0
	ctx.lr = 0x83227780;
	sub_832222D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8322779c
	if (ctx.cr6.eq) goto loc_8322779C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8322779C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83227808
	if (ctx.cr6.eq) goto loc_83227808;
	// stw r31,340(r7)
	PPC_STORE_U32(ctx.r7.u32 + 340, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a00988
	ctx.lr = 0x832277D4;
	sub_82A00988(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a00e30
	ctx.lr = 0x83227800;
	sub_82A00E30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83227808:
	// lwz r11,460(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 460);
	// lwz r10,456(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	// lwz r8,340(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x83227880
	if (!ctx.cr6.lt) goto loc_83227880;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r8,36
	ctx.r8.s64 = 36;
loc_8322782C:
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,340(r7)
	PPC_STORE_U32(ctx.r7.u32 + 340, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divw. r3,r5,r10
	ctx.r3.s32 = ctx.r5.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83227854
	if (ctx.cr0.eq) goto loc_83227854;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_83227854:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divw. r3,r5,r8
	ctx.r3.s32 = ctx.r5.s32 / ctx.r8.s32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83227870
	if (ctx.cr0.eq) goto loc_83227870;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83227870:
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8322782c
	if (ctx.cr6.lt) goto loc_8322782C;
loc_83227880:
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83227954
	if (!ctx.cr6.gt) goto loc_83227954;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83227894:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83226218
	ctx.lr = 0x832278AC;
	sub_83226218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322793c
	if (ctx.cr6.eq) goto loc_8322793C;
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,340(r7)
	PPC_STORE_U32(ctx.r7.u32 + 340, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832278E8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x832278e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832278E8;
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83227924:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83227924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83227924;
	// b 0x83227948
	goto loc_83227948;
loc_8322793C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r6,r6,36
	ctx.r6.s64 = ctx.r6.s64 + 36;
loc_83227948:
	// lwz r11,340(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83227894
	if (ctx.cr6.lt) goto loc_83227894;
loc_83227954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322795C"))) PPC_WEAK_FUNC(sub_8322795C);
PPC_FUNC_IMPL(__imp__sub_8322795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227960"))) PPC_WEAK_FUNC(sub_83227960);
PPC_FUNC_IMPL(__imp__sub_83227960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83227968;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x83227a94
	if (ctx.cr6.gt) goto loc_83227A94;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,31128
	ctx.r12.s64 = ctx.r12.s64 + 31128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832279A8;
	case 1:
		goto loc_83227A18;
	case 2:
		goto loc_83227A44;
	case 3:
		goto loc_83227A70;
	default:
		__builtin_unreachable();
	}
	// lwz r25,31144(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31144);
	// lwz r25,31256(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31256);
	// lwz r25,31300(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31300);
	// lwz r25,31344(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31344);
loc_832279A8:
	// lwz r30,360(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r29,r30,64
	ctx.r29.s64 = ctx.r30.s64 + 64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a00988
	ctx.lr = 0x832279E4;
	sub_82A00988(ctx, base);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a00e30
	ctx.lr = 0x83227A10;
	sub_82A00E30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83227A18:
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
	// stw r31,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83227A44:
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83227A70:
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_83227A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83227A9C"))) PPC_WEAK_FUNC(sub_83227A9C);
PPC_FUNC_IMPL(__imp__sub_83227A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227AA0"))) PPC_WEAK_FUNC(sub_83227AA0);
PPC_FUNC_IMPL(__imp__sub_83227AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83227AA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r28,484
	ctx.r29.s64 = ctx.r28.s64 + 484;
	// addi r10,r11,5624
	ctx.r10.s64 = ctx.r11.s64 + 5624;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,488(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83227ad0
	if (ctx.cr6.eq) goto loc_83227AD0;
	// bl 0x8221be68
	ctx.lr = 0x83227AD0;
	sub_8221BE68(ctx, base);
loc_83227AD0:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,468
	ctx.r30.s64 = ctx.r28.s64 + 468;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83227af4
	if (ctx.cr6.eq) goto loc_83227AF4;
	// bl 0x8221be68
	ctx.lr = 0x83227AF4;
	sub_8221BE68(ctx, base);
loc_83227AF4:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r29,r28,452
	ctx.r29.s64 = ctx.r28.s64 + 452;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,456(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83227b14
	if (ctx.cr6.eq) goto loc_83227B14;
	// bl 0x8221be68
	ctx.lr = 0x83227B14;
	sub_8221BE68(ctx, base);
loc_83227B14:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x83226370
	ctx.lr = 0x83227B28;
	sub_83226370(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83227B30"))) PPC_WEAK_FUNC(sub_83227B30);
PPC_FUNC_IMPL(__imp__sub_83227B30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322f428
	ctx.lr = 0x83227B58;
	sub_8322F428(ctx, base);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lfs f0,528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83227c00
	if (ctx.cr6.eq) goto loc_83227C00;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lwz r10,-31652(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x83227b8c
	if (!ctx.cr6.lt) goto loc_83227B8C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_83227B8C:
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
	// blt cr6,0x83227bc4
	if (ctx.cr6.lt) goto loc_83227BC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r11.u32);
	// b 0x83227bc8
	goto loc_83227BC8;
loc_83227BC4:
	// stw r10,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r10.u32);
loc_83227BC8:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,24080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x83227c08
	goto loc_83227C08;
loc_83227C00:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
loc_83227C08:
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmulfp128 v12,v1,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227C34"))) PPC_WEAK_FUNC(sub_83227C34);
PPC_FUNC_IMPL(__imp__sub_83227C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227C38"))) PPC_WEAK_FUNC(sub_83227C38);
PPC_FUNC_IMPL(__imp__sub_83227C38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322f5c8
	ctx.lr = 0x83227C60;
	sub_8322F5C8(ctx, base);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lfs f0,528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83227d08
	if (ctx.cr6.eq) goto loc_83227D08;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lwz r10,-31652(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x83227c94
	if (!ctx.cr6.lt) goto loc_83227C94;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_83227C94:
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
	// blt cr6,0x83227ccc
	if (ctx.cr6.lt) goto loc_83227CCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r11.u32);
	// b 0x83227cd0
	goto loc_83227CD0;
loc_83227CCC:
	// stw r10,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r10.u32);
loc_83227CD0:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,24080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x83227d10
	goto loc_83227D10;
loc_83227D08:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
loc_83227D10:
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmulfp128 v12,v1,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227D3C"))) PPC_WEAK_FUNC(sub_83227D3C);
PPC_FUNC_IMPL(__imp__sub_83227D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227D40"))) PPC_WEAK_FUNC(sub_83227D40);
PPC_FUNC_IMPL(__imp__sub_83227D40) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lbz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83227e30
	if (ctx.cr6.eq) goto loc_83227E30;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lwz r10,-31652(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x83227d8c
	if (!ctx.cr6.lt) goto loc_83227D8C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_83227D8C:
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
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blt cr6,0x83227dbc
	if (ctx.cr6.lt) goto loc_83227DBC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83227DBC:
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x83227dcc
	if (!ctx.cr6.lt) goto loc_83227DCC;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_83227DCC:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	// blt cr6,0x83227dfc
	if (ctx.cr6.lt) goto loc_83227DFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r11.u32);
	// b 0x83227e00
	goto loc_83227E00;
loc_83227DFC:
	// stw r10,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r10.u32);
loc_83227E00:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r6,1
	ctx.r6.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24080);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x83227e3c
	goto loc_83227E3C;
loc_83227E30:
	// lbz r6,278(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 278);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// lbz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 276);
loc_83227E3C:
	// li r10,412
	ctx.r10.s64 = 412;
	// lvlx v0,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v0,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// bl 0x8322f0b0
	ctx.lr = 0x83227E4C;
	sub_8322F0B0(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// vmulfp128 v127,v1,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83227e78
	if (ctx.cr6.eq) goto loc_83227E78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83227e74
	if (ctx.cr6.eq) goto loc_83227E74;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83227e7c
	goto loc_83227E7C;
loc_83227E74:
	// bl 0x821940c8
	ctx.lr = 0x83227E78;
	sub_821940C8(ctx, base);
loc_83227E78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83227E7C:
	// li r10,80
	ctx.r10.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r11,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227EB0"))) PPC_WEAK_FUNC(sub_83227EB0);
PPC_FUNC_IMPL(__imp__sub_83227EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83227EB8;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832265d8
	ctx.lr = 0x83227EC8;
	sub_832265D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r31,536
	ctx.r29.s64 = ctx.r31.s64 + 536;
	// lfs f31,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83227d40
	ctx.lr = 0x83227EE0;
	sub_83227D40(ctx, base);
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r31,540
	ctx.r5.s64 = ctx.r31.s64 + 540;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83227F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83227f20
	if (ctx.cr6.eq) goto loc_83227F20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
loc_83227F20:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lvx128 v13,r0,r30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-28160
	ctx.r9.s64 = ctx.r11.s64 + -28160;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,80
	ctx.r7.s64 = 80;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83227F5C"))) PPC_WEAK_FUNC(sub_83227F5C);
PPC_FUNC_IMPL(__imp__sub_83227F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227F60"))) PPC_WEAK_FUNC(sub_83227F60);
PPC_FUNC_IMPL(__imp__sub_83227F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83227F68;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83227fc0
	if (!ctx.cr6.gt) goto loc_83227FC0;
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a00808
	ctx.lr = 0x83227FB4;
	sub_82A00808(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a008c8
	ctx.lr = 0x83227FC0;
	sub_82A008C8(ctx, base);
loc_83227FC0:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83227FE4:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83227fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83227FE4;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r9,9
	ctx.r9.s64 = 9;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8322801C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8322801c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8322801C;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83228044"))) PPC_WEAK_FUNC(sub_83228044);
PPC_FUNC_IMPL(__imp__sub_83228044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228048"))) PPC_WEAK_FUNC(sub_83228048);
PPC_FUNC_IMPL(__imp__sub_83228048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83228050;
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
	// beq cr6,0x832280a4
	if (ctx.cr6.eq) goto loc_832280A4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83228090;
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
loc_832280A4:
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r30,208(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832280d0
	if (ctx.cr6.eq) goto loc_832280D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832280BC;
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
loc_832280D0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8323d860
	ctx.lr = 0x832280E4;
	sub_8323D860(ctx, base);
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
	// beq cr6,0x83228118
	if (ctx.cr6.eq) goto loc_83228118;
loc_832280FC:
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
	// bne 0x832280fc
	if (!ctx.cr0.eq) goto loc_832280FC;
loc_83228118:
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
	ctx.lr = 0x83228130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x83228138;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83228140;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83228148;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83228150;
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

__attribute__((alias("__imp__sub_8322815C"))) PPC_WEAK_FUNC(sub_8322815C);
PPC_FUNC_IMPL(__imp__sub_8322815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228160"))) PPC_WEAK_FUNC(sub_83228160);
PPC_FUNC_IMPL(__imp__sub_83228160) {
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
	ctx.lr = 0x83228190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x832281b0
	if (!ctx.cr6.eq) goto loc_832281B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83226968
	ctx.lr = 0x832281A4;
	sub_83226968(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// bl 0x8323c610
	ctx.lr = 0x832281B0;
	sub_8323C610(ctx, base);
loc_832281B0:
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

__attribute__((alias("__imp__sub_832281C8"))) PPC_WEAK_FUNC(sub_832281C8);
PPC_FUNC_IMPL(__imp__sub_832281C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832269d0
	sub_832269D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832281CC"))) PPC_WEAK_FUNC(sub_832281CC);
PPC_FUNC_IMPL(__imp__sub_832281CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832281D0"))) PPC_WEAK_FUNC(sub_832281D0);
PPC_FUNC_IMPL(__imp__sub_832281D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832281D8;
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
	// lwz r11,-7460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83228208
	if (!ctx.cr6.eq) goto loc_83228208;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322820c
	goto loc_8322820C;
loc_83228208:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322820C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83228220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83228254
	if (ctx.cr6.eq) goto loc_83228254;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83226ac8
	ctx.lr = 0x83228240;
	sub_83226AC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83228254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83228254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322825C"))) PPC_WEAK_FUNC(sub_8322825C);
PPC_FUNC_IMPL(__imp__sub_8322825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228260"))) PPC_WEAK_FUNC(sub_83228260);
PPC_FUNC_IMPL(__imp__sub_83228260) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
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
	// beq cr6,0x832282b0
	if (ctx.cr6.eq) goto loc_832282B0;
loc_83228294:
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
	// bne 0x83228294
	if (!ctx.cr0.eq) goto loc_83228294;
loc_832282B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83226c30
	ctx.lr = 0x832282C0;
	sub_83226C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832282C8;
	sub_829FF648(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,5624
	ctx.r9.s64 = ctx.r11.s64 + 5624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r10,-27456
	ctx.r7.s64 = ctx.r10.s64 + -27456;
	// stw r6,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r6.u32);
	// lfs f13,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lfs f0,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// beq cr6,0x83228354
	if (ctx.cr6.eq) goto loc_83228354;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lbz r10,277(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 277);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83228354
	if (ctx.cr6.eq) goto loc_83228354;
	// bl 0x8322b330
	ctx.lr = 0x8322834C;
	sub_8322B330(ctx, base);
	// stfs f1,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// b 0x83228358
	goto loc_83228358;
loc_83228354:
	// stfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
loc_83228358:
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

__attribute__((alias("__imp__sub_83228374"))) PPC_WEAK_FUNC(sub_83228374);
PPC_FUNC_IMPL(__imp__sub_83228374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228378"))) PPC_WEAK_FUNC(sub_83228378);
PPC_FUNC_IMPL(__imp__sub_83228378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,336
	ctx.r3.s64 = ctx.r3.s64 + 336;
	// b 0x83221f50
	sub_83221F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83228380"))) PPC_WEAK_FUNC(sub_83228380);
PPC_FUNC_IMPL(__imp__sub_83228380) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x832283dc
	if (!ctx.cr6.gt) goto loc_832283DC;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// addi r11,r9,-4108
	ctx.r11.s64 = ctx.r9.s64 + -4108;
	// lwz r10,27648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f11,532(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_832283DC:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x83228474
	if (ctx.cr6.gt) goto loc_83228474;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// addi r12,r12,-31736
	ctx.r12.s64 = ctx.r12.s64 + -31736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83228418;
	case 1:
		goto loc_83228430;
	case 2:
		goto loc_83228448;
	case 3:
		goto loc_83228460;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-31720(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31720);
	// lwz r25,-31696(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31696);
	// lwz r25,-31672(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31672);
	// lwz r25,-31648(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31648);
loc_83228418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a058c0
	ctx.lr = 0x83228420;
	sub_82A058C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a05ab8
	ctx.lr = 0x8322842C;
	sub_82A05AB8(ctx, base);
	// b 0x83228474
	goto loc_83228474;
loc_83228430:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a05e38
	ctx.lr = 0x83228438;
	sub_82A05E38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a06038
	ctx.lr = 0x83228444;
	sub_82A06038(ctx, base);
	// b 0x83228474
	goto loc_83228474;
loc_83228448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a063d8
	ctx.lr = 0x83228450;
	sub_82A063D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a065d8
	ctx.lr = 0x8322845C;
	sub_82A065D8(ctx, base);
	// b 0x83228474
	goto loc_83228474;
loc_83228460:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a06978
	ctx.lr = 0x83228468;
	sub_82A06978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a06b78
	ctx.lr = 0x83228474;
	sub_82A06B78(ctx, base);
loc_83228474:
	// lfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83228510
	if (ctx.cr6.gt) goto loc_83228510;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lbz r10,245(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 245);
	// lfs f0,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322850c
	if (ctx.cr6.eq) goto loc_8322850C;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lwz r10,-31652(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x832284ac
	if (!ctx.cr6.lt) goto loc_832284AC;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_832284AC:
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
	// blt cr6,0x832284e4
	if (ctx.cr6.lt) goto loc_832284E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r11.u32);
	// b 0x832284e8
	goto loc_832284E8;
loc_832284E4:
	// stw r10,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r10.u32);
loc_832284E8:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,24080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_8322850C:
	// stfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_83228510:
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

__attribute__((alias("__imp__sub_8322852C"))) PPC_WEAK_FUNC(sub_8322852C);
PPC_FUNC_IMPL(__imp__sub_8322852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228530"))) PPC_WEAK_FUNC(sub_83228530);
PPC_FUNC_IMPL(__imp__sub_83228530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83228538;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,544
	ctx.r3.s64 = 544;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8221f388
	ctx.lr = 0x83228550;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322856c
	if (ctx.cr6.eq) goto loc_8322856C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83228260
	ctx.lr = 0x83228568;
	sub_83228260(ctx, base);
	// b 0x83228570
	goto loc_83228570;
loc_8322856C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83228570:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832285b0
	if (ctx.cr6.eq) goto loc_832285B0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x83228584;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832285b0
	if (ctx.cr6.eq) goto loc_832285B0;
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
	// b 0x832285b4
	goto loc_832285B4;
loc_832285B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832285B4:
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
	// beq cr6,0x832285ec
	if (ctx.cr6.eq) goto loc_832285EC;
loc_832285D0:
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
	// bne 0x832285d0
	if (!ctx.cr0.eq) goto loc_832285D0;
loc_832285EC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x829fd7b8
	ctx.lr = 0x832285FC;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83228604;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83228610"))) PPC_WEAK_FUNC(sub_83228610);
PPC_FUNC_IMPL(__imp__sub_83228610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83228618;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r5,456(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r7,r7,-27456
	ctx.r7.s64 = ctx.r7.s64 + -27456;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v9,v10,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// lfs f13,-12(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// vmsum3fp128 v8,v11,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v7,v9,v9
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// stvx128 v8,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v7,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x832286a0
	if (!ctx.cr6.gt) goto loc_832286A0;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_832286A0:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832286c4
	if (!ctx.cr6.eq) goto loc_832286C4;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
loc_832286C4:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r6,488(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r30,r31,484
	ctx.r30.s64 = ctx.r31.s64 + 484;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v11,r0,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lvx128 v10,r0,r7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v8,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v127,v8,v12
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v7,v127,v127
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfs f9,528(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// beq cr6,0x83228804
	if (ctx.cr6.eq) goto loc_83228804;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83228784
	if (!ctx.cr6.lt) goto loc_83228784;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c55c8
	ctx.lr = 0x83228784;
	sub_827C55C8(ctx, base);
loc_83228784:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,228(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v0,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8322888c
	if (!ctx.cr6.gt) goto loc_8322888C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_832287A8:
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v12,r11,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v11,v13,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v10,r0,r9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,456(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// vsubfp v13,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp128 v0,v0,v127
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// lwz r6,488(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lvx128 v9,r6,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v8,v13,v11,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r3,228(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832287a8
	if (ctx.cr6.lt) goto loc_832287A8;
	// b 0x8322888c
	goto loc_8322888C;
loc_83228804:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x8322888c
	if (!ctx.cr6.gt) goto loc_8322888C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_83228824:
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r11,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v0,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,456(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lvx128 v9,r11,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v8,v0,v12,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// srawi r9,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 4;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83228824
	if (ctx.cr6.lt) goto loc_83228824;
loc_8322888C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,-16
	ctx.r8.s64 = -16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r5,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v13,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_832288F8"))) PPC_WEAK_FUNC(sub_832288F8);
PPC_FUNC_IMPL(__imp__sub_832288F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83228900;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r29,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 4;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83228940
	if (!ctx.cr6.eq) goto loc_83228940;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
loc_83228940:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27456(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v127,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v127,v127
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfs f9,528(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// beq cr6,0x83228a08
	if (ctx.cr6.eq) goto loc_83228A08;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x827c55c8
	ctx.lr = 0x832289C0;
	sub_827C55C8(ctx, base);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,228(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x83228a3c
	if (ctx.cr6.lt) goto loc_83228A3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832289E0:
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// vaddfp128 v0,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x832289e0
	if (!ctx.cr6.gt) goto loc_832289E0;
	// b 0x83228a3c
	goto loc_83228A3C;
loc_83228A08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827c55c8
	ctx.lr = 0x83228A10;
	sub_827C55C8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83228a3c
	if (!ctx.cr6.gt) goto loc_83228A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83228A20:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lvx128 v0,r9,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x83228a20
	if (!ctx.cr0.eq) goto loc_83228A20;
loc_83228A3C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83228ab8
	if (!ctx.cr6.eq) goto loc_83228AB8;
	// lwz r10,476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// lwz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x83228ab8
	if (!ctx.cr6.eq) goto loc_83228AB8;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x827c55c8
	ctx.lr = 0x83228A78;
	sub_827C55C8(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// addic. r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83228ab8
	if (!ctx.cr0.gt) goto loc_83228AB8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83228A90:
	// bl 0x8322f5c8
	ctx.lr = 0x83228A94;
	sub_8322F5C8(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stvx128 v1,r29,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83228a90
	if (ctx.cr6.lt) goto loc_83228A90;
loc_83228AB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83228AC8"))) PPC_WEAK_FUNC(sub_83228AC8);
PPC_FUNC_IMPL(__imp__sub_83228AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83228AD0;
	sub_82CA2BE8(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832288f8
	ctx.lr = 0x83228AE4;
	sub_832288F8(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827c55c8
	ctx.lr = 0x83228B04;
	sub_827C55C8(ctx, base);
	// lwz r8,488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r7,456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x83228b60
	if (!ctx.cr6.gt) goto loc_83228B60;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_83228B28:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v127,r10,r30
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x83227c38
	ctx.lr = 0x83228B44;
	sub_83227C38(ctx, base);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// vaddfp128 v13,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stvx128 v13,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x83228b28
	if (!ctx.cr0.eq) goto loc_83228B28;
loc_83228B60:
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// li r8,-16
	ctx.r8.s64 = -16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v0,r10,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83228B90"))) PPC_WEAK_FUNC(sub_83228B90);
PPC_FUNC_IMPL(__imp__sub_83228B90) {
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
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83228bf8
	if (ctx.cr6.eq) goto loc_83228BF8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r8,488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83228c08
	if (ctx.cr6.eq) goto loc_83228C08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83228c08
	if (ctx.cr6.eq) goto loc_83228C08;
	// bl 0x83227960
	ctx.lr = 0x83228BF8;
	sub_83227960(ctx, base);
loc_83228BF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83228ac8
	ctx.lr = 0x83228C04;
	sub_83228AC8(ctx, base);
	// b 0x83228c14
	goto loc_83228C14;
loc_83228C08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83228610
	ctx.lr = 0x83228C14;
	sub_83228610(ctx, base);
loc_83228C14:
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

__attribute__((alias("__imp__sub_83228C2C"))) PPC_WEAK_FUNC(sub_83228C2C);
PPC_FUNC_IMPL(__imp__sub_83228C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228C30"))) PPC_WEAK_FUNC(sub_83228C30);
PPC_FUNC_IMPL(__imp__sub_83228C30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r12,144
	ctx.r12.s64 = 144;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v2,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82442b68
	ctx.lr = 0x83228C70;
	sub_82442B68(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82442b68
	ctx.lr = 0x83228C7C;
	sub_82442B68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83228b90
	ctx.lr = 0x83228C88;
	sub_83228B90(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83228c98
	if (ctx.cr6.eq) goto loc_83228C98;
	// bl 0x8221be68
	ctx.lr = 0x83228C98;
	sub_8221BE68(ctx, base);
loc_83228C98:
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

__attribute__((alias("__imp__sub_83228CAC"))) PPC_WEAK_FUNC(sub_83228CAC);
PPC_FUNC_IMPL(__imp__sub_83228CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228CB0"))) PPC_WEAK_FUNC(sub_83228CB0);
PPC_FUNC_IMPL(__imp__sub_83228CB0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83228cf8
	if (ctx.cr6.eq) goto loc_83228CF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83228cf4
	if (ctx.cr6.eq) goto loc_83228CF4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x83228cfc
	goto loc_83228CFC;
loc_83228CF4:
	// bl 0x821940c8
	ctx.lr = 0x83228CF8;
	sub_821940C8(ctx, base);
loc_83228CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83228CFC:
	// li r10,80
	ctx.r10.s64 = 80;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v1,r11,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x83228c30
	ctx.lr = 0x83228D10;
	sub_83228C30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83228D2C"))) PPC_WEAK_FUNC(sub_83228D2C);
PPC_FUNC_IMPL(__imp__sub_83228D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228D30"))) PPC_WEAK_FUNC(sub_83228D30);
PPC_FUNC_IMPL(__imp__sub_83228D30) {
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
	// bl 0x83227070
	ctx.lr = 0x83228D48;
	sub_83227070(ctx, base);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r3,448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// bl 0x8323c610
	ctx.lr = 0x83228D54;
	sub_8323C610(ctx, base);
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

__attribute__((alias("__imp__sub_83228D68"))) PPC_WEAK_FUNC(sub_83228D68);
PPC_FUNC_IMPL(__imp__sub_83228D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83228D70;
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
	// lwz r11,-7460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83228da8
	if (!ctx.cr6.eq) goto loc_83228DA8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x83228dac
	goto loc_83228DAC;
loc_83228DA8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83228DAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83228DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83228e08
	if (ctx.cr6.eq) goto loc_83228E08;
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
	// bl 0x83227238
	ctx.lr = 0x83228DE8;
	sub_83227238(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// bl 0x8323c610
	ctx.lr = 0x83228DF4;
	sub_8323C610(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83228E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83228E08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83228E10"))) PPC_WEAK_FUNC(sub_83228E10);
PPC_FUNC_IMPL(__imp__sub_83228E10) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83228E18"))) PPC_WEAK_FUNC(sub_83228E18);
PPC_FUNC_IMPL(__imp__sub_83228E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83228E1C"))) PPC_WEAK_FUNC(sub_83228E1C);
PPC_FUNC_IMPL(__imp__sub_83228E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83228E20"))) PPC_WEAK_FUNC(sub_83228E20);
PPC_FUNC_IMPL(__imp__sub_83228E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83228e50
	if (ctx.cr6.eq) goto loc_83228E50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83228e50
	if (ctx.cr6.eq) goto loc_83228E50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// blr 
	return;
loc_83228E50:
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83228E60"))) PPC_WEAK_FUNC(sub_83228E60);
PPC_FUNC_IMPL(__imp__sub_83228E60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r9,r10,-28400
	ctx.r9.s64 = ctx.r10.s64 + -28400;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsel v12,v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83228E80"))) PPC_WEAK_FUNC(sub_83228E80);
PPC_FUNC_IMPL(__imp__sub_83228E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83228E88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r10,-7536
	ctx.r7.s64 = ctx.r10.s64 + -7536;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83228EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,412
	ctx.r6.s64 = 412;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r29,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvlx v13,r30,r6
	temp.u32 = ctx.r30.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v10,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stvx128 v10,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v10,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83228F28"))) PPC_WEAK_FUNC(sub_83228F28);
PPC_FUNC_IMPL(__imp__sub_83228F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83228F30;
	sub_82CA2BDC(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca7508
	ctx.lr = 0x83228F38;
	sub_82CA7508(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31950
	ctx.r27.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-31652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31652);
	// cmpwi cr6,r11,267
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 267, ctx.xer);
	// addi r8,r11,-267
	ctx.r8.s64 = ctx.r11.s64 + -267;
	// bge cr6,0x83228f60
	if (!ctx.cr6.lt) goto loc_83228F60;
	// addi r8,r11,103
	ctx.r8.s64 = ctx.r11.s64 + 103;
loc_83228F60:
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r9,-4048
	ctx.r29.s64 = ctx.r9.s64 + -4048;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,370
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 370, ctx.xer);
	// lwzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// xor r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// blt cr6,0x83228f98
	if (ctx.cr6.lt) goto loc_83228F98;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-31652(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31652, ctx.r10.u32);
	// b 0x83228f9c
	goto loc_83228F9C;
loc_83228F98:
	// stw r9,-31652(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31652, ctx.r9.u32);
loc_83228F9C:
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,1080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239e88
	ctx.lr = 0x83228FC8;
	sub_82239E88(ctx, base);
	// fctiwz f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// li r4,9
	ctx.r4.s64 = 9;
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x8321e6a0
	ctx.lr = 0x83228FE4;
	sub_8321E6A0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r9,-28208
	ctx.r8.s64 = ctx.r9.s64 + -28208;
	// fmuls f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82239f68
	ctx.lr = 0x83229018;
	sub_82239F68(ctx, base);
	// fctiwz f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// li r4,10
	ctx.r4.s64 = 10;
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x8321e6a0
	ctx.lr = 0x83229034;
	sub_8321E6A0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// fmuls f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r0,r30
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r6,-28192
	ctx.r3.s64 = ctx.r6.s64 + -28192;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v0,v10,v9,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lfs f7,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8321e6a0
	ctx.lr = 0x83229078;
	sub_8321E6A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-28176
	ctx.r10.s64 = ctx.r11.s64 + -28176;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v7,r0,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r11,-27468
	ctx.r28.s64 = ctx.r11.s64 + -27468;
	// lvlx v8,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v0,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v7,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,3120(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-32246
	ctx.r26.s64 = -2113273856;
	// lfs f30,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r11,-28240
	ctx.r31.s64 = ctx.r11.s64 + -28240;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x832290f0
	if (!ctx.cr6.lt) goto loc_832290F0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x832290fc
	goto loc_832290FC;
loc_832290F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-25888(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82260bc8
	ctx.lr = 0x832290FC;
	sub_82260BC8(ctx, base);
loc_832290FC:
	// lwz r11,-31652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31652);
	// cmpwi cr6,r11,267
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 267, ctx.xer);
	// addi r9,r11,-267
	ctx.r9.s64 = ctx.r11.s64 + -267;
	// bge cr6,0x83229110
	if (!ctx.cr6.lt) goto loc_83229110;
	// addi r9,r11,103
	ctx.r9.s64 = ctx.r11.s64 + 103;
loc_83229110:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,370
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 370, ctx.xer);
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// blt cr6,0x83229138
	if (ctx.cr6.lt) goto loc_83229138;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83229138:
	// stw r11,-31652(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31652, ctx.r11.u32);
	// clrlwi r11,r9,8
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFFF;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,6804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6804);
	// lfs f0,24080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24080);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r9,6816
	ctx.r9.s64 = ctx.r9.s64 + 6816;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x832291b0
	if (!ctx.cr6.eq) goto loc_832291B0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,6804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6804, ctx.r11.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x832291b4
	goto loc_832291B4;
loc_832291B0:
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_832291B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2964);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x832291f4
	if (!ctx.cr6.gt) goto loc_832291F4;
	// lvx128 v13,r0,r30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-25888(r26)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v10,v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x832291F0;
	sub_82260BC8(ctx, base);
	// b 0x83229330
	goto loc_83229330;
loc_832291F4:
	// lfs f0,18768(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 18768);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f31,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r11,368
	ctx.r10.s64 = ctx.r11.s64 + 368;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f11,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f13,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f8,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f28,f8,f30,f10
	ctx.f28.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82260900
	ctx.lr = 0x8322924C;
	sub_82260900(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f1,-25888(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f28
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fnmsubs f12,f3,f28,f30
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f28.f64 - ctx.f30.f64)));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f28
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f31,f7,f29
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v10,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x832292E0;
	sub_82260BC8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239f68
	ctx.lr = 0x832292E8;
	sub_82239F68(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239e88
	ctx.lr = 0x832292F8;
	sub_82239E88(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v9,r0,r30
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v8,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// lvx128 v6,r0,r9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v5,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v3,v6,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v2,v9,v4,v3
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83229330:
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v11,r0,r25
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v10,v0,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v9,r25,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v8,v9,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v7,r25,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v6,v12,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v5,v10,v11,v6
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca7554
	ctx.lr = 0x83229370;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83229374"))) PPC_WEAK_FUNC(sub_83229374);
PPC_FUNC_IMPL(__imp__sub_83229374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229378"))) PPC_WEAK_FUNC(sub_83229378);
PPC_FUNC_IMPL(__imp__sub_83229378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83229380;
	sub_82CA2BE4(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r9,r11,-7568
	ctx.r9.s64 = ctx.r11.s64 + -7568;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x832293ec
	if (ctx.cr6.eq) goto loc_832293EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lvx128 v1,r0,r27
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83223220
	ctx.lr = 0x832293DC;
	sub_83223220(ctx, base);
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r3
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_832293EC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r9,r11,-7552
	ctx.r9.s64 = ctx.r11.s64 + -7552;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,-4108
	ctx.r30.s64 = ctx.r11.s64 + -4108;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v127,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// beq cr6,0x832294c0
	if (ctx.cr6.eq) goto loc_832294C0;
	// lwz r29,472(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8321f598
	ctx.lr = 0x83229434;
	sub_8321F598(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f0,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8321e6a0
	ctx.lr = 0x83229470;
	sub_8321E6A0(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,156(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f0,f12,f30,f31
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f30.f64 - ctx.f31.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x83229498
	if (ctx.cr6.eq) goto loc_83229498;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83229498:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v127,v10
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v8,v127,v9
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_832294C0:
	// li r11,40
	ctx.r11.s64 = 40;
	// lvx128 v13,r0,r27
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v12,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v10,v0,v11,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832294F0"))) PPC_WEAK_FUNC(sub_832294F0);
PPC_FUNC_IMPL(__imp__sub_832294F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832294F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83229550
	if (!ctx.cr6.gt) goto loc_83229550;
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a00808
	ctx.lr = 0x83229544;
	sub_82A00808(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a008c8
	ctx.lr = 0x83229550;
	sub_82A008C8(ctx, base);
loc_83229550:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83229574:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83229574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83229574;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r9,9
	ctx.r9.s64 = 9;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832295AC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832295ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832295AC;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832295D4"))) PPC_WEAK_FUNC(sub_832295D4);
PPC_FUNC_IMPL(__imp__sub_832295D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832295D8"))) PPC_WEAK_FUNC(sub_832295D8);
PPC_FUNC_IMPL(__imp__sub_832295D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,477(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 477);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r10,-31723(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31723);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,425(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 425);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83229624
	if (ctx.cr6.eq) goto loc_83229624;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82a01428
	sub_82A01428(ctx, base);
	return;
loc_83229624:
	// b 0x82a012d8
	sub_82A012D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229628"))) PPC_WEAK_FUNC(sub_83229628);
PPC_FUNC_IMPL(__imp__sub_83229628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322962C"))) PPC_WEAK_FUNC(sub_8322962C);
PPC_FUNC_IMPL(__imp__sub_8322962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229630"))) PPC_WEAK_FUNC(sub_83229630);
PPC_FUNC_IMPL(__imp__sub_83229630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83229638;
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
	// beq cr6,0x8322968c
	if (ctx.cr6.eq) goto loc_8322968C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83229678;
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
loc_8322968C:
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r30,208(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832296b8
	if (ctx.cr6.eq) goto loc_832296B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x832296A4;
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
loc_832296B8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8323e768
	ctx.lr = 0x832296CC;
	sub_8323E768(ctx, base);
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
	// beq cr6,0x83229700
	if (ctx.cr6.eq) goto loc_83229700;
loc_832296E4:
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
	// bne 0x832296e4
	if (!ctx.cr0.eq) goto loc_832296E4;
loc_83229700:
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
	ctx.lr = 0x83229718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x83229720;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83229728;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83229730;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83229738;
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

__attribute__((alias("__imp__sub_83229744"))) PPC_WEAK_FUNC(sub_83229744);
PPC_FUNC_IMPL(__imp__sub_83229744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229748"))) PPC_WEAK_FUNC(sub_83229748);
PPC_FUNC_IMPL(__imp__sub_83229748) {
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
	ctx.lr = 0x83229778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83229798
	if (!ctx.cr6.eq) goto loc_83229798;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83226968
	ctx.lr = 0x8322978C;
	sub_83226968(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8323e628
	ctx.lr = 0x83229798;
	sub_8323E628(ctx, base);
loc_83229798:
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

__attribute__((alias("__imp__sub_832297B0"))) PPC_WEAK_FUNC(sub_832297B0);
PPC_FUNC_IMPL(__imp__sub_832297B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x832297B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8322980C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83229834
	if (ctx.cr6.eq) goto loc_83229834;
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83229830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83229840
	goto loc_83229840;
loc_83229834:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x83229840;
	sub_82A1CB90(ctx, base);
loc_83229840:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832269d0
	ctx.lr = 0x83229854;
	sub_832269D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322985C"))) PPC_WEAK_FUNC(sub_8322985C);
PPC_FUNC_IMPL(__imp__sub_8322985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229860"))) PPC_WEAK_FUNC(sub_83229860);
PPC_FUNC_IMPL(__imp__sub_83229860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83229868;
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
	// lwz r11,-7588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83229898
	if (!ctx.cr6.eq) goto loc_83229898;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322989c
	goto loc_8322989C;
loc_83229898:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322989C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832298B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83229934
	if (ctx.cr6.eq) goto loc_83229934;
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r10,-7584
	ctx.r3.s64 = ctx.r10.s64 + -7584;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x8322ed88
	ctx.lr = 0x832298E4;
	sub_8322ED88(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8322990c
	if (ctx.cr6.eq) goto loc_8322990C;
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
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
	ctx.lr = 0x8322990C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322990C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83226ac8
	ctx.lr = 0x83229920;
	sub_83226AC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83229934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83229934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322993C"))) PPC_WEAK_FUNC(sub_8322993C);
PPC_FUNC_IMPL(__imp__sub_8322993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229940"))) PPC_WEAK_FUNC(sub_83229940);
PPC_FUNC_IMPL(__imp__sub_83229940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83229948;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r28,460
	ctx.r31.s64 = ctx.r28.s64 + 460;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,464(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
loc_83229980:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83229994
	if (ctx.cr6.eq) goto loc_83229994;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83229998
	if (ctx.cr6.eq) goto loc_83229998;
loc_83229994:
	// twi 31,r0,22
loc_83229998:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83229a00
	if (ctx.cr6.eq) goto loc_83229A00;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832299b0
	if (!ctx.cr6.eq) goto loc_832299B0;
	// twi 31,r0,22
loc_832299B0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832299c0
	if (!ctx.cr6.eq) goto loc_832299C0;
	// twi 31,r0,22
loc_832299C0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832299e0
	if (ctx.cr6.eq) goto loc_832299E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832299E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832299E0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832299f0
	if (!ctx.cr6.eq) goto loc_832299F0;
	// twi 31,r0,22
loc_832299F0:
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8273f9d8
	ctx.lr = 0x832299FC;
	sub_8273F9D8(ctx, base);
	// b 0x83229980
	goto loc_83229980;
loc_83229A00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8246e8b0
	ctx.lr = 0x83229A2C;
	sub_8246E8B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x83229A34;
	sub_8221BE68(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r3,r28,448
	ctx.r3.s64 = ctx.r28.s64 + 448;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x829ff648
	ctx.lr = 0x83229A44;
	sub_829FF648(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r9,5736
	ctx.r7.s64 = ctx.r9.s64 + 5736;
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r31,r28,436
	ctx.r31.s64 = ctx.r28.s64 + 436;
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,436(r28)
	PPC_STORE_U32(ctx.r28.u32 + 436, ctx.r6.u32);
	// beq cr6,0x83229a9c
	if (ctx.cr6.eq) goto loc_83229A9C;
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
	// bne cr6,0x83229a98
	if (!ctx.cr6.eq) goto loc_83229A98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83229a98
	if (!ctx.cr6.eq) goto loc_83229A98;
	// bl 0x8221be68
	ctx.lr = 0x83229A98;
	sub_8221BE68(ctx, base);
loc_83229A98:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_83229A9C:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r3,r28,336
	ctx.r3.s64 = ctx.r28.s64 + 336;
	// bl 0x83221c10
	ctx.lr = 0x83229AA8;
	sub_83221C10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222aa0
	ctx.lr = 0x83229AB0;
	sub_83222AA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83229AB8"))) PPC_WEAK_FUNC(sub_83229AB8);
PPC_FUNC_IMPL(__imp__sub_83229AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83229AC0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x83229b00
	if (ctx.cr6.eq) goto loc_83229B00;
loc_83229AE4:
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
	// bne 0x83229ae4
	if (!ctx.cr0.eq) goto loc_83229AE4;
loc_83229B00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83226dc0
	ctx.lr = 0x83229B0C;
	sub_83226DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x83229B14;
	sub_829FF648(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r9,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r9.u32);
	// bl 0x8246c600
	ctx.lr = 0x83229B3C;
	sub_8246C600(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// stb r30,477(r31)
	PPC_STORE_U8(ctx.r31.u32 + 477, ctx.r30.u8);
	// stw r8,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83229B58"))) PPC_WEAK_FUNC(sub_83229B58);
PPC_FUNC_IMPL(__imp__sub_83229B58) {
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
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x83229c34
	if (ctx.cr6.gt) goto loc_83229C34;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// addi r12,r12,-25696
	ctx.r12.s64 = ctx.r12.s64 + -25696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83229BB0;
	case 1:
		goto loc_83229BD0;
	case 2:
		goto loc_83229BFC;
	case 3:
		goto loc_83229C20;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-25680(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25680);
	// lwz r25,-25648(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25648);
	// lwz r25,-25604(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25604);
	// lwz r25,-25568(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25568);
loc_83229BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822698b8
	ctx.lr = 0x83229BB8;
	sub_822698B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82269bb8
	ctx.lr = 0x83229BC4;
	sub_82269BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c71d0
	ctx.lr = 0x83229BCC;
	sub_821C71D0(ctx, base);
	// b 0x83229c34
	goto loc_83229C34;
loc_83229BD0:
	// lbz r11,477(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 477);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83229be4
	if (!ctx.cr6.eq) goto loc_83229BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271e28
	ctx.lr = 0x83229BE4;
	sub_82271E28(ctx, base);
loc_83229BE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dc680
	ctx.lr = 0x83229BF0;
	sub_821DC680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189708
	ctx.lr = 0x83229BF8;
	sub_82189708(ctx, base);
	// b 0x83229c34
	goto loc_83229C34;
loc_83229BFC:
	// lbz r11,477(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 477);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83229c10
	if (!ctx.cr6.eq) goto loc_83229C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a015b0
	ctx.lr = 0x83229C10;
	sub_82A015B0(ctx, base);
loc_83229C10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a01920
	ctx.lr = 0x83229C1C;
	sub_82A01920(ctx, base);
	// b 0x83229c34
	goto loc_83229C34;
loc_83229C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a01d50
	ctx.lr = 0x83229C28;
	sub_82A01D50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a020c0
	ctx.lr = 0x83229C34;
	sub_82A020C0(ctx, base);
loc_83229C34:
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

__attribute__((alias("__imp__sub_83229C4C"))) PPC_WEAK_FUNC(sub_83229C4C);
PPC_FUNC_IMPL(__imp__sub_83229C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229C50"))) PPC_WEAK_FUNC(sub_83229C50);
PPC_FUNC_IMPL(__imp__sub_83229C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83229C58;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x83221f50
	ctx.lr = 0x83229C6C;
	sub_83221F50(ctx, base);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r30,r31,460
	ctx.r30.s64 = ctx.r31.s64 + 460;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83229C84:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83229c98
	if (ctx.cr6.eq) goto loc_83229C98;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83229c9c
	if (ctx.cr6.eq) goto loc_83229C9C;
loc_83229C98:
	// twi 31,r0,22
loc_83229C9C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83229ce4
	if (ctx.cr6.eq) goto loc_83229CE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83229cb0
	if (!ctx.cr6.eq) goto loc_83229CB0;
	// twi 31,r0,22
loc_83229CB0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83229cc0
	if (!ctx.cr6.eq) goto loc_83229CC0;
	// twi 31,r0,22
loc_83229CC0:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x83221f50
	ctx.lr = 0x83229CD0;
	sub_83221F50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8273f9d8
	ctx.lr = 0x83229CD8;
	sub_8273F9D8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83229c84
	goto loc_83229C84;
loc_83229CE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83229CEC"))) PPC_WEAK_FUNC(sub_83229CEC);
PPC_FUNC_IMPL(__imp__sub_83229CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229CF0"))) PPC_WEAK_FUNC(sub_83229CF0);
PPC_FUNC_IMPL(__imp__sub_83229CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83229CF8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r30,448
	ctx.r28.s64 = ctx.r30.s64 + 448;
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83229d3c
	if (ctx.cr6.eq) goto loc_83229D3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829ff648
	ctx.lr = 0x83229D20;
	sub_829FF648(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83229d3c
	if (ctx.cr6.eq) goto loc_83229D3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83229D3C:
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r31,r30,460
	ctx.r31.s64 = ctx.r30.s64 + 460;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_83229D5C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83229d70
	if (ctx.cr6.eq) goto loc_83229D70;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83229d74
	if (ctx.cr6.eq) goto loc_83229D74;
loc_83229D70:
	// twi 31,r0,22
loc_83229D74:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83229db8
	if (ctx.cr6.eq) goto loc_83229DB8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83229d8c
	if (!ctx.cr6.eq) goto loc_83229D8C;
	// twi 31,r0,22
loc_83229D8C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83229d9c
	if (!ctx.cr6.eq) goto loc_83229D9C;
	// twi 31,r0,22
loc_83229D9C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x83222238
	ctx.lr = 0x83229DAC;
	sub_83222238(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8273f9d8
	ctx.lr = 0x83229DB4;
	sub_8273F9D8(ctx, base);
	// b 0x83229d5c
	goto loc_83229D5C;
loc_83229DB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83229DC0"))) PPC_WEAK_FUNC(sub_83229DC0);
PPC_FUNC_IMPL(__imp__sub_83229DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83229DC8;
	sub_82CA2BE4(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83226470
	ctx.lr = 0x83229DE4;
	sub_83226470(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r10,-7536
	ctx.r30.s64 = ctx.r10.s64 + -7536;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83229DFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83229dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83229DFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x832264f8
	ctx.lr = 0x83229E1C;
	sub_832264F8(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r10,288
	ctx.r10.s64 = 288;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8227c9f8
	ctx.lr = 0x83229E34;
	sub_8227C9F8(ctx, base);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,472(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8321e6a0
	ctx.lr = 0x83229E58;
	sub_8321E6A0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8321f598
	ctx.lr = 0x83229E70;
	sub_8321F598(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v11,r0,r8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v10,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// bl 0x8321e6a0
	ctx.lr = 0x83229E98;
	sub_8321E6A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvx128 v10,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r4,r6,-7744
	ctx.r4.s64 = ctx.r6.s64 + -7744;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v7,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stvx128 v7,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stvx128 v7,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-27468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v6,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v5,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v5,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v4,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v4,v6,4,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// addi r4,r7,-7552
	ctx.r4.s64 = ctx.r7.s64 + -7552;
	// vrlimi128 v0,v4,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r29,472(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8321f598
	ctx.lr = 0x83229F74;
	sub_8321F598(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8321e6a0
	ctx.lr = 0x83229F84;
	sub_8321E6A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8321e6a0
	ctx.lr = 0x83229F98;
	sub_8321E6A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321e6a0
	ctx.lr = 0x83229FAC;
	sub_8321E6A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v12,r0,r30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// vspltw v3,v0,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// vspltw v2,v0,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v13,r30,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v1,v0,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r30,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,27648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27648);
	// addi r30,r9,-4108
	ctx.r30.s64 = ctx.r9.s64 + -4108;
	// vmulfp128 v31,v0,v3
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
	// addi r6,r7,-7728
	ctx.r6.s64 = ctx.r7.s64 + -7728;
	// lvlx v30,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// vspltw v29,v30,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v28,v0,v29
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v29.f32)));
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// lfsx f3,r5,r4
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v27,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r9,-7760
	ctx.r7.s64 = ctx.r9.s64 + -7760;
	// lvlx v26,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v25,v26,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0xFF));
	// vmaddfp v24,v2,v13,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v31.f32)));
	// lvlx v23,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v22,v23,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,40
	ctx.r8.s64 = 40;
	// lvx128 v17,r0,r5
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,412
	ctx.r6.s64 = 412;
	// vspltw v19,v27,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), 0xFF));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvlx v21,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v18,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v20,v21,0
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), 0xFF));
	// vspltw v16,v18,0
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v18.u32), 0xFF));
	// vmaddfp v15,v1,v12,v24
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v14,v15,v25,v28
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v25.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v0,v0,v22,v14
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v22.f32)), _mm_load_ps(ctx.v14.f32)));
	// vspltw128 v63,v0,2
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v11,v17,v63
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v10,r0,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// vmaddfp v8,v13,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r10,-7568
	ctx.r9.s64 = ctx.r10.s64 + -7568;
	// vmaddfp v7,v12,v9,v8
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v6,v7,v20
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v20.f32)));
	// vmulfp128 v5,v6,v16
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v0,v5,v19
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v19.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x832265d8
	ctx.lr = 0x8322A0C4;
	sub_832265D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832222d0
	ctx.lr = 0x8322A0CC;
	sub_832222D0(ctx, base);
	// lwz r8,464(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,27648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27648);
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// addi r28,r31,460
	ctx.r28.s64 = ctx.r31.s64 + 460;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lfsx f30,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_8322A0FC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322a110
	if (ctx.cr6.eq) goto loc_8322A110;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322a114
	if (ctx.cr6.eq) goto loc_8322A114;
loc_8322A110:
	// twi 31,r0,22
loc_8322A114:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322a1f0
	if (ctx.cr6.eq) goto loc_8322A1F0;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f2,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// bne cr6,0x8322a130
	if (!ctx.cr6.eq) goto loc_8322A130;
	// twi 31,r0,22
loc_8322A130:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322a140
	if (!ctx.cr6.eq) goto loc_8322A140;
	// twi 31,r0,22
loc_8322A140:
	// addi r6,r31,320
	ctx.r6.s64 = ctx.r31.s64 + 320;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8321e4c8
	ctx.lr = 0x8322A158;
	sub_8321E4C8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322a168
	if (!ctx.cr6.eq) goto loc_8322A168;
	// twi 31,r0,22
loc_8322A168:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8322a1dc
	if (!ctx.cr6.eq) goto loc_8322A1DC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322a184
	if (!ctx.cr6.eq) goto loc_8322A184;
	// twi 31,r0,22
loc_8322A184:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322a1a0
	if (ctx.cr6.eq) goto loc_8322A1A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322A1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322A1A0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322a1b0
	if (!ctx.cr6.eq) goto loc_8322A1B0;
	// twi 31,r0,22
loc_8322A1B0:
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8273f9d8
	ctx.lr = 0x8322A1C0;
	sub_8273F9D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8246ffc8
	ctx.lr = 0x8322A1D0;
	sub_8246FFC8(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8322a0fc
	goto loc_8322A0FC;
loc_8322A1DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8273f9d8
	ctx.lr = 0x8322A1E4;
	sub_8273F9D8(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8322a0fc
	goto loc_8322A0FC;
loc_8322A1F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322A200"))) PPC_WEAK_FUNC(sub_8322A200);
PPC_FUNC_IMPL(__imp__sub_8322A200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8322A208;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8322a260
	if (ctx.cr6.lt) goto loc_8322A260;
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
	// b 0x8322a270
	goto loc_8322A270;
loc_8322A260:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322A270;
	sub_82A1B480(ctx, base);
loc_8322A270:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322a2a4
	if (ctx.cr6.eq) goto loc_8322A2A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225a20
	ctx.lr = 0x8322A28C;
	sub_83225A20(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229cf0
	ctx.lr = 0x8322A298;
	sub_83229CF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322A2A0;
	sub_829FF648(ctx, base);
	// b 0x8322a308
	goto loc_8322A308;
loc_8322A2A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322a2f8
	if (ctx.cr6.lt) goto loc_8322A2F8;
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
	// b 0x8322a308
	goto loc_8322A308;
loc_8322A2F8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322A308;
	sub_82A1B480(ctx, base);
loc_8322A308:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83227070
	ctx.lr = 0x8322A324;
	sub_83227070(ctx, base);
	// lwz r31,208(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r30,472(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323c610
	ctx.lr = 0x8322A338;
	sub_8323C610(ctx, base);
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// stb r11,224(r30)
	PPC_STORE_U8(ctx.r30.u32 + 224, ctx.r11.u8);
	// lbz r10,225(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// stb r10,225(r30)
	PPC_STORE_U8(ctx.r30.u32 + 225, ctx.r10.u8);
	// lfs f0,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8322A358"))) PPC_WEAK_FUNC(sub_8322A358);
PPC_FUNC_IMPL(__imp__sub_8322A358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8322A360;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,-7588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7588);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322a398
	if (!ctx.cr6.eq) goto loc_8322A398;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322a39c
	goto loc_8322A39C;
loc_8322A398:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322A39C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322A3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322a448
	if (ctx.cr6.eq) goto loc_8322A448;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-7584
	ctx.r3.s64 = ctx.r10.s64 + -7584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ed88
	ctx.lr = 0x8322A3D8;
	sub_8322ED88(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8322a40c
	if (ctx.cr6.eq) goto loc_8322A40C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225ae0
	ctx.lr = 0x8322A3F8;
	sub_83225AE0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229cf0
	ctx.lr = 0x8322A404;
	sub_83229CF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322A40C;
	sub_829FF648(ctx, base);
loc_8322A40C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83227238
	ctx.lr = 0x8322A428;
	sub_83227238(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8323e628
	ctx.lr = 0x8322A434;
	sub_8323E628(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322A448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322A448:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8322A450"))) PPC_WEAK_FUNC(sub_8322A450);
PPC_FUNC_IMPL(__imp__sub_8322A450) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A458"))) PPC_WEAK_FUNC(sub_8322A458);
PPC_FUNC_IMPL(__imp__sub_8322A458) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322a46c
	if (ctx.cr6.eq) goto loc_8322A46C;
	// addi r3,r3,328
	ctx.r3.s64 = ctx.r3.s64 + 328;
	// blr 
	return;
loc_8322A46C:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A478"))) PPC_WEAK_FUNC(sub_8322A478);
PPC_FUNC_IMPL(__imp__sub_8322A478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,304
	ctx.r11.s64 = 304;
	// li r10,272
	ctx.r10.s64 = 272;
	// li r9,204
	ctx.r9.s64 = 204;
	// lvx128 v0,r4,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx v11,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v12,v10
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A4A4"))) PPC_WEAK_FUNC(sub_8322A4A4);
PPC_FUNC_IMPL(__imp__sub_8322A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A4A8"))) PPC_WEAK_FUNC(sub_8322A4A8);
PPC_FUNC_IMPL(__imp__sub_8322A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322A4B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322a4d0
	if (ctx.cr6.eq) goto loc_8322A4D0;
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// b 0x8322a4d8
	goto loc_8322A4D8;
loc_8322A4D0:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
loc_8322A4D8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r30,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 4;
	// bl 0x83222d78
	ctx.lr = 0x8322A4F4;
	sub_83222D78(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r11,-27456
	ctx.r11.s64 = ctx.r11.s64 + -27456;
	// lfs f0,3040(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvlx v0,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f12,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,3088(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3088);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v8,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vrlimi128 v13,v7,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// lvlx v11,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v8,v9,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// vor v0,v12,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v13,v8,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vrlimi128 v0,v10,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// ble cr6,0x8322a638
	if (!ctx.cr6.gt) goto loc_8322A638;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v8,v12,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// lvx128 v9,r0,r7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v7,v12,v11
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v6,v10,v9
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v5,v10,v9
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v12,v7,v6
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrglw v11,v7,v6
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v10,v8,v5
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrglw v9,v8,v5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// bl 0x8322a458
	ctx.lr = 0x8322A5E4;
	sub_8322A458(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r8,r9,-28160
	ctx.r8.s64 = ctx.r9.s64 + -28160;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8322A5F8:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v8,r0,r10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v5,v8,v6,v7
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v4,v5,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v3,v5,v11
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v2,v5,v10
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v1,v5,v12
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmrghw v31,v3,v4
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v30,v1,v2
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrghw v29,v30,v31
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vminfp v0,v0,v29
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v29.f32)));
	// vmaxfp v13,v13,v29
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v29.f32)));
	// bne 0x8322a5f8
	if (!ctx.cr0.eq) goto loc_8322A5F8;
loc_8322A638:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,12(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f12,16(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// stfs f11,20(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322A6A4"))) PPC_WEAK_FUNC(sub_8322A6A4);
PPC_FUNC_IMPL(__imp__sub_8322A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A6A8"))) PPC_WEAK_FUNC(sub_8322A6A8);
PPC_FUNC_IMPL(__imp__sub_8322A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322A6B0;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r7,348(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lbz r11,216(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322a748
	if (ctx.cr6.eq) goto loc_8322A748;
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lwz r10,-31652(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322a6ec
	if (!ctx.cr6.lt) goto loc_8322A6EC;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322A6EC:
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
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// blt cr6,0x8322a724
	if (ctx.cr6.lt) goto loc_8322A724;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r6)
	PPC_STORE_U32(ctx.r6.u32 + -31652, ctx.r11.u32);
	// b 0x8322a728
	goto loc_8322A728;
loc_8322A724:
	// stw r10,-31652(r6)
	PPC_STORE_U32(ctx.r6.u32 + -31652, ctx.r10.u32);
loc_8322A728:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8322A748:
	// lbz r31,344(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 344);
	// lbz r6,226(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 226);
	// lbz r5,224(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322a764
	if (ctx.cr6.eq) goto loc_8322A764;
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// b 0x8322a76c
	goto loc_8322A76C;
loc_8322A764:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
loc_8322A76C:
	// bl 0x8322f0b0
	ctx.lr = 0x8322A770;
	sub_8322F0B0(ctx, base);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322a7ac
	if (ctx.cr6.eq) goto loc_8322A7AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a00700
	ctx.lr = 0x8322A784;
	sub_82A00700(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,80
	ctx.r10.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v0,r11,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8322A7AC:
	// stvx128 v127,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322A7C4"))) PPC_WEAK_FUNC(sub_8322A7C4);
PPC_FUNC_IMPL(__imp__sub_8322A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A7C8"))) PPC_WEAK_FUNC(sub_8322A7C8);
PPC_FUNC_IMPL(__imp__sub_8322A7C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82200d48
	ctx.lr = 0x8322A808;
	sub_82200D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8322a82c
	if (!ctx.cr6.eq) goto loc_8322A82C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-2932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2932);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8322A82C:
	// fsqrts f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f31.f64)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A844"))) PPC_WEAK_FUNC(sub_8322A844);
PPC_FUNC_IMPL(__imp__sub_8322A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A848"))) PPC_WEAK_FUNC(sub_8322A848);
PPC_FUNC_IMPL(__imp__sub_8322A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322a85c
	if (ctx.cr6.eq) goto loc_8322A85C;
	// addi r3,r3,328
	ctx.r3.s64 = ctx.r3.s64 + 328;
	// b 0x8322a864
	goto loc_8322A864;
loc_8322A85C:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
loc_8322A864:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bge cr6,0x8322a888
	if (!ctx.cr6.lt) goto loc_8322A888;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-2932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2932);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8322A888:
	// b 0x8322a7c8
	sub_8322A7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A88C"))) PPC_WEAK_FUNC(sub_8322A88C);
PPC_FUNC_IMPL(__imp__sub_8322A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A890"))) PPC_WEAK_FUNC(sub_8322A890);
PPC_FUNC_IMPL(__imp__sub_8322A890) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// addi r10,r11,22760
	ctx.r10.s64 = ctx.r11.s64 + 22760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322a8c8
	if (ctx.cr6.eq) goto loc_8322A8C8;
	// bl 0x8221be68
	ctx.lr = 0x8322A8C8;
	sub_8221BE68(ctx, base);
loc_8322A8C8:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6208
	ctx.r9.s64 = ctx.r10.s64 + 6208;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x83222aa0
	ctx.lr = 0x8322A8EC;
	sub_83222AA0(ctx, base);
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

