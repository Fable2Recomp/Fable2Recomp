#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A59EC"))) PPC_WEAK_FUNC(sub_832A59EC);
PPC_FUNC_IMPL(__imp__sub_832A59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A59F0"))) PPC_WEAK_FUNC(sub_832A59F0);
PPC_FUNC_IMPL(__imp__sub_832A59F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A59FC"))) PPC_WEAK_FUNC(sub_832A59FC);
PPC_FUNC_IMPL(__imp__sub_832A59FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5A00"))) PPC_WEAK_FUNC(sub_832A5A00);
PPC_FUNC_IMPL(__imp__sub_832A5A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19948
	ctx.r3.s64 = ctx.r11.s64 + -19948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5A0C"))) PPC_WEAK_FUNC(sub_832A5A0C);
PPC_FUNC_IMPL(__imp__sub_832A5A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5A10"))) PPC_WEAK_FUNC(sub_832A5A10);
PPC_FUNC_IMPL(__imp__sub_832A5A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19944
	ctx.r3.s64 = ctx.r11.s64 + -19944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5A1C"))) PPC_WEAK_FUNC(sub_832A5A1C);
PPC_FUNC_IMPL(__imp__sub_832A5A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5A20"))) PPC_WEAK_FUNC(sub_832A5A20);
PPC_FUNC_IMPL(__imp__sub_832A5A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19940
	ctx.r3.s64 = ctx.r11.s64 + -19940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5A2C"))) PPC_WEAK_FUNC(sub_832A5A2C);
PPC_FUNC_IMPL(__imp__sub_832A5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5A30"))) PPC_WEAK_FUNC(sub_832A5A30);
PPC_FUNC_IMPL(__imp__sub_832A5A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5A3C"))) PPC_WEAK_FUNC(sub_832A5A3C);
PPC_FUNC_IMPL(__imp__sub_832A5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5A40"))) PPC_WEAK_FUNC(sub_832A5A40);
PPC_FUNC_IMPL(__imp__sub_832A5A40) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-19932
	ctx.r31.s64 = ctx.r11.s64 + -19932;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a5a78
	if (ctx.cr6.eq) goto loc_832A5A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a86b88
	ctx.lr = 0x832A5A70;
	sub_82A86B88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A5A78;
	sub_8221BE68(ctx, base);
loc_832A5A78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A5AA4"))) PPC_WEAK_FUNC(sub_832A5AA4);
PPC_FUNC_IMPL(__imp__sub_832A5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AA8"))) PPC_WEAK_FUNC(sub_832A5AA8);
PPC_FUNC_IMPL(__imp__sub_832A5AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5AAC"))) PPC_WEAK_FUNC(sub_832A5AAC);
PPC_FUNC_IMPL(__imp__sub_832A5AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AB0"))) PPC_WEAK_FUNC(sub_832A5AB0);
PPC_FUNC_IMPL(__imp__sub_832A5AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19916
	ctx.r3.s64 = ctx.r11.s64 + -19916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5ABC"))) PPC_WEAK_FUNC(sub_832A5ABC);
PPC_FUNC_IMPL(__imp__sub_832A5ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AC0"))) PPC_WEAK_FUNC(sub_832A5AC0);
PPC_FUNC_IMPL(__imp__sub_832A5AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5ACC"))) PPC_WEAK_FUNC(sub_832A5ACC);
PPC_FUNC_IMPL(__imp__sub_832A5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AD0"))) PPC_WEAK_FUNC(sub_832A5AD0);
PPC_FUNC_IMPL(__imp__sub_832A5AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19908
	ctx.r3.s64 = ctx.r11.s64 + -19908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5ADC"))) PPC_WEAK_FUNC(sub_832A5ADC);
PPC_FUNC_IMPL(__imp__sub_832A5ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AE0"))) PPC_WEAK_FUNC(sub_832A5AE0);
PPC_FUNC_IMPL(__imp__sub_832A5AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5AEC"))) PPC_WEAK_FUNC(sub_832A5AEC);
PPC_FUNC_IMPL(__imp__sub_832A5AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AF0"))) PPC_WEAK_FUNC(sub_832A5AF0);
PPC_FUNC_IMPL(__imp__sub_832A5AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19900
	ctx.r3.s64 = ctx.r11.s64 + -19900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5AFC"))) PPC_WEAK_FUNC(sub_832A5AFC);
PPC_FUNC_IMPL(__imp__sub_832A5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B00"))) PPC_WEAK_FUNC(sub_832A5B00);
PPC_FUNC_IMPL(__imp__sub_832A5B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B0C"))) PPC_WEAK_FUNC(sub_832A5B0C);
PPC_FUNC_IMPL(__imp__sub_832A5B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B10"))) PPC_WEAK_FUNC(sub_832A5B10);
PPC_FUNC_IMPL(__imp__sub_832A5B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19892
	ctx.r3.s64 = ctx.r11.s64 + -19892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B1C"))) PPC_WEAK_FUNC(sub_832A5B1C);
PPC_FUNC_IMPL(__imp__sub_832A5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B20"))) PPC_WEAK_FUNC(sub_832A5B20);
PPC_FUNC_IMPL(__imp__sub_832A5B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B2C"))) PPC_WEAK_FUNC(sub_832A5B2C);
PPC_FUNC_IMPL(__imp__sub_832A5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B30"))) PPC_WEAK_FUNC(sub_832A5B30);
PPC_FUNC_IMPL(__imp__sub_832A5B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19884
	ctx.r3.s64 = ctx.r11.s64 + -19884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B3C"))) PPC_WEAK_FUNC(sub_832A5B3C);
PPC_FUNC_IMPL(__imp__sub_832A5B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B40"))) PPC_WEAK_FUNC(sub_832A5B40);
PPC_FUNC_IMPL(__imp__sub_832A5B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B4C"))) PPC_WEAK_FUNC(sub_832A5B4C);
PPC_FUNC_IMPL(__imp__sub_832A5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B50"))) PPC_WEAK_FUNC(sub_832A5B50);
PPC_FUNC_IMPL(__imp__sub_832A5B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19876
	ctx.r3.s64 = ctx.r11.s64 + -19876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B5C"))) PPC_WEAK_FUNC(sub_832A5B5C);
PPC_FUNC_IMPL(__imp__sub_832A5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B60"))) PPC_WEAK_FUNC(sub_832A5B60);
PPC_FUNC_IMPL(__imp__sub_832A5B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B6C"))) PPC_WEAK_FUNC(sub_832A5B6C);
PPC_FUNC_IMPL(__imp__sub_832A5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B70"))) PPC_WEAK_FUNC(sub_832A5B70);
PPC_FUNC_IMPL(__imp__sub_832A5B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19868
	ctx.r3.s64 = ctx.r11.s64 + -19868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B7C"))) PPC_WEAK_FUNC(sub_832A5B7C);
PPC_FUNC_IMPL(__imp__sub_832A5B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B80"))) PPC_WEAK_FUNC(sub_832A5B80);
PPC_FUNC_IMPL(__imp__sub_832A5B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B8C"))) PPC_WEAK_FUNC(sub_832A5B8C);
PPC_FUNC_IMPL(__imp__sub_832A5B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5B90"))) PPC_WEAK_FUNC(sub_832A5B90);
PPC_FUNC_IMPL(__imp__sub_832A5B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19860
	ctx.r3.s64 = ctx.r11.s64 + -19860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5B9C"))) PPC_WEAK_FUNC(sub_832A5B9C);
PPC_FUNC_IMPL(__imp__sub_832A5B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BA0"))) PPC_WEAK_FUNC(sub_832A5BA0);
PPC_FUNC_IMPL(__imp__sub_832A5BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BAC"))) PPC_WEAK_FUNC(sub_832A5BAC);
PPC_FUNC_IMPL(__imp__sub_832A5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BB0"))) PPC_WEAK_FUNC(sub_832A5BB0);
PPC_FUNC_IMPL(__imp__sub_832A5BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19820
	ctx.r3.s64 = ctx.r11.s64 + -19820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BBC"))) PPC_WEAK_FUNC(sub_832A5BBC);
PPC_FUNC_IMPL(__imp__sub_832A5BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BC0"))) PPC_WEAK_FUNC(sub_832A5BC0);
PPC_FUNC_IMPL(__imp__sub_832A5BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BCC"))) PPC_WEAK_FUNC(sub_832A5BCC);
PPC_FUNC_IMPL(__imp__sub_832A5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BD0"))) PPC_WEAK_FUNC(sub_832A5BD0);
PPC_FUNC_IMPL(__imp__sub_832A5BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19788
	ctx.r3.s64 = ctx.r11.s64 + -19788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BDC"))) PPC_WEAK_FUNC(sub_832A5BDC);
PPC_FUNC_IMPL(__imp__sub_832A5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BE0"))) PPC_WEAK_FUNC(sub_832A5BE0);
PPC_FUNC_IMPL(__imp__sub_832A5BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BEC"))) PPC_WEAK_FUNC(sub_832A5BEC);
PPC_FUNC_IMPL(__imp__sub_832A5BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BF0"))) PPC_WEAK_FUNC(sub_832A5BF0);
PPC_FUNC_IMPL(__imp__sub_832A5BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19780
	ctx.r3.s64 = ctx.r11.s64 + -19780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5BFC"))) PPC_WEAK_FUNC(sub_832A5BFC);
PPC_FUNC_IMPL(__imp__sub_832A5BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C00"))) PPC_WEAK_FUNC(sub_832A5C00);
PPC_FUNC_IMPL(__imp__sub_832A5C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C0C"))) PPC_WEAK_FUNC(sub_832A5C0C);
PPC_FUNC_IMPL(__imp__sub_832A5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C10"))) PPC_WEAK_FUNC(sub_832A5C10);
PPC_FUNC_IMPL(__imp__sub_832A5C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19764
	ctx.r3.s64 = ctx.r11.s64 + -19764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C1C"))) PPC_WEAK_FUNC(sub_832A5C1C);
PPC_FUNC_IMPL(__imp__sub_832A5C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C20"))) PPC_WEAK_FUNC(sub_832A5C20);
PPC_FUNC_IMPL(__imp__sub_832A5C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C2C"))) PPC_WEAK_FUNC(sub_832A5C2C);
PPC_FUNC_IMPL(__imp__sub_832A5C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C30"))) PPC_WEAK_FUNC(sub_832A5C30);
PPC_FUNC_IMPL(__imp__sub_832A5C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C3C"))) PPC_WEAK_FUNC(sub_832A5C3C);
PPC_FUNC_IMPL(__imp__sub_832A5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C40"))) PPC_WEAK_FUNC(sub_832A5C40);
PPC_FUNC_IMPL(__imp__sub_832A5C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19732
	ctx.r3.s64 = ctx.r11.s64 + -19732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C4C"))) PPC_WEAK_FUNC(sub_832A5C4C);
PPC_FUNC_IMPL(__imp__sub_832A5C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C50"))) PPC_WEAK_FUNC(sub_832A5C50);
PPC_FUNC_IMPL(__imp__sub_832A5C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C5C"))) PPC_WEAK_FUNC(sub_832A5C5C);
PPC_FUNC_IMPL(__imp__sub_832A5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C60"))) PPC_WEAK_FUNC(sub_832A5C60);
PPC_FUNC_IMPL(__imp__sub_832A5C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19724
	ctx.r3.s64 = ctx.r11.s64 + -19724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C6C"))) PPC_WEAK_FUNC(sub_832A5C6C);
PPC_FUNC_IMPL(__imp__sub_832A5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C70"))) PPC_WEAK_FUNC(sub_832A5C70);
PPC_FUNC_IMPL(__imp__sub_832A5C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C7C"))) PPC_WEAK_FUNC(sub_832A5C7C);
PPC_FUNC_IMPL(__imp__sub_832A5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C80"))) PPC_WEAK_FUNC(sub_832A5C80);
PPC_FUNC_IMPL(__imp__sub_832A5C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19716
	ctx.r3.s64 = ctx.r11.s64 + -19716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C8C"))) PPC_WEAK_FUNC(sub_832A5C8C);
PPC_FUNC_IMPL(__imp__sub_832A5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5C90"))) PPC_WEAK_FUNC(sub_832A5C90);
PPC_FUNC_IMPL(__imp__sub_832A5C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5C9C"))) PPC_WEAK_FUNC(sub_832A5C9C);
PPC_FUNC_IMPL(__imp__sub_832A5C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CA0"))) PPC_WEAK_FUNC(sub_832A5CA0);
PPC_FUNC_IMPL(__imp__sub_832A5CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CAC"))) PPC_WEAK_FUNC(sub_832A5CAC);
PPC_FUNC_IMPL(__imp__sub_832A5CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CB0"))) PPC_WEAK_FUNC(sub_832A5CB0);
PPC_FUNC_IMPL(__imp__sub_832A5CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CBC"))) PPC_WEAK_FUNC(sub_832A5CBC);
PPC_FUNC_IMPL(__imp__sub_832A5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CC0"))) PPC_WEAK_FUNC(sub_832A5CC0);
PPC_FUNC_IMPL(__imp__sub_832A5CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19692
	ctx.r3.s64 = ctx.r11.s64 + -19692;
	// b 0x8273e9a8
	sub_8273E9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CCC"))) PPC_WEAK_FUNC(sub_832A5CCC);
PPC_FUNC_IMPL(__imp__sub_832A5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CD0"))) PPC_WEAK_FUNC(sub_832A5CD0);
PPC_FUNC_IMPL(__imp__sub_832A5CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x8273eae8
	sub_8273EAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CDC"))) PPC_WEAK_FUNC(sub_832A5CDC);
PPC_FUNC_IMPL(__imp__sub_832A5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CE0"))) PPC_WEAK_FUNC(sub_832A5CE0);
PPC_FUNC_IMPL(__imp__sub_832A5CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CEC"))) PPC_WEAK_FUNC(sub_832A5CEC);
PPC_FUNC_IMPL(__imp__sub_832A5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CF0"))) PPC_WEAK_FUNC(sub_832A5CF0);
PPC_FUNC_IMPL(__imp__sub_832A5CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19596
	ctx.r3.s64 = ctx.r11.s64 + -19596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CFC"))) PPC_WEAK_FUNC(sub_832A5CFC);
PPC_FUNC_IMPL(__imp__sub_832A5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D00"))) PPC_WEAK_FUNC(sub_832A5D00);
PPC_FUNC_IMPL(__imp__sub_832A5D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D0C"))) PPC_WEAK_FUNC(sub_832A5D0C);
PPC_FUNC_IMPL(__imp__sub_832A5D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D10"))) PPC_WEAK_FUNC(sub_832A5D10);
PPC_FUNC_IMPL(__imp__sub_832A5D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19588
	ctx.r3.s64 = ctx.r11.s64 + -19588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D1C"))) PPC_WEAK_FUNC(sub_832A5D1C);
PPC_FUNC_IMPL(__imp__sub_832A5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D20"))) PPC_WEAK_FUNC(sub_832A5D20);
PPC_FUNC_IMPL(__imp__sub_832A5D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19584
	ctx.r3.s64 = ctx.r11.s64 + -19584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D2C"))) PPC_WEAK_FUNC(sub_832A5D2C);
PPC_FUNC_IMPL(__imp__sub_832A5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D30"))) PPC_WEAK_FUNC(sub_832A5D30);
PPC_FUNC_IMPL(__imp__sub_832A5D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19580
	ctx.r3.s64 = ctx.r11.s64 + -19580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D3C"))) PPC_WEAK_FUNC(sub_832A5D3C);
PPC_FUNC_IMPL(__imp__sub_832A5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D40"))) PPC_WEAK_FUNC(sub_832A5D40);
PPC_FUNC_IMPL(__imp__sub_832A5D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19576
	ctx.r3.s64 = ctx.r11.s64 + -19576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D4C"))) PPC_WEAK_FUNC(sub_832A5D4C);
PPC_FUNC_IMPL(__imp__sub_832A5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D50"))) PPC_WEAK_FUNC(sub_832A5D50);
PPC_FUNC_IMPL(__imp__sub_832A5D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19572
	ctx.r3.s64 = ctx.r11.s64 + -19572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D5C"))) PPC_WEAK_FUNC(sub_832A5D5C);
PPC_FUNC_IMPL(__imp__sub_832A5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D60"))) PPC_WEAK_FUNC(sub_832A5D60);
PPC_FUNC_IMPL(__imp__sub_832A5D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D6C"))) PPC_WEAK_FUNC(sub_832A5D6C);
PPC_FUNC_IMPL(__imp__sub_832A5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D70"))) PPC_WEAK_FUNC(sub_832A5D70);
PPC_FUNC_IMPL(__imp__sub_832A5D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19564
	ctx.r3.s64 = ctx.r11.s64 + -19564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D7C"))) PPC_WEAK_FUNC(sub_832A5D7C);
PPC_FUNC_IMPL(__imp__sub_832A5D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D80"))) PPC_WEAK_FUNC(sub_832A5D80);
PPC_FUNC_IMPL(__imp__sub_832A5D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19560
	ctx.r3.s64 = ctx.r11.s64 + -19560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D8C"))) PPC_WEAK_FUNC(sub_832A5D8C);
PPC_FUNC_IMPL(__imp__sub_832A5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D90"))) PPC_WEAK_FUNC(sub_832A5D90);
PPC_FUNC_IMPL(__imp__sub_832A5D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19556
	ctx.r3.s64 = ctx.r11.s64 + -19556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5D9C"))) PPC_WEAK_FUNC(sub_832A5D9C);
PPC_FUNC_IMPL(__imp__sub_832A5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DA0"))) PPC_WEAK_FUNC(sub_832A5DA0);
PPC_FUNC_IMPL(__imp__sub_832A5DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19552
	ctx.r3.s64 = ctx.r11.s64 + -19552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DAC"))) PPC_WEAK_FUNC(sub_832A5DAC);
PPC_FUNC_IMPL(__imp__sub_832A5DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DB0"))) PPC_WEAK_FUNC(sub_832A5DB0);
PPC_FUNC_IMPL(__imp__sub_832A5DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19548
	ctx.r3.s64 = ctx.r11.s64 + -19548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DBC"))) PPC_WEAK_FUNC(sub_832A5DBC);
PPC_FUNC_IMPL(__imp__sub_832A5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DC0"))) PPC_WEAK_FUNC(sub_832A5DC0);
PPC_FUNC_IMPL(__imp__sub_832A5DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DCC"))) PPC_WEAK_FUNC(sub_832A5DCC);
PPC_FUNC_IMPL(__imp__sub_832A5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DD0"))) PPC_WEAK_FUNC(sub_832A5DD0);
PPC_FUNC_IMPL(__imp__sub_832A5DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19540
	ctx.r3.s64 = ctx.r11.s64 + -19540;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DDC"))) PPC_WEAK_FUNC(sub_832A5DDC);
PPC_FUNC_IMPL(__imp__sub_832A5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DE0"))) PPC_WEAK_FUNC(sub_832A5DE0);
PPC_FUNC_IMPL(__imp__sub_832A5DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19536
	ctx.r3.s64 = ctx.r11.s64 + -19536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DEC"))) PPC_WEAK_FUNC(sub_832A5DEC);
PPC_FUNC_IMPL(__imp__sub_832A5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5DF0"))) PPC_WEAK_FUNC(sub_832A5DF0);
PPC_FUNC_IMPL(__imp__sub_832A5DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19532
	ctx.r3.s64 = ctx.r11.s64 + -19532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5DFC"))) PPC_WEAK_FUNC(sub_832A5DFC);
PPC_FUNC_IMPL(__imp__sub_832A5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E00"))) PPC_WEAK_FUNC(sub_832A5E00);
PPC_FUNC_IMPL(__imp__sub_832A5E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19528
	ctx.r3.s64 = ctx.r11.s64 + -19528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E0C"))) PPC_WEAK_FUNC(sub_832A5E0C);
PPC_FUNC_IMPL(__imp__sub_832A5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E10"))) PPC_WEAK_FUNC(sub_832A5E10);
PPC_FUNC_IMPL(__imp__sub_832A5E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19524
	ctx.r3.s64 = ctx.r11.s64 + -19524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E1C"))) PPC_WEAK_FUNC(sub_832A5E1C);
PPC_FUNC_IMPL(__imp__sub_832A5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E20"))) PPC_WEAK_FUNC(sub_832A5E20);
PPC_FUNC_IMPL(__imp__sub_832A5E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E2C"))) PPC_WEAK_FUNC(sub_832A5E2C);
PPC_FUNC_IMPL(__imp__sub_832A5E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E30"))) PPC_WEAK_FUNC(sub_832A5E30);
PPC_FUNC_IMPL(__imp__sub_832A5E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19516
	ctx.r3.s64 = ctx.r11.s64 + -19516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E3C"))) PPC_WEAK_FUNC(sub_832A5E3C);
PPC_FUNC_IMPL(__imp__sub_832A5E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E40"))) PPC_WEAK_FUNC(sub_832A5E40);
PPC_FUNC_IMPL(__imp__sub_832A5E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19512
	ctx.r3.s64 = ctx.r11.s64 + -19512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E4C"))) PPC_WEAK_FUNC(sub_832A5E4C);
PPC_FUNC_IMPL(__imp__sub_832A5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E50"))) PPC_WEAK_FUNC(sub_832A5E50);
PPC_FUNC_IMPL(__imp__sub_832A5E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19508
	ctx.r3.s64 = ctx.r11.s64 + -19508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E5C"))) PPC_WEAK_FUNC(sub_832A5E5C);
PPC_FUNC_IMPL(__imp__sub_832A5E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E60"))) PPC_WEAK_FUNC(sub_832A5E60);
PPC_FUNC_IMPL(__imp__sub_832A5E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E6C"))) PPC_WEAK_FUNC(sub_832A5E6C);
PPC_FUNC_IMPL(__imp__sub_832A5E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E70"))) PPC_WEAK_FUNC(sub_832A5E70);
PPC_FUNC_IMPL(__imp__sub_832A5E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19500
	ctx.r3.s64 = ctx.r11.s64 + -19500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E7C"))) PPC_WEAK_FUNC(sub_832A5E7C);
PPC_FUNC_IMPL(__imp__sub_832A5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E80"))) PPC_WEAK_FUNC(sub_832A5E80);
PPC_FUNC_IMPL(__imp__sub_832A5E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E8C"))) PPC_WEAK_FUNC(sub_832A5E8C);
PPC_FUNC_IMPL(__imp__sub_832A5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E90"))) PPC_WEAK_FUNC(sub_832A5E90);
PPC_FUNC_IMPL(__imp__sub_832A5E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19492
	ctx.r3.s64 = ctx.r11.s64 + -19492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5E9C"))) PPC_WEAK_FUNC(sub_832A5E9C);
PPC_FUNC_IMPL(__imp__sub_832A5E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EA0"))) PPC_WEAK_FUNC(sub_832A5EA0);
PPC_FUNC_IMPL(__imp__sub_832A5EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EAC"))) PPC_WEAK_FUNC(sub_832A5EAC);
PPC_FUNC_IMPL(__imp__sub_832A5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EB0"))) PPC_WEAK_FUNC(sub_832A5EB0);
PPC_FUNC_IMPL(__imp__sub_832A5EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19484
	ctx.r3.s64 = ctx.r11.s64 + -19484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EBC"))) PPC_WEAK_FUNC(sub_832A5EBC);
PPC_FUNC_IMPL(__imp__sub_832A5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EC0"))) PPC_WEAK_FUNC(sub_832A5EC0);
PPC_FUNC_IMPL(__imp__sub_832A5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19480
	ctx.r3.s64 = ctx.r11.s64 + -19480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5ECC"))) PPC_WEAK_FUNC(sub_832A5ECC);
PPC_FUNC_IMPL(__imp__sub_832A5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5ED0"))) PPC_WEAK_FUNC(sub_832A5ED0);
PPC_FUNC_IMPL(__imp__sub_832A5ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19476
	ctx.r3.s64 = ctx.r11.s64 + -19476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EDC"))) PPC_WEAK_FUNC(sub_832A5EDC);
PPC_FUNC_IMPL(__imp__sub_832A5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EE0"))) PPC_WEAK_FUNC(sub_832A5EE0);
PPC_FUNC_IMPL(__imp__sub_832A5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EEC"))) PPC_WEAK_FUNC(sub_832A5EEC);
PPC_FUNC_IMPL(__imp__sub_832A5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EF0"))) PPC_WEAK_FUNC(sub_832A5EF0);
PPC_FUNC_IMPL(__imp__sub_832A5EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19468
	ctx.r3.s64 = ctx.r11.s64 + -19468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EFC"))) PPC_WEAK_FUNC(sub_832A5EFC);
PPC_FUNC_IMPL(__imp__sub_832A5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F00"))) PPC_WEAK_FUNC(sub_832A5F00);
PPC_FUNC_IMPL(__imp__sub_832A5F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5F0C"))) PPC_WEAK_FUNC(sub_832A5F0C);
PPC_FUNC_IMPL(__imp__sub_832A5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F10"))) PPC_WEAK_FUNC(sub_832A5F10);
PPC_FUNC_IMPL(__imp__sub_832A5F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19460
	ctx.r3.s64 = ctx.r11.s64 + -19460;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5F1C"))) PPC_WEAK_FUNC(sub_832A5F1C);
PPC_FUNC_IMPL(__imp__sub_832A5F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F20"))) PPC_WEAK_FUNC(sub_832A5F20);
PPC_FUNC_IMPL(__imp__sub_832A5F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5F2C"))) PPC_WEAK_FUNC(sub_832A5F2C);
PPC_FUNC_IMPL(__imp__sub_832A5F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F30"))) PPC_WEAK_FUNC(sub_832A5F30);
PPC_FUNC_IMPL(__imp__sub_832A5F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19452
	ctx.r3.s64 = ctx.r11.s64 + -19452;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5F3C"))) PPC_WEAK_FUNC(sub_832A5F3C);
PPC_FUNC_IMPL(__imp__sub_832A5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F40"))) PPC_WEAK_FUNC(sub_832A5F40);
PPC_FUNC_IMPL(__imp__sub_832A5F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A5F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-19448
	ctx.r11.s64 = ctx.r11.s64 + -19448;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A5F68:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A5F74;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A5F78:
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
	// bne 0x832a5f78
	if (!ctx.cr0.eq) goto loc_832A5F78;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a5f68
	if (!ctx.cr0.lt) goto loc_832A5F68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5FA8"))) PPC_WEAK_FUNC(sub_832A5FA8);
PPC_FUNC_IMPL(__imp__sub_832A5FA8) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r10,-23600
	ctx.r31.s64 = ctx.r10.s64 + -23600;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-23600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23600, ctx.r11.u32);
	// bl 0x821940c8
	ctx.lr = 0x832A5FD4;
	sub_821940C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_832A5FF0"))) PPC_WEAK_FUNC(sub_832A5FF0);
PPC_FUNC_IMPL(__imp__sub_832A5FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14696
	ctx.r3.s64 = ctx.r11.s64 + 14696;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5FFC"))) PPC_WEAK_FUNC(sub_832A5FFC);
PPC_FUNC_IMPL(__imp__sub_832A5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6000"))) PPC_WEAK_FUNC(sub_832A6000);
PPC_FUNC_IMPL(__imp__sub_832A6000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14704
	ctx.r3.s64 = ctx.r11.s64 + 14704;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A600C"))) PPC_WEAK_FUNC(sub_832A600C);
PPC_FUNC_IMPL(__imp__sub_832A600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6010"))) PPC_WEAK_FUNC(sub_832A6010);
PPC_FUNC_IMPL(__imp__sub_832A6010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19228
	ctx.r3.s64 = ctx.r11.s64 + -19228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A601C"))) PPC_WEAK_FUNC(sub_832A601C);
PPC_FUNC_IMPL(__imp__sub_832A601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6020"))) PPC_WEAK_FUNC(sub_832A6020);
PPC_FUNC_IMPL(__imp__sub_832A6020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x824c6480
	sub_824C6480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A602C"))) PPC_WEAK_FUNC(sub_832A602C);
PPC_FUNC_IMPL(__imp__sub_832A602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6030"))) PPC_WEAK_FUNC(sub_832A6030);
PPC_FUNC_IMPL(__imp__sub_832A6030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832A6038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-19212
	ctx.r29.s64 = ctx.r11.s64 + -19212;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832a60dc
	if (ctx.cr6.eq) goto loc_832A60DC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r11,5732
	ctx.r26.s64 = ctx.r11.s64 + 5732;
loc_832A6078:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832a60c0
	if (ctx.cr6.eq) goto loc_832A60C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832a60bc
	if (!ctx.cr6.eq) goto loc_832A60BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832a60bc
	if (!ctx.cr6.eq) goto loc_832A60BC;
	// bl 0x8221be68
	ctx.lr = 0x832A60BC;
	sub_8221BE68(ctx, base);
loc_832A60BC:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_832A60C0:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x832A60CC;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a6078
	if (!ctx.cr6.eq) goto loc_832A6078;
loc_832A60DC:
	// bl 0x8221be68
	ctx.lr = 0x832A60E0;
	sub_8221BE68(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A60F0"))) PPC_WEAK_FUNC(sub_832A60F0);
PPC_FUNC_IMPL(__imp__sub_832A60F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A60FC"))) PPC_WEAK_FUNC(sub_832A60FC);
PPC_FUNC_IMPL(__imp__sub_832A60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6100"))) PPC_WEAK_FUNC(sub_832A6100);
PPC_FUNC_IMPL(__imp__sub_832A6100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A610C"))) PPC_WEAK_FUNC(sub_832A610C);
PPC_FUNC_IMPL(__imp__sub_832A610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6110"))) PPC_WEAK_FUNC(sub_832A6110);
PPC_FUNC_IMPL(__imp__sub_832A6110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A611C"))) PPC_WEAK_FUNC(sub_832A611C);
PPC_FUNC_IMPL(__imp__sub_832A611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6120"))) PPC_WEAK_FUNC(sub_832A6120);
PPC_FUNC_IMPL(__imp__sub_832A6120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19188
	ctx.r3.s64 = ctx.r11.s64 + -19188;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A612C"))) PPC_WEAK_FUNC(sub_832A612C);
PPC_FUNC_IMPL(__imp__sub_832A612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6130"))) PPC_WEAK_FUNC(sub_832A6130);
PPC_FUNC_IMPL(__imp__sub_832A6130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A613C"))) PPC_WEAK_FUNC(sub_832A613C);
PPC_FUNC_IMPL(__imp__sub_832A613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6140"))) PPC_WEAK_FUNC(sub_832A6140);
PPC_FUNC_IMPL(__imp__sub_832A6140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19180
	ctx.r3.s64 = ctx.r11.s64 + -19180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A614C"))) PPC_WEAK_FUNC(sub_832A614C);
PPC_FUNC_IMPL(__imp__sub_832A614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6150"))) PPC_WEAK_FUNC(sub_832A6150);
PPC_FUNC_IMPL(__imp__sub_832A6150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6154"))) PPC_WEAK_FUNC(sub_832A6154);
PPC_FUNC_IMPL(__imp__sub_832A6154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6158"))) PPC_WEAK_FUNC(sub_832A6158);
PPC_FUNC_IMPL(__imp__sub_832A6158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A615C"))) PPC_WEAK_FUNC(sub_832A615C);
PPC_FUNC_IMPL(__imp__sub_832A615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6160"))) PPC_WEAK_FUNC(sub_832A6160);
PPC_FUNC_IMPL(__imp__sub_832A6160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6164"))) PPC_WEAK_FUNC(sub_832A6164);
PPC_FUNC_IMPL(__imp__sub_832A6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6168"))) PPC_WEAK_FUNC(sub_832A6168);
PPC_FUNC_IMPL(__imp__sub_832A6168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A616C"))) PPC_WEAK_FUNC(sub_832A616C);
PPC_FUNC_IMPL(__imp__sub_832A616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6170"))) PPC_WEAK_FUNC(sub_832A6170);
PPC_FUNC_IMPL(__imp__sub_832A6170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6174"))) PPC_WEAK_FUNC(sub_832A6174);
PPC_FUNC_IMPL(__imp__sub_832A6174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6178"))) PPC_WEAK_FUNC(sub_832A6178);
PPC_FUNC_IMPL(__imp__sub_832A6178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19156
	ctx.r3.s64 = ctx.r11.s64 + -19156;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6184"))) PPC_WEAK_FUNC(sub_832A6184);
PPC_FUNC_IMPL(__imp__sub_832A6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6188"))) PPC_WEAK_FUNC(sub_832A6188);
PPC_FUNC_IMPL(__imp__sub_832A6188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6194"))) PPC_WEAK_FUNC(sub_832A6194);
PPC_FUNC_IMPL(__imp__sub_832A6194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6198"))) PPC_WEAK_FUNC(sub_832A6198);
PPC_FUNC_IMPL(__imp__sub_832A6198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19148
	ctx.r3.s64 = ctx.r11.s64 + -19148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61A4"))) PPC_WEAK_FUNC(sub_832A61A4);
PPC_FUNC_IMPL(__imp__sub_832A61A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61A8"))) PPC_WEAK_FUNC(sub_832A61A8);
PPC_FUNC_IMPL(__imp__sub_832A61A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x827c57d8
	sub_827C57D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61B4"))) PPC_WEAK_FUNC(sub_832A61B4);
PPC_FUNC_IMPL(__imp__sub_832A61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61B8"))) PPC_WEAK_FUNC(sub_832A61B8);
PPC_FUNC_IMPL(__imp__sub_832A61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19132
	ctx.r3.s64 = ctx.r11.s64 + -19132;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61C4"))) PPC_WEAK_FUNC(sub_832A61C4);
PPC_FUNC_IMPL(__imp__sub_832A61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61C8"))) PPC_WEAK_FUNC(sub_832A61C8);
PPC_FUNC_IMPL(__imp__sub_832A61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19124
	ctx.r3.s64 = ctx.r11.s64 + -19124;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61D4"))) PPC_WEAK_FUNC(sub_832A61D4);
PPC_FUNC_IMPL(__imp__sub_832A61D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61D8"))) PPC_WEAK_FUNC(sub_832A61D8);
PPC_FUNC_IMPL(__imp__sub_832A61D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19116
	ctx.r3.s64 = ctx.r11.s64 + -19116;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61E4"))) PPC_WEAK_FUNC(sub_832A61E4);
PPC_FUNC_IMPL(__imp__sub_832A61E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61E8"))) PPC_WEAK_FUNC(sub_832A61E8);
PPC_FUNC_IMPL(__imp__sub_832A61E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19108
	ctx.r3.s64 = ctx.r11.s64 + -19108;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A61F4"))) PPC_WEAK_FUNC(sub_832A61F4);
PPC_FUNC_IMPL(__imp__sub_832A61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A61F8"))) PPC_WEAK_FUNC(sub_832A61F8);
PPC_FUNC_IMPL(__imp__sub_832A61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-19100
	ctx.r3.s64 = ctx.r11.s64 + -19100;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6204"))) PPC_WEAK_FUNC(sub_832A6204);
PPC_FUNC_IMPL(__imp__sub_832A6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6208"))) PPC_WEAK_FUNC(sub_832A6208);
PPC_FUNC_IMPL(__imp__sub_832A6208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A6210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,27
	ctx.r30.s64 = 27;
	// addi r11,r11,-19048
	ctx.r11.s64 = ctx.r11.s64 + -19048;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A6230:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A623C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A6240:
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
	// bne 0x832a6240
	if (!ctx.cr0.eq) goto loc_832A6240;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a6230
	if (!ctx.cr0.lt) goto loc_832A6230;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6270"))) PPC_WEAK_FUNC(sub_832A6270);
PPC_FUNC_IMPL(__imp__sub_832A6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18936
	ctx.r3.s64 = ctx.r11.s64 + -18936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A627C"))) PPC_WEAK_FUNC(sub_832A627C);
PPC_FUNC_IMPL(__imp__sub_832A627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6280"))) PPC_WEAK_FUNC(sub_832A6280);
PPC_FUNC_IMPL(__imp__sub_832A6280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18932
	ctx.r3.s64 = ctx.r11.s64 + -18932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A628C"))) PPC_WEAK_FUNC(sub_832A628C);
PPC_FUNC_IMPL(__imp__sub_832A628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6290"))) PPC_WEAK_FUNC(sub_832A6290);
PPC_FUNC_IMPL(__imp__sub_832A6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A629C"))) PPC_WEAK_FUNC(sub_832A629C);
PPC_FUNC_IMPL(__imp__sub_832A629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62A0"))) PPC_WEAK_FUNC(sub_832A62A0);
PPC_FUNC_IMPL(__imp__sub_832A62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62AC"))) PPC_WEAK_FUNC(sub_832A62AC);
PPC_FUNC_IMPL(__imp__sub_832A62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62B0"))) PPC_WEAK_FUNC(sub_832A62B0);
PPC_FUNC_IMPL(__imp__sub_832A62B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18916
	ctx.r3.s64 = ctx.r11.s64 + -18916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62BC"))) PPC_WEAK_FUNC(sub_832A62BC);
PPC_FUNC_IMPL(__imp__sub_832A62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62C0"))) PPC_WEAK_FUNC(sub_832A62C0);
PPC_FUNC_IMPL(__imp__sub_832A62C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18912
	ctx.r3.s64 = ctx.r11.s64 + -18912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62CC"))) PPC_WEAK_FUNC(sub_832A62CC);
PPC_FUNC_IMPL(__imp__sub_832A62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62D0"))) PPC_WEAK_FUNC(sub_832A62D0);
PPC_FUNC_IMPL(__imp__sub_832A62D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18908
	ctx.r3.s64 = ctx.r11.s64 + -18908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62DC"))) PPC_WEAK_FUNC(sub_832A62DC);
PPC_FUNC_IMPL(__imp__sub_832A62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62E0"))) PPC_WEAK_FUNC(sub_832A62E0);
PPC_FUNC_IMPL(__imp__sub_832A62E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62EC"))) PPC_WEAK_FUNC(sub_832A62EC);
PPC_FUNC_IMPL(__imp__sub_832A62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A62F0"))) PPC_WEAK_FUNC(sub_832A62F0);
PPC_FUNC_IMPL(__imp__sub_832A62F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18900
	ctx.r3.s64 = ctx.r11.s64 + -18900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A62FC"))) PPC_WEAK_FUNC(sub_832A62FC);
PPC_FUNC_IMPL(__imp__sub_832A62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6300"))) PPC_WEAK_FUNC(sub_832A6300);
PPC_FUNC_IMPL(__imp__sub_832A6300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18892
	ctx.r3.s64 = ctx.r11.s64 + -18892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A630C"))) PPC_WEAK_FUNC(sub_832A630C);
PPC_FUNC_IMPL(__imp__sub_832A630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6310"))) PPC_WEAK_FUNC(sub_832A6310);
PPC_FUNC_IMPL(__imp__sub_832A6310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A631C"))) PPC_WEAK_FUNC(sub_832A631C);
PPC_FUNC_IMPL(__imp__sub_832A631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6320"))) PPC_WEAK_FUNC(sub_832A6320);
PPC_FUNC_IMPL(__imp__sub_832A6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18884
	ctx.r3.s64 = ctx.r11.s64 + -18884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A632C"))) PPC_WEAK_FUNC(sub_832A632C);
PPC_FUNC_IMPL(__imp__sub_832A632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6330"))) PPC_WEAK_FUNC(sub_832A6330);
PPC_FUNC_IMPL(__imp__sub_832A6330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A633C"))) PPC_WEAK_FUNC(sub_832A633C);
PPC_FUNC_IMPL(__imp__sub_832A633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6340"))) PPC_WEAK_FUNC(sub_832A6340);
PPC_FUNC_IMPL(__imp__sub_832A6340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18876
	ctx.r3.s64 = ctx.r11.s64 + -18876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A634C"))) PPC_WEAK_FUNC(sub_832A634C);
PPC_FUNC_IMPL(__imp__sub_832A634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6350"))) PPC_WEAK_FUNC(sub_832A6350);
PPC_FUNC_IMPL(__imp__sub_832A6350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A635C"))) PPC_WEAK_FUNC(sub_832A635C);
PPC_FUNC_IMPL(__imp__sub_832A635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6360"))) PPC_WEAK_FUNC(sub_832A6360);
PPC_FUNC_IMPL(__imp__sub_832A6360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A636C"))) PPC_WEAK_FUNC(sub_832A636C);
PPC_FUNC_IMPL(__imp__sub_832A636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6370"))) PPC_WEAK_FUNC(sub_832A6370);
PPC_FUNC_IMPL(__imp__sub_832A6370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-17644
	ctx.r3.s64 = ctx.r11.s64 + -17644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A637C"))) PPC_WEAK_FUNC(sub_832A637C);
PPC_FUNC_IMPL(__imp__sub_832A637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6380"))) PPC_WEAK_FUNC(sub_832A6380);
PPC_FUNC_IMPL(__imp__sub_832A6380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A638C"))) PPC_WEAK_FUNC(sub_832A638C);
PPC_FUNC_IMPL(__imp__sub_832A638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6390"))) PPC_WEAK_FUNC(sub_832A6390);
PPC_FUNC_IMPL(__imp__sub_832A6390) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-17636
	ctx.r31.s64 = ctx.r11.s64 + -17636;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a63c8
	if (ctx.cr6.eq) goto loc_832A63C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a86b88
	ctx.lr = 0x832A63C0;
	sub_82A86B88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A63C8;
	sub_8221BE68(ctx, base);
loc_832A63C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A63F4"))) PPC_WEAK_FUNC(sub_832A63F4);
PPC_FUNC_IMPL(__imp__sub_832A63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A63F8"))) PPC_WEAK_FUNC(sub_832A63F8);
PPC_FUNC_IMPL(__imp__sub_832A63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-17620
	ctx.r3.s64 = ctx.r11.s64 + -17620;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6404"))) PPC_WEAK_FUNC(sub_832A6404);
PPC_FUNC_IMPL(__imp__sub_832A6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6408"))) PPC_WEAK_FUNC(sub_832A6408);
PPC_FUNC_IMPL(__imp__sub_832A6408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832A6410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-17616
	ctx.r30.s64 = ctx.r11.s64 + -17616;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a6464
	if (ctx.cr6.eq) goto loc_832A6464;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832a6460
	if (ctx.cr6.eq) goto loc_832A6460;
loc_832A6438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A6450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x832a6438
	if (!ctx.cr6.eq) goto loc_832A6438;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_832A6460:
	// bl 0x8221be68
	ctx.lr = 0x832A6464;
	sub_8221BE68(ctx, base);
loc_832A6464:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6484"))) PPC_WEAK_FUNC(sub_832A6484);
PPC_FUNC_IMPL(__imp__sub_832A6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6488"))) PPC_WEAK_FUNC(sub_832A6488);
PPC_FUNC_IMPL(__imp__sub_832A6488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

