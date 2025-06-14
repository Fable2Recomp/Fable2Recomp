#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_832AA2F0) {
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r10,-7432
	r31.s64 = ctx.r10.s64 + -7432;
	// addi r11,r11,6468
	r11.s64 = r11.s64 + 6468;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,-7432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7432, r11.u32);
	// bl 0x8247e448
	sub_8247E448(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8247d138
	sub_8247D138(ctx, base);
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

PPC_WEAK_FUNC(sub_832AA2F0) {
	__imp__sub_832AA2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7416
	ctx.r3.s64 = r11.s64 + -7416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA338) {
	__imp__sub_832AA338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7412
	ctx.r3.s64 = r11.s64 + -7412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA348) {
	__imp__sub_832AA348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7408
	ctx.r3.s64 = r11.s64 + -7408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA358) {
	__imp__sub_832AA358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7404
	ctx.r3.s64 = r11.s64 + -7404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA368) {
	__imp__sub_832AA368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7400
	ctx.r3.s64 = r11.s64 + -7400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA378) {
	__imp__sub_832AA378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7396
	ctx.r3.s64 = r11.s64 + -7396;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA388) {
	__imp__sub_832AA388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7392
	ctx.r3.s64 = r11.s64 + -7392;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA398) {
	__imp__sub_832AA398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7388
	ctx.r3.s64 = r11.s64 + -7388;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3A8) {
	__imp__sub_832AA3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7384
	ctx.r3.s64 = r11.s64 + -7384;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3B8) {
	__imp__sub_832AA3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7380
	ctx.r3.s64 = r11.s64 + -7380;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3C8) {
	__imp__sub_832AA3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7376
	ctx.r3.s64 = r11.s64 + -7376;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3D8) {
	__imp__sub_832AA3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7372
	ctx.r3.s64 = r11.s64 + -7372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3E8) {
	__imp__sub_832AA3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7368
	ctx.r3.s64 = r11.s64 + -7368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA3F8) {
	__imp__sub_832AA3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA408) {
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r10,-7364
	r31.s64 = ctx.r10.s64 + -7364;
	// addi r11,r11,6468
	r11.s64 = r11.s64 + 6468;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,-7364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7364, r11.u32);
	// bl 0x8247e448
	sub_8247E448(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8247d138
	sub_8247D138(ctx, base);
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

PPC_WEAK_FUNC(sub_832AA408) {
	__imp__sub_832AA408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7348
	ctx.r3.s64 = r11.s64 + -7348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA450) {
	__imp__sub_832AA450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7344
	ctx.r3.s64 = r11.s64 + -7344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA460) {
	__imp__sub_832AA460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7340
	ctx.r3.s64 = r11.s64 + -7340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA470) {
	__imp__sub_832AA470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA480) {
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r10,-7336
	r31.s64 = ctx.r10.s64 + -7336;
	// addi r11,r11,6468
	r11.s64 = r11.s64 + 6468;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,-7336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7336, r11.u32);
	// bl 0x8247e448
	sub_8247E448(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8247d138
	sub_8247D138(ctx, base);
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

PPC_WEAK_FUNC(sub_832AA480) {
	__imp__sub_832AA480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7320
	ctx.r3.s64 = r11.s64 + -7320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA4C8) {
	__imp__sub_832AA4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7316
	ctx.r3.s64 = r11.s64 + -7316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA4D8) {
	__imp__sub_832AA4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7312
	ctx.r3.s64 = r11.s64 + -7312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA4E8) {
	__imp__sub_832AA4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7308
	ctx.r3.s64 = r11.s64 + -7308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA4F8) {
	__imp__sub_832AA4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AA508) {
	__imp__sub_832AA508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7300
	ctx.r3.s64 = r11.s64 + -7300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA510) {
	__imp__sub_832AA510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7296
	ctx.r3.s64 = r11.s64 + -7296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA520) {
	__imp__sub_832AA520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7292
	ctx.r3.s64 = r11.s64 + -7292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA530) {
	__imp__sub_832AA530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA540) {
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r10,-7288
	r31.s64 = ctx.r10.s64 + -7288;
	// addi r11,r11,6468
	r11.s64 = r11.s64 + 6468;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,-7288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7288, r11.u32);
	// bl 0x8247e448
	sub_8247E448(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8247d138
	sub_8247D138(ctx, base);
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

PPC_WEAK_FUNC(sub_832AA540) {
	__imp__sub_832AA540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7272
	ctx.r3.s64 = r11.s64 + -7272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA588) {
	__imp__sub_832AA588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7268
	ctx.r3.s64 = r11.s64 + -7268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA598) {
	__imp__sub_832AA598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7264
	ctx.r3.s64 = r11.s64 + -7264;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5A8) {
	__imp__sub_832AA5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7260
	ctx.r3.s64 = r11.s64 + -7260;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5B8) {
	__imp__sub_832AA5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7256
	ctx.r3.s64 = r11.s64 + -7256;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5C8) {
	__imp__sub_832AA5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7252
	ctx.r3.s64 = r11.s64 + -7252;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5D8) {
	__imp__sub_832AA5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7248
	ctx.r3.s64 = r11.s64 + -7248;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5E8) {
	__imp__sub_832AA5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7244
	ctx.r3.s64 = r11.s64 + -7244;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA5F8) {
	__imp__sub_832AA5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7240
	ctx.r3.s64 = r11.s64 + -7240;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA608) {
	__imp__sub_832AA608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7236
	ctx.r3.s64 = r11.s64 + -7236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA618) {
	__imp__sub_832AA618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7232
	ctx.r3.s64 = r11.s64 + -7232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA628) {
	__imp__sub_832AA628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7228
	ctx.r3.s64 = r11.s64 + -7228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA638) {
	__imp__sub_832AA638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7224
	ctx.r3.s64 = r11.s64 + -7224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA648) {
	__imp__sub_832AA648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7220
	ctx.r3.s64 = r11.s64 + -7220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA658) {
	__imp__sub_832AA658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7216
	ctx.r3.s64 = r11.s64 + -7216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA668) {
	__imp__sub_832AA668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7212
	ctx.r3.s64 = r11.s64 + -7212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA678) {
	__imp__sub_832AA678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7208
	ctx.r3.s64 = r11.s64 + -7208;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA688) {
	__imp__sub_832AA688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7204
	ctx.r3.s64 = r11.s64 + -7204;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA698) {
	__imp__sub_832AA698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7200
	ctx.r3.s64 = r11.s64 + -7200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6A8) {
	__imp__sub_832AA6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7196
	ctx.r3.s64 = r11.s64 + -7196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6B8) {
	__imp__sub_832AA6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7192
	ctx.r3.s64 = r11.s64 + -7192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6C8) {
	__imp__sub_832AA6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7188
	ctx.r3.s64 = r11.s64 + -7188;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6D8) {
	__imp__sub_832AA6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7184
	ctx.r3.s64 = r11.s64 + -7184;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6E8) {
	__imp__sub_832AA6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7180
	ctx.r3.s64 = r11.s64 + -7180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA6F8) {
	__imp__sub_832AA6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7176
	ctx.r3.s64 = r11.s64 + -7176;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA708) {
	__imp__sub_832AA708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7172
	ctx.r3.s64 = r11.s64 + -7172;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA718) {
	__imp__sub_832AA718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7168
	ctx.r3.s64 = r11.s64 + -7168;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA728) {
	__imp__sub_832AA728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7164
	ctx.r3.s64 = r11.s64 + -7164;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA738) {
	__imp__sub_832AA738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7160
	ctx.r3.s64 = r11.s64 + -7160;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA748) {
	__imp__sub_832AA748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7156
	ctx.r3.s64 = r11.s64 + -7156;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA758) {
	__imp__sub_832AA758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7152
	ctx.r3.s64 = r11.s64 + -7152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA768) {
	__imp__sub_832AA768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7148
	ctx.r3.s64 = r11.s64 + -7148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA778) {
	__imp__sub_832AA778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7144
	ctx.r3.s64 = r11.s64 + -7144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA788) {
	__imp__sub_832AA788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7140
	ctx.r3.s64 = r11.s64 + -7140;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA798) {
	__imp__sub_832AA798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7136
	ctx.r3.s64 = r11.s64 + -7136;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7A8) {
	__imp__sub_832AA7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7132
	ctx.r3.s64 = r11.s64 + -7132;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7B8) {
	__imp__sub_832AA7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7128
	ctx.r3.s64 = r11.s64 + -7128;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7C8) {
	__imp__sub_832AA7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7124
	ctx.r3.s64 = r11.s64 + -7124;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7D8) {
	__imp__sub_832AA7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7120
	ctx.r3.s64 = r11.s64 + -7120;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7E8) {
	__imp__sub_832AA7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7116
	ctx.r3.s64 = r11.s64 + -7116;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA7F8) {
	__imp__sub_832AA7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7112
	ctx.r3.s64 = r11.s64 + -7112;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA808) {
	__imp__sub_832AA808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7108
	ctx.r3.s64 = r11.s64 + -7108;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA818) {
	__imp__sub_832AA818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7104
	ctx.r3.s64 = r11.s64 + -7104;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA828) {
	__imp__sub_832AA828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7100
	ctx.r3.s64 = r11.s64 + -7100;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA838) {
	__imp__sub_832AA838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7096
	ctx.r3.s64 = r11.s64 + -7096;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA848) {
	__imp__sub_832AA848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7092
	ctx.r3.s64 = r11.s64 + -7092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA858) {
	__imp__sub_832AA858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7088
	ctx.r3.s64 = r11.s64 + -7088;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA868) {
	__imp__sub_832AA868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7084
	ctx.r3.s64 = r11.s64 + -7084;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA878) {
	__imp__sub_832AA878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7080
	ctx.r3.s64 = r11.s64 + -7080;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA888) {
	__imp__sub_832AA888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7076
	ctx.r3.s64 = r11.s64 + -7076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA898) {
	__imp__sub_832AA898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7072
	ctx.r3.s64 = r11.s64 + -7072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8A8) {
	__imp__sub_832AA8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7068
	ctx.r3.s64 = r11.s64 + -7068;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8B8) {
	__imp__sub_832AA8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7064
	ctx.r3.s64 = r11.s64 + -7064;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8C8) {
	__imp__sub_832AA8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7060
	ctx.r3.s64 = r11.s64 + -7060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8D8) {
	__imp__sub_832AA8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7056
	ctx.r3.s64 = r11.s64 + -7056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8E8) {
	__imp__sub_832AA8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7052
	ctx.r3.s64 = r11.s64 + -7052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA8F8) {
	__imp__sub_832AA8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7048
	ctx.r3.s64 = r11.s64 + -7048;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA908) {
	__imp__sub_832AA908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-7044
	ctx.r3.s64 = r11.s64 + -7044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AA918) {
	__imp__sub_832AA918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA928) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,14272
	r31.s64 = r11.s64 + 14272;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aa950
	if (cr6.eq) goto loc_832AA950;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AA950:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AA928) {
	__imp__sub_832AA928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA980) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,14292
	r31.s64 = r11.s64 + 14292;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aa9a8
	if (cr6.eq) goto loc_832AA9A8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AA9A8:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AA980) {
	__imp__sub_832AA980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AA9D8) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,14312
	r31.s64 = r11.s64 + 14312;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aaa00
	if (cr6.eq) goto loc_832AAA00;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AAA00:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AA9D8) {
	__imp__sub_832AA9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6976
	ctx.r3.s64 = r11.s64 + -6976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA30) {
	__imp__sub_832AAA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6972
	ctx.r3.s64 = r11.s64 + -6972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA40) {
	__imp__sub_832AAA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6968
	ctx.r3.s64 = r11.s64 + -6968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA50) {
	__imp__sub_832AAA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6964
	ctx.r3.s64 = r11.s64 + -6964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA60) {
	__imp__sub_832AAA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6960
	ctx.r3.s64 = r11.s64 + -6960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA70) {
	__imp__sub_832AAA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6956
	ctx.r3.s64 = r11.s64 + -6956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA80) {
	__imp__sub_832AAA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6952
	ctx.r3.s64 = r11.s64 + -6952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAA90) {
	__imp__sub_832AAA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6948
	ctx.r3.s64 = r11.s64 + -6948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAA0) {
	__imp__sub_832AAAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6944
	ctx.r3.s64 = r11.s64 + -6944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAB0) {
	__imp__sub_832AAAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6940
	ctx.r3.s64 = r11.s64 + -6940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAC0) {
	__imp__sub_832AAAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6936
	ctx.r3.s64 = r11.s64 + -6936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAD0) {
	__imp__sub_832AAAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6932
	ctx.r3.s64 = r11.s64 + -6932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAE0) {
	__imp__sub_832AAAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6928
	ctx.r3.s64 = r11.s64 + -6928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAAF0) {
	__imp__sub_832AAAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6924
	ctx.r3.s64 = r11.s64 + -6924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB00) {
	__imp__sub_832AAB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6920
	ctx.r3.s64 = r11.s64 + -6920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB10) {
	__imp__sub_832AAB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6916
	ctx.r3.s64 = r11.s64 + -6916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB20) {
	__imp__sub_832AAB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6912
	ctx.r3.s64 = r11.s64 + -6912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB30) {
	__imp__sub_832AAB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6908
	ctx.r3.s64 = r11.s64 + -6908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB40) {
	__imp__sub_832AAB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6904
	ctx.r3.s64 = r11.s64 + -6904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB50) {
	__imp__sub_832AAB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6900
	ctx.r3.s64 = r11.s64 + -6900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB60) {
	__imp__sub_832AAB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6896
	ctx.r3.s64 = r11.s64 + -6896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB70) {
	__imp__sub_832AAB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6892
	ctx.r3.s64 = r11.s64 + -6892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB80) {
	__imp__sub_832AAB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6888
	ctx.r3.s64 = r11.s64 + -6888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAB90) {
	__imp__sub_832AAB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6884
	ctx.r3.s64 = r11.s64 + -6884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABA0) {
	__imp__sub_832AABA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6880
	ctx.r3.s64 = r11.s64 + -6880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABB0) {
	__imp__sub_832AABB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6876
	ctx.r3.s64 = r11.s64 + -6876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABC0) {
	__imp__sub_832AABC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABD0) {
	__imp__sub_832AABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6868
	ctx.r3.s64 = r11.s64 + -6868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABE0) {
	__imp__sub_832AABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AABF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6864
	ctx.r3.s64 = r11.s64 + -6864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AABF0) {
	__imp__sub_832AABF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6860
	ctx.r3.s64 = r11.s64 + -6860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC00) {
	__imp__sub_832AAC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6856
	ctx.r3.s64 = r11.s64 + -6856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC10) {
	__imp__sub_832AAC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6852
	ctx.r3.s64 = r11.s64 + -6852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC20) {
	__imp__sub_832AAC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6848
	ctx.r3.s64 = r11.s64 + -6848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC30) {
	__imp__sub_832AAC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6844
	ctx.r3.s64 = r11.s64 + -6844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC40) {
	__imp__sub_832AAC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6840
	ctx.r3.s64 = r11.s64 + -6840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC50) {
	__imp__sub_832AAC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6836
	ctx.r3.s64 = r11.s64 + -6836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC60) {
	__imp__sub_832AAC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6768
	ctx.r3.s64 = r11.s64 + -6768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC70) {
	__imp__sub_832AAC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6764
	ctx.r3.s64 = r11.s64 + -6764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC80) {
	__imp__sub_832AAC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6760
	ctx.r3.s64 = r11.s64 + -6760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAC90) {
	__imp__sub_832AAC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6756
	ctx.r3.s64 = r11.s64 + -6756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACA0) {
	__imp__sub_832AACA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6752
	ctx.r3.s64 = r11.s64 + -6752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACB0) {
	__imp__sub_832AACB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6748
	ctx.r3.s64 = r11.s64 + -6748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACC0) {
	__imp__sub_832AACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6744
	ctx.r3.s64 = r11.s64 + -6744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACD0) {
	__imp__sub_832AACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6740
	ctx.r3.s64 = r11.s64 + -6740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACE0) {
	__imp__sub_832AACE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AACF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6736
	ctx.r3.s64 = r11.s64 + -6736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AACF0) {
	__imp__sub_832AACF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6732
	ctx.r3.s64 = r11.s64 + -6732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD00) {
	__imp__sub_832AAD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6728
	ctx.r3.s64 = r11.s64 + -6728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD10) {
	__imp__sub_832AAD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6724
	ctx.r3.s64 = r11.s64 + -6724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD20) {
	__imp__sub_832AAD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6720
	ctx.r3.s64 = r11.s64 + -6720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD30) {
	__imp__sub_832AAD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6716
	ctx.r3.s64 = r11.s64 + -6716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD40) {
	__imp__sub_832AAD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6712
	ctx.r3.s64 = r11.s64 + -6712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD50) {
	__imp__sub_832AAD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6708
	ctx.r3.s64 = r11.s64 + -6708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD60) {
	__imp__sub_832AAD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6704
	ctx.r3.s64 = r11.s64 + -6704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD70) {
	__imp__sub_832AAD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6700
	ctx.r3.s64 = r11.s64 + -6700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD80) {
	__imp__sub_832AAD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6696
	ctx.r3.s64 = r11.s64 + -6696;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAD90) {
	__imp__sub_832AAD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6692
	ctx.r3.s64 = r11.s64 + -6692;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADA0) {
	__imp__sub_832AADA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6688
	ctx.r3.s64 = r11.s64 + -6688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADB0) {
	__imp__sub_832AADB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6684
	ctx.r3.s64 = r11.s64 + -6684;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADC0) {
	__imp__sub_832AADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6680
	ctx.r3.s64 = r11.s64 + -6680;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADD0) {
	__imp__sub_832AADD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6676
	ctx.r3.s64 = r11.s64 + -6676;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADE0) {
	__imp__sub_832AADE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6672
	ctx.r3.s64 = r11.s64 + -6672;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AADF0) {
	__imp__sub_832AADF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6668
	ctx.r3.s64 = r11.s64 + -6668;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE00) {
	__imp__sub_832AAE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6664
	ctx.r3.s64 = r11.s64 + -6664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE10) {
	__imp__sub_832AAE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6660
	ctx.r3.s64 = r11.s64 + -6660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE20) {
	__imp__sub_832AAE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6656
	ctx.r3.s64 = r11.s64 + -6656;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE30) {
	__imp__sub_832AAE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6652
	ctx.r3.s64 = r11.s64 + -6652;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE40) {
	__imp__sub_832AAE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6648
	ctx.r3.s64 = r11.s64 + -6648;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE50) {
	__imp__sub_832AAE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6644
	ctx.r3.s64 = r11.s64 + -6644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE60) {
	__imp__sub_832AAE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6640
	ctx.r3.s64 = r11.s64 + -6640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE70) {
	__imp__sub_832AAE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6636
	ctx.r3.s64 = r11.s64 + -6636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE80) {
	__imp__sub_832AAE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6632
	ctx.r3.s64 = r11.s64 + -6632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAE90) {
	__imp__sub_832AAE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6628
	ctx.r3.s64 = r11.s64 + -6628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAEA0) {
	__imp__sub_832AAEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6624
	ctx.r3.s64 = r11.s64 + -6624;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAEB0) {
	__imp__sub_832AAEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6620
	ctx.r3.s64 = r11.s64 + -6620;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAEC0) {
	__imp__sub_832AAEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6616
	ctx.r3.s64 = r11.s64 + -6616;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAED0) {
	__imp__sub_832AAED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6612
	ctx.r3.s64 = r11.s64 + -6612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAEE0) {
	__imp__sub_832AAEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6608
	ctx.r3.s64 = r11.s64 + -6608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAEF0) {
	__imp__sub_832AAEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6604
	ctx.r3.s64 = r11.s64 + -6604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF00) {
	__imp__sub_832AAF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6600
	ctx.r3.s64 = r11.s64 + -6600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF10) {
	__imp__sub_832AAF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6596
	ctx.r3.s64 = r11.s64 + -6596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF20) {
	__imp__sub_832AAF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6592
	ctx.r3.s64 = r11.s64 + -6592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF30) {
	__imp__sub_832AAF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6588
	ctx.r3.s64 = r11.s64 + -6588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF40) {
	__imp__sub_832AAF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6584
	ctx.r3.s64 = r11.s64 + -6584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF50) {
	__imp__sub_832AAF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6580
	ctx.r3.s64 = r11.s64 + -6580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF60) {
	__imp__sub_832AAF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6576
	ctx.r3.s64 = r11.s64 + -6576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF70) {
	__imp__sub_832AAF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6572
	ctx.r3.s64 = r11.s64 + -6572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF80) {
	__imp__sub_832AAF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6568
	ctx.r3.s64 = r11.s64 + -6568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAF90) {
	__imp__sub_832AAF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6564
	ctx.r3.s64 = r11.s64 + -6564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFA0) {
	__imp__sub_832AAFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6560
	ctx.r3.s64 = r11.s64 + -6560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFB0) {
	__imp__sub_832AAFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6556
	ctx.r3.s64 = r11.s64 + -6556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFC0) {
	__imp__sub_832AAFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6552
	ctx.r3.s64 = r11.s64 + -6552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFD0) {
	__imp__sub_832AAFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6548
	ctx.r3.s64 = r11.s64 + -6548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFE0) {
	__imp__sub_832AAFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AAFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6544
	ctx.r3.s64 = r11.s64 + -6544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AAFF0) {
	__imp__sub_832AAFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6540
	ctx.r3.s64 = r11.s64 + -6540;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB000) {
	__imp__sub_832AB000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6536
	ctx.r3.s64 = r11.s64 + -6536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB010) {
	__imp__sub_832AB010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6532
	ctx.r3.s64 = r11.s64 + -6532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB020) {
	__imp__sub_832AB020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6528
	ctx.r3.s64 = r11.s64 + -6528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB030) {
	__imp__sub_832AB030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6524
	ctx.r3.s64 = r11.s64 + -6524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB040) {
	__imp__sub_832AB040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6520
	ctx.r3.s64 = r11.s64 + -6520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB050) {
	__imp__sub_832AB050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6516
	ctx.r3.s64 = r11.s64 + -6516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB060) {
	__imp__sub_832AB060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6512
	ctx.r3.s64 = r11.s64 + -6512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB070) {
	__imp__sub_832AB070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6508
	ctx.r3.s64 = r11.s64 + -6508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB080) {
	__imp__sub_832AB080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6504
	ctx.r3.s64 = r11.s64 + -6504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB090) {
	__imp__sub_832AB090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6500
	ctx.r3.s64 = r11.s64 + -6500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0A0) {
	__imp__sub_832AB0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6496
	ctx.r3.s64 = r11.s64 + -6496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0B0) {
	__imp__sub_832AB0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6492
	ctx.r3.s64 = r11.s64 + -6492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0C0) {
	__imp__sub_832AB0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6488
	ctx.r3.s64 = r11.s64 + -6488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0D0) {
	__imp__sub_832AB0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6484
	ctx.r3.s64 = r11.s64 + -6484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0E0) {
	__imp__sub_832AB0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6480
	ctx.r3.s64 = r11.s64 + -6480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB0F0) {
	__imp__sub_832AB0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6476
	ctx.r3.s64 = r11.s64 + -6476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB100) {
	__imp__sub_832AB100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6472
	ctx.r3.s64 = r11.s64 + -6472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB110) {
	__imp__sub_832AB110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6468
	ctx.r3.s64 = r11.s64 + -6468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB120) {
	__imp__sub_832AB120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB130) {
	__imp__sub_832AB130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6460
	ctx.r3.s64 = r11.s64 + -6460;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB140) {
	__imp__sub_832AB140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,13748
	ctx.r3.s64 = r11.s64 + 13748;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB150) {
	__imp__sub_832AB150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,13732
	ctx.r3.s64 = r11.s64 + 13732;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB160) {
	__imp__sub_832AB160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,13716
	ctx.r3.s64 = r11.s64 + 13716;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB170) {
	__imp__sub_832AB170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,13700
	ctx.r3.s64 = r11.s64 + 13700;
	// b 0x826a4978
	sub_826A4978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB180) {
	__imp__sub_832AB180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6456
	ctx.r3.s64 = r11.s64 + -6456;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB190) {
	__imp__sub_832AB190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6452
	ctx.r3.s64 = r11.s64 + -6452;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1A0) {
	__imp__sub_832AB1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6448
	ctx.r3.s64 = r11.s64 + -6448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1B0) {
	__imp__sub_832AB1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6444
	ctx.r3.s64 = r11.s64 + -6444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1C0) {
	__imp__sub_832AB1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6440
	ctx.r3.s64 = r11.s64 + -6440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1D0) {
	__imp__sub_832AB1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6436
	ctx.r3.s64 = r11.s64 + -6436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1E0) {
	__imp__sub_832AB1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6432
	ctx.r3.s64 = r11.s64 + -6432;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB1F0) {
	__imp__sub_832AB1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6428
	ctx.r3.s64 = r11.s64 + -6428;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB200) {
	__imp__sub_832AB200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6424
	ctx.r3.s64 = r11.s64 + -6424;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB210) {
	__imp__sub_832AB210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6420
	ctx.r3.s64 = r11.s64 + -6420;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB220) {
	__imp__sub_832AB220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB230) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-6412
	r31.s64 = r11.s64 + -6412;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832ab290
	if (cr6.eq) goto loc_832AB290;
loc_832AB274:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x832ab274
	if (!cr6.eq) goto loc_832AB274;
loc_832AB290:
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB230) {
	__imp__sub_832AB230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB2B8) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-6400
	r31.s64 = r11.s64 + -6400;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab2e0
	if (cr6.eq) goto loc_832AB2E0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB2E0:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AB2B8) {
	__imp__sub_832AB2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6384
	ctx.r3.s64 = r11.s64 + -6384;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB310) {
	__imp__sub_832AB310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6380
	ctx.r3.s64 = r11.s64 + -6380;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB320) {
	__imp__sub_832AB320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB330) {
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-6376) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-6376(r31)
	PPC_STORE_U32(r31.u32 + -6376, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB330) {
	__imp__sub_832AB330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6372
	ctx.r3.s64 = r11.s64 + -6372;
	// b 0x823b0aa8
	sub_823B0AA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB368) {
	__imp__sub_832AB368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6360
	ctx.r3.s64 = r11.s64 + -6360;
	// b 0x823b0aa8
	sub_823B0AA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB378) {
	__imp__sub_832AB378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6348
	ctx.r3.s64 = r11.s64 + -6348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB388) {
	__imp__sub_832AB388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6344
	ctx.r3.s64 = r11.s64 + -6344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB398) {
	__imp__sub_832AB398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6320
	ctx.r3.s64 = r11.s64 + -6320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB3A8) {
	__imp__sub_832AB3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6316
	ctx.r3.s64 = r11.s64 + -6316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB3B8) {
	__imp__sub_832AB3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r29,14
	r29.s64 = 14;
	// addi r11,r11,-6312
	r11.s64 = r11.s64 + -6312;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,248
	r31.s64 = r11.s64 + 248;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_832AB3F0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_832AB400:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832ab400
	if (!cr0.eq) goto loc_832AB400;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_832AB42C:
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
	// bne 0x832ab42c
	if (!cr0.eq) goto loc_832AB42C;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_832AB458:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x832ab458
	if (!cr0.eq) goto loc_832AB458;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
	// bge 0x832ab3f0
	if (!cr0.lt) goto loc_832AB3F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832AB3C8) {
	__imp__sub_832AB3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r29,193
	r29.s64 = 193;
	// addi r11,r11,-6072
	r11.s64 = r11.s64 + -6072;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,3112
	r31.s64 = r11.s64 + 3112;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_832AB4B0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_832AB4C0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832ab4c0
	if (!cr0.eq) goto loc_832AB4C0;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_832AB4EC:
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
	// bne 0x832ab4ec
	if (!cr0.eq) goto loc_832AB4EC;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_832AB518:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x832ab518
	if (!cr0.eq) goto loc_832AB518;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
	// bge 0x832ab4b0
	if (!cr0.lt) goto loc_832AB4B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832AB488) {
	__imp__sub_832AB488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AB548) {
	__imp__sub_832AB548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AB550) {
	__imp__sub_832AB550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AB558) {
	__imp__sub_832AB558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AB560) {
	__imp__sub_832AB560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2952
	ctx.r3.s64 = r11.s64 + -2952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB568) {
	__imp__sub_832AB568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2948
	ctx.r3.s64 = r11.s64 + -2948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB578) {
	__imp__sub_832AB578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2944
	ctx.r3.s64 = r11.s64 + -2944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB588) {
	__imp__sub_832AB588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2940
	ctx.r3.s64 = r11.s64 + -2940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB598) {
	__imp__sub_832AB598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2936
	ctx.r3.s64 = r11.s64 + -2936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB5A8) {
	__imp__sub_832AB5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2932
	ctx.r3.s64 = r11.s64 + -2932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB5B8) {
	__imp__sub_832AB5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2928
	ctx.r3.s64 = r11.s64 + -2928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB5C8) {
	__imp__sub_832AB5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2924
	ctx.r3.s64 = r11.s64 + -2924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB5D8) {
	__imp__sub_832AB5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2920
	ctx.r3.s64 = r11.s64 + -2920;
	// b 0x82a49878
	sub_82A49878(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB5E8) {
	__imp__sub_832AB5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB5F8) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-2904
	r31.s64 = r11.s64 + -2904;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab620
	if (cr6.eq) goto loc_832AB620;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB620:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AB5F8) {
	__imp__sub_832AB5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2888
	ctx.r3.s64 = r11.s64 + -2888;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AB650) {
	__imp__sub_832AB650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB660) {
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
	// addi r31,r11,-2872
	r31.s64 = r11.s64 + -2872;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_832AB660) {
	__imp__sub_832AB660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-2856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-2856) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832AB6B0) {
	__imp__sub_832AB6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AB6D0) {
	__imp__sub_832AB6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB6D8) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2852(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2852) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab70c
	if (cr6.eq) goto loc_832AB70C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275238
	sub_82275238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB70C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2852(r30)
	PPC_STORE_U32(r30.u32 + -2852, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB6D8) {
	__imp__sub_832AB6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB730) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2848(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2848) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab764
	if (cr6.eq) goto loc_832AB764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB764:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2848(r30)
	PPC_STORE_U32(r30.u32 + -2848, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB730) {
	__imp__sub_832AB730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB788) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2844(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2844) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab7bc
	if (cr6.eq) goto loc_832AB7BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB7BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2844(r30)
	PPC_STORE_U32(r30.u32 + -2844, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB788) {
	__imp__sub_832AB788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB7E0) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2840(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2840) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab814
	if (cr6.eq) goto loc_832AB814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB814:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2840(r30)
	PPC_STORE_U32(r30.u32 + -2840, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB7E0) {
	__imp__sub_832AB7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB838) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2836(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2836) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab86c
	if (cr6.eq) goto loc_832AB86C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB86C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2836(r30)
	PPC_STORE_U32(r30.u32 + -2836, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB838) {
	__imp__sub_832AB838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB890) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2832(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2832) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab8c4
	if (cr6.eq) goto loc_832AB8C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB8C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2832(r30)
	PPC_STORE_U32(r30.u32 + -2832, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB890) {
	__imp__sub_832AB890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB8E8) {
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2828(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-2828) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab91c
	if (cr6.eq) goto loc_832AB91C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB91C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2828(r30)
	PPC_STORE_U32(r30.u32 + -2828, r11.u32);
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

PPC_WEAK_FUNC(sub_832AB8E8) {
	__imp__sub_832AB8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AB940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-2824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-2824) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab9a0
	if (cr6.eq) goto loc_832AB9A0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AB964:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832ab964
	if (!cr0.eq) goto loc_832AB964;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ab998
	if (!cr6.eq) goto loc_832AB998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AB998:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2824(r31)
	PPC_STORE_U32(r31.u32 + -2824, r11.u32);
loc_832AB9A0:
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

PPC_WEAK_FUNC(sub_832AB940) {
	__imp__sub_832AB940(ctx, base);
}

