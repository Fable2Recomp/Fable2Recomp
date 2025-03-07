#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A5AFC"))) PPC_WEAK_FUNC(sub_823A5AFC);
PPC_FUNC_IMPL(__imp__sub_823A5AFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// stb r11,27056(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27056, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,-27652(r5)
	PPC_STORE_U8(ctx.r5.u32 + -27652, ctx.r11.u8);
	// stb r9,-27653(r6)
	PPC_STORE_U8(ctx.r6.u32 + -27653, ctx.r9.u8);
	// stfs f0,-27644(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -27644, temp.u32);
	// stb r10,-27654(r7)
	PPC_STORE_U8(ctx.r7.u32 + -27654, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B40"))) PPC_WEAK_FUNC(sub_823A5B40);
PPC_FUNC_IMPL(__imp__sub_823A5B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27049(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27049, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B4C"))) PPC_WEAK_FUNC(sub_823A5B4C);
PPC_FUNC_IMPL(__imp__sub_823A5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B50"))) PPC_WEAK_FUNC(sub_823A5B50);
PPC_FUNC_IMPL(__imp__sub_823A5B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27656(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27656, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B5C"))) PPC_WEAK_FUNC(sub_823A5B5C);
PPC_FUNC_IMPL(__imp__sub_823A5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B60"))) PPC_WEAK_FUNC(sub_823A5B60);
PPC_FUNC_IMPL(__imp__sub_823A5B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27655(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27655, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B6C"))) PPC_WEAK_FUNC(sub_823A5B6C);
PPC_FUNC_IMPL(__imp__sub_823A5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B70"))) PPC_WEAK_FUNC(sub_823A5B70);
PPC_FUNC_IMPL(__imp__sub_823A5B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27050(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27050, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B7C"))) PPC_WEAK_FUNC(sub_823A5B7C);
PPC_FUNC_IMPL(__imp__sub_823A5B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B80"))) PPC_WEAK_FUNC(sub_823A5B80);
PPC_FUNC_IMPL(__imp__sub_823A5B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27051(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27051, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B8C"))) PPC_WEAK_FUNC(sub_823A5B8C);
PPC_FUNC_IMPL(__imp__sub_823A5B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B90"))) PPC_WEAK_FUNC(sub_823A5B90);
PPC_FUNC_IMPL(__imp__sub_823A5B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27052(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27052, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B9C"))) PPC_WEAK_FUNC(sub_823A5B9C);
PPC_FUNC_IMPL(__imp__sub_823A5B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BA0"))) PPC_WEAK_FUNC(sub_823A5BA0);
PPC_FUNC_IMPL(__imp__sub_823A5BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27053, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BAC"))) PPC_WEAK_FUNC(sub_823A5BAC);
PPC_FUNC_IMPL(__imp__sub_823A5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BB0"))) PPC_WEAK_FUNC(sub_823A5BB0);
PPC_FUNC_IMPL(__imp__sub_823A5BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27054(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27054, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BBC"))) PPC_WEAK_FUNC(sub_823A5BBC);
PPC_FUNC_IMPL(__imp__sub_823A5BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BC0"))) PPC_WEAK_FUNC(sub_823A5BC0);
PPC_FUNC_IMPL(__imp__sub_823A5BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27055(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27055, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BCC"))) PPC_WEAK_FUNC(sub_823A5BCC);
PPC_FUNC_IMPL(__imp__sub_823A5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BD0"))) PPC_WEAK_FUNC(sub_823A5BD0);
PPC_FUNC_IMPL(__imp__sub_823A5BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27056, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BDC"))) PPC_WEAK_FUNC(sub_823A5BDC);
PPC_FUNC_IMPL(__imp__sub_823A5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BE0"))) PPC_WEAK_FUNC(sub_823A5BE0);
PPC_FUNC_IMPL(__imp__sub_823A5BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27654(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27654, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BEC"))) PPC_WEAK_FUNC(sub_823A5BEC);
PPC_FUNC_IMPL(__imp__sub_823A5BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BF0"))) PPC_WEAK_FUNC(sub_823A5BF0);
PPC_FUNC_IMPL(__imp__sub_823A5BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27653(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27653, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BFC"))) PPC_WEAK_FUNC(sub_823A5BFC);
PPC_FUNC_IMPL(__imp__sub_823A5BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C00"))) PPC_WEAK_FUNC(sub_823A5C00);
PPC_FUNC_IMPL(__imp__sub_823A5C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27652, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C0C"))) PPC_WEAK_FUNC(sub_823A5C0C);
PPC_FUNC_IMPL(__imp__sub_823A5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C10"))) PPC_WEAK_FUNC(sub_823A5C10);
PPC_FUNC_IMPL(__imp__sub_823A5C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27648(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27648, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C1C"))) PPC_WEAK_FUNC(sub_823A5C1C);
PPC_FUNC_IMPL(__imp__sub_823A5C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C20"))) PPC_WEAK_FUNC(sub_823A5C20);
PPC_FUNC_IMPL(__imp__sub_823A5C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27644, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C2C"))) PPC_WEAK_FUNC(sub_823A5C2C);
PPC_FUNC_IMPL(__imp__sub_823A5C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C30"))) PPC_WEAK_FUNC(sub_823A5C30);
PPC_FUNC_IMPL(__imp__sub_823A5C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27636, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C3C"))) PPC_WEAK_FUNC(sub_823A5C3C);
PPC_FUNC_IMPL(__imp__sub_823A5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C40"))) PPC_WEAK_FUNC(sub_823A5C40);
PPC_FUNC_IMPL(__imp__sub_823A5C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27640(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27640, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C4C"))) PPC_WEAK_FUNC(sub_823A5C4C);
PPC_FUNC_IMPL(__imp__sub_823A5C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C50"))) PPC_WEAK_FUNC(sub_823A5C50);
PPC_FUNC_IMPL(__imp__sub_823A5C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,27060(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27060, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C5C"))) PPC_WEAK_FUNC(sub_823A5C5C);
PPC_FUNC_IMPL(__imp__sub_823A5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C60"))) PPC_WEAK_FUNC(sub_823A5C60);
PPC_FUNC_IMPL(__imp__sub_823A5C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27632(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27632, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C6C"))) PPC_WEAK_FUNC(sub_823A5C6C);
PPC_FUNC_IMPL(__imp__sub_823A5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C70"))) PPC_WEAK_FUNC(sub_823A5C70);
PPC_FUNC_IMPL(__imp__sub_823A5C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27628(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27628, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C7C"))) PPC_WEAK_FUNC(sub_823A5C7C);
PPC_FUNC_IMPL(__imp__sub_823A5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C80"))) PPC_WEAK_FUNC(sub_823A5C80);
PPC_FUNC_IMPL(__imp__sub_823A5C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27624(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27624, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C8C"))) PPC_WEAK_FUNC(sub_823A5C8C);
PPC_FUNC_IMPL(__imp__sub_823A5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C90"))) PPC_WEAK_FUNC(sub_823A5C90);
PPC_FUNC_IMPL(__imp__sub_823A5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27620(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27620, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C9C"))) PPC_WEAK_FUNC(sub_823A5C9C);
PPC_FUNC_IMPL(__imp__sub_823A5C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CA0"))) PPC_WEAK_FUNC(sub_823A5CA0);
PPC_FUNC_IMPL(__imp__sub_823A5CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27616(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27616, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CAC"))) PPC_WEAK_FUNC(sub_823A5CAC);
PPC_FUNC_IMPL(__imp__sub_823A5CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CB0"))) PPC_WEAK_FUNC(sub_823A5CB0);
PPC_FUNC_IMPL(__imp__sub_823A5CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27612(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27612, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CBC"))) PPC_WEAK_FUNC(sub_823A5CBC);
PPC_FUNC_IMPL(__imp__sub_823A5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CC0"))) PPC_WEAK_FUNC(sub_823A5CC0);
PPC_FUNC_IMPL(__imp__sub_823A5CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27608, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CCC"))) PPC_WEAK_FUNC(sub_823A5CCC);
PPC_FUNC_IMPL(__imp__sub_823A5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CD0"))) PPC_WEAK_FUNC(sub_823A5CD0);
PPC_FUNC_IMPL(__imp__sub_823A5CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27604(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27604, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CDC"))) PPC_WEAK_FUNC(sub_823A5CDC);
PPC_FUNC_IMPL(__imp__sub_823A5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CE0"))) PPC_WEAK_FUNC(sub_823A5CE0);
PPC_FUNC_IMPL(__imp__sub_823A5CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27600(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27600, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CEC"))) PPC_WEAK_FUNC(sub_823A5CEC);
PPC_FUNC_IMPL(__imp__sub_823A5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CF0"))) PPC_WEAK_FUNC(sub_823A5CF0);
PPC_FUNC_IMPL(__imp__sub_823A5CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27057(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27057, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CFC"))) PPC_WEAK_FUNC(sub_823A5CFC);
PPC_FUNC_IMPL(__imp__sub_823A5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D00"))) PPC_WEAK_FUNC(sub_823A5D00);
PPC_FUNC_IMPL(__imp__sub_823A5D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27596, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D0C"))) PPC_WEAK_FUNC(sub_823A5D0C);
PPC_FUNC_IMPL(__imp__sub_823A5D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D10"))) PPC_WEAK_FUNC(sub_823A5D10);
PPC_FUNC_IMPL(__imp__sub_823A5D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f1,-27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27596);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D1C"))) PPC_WEAK_FUNC(sub_823A5D1C);
PPC_FUNC_IMPL(__imp__sub_823A5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D20"))) PPC_WEAK_FUNC(sub_823A5D20);
PPC_FUNC_IMPL(__imp__sub_823A5D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27592(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D2C"))) PPC_WEAK_FUNC(sub_823A5D2C);
PPC_FUNC_IMPL(__imp__sub_823A5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D30"))) PPC_WEAK_FUNC(sub_823A5D30);
PPC_FUNC_IMPL(__imp__sub_823A5D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f1,-27592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27592);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D3C"))) PPC_WEAK_FUNC(sub_823A5D3C);
PPC_FUNC_IMPL(__imp__sub_823A5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D40"))) PPC_WEAK_FUNC(sub_823A5D40);
PPC_FUNC_IMPL(__imp__sub_823A5D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D4C"))) PPC_WEAK_FUNC(sub_823A5D4C);
PPC_FUNC_IMPL(__imp__sub_823A5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D50"))) PPC_WEAK_FUNC(sub_823A5D50);
PPC_FUNC_IMPL(__imp__sub_823A5D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27584(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27584, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D5C"))) PPC_WEAK_FUNC(sub_823A5D5C);
PPC_FUNC_IMPL(__imp__sub_823A5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D60"))) PPC_WEAK_FUNC(sub_823A5D60);
PPC_FUNC_IMPL(__imp__sub_823A5D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27580(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27580, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D6C"))) PPC_WEAK_FUNC(sub_823A5D6C);
PPC_FUNC_IMPL(__imp__sub_823A5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D70"))) PPC_WEAK_FUNC(sub_823A5D70);
PPC_FUNC_IMPL(__imp__sub_823A5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f1,-27580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27580);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D7C"))) PPC_WEAK_FUNC(sub_823A5D7C);
PPC_FUNC_IMPL(__imp__sub_823A5D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D80"))) PPC_WEAK_FUNC(sub_823A5D80);
PPC_FUNC_IMPL(__imp__sub_823A5D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27576(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27576, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D8C"))) PPC_WEAK_FUNC(sub_823A5D8C);
PPC_FUNC_IMPL(__imp__sub_823A5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D90"))) PPC_WEAK_FUNC(sub_823A5D90);
PPC_FUNC_IMPL(__imp__sub_823A5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f1,-27576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27576);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D9C"))) PPC_WEAK_FUNC(sub_823A5D9C);
PPC_FUNC_IMPL(__imp__sub_823A5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DA0"))) PPC_WEAK_FUNC(sub_823A5DA0);
PPC_FUNC_IMPL(__imp__sub_823A5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27572(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27572, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DAC"))) PPC_WEAK_FUNC(sub_823A5DAC);
PPC_FUNC_IMPL(__imp__sub_823A5DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DB0"))) PPC_WEAK_FUNC(sub_823A5DB0);
PPC_FUNC_IMPL(__imp__sub_823A5DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27568(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27568, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DBC"))) PPC_WEAK_FUNC(sub_823A5DBC);
PPC_FUNC_IMPL(__imp__sub_823A5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DC0"))) PPC_WEAK_FUNC(sub_823A5DC0);
PPC_FUNC_IMPL(__imp__sub_823A5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27564(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27564, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DCC"))) PPC_WEAK_FUNC(sub_823A5DCC);
PPC_FUNC_IMPL(__imp__sub_823A5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DD0"))) PPC_WEAK_FUNC(sub_823A5DD0);
PPC_FUNC_IMPL(__imp__sub_823A5DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27560(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27560, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DDC"))) PPC_WEAK_FUNC(sub_823A5DDC);
PPC_FUNC_IMPL(__imp__sub_823A5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DE0"))) PPC_WEAK_FUNC(sub_823A5DE0);
PPC_FUNC_IMPL(__imp__sub_823A5DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27556(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27556, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DEC"))) PPC_WEAK_FUNC(sub_823A5DEC);
PPC_FUNC_IMPL(__imp__sub_823A5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DF0"))) PPC_WEAK_FUNC(sub_823A5DF0);
PPC_FUNC_IMPL(__imp__sub_823A5DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27552(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27552, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DFC"))) PPC_WEAK_FUNC(sub_823A5DFC);
PPC_FUNC_IMPL(__imp__sub_823A5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E00"))) PPC_WEAK_FUNC(sub_823A5E00);
PPC_FUNC_IMPL(__imp__sub_823A5E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27548(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27548, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E0C"))) PPC_WEAK_FUNC(sub_823A5E0C);
PPC_FUNC_IMPL(__imp__sub_823A5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E10"))) PPC_WEAK_FUNC(sub_823A5E10);
PPC_FUNC_IMPL(__imp__sub_823A5E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27544(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27544, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E1C"))) PPC_WEAK_FUNC(sub_823A5E1C);
PPC_FUNC_IMPL(__imp__sub_823A5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E20"))) PPC_WEAK_FUNC(sub_823A5E20);
PPC_FUNC_IMPL(__imp__sub_823A5E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27651, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E2C"))) PPC_WEAK_FUNC(sub_823A5E2C);
PPC_FUNC_IMPL(__imp__sub_823A5E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E30"))) PPC_WEAK_FUNC(sub_823A5E30);
PPC_FUNC_IMPL(__imp__sub_823A5E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27058(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27058, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E3C"))) PPC_WEAK_FUNC(sub_823A5E3C);
PPC_FUNC_IMPL(__imp__sub_823A5E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E40"))) PPC_WEAK_FUNC(sub_823A5E40);
PPC_FUNC_IMPL(__imp__sub_823A5E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27650, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E4C"))) PPC_WEAK_FUNC(sub_823A5E4C);
PPC_FUNC_IMPL(__imp__sub_823A5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E50"))) PPC_WEAK_FUNC(sub_823A5E50);
PPC_FUNC_IMPL(__imp__sub_823A5E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27540(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27540, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E5C"))) PPC_WEAK_FUNC(sub_823A5E5C);
PPC_FUNC_IMPL(__imp__sub_823A5E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E60"))) PPC_WEAK_FUNC(sub_823A5E60);
PPC_FUNC_IMPL(__imp__sub_823A5E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27536(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27536, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E6C"))) PPC_WEAK_FUNC(sub_823A5E6C);
PPC_FUNC_IMPL(__imp__sub_823A5E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E70"))) PPC_WEAK_FUNC(sub_823A5E70);
PPC_FUNC_IMPL(__imp__sub_823A5E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27532(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27532, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E7C"))) PPC_WEAK_FUNC(sub_823A5E7C);
PPC_FUNC_IMPL(__imp__sub_823A5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E80"))) PPC_WEAK_FUNC(sub_823A5E80);
PPC_FUNC_IMPL(__imp__sub_823A5E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27528(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E8C"))) PPC_WEAK_FUNC(sub_823A5E8C);
PPC_FUNC_IMPL(__imp__sub_823A5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E90"))) PPC_WEAK_FUNC(sub_823A5E90);
PPC_FUNC_IMPL(__imp__sub_823A5E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E9C"))) PPC_WEAK_FUNC(sub_823A5E9C);
PPC_FUNC_IMPL(__imp__sub_823A5E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EA0"))) PPC_WEAK_FUNC(sub_823A5EA0);
PPC_FUNC_IMPL(__imp__sub_823A5EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27649, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EAC"))) PPC_WEAK_FUNC(sub_823A5EAC);
PPC_FUNC_IMPL(__imp__sub_823A5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EB0"))) PPC_WEAK_FUNC(sub_823A5EB0);
PPC_FUNC_IMPL(__imp__sub_823A5EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27520(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27520, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EBC"))) PPC_WEAK_FUNC(sub_823A5EBC);
PPC_FUNC_IMPL(__imp__sub_823A5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EC0"))) PPC_WEAK_FUNC(sub_823A5EC0);
PPC_FUNC_IMPL(__imp__sub_823A5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27059(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27059, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5ECC"))) PPC_WEAK_FUNC(sub_823A5ECC);
PPC_FUNC_IMPL(__imp__sub_823A5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5ED0"))) PPC_WEAK_FUNC(sub_823A5ED0);
PPC_FUNC_IMPL(__imp__sub_823A5ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27519(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27519, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EDC"))) PPC_WEAK_FUNC(sub_823A5EDC);
PPC_FUNC_IMPL(__imp__sub_823A5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EE0"))) PPC_WEAK_FUNC(sub_823A5EE0);
PPC_FUNC_IMPL(__imp__sub_823A5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27518(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27518, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EEC"))) PPC_WEAK_FUNC(sub_823A5EEC);
PPC_FUNC_IMPL(__imp__sub_823A5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EF0"))) PPC_WEAK_FUNC(sub_823A5EF0);
PPC_FUNC_IMPL(__imp__sub_823A5EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27517(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27517, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EFC"))) PPC_WEAK_FUNC(sub_823A5EFC);
PPC_FUNC_IMPL(__imp__sub_823A5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5F00"))) PPC_WEAK_FUNC(sub_823A5F00);
PPC_FUNC_IMPL(__imp__sub_823A5F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27516(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27516, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5F0C"))) PPC_WEAK_FUNC(sub_823A5F0C);
PPC_FUNC_IMPL(__imp__sub_823A5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5F10"))) PPC_WEAK_FUNC(sub_823A5F10);
PPC_FUNC_IMPL(__imp__sub_823A5F10) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r8,-27515(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27515);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823a609c
	if (ctx.cr6.eq) goto loc_823A609C;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stb r3,-27515(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27515, ctx.r3.u8);
	// lwz r11,26912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x823A5F50;
	sub_8222C210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5f70
	if (ctx.cr6.eq) goto loc_823A5F70;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a5f74
	if (!ctx.cr6.eq) goto loc_823A5F74;
loc_823A5F70:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A5F74:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a609c
	if (ctx.cr6.eq) goto loc_823A609C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a6088
	if (ctx.cr6.eq) goto loc_823A6088;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a5fc0
	if (ctx.cr6.eq) goto loc_823A5FC0;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
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
	// b 0x823a608c
	goto loc_823A608C;
loc_823A5FC0:
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
	// ble 0x823a6030
	if (!ctx.cr0.gt) goto loc_823A6030;
loc_823A5FE0:
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
	// blt cr6,0x823a6000
	if (ctx.cr6.lt) goto loc_823A6000;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6000:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a601c
	if (ctx.cr6.eq) goto loc_823A601C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a6024
	goto loc_823A6024;
loc_823A601C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A6024:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a5fe0
	if (ctx.cr6.gt) goto loc_823A5FE0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6030:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a6074
	if (ctx.cr6.eq) goto loc_823A6074;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a604c
	if (ctx.cr6.gt) goto loc_823A604C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A604C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6074
	if (!ctx.cr6.eq) goto loc_823A6074;
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
	// b 0x823a608c
	goto loc_823A608C;
loc_823A6074:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a608c
	goto loc_823A608C;
loc_823A6088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A608C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a609c
	if (ctx.cr6.eq) goto loc_823A609C;
	// bl 0x823f23b0
	ctx.lr = 0x823A609C;
	sub_823F23B0(ctx, base);
loc_823A609C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60AC"))) PPC_WEAK_FUNC(sub_823A60AC);
PPC_FUNC_IMPL(__imp__sub_823A60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60B0"))) PPC_WEAK_FUNC(sub_823A60B0);
PPC_FUNC_IMPL(__imp__sub_823A60B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,28432(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28432, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60BC"))) PPC_WEAK_FUNC(sub_823A60BC);
PPC_FUNC_IMPL(__imp__sub_823A60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60C0"))) PPC_WEAK_FUNC(sub_823A60C0);
PPC_FUNC_IMPL(__imp__sub_823A60C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stb r3,17930(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17930, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60CC"))) PPC_WEAK_FUNC(sub_823A60CC);
PPC_FUNC_IMPL(__imp__sub_823A60CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60D0"))) PPC_WEAK_FUNC(sub_823A60D0);
PPC_FUNC_IMPL(__imp__sub_823A60D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b6ec08
	sub_82B6EC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A60D4"))) PPC_WEAK_FUNC(sub_823A60D4);
PPC_FUNC_IMPL(__imp__sub_823A60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60D8"))) PPC_WEAK_FUNC(sub_823A60D8);
PPC_FUNC_IMPL(__imp__sub_823A60D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b5d5f0
	sub_82B5D5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A60DC"))) PPC_WEAK_FUNC(sub_823A60DC);
PPC_FUNC_IMPL(__imp__sub_823A60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60E0"))) PPC_WEAK_FUNC(sub_823A60E0);
PPC_FUNC_IMPL(__imp__sub_823A60E0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stfs f1,-27512(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27512, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a619c
	if (ctx.cr6.eq) goto loc_823A619C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6198
	if (ctx.cr6.eq) goto loc_823A6198;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6148
	if (ctx.cr6.eq) goto loc_823A6148;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a614c
	if (!ctx.cr6.eq) goto loc_823A614C;
loc_823A6148:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A614C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6280
	if (ctx.cr6.eq) goto loc_823A6280;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a626c
	if (ctx.cr6.eq) goto loc_823A626C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a61a4
	if (ctx.cr6.eq) goto loc_823A61A4;
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
	// b 0x823a6270
	goto loc_823A6270;
loc_823A6198:
	// bl 0x821940c8
	ctx.lr = 0x823A619C;
	sub_821940C8(ctx, base);
loc_823A619C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a6148
	goto loc_823A6148;
loc_823A61A4:
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
	// ble 0x823a6214
	if (!ctx.cr0.gt) goto loc_823A6214;
loc_823A61C4:
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
	// blt cr6,0x823a61e4
	if (ctx.cr6.lt) goto loc_823A61E4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A61E4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a6200
	if (ctx.cr6.eq) goto loc_823A6200;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a6208
	goto loc_823A6208;
loc_823A6200:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A6208:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a61c4
	if (ctx.cr6.gt) goto loc_823A61C4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6214:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a6258
	if (ctx.cr6.eq) goto loc_823A6258;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a6230
	if (ctx.cr6.gt) goto loc_823A6230;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6258
	if (!ctx.cr6.eq) goto loc_823A6258;
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
	// b 0x823a6270
	goto loc_823A6270;
loc_823A6258:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a6270
	goto loc_823A6270;
loc_823A626C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6280
	if (ctx.cr6.eq) goto loc_823A6280;
	// bl 0x824a23b0
	ctx.lr = 0x823A6280;
	sub_824A23B0(ctx, base);
loc_823A6280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6290"))) PPC_WEAK_FUNC(sub_823A6290);
PPC_FUNC_IMPL(__imp__sub_823A6290) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stfs f1,-27508(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27508, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a634c
	if (ctx.cr6.eq) goto loc_823A634C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6348
	if (ctx.cr6.eq) goto loc_823A6348;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a62f8
	if (ctx.cr6.eq) goto loc_823A62F8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a62fc
	if (!ctx.cr6.eq) goto loc_823A62FC;
loc_823A62F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A62FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6430
	if (ctx.cr6.eq) goto loc_823A6430;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a641c
	if (ctx.cr6.eq) goto loc_823A641C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6354
	if (ctx.cr6.eq) goto loc_823A6354;
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
	// b 0x823a6420
	goto loc_823A6420;
loc_823A6348:
	// bl 0x821940c8
	ctx.lr = 0x823A634C;
	sub_821940C8(ctx, base);
loc_823A634C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a62f8
	goto loc_823A62F8;
loc_823A6354:
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
	// ble 0x823a63c4
	if (!ctx.cr0.gt) goto loc_823A63C4;
loc_823A6374:
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
	// blt cr6,0x823a6394
	if (ctx.cr6.lt) goto loc_823A6394;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6394:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a63b0
	if (ctx.cr6.eq) goto loc_823A63B0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a63b8
	goto loc_823A63B8;
loc_823A63B0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A63B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a6374
	if (ctx.cr6.gt) goto loc_823A6374;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A63C4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a6408
	if (ctx.cr6.eq) goto loc_823A6408;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a63e0
	if (ctx.cr6.gt) goto loc_823A63E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A63E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6408
	if (!ctx.cr6.eq) goto loc_823A6408;
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
	// b 0x823a6420
	goto loc_823A6420;
loc_823A6408:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a6420
	goto loc_823A6420;
loc_823A641C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6430
	if (ctx.cr6.eq) goto loc_823A6430;
	// bl 0x824a23b0
	ctx.lr = 0x823A6430;
	sub_824A23B0(ctx, base);
loc_823A6430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6440"))) PPC_WEAK_FUNC(sub_823A6440);
PPC_FUNC_IMPL(__imp__sub_823A6440) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stfs f1,-27504(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27504, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a64fc
	if (ctx.cr6.eq) goto loc_823A64FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a64f8
	if (ctx.cr6.eq) goto loc_823A64F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a64a8
	if (ctx.cr6.eq) goto loc_823A64A8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a64ac
	if (!ctx.cr6.eq) goto loc_823A64AC;
loc_823A64A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A64AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a65e0
	if (ctx.cr6.eq) goto loc_823A65E0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a65cc
	if (ctx.cr6.eq) goto loc_823A65CC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6504
	if (ctx.cr6.eq) goto loc_823A6504;
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
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A64F8:
	// bl 0x821940c8
	ctx.lr = 0x823A64FC;
	sub_821940C8(ctx, base);
loc_823A64FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a64a8
	goto loc_823A64A8;
loc_823A6504:
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
	// ble 0x823a6574
	if (!ctx.cr0.gt) goto loc_823A6574;
loc_823A6524:
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
	// blt cr6,0x823a6544
	if (ctx.cr6.lt) goto loc_823A6544;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6544:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a6560
	if (ctx.cr6.eq) goto loc_823A6560;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a6568
	goto loc_823A6568;
loc_823A6560:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A6568:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a6524
	if (ctx.cr6.gt) goto loc_823A6524;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6574:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a65b8
	if (ctx.cr6.eq) goto loc_823A65B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a6590
	if (ctx.cr6.gt) goto loc_823A6590;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6590:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a65b8
	if (!ctx.cr6.eq) goto loc_823A65B8;
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
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A65B8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A65CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A65D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a65e0
	if (ctx.cr6.eq) goto loc_823A65E0;
	// bl 0x824a23b0
	ctx.lr = 0x823A65E0;
	sub_824A23B0(ctx, base);
loc_823A65E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A65F0"))) PPC_WEAK_FUNC(sub_823A65F0);
PPC_FUNC_IMPL(__imp__sub_823A65F0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stfs f1,-27500(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27500, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a66ac
	if (ctx.cr6.eq) goto loc_823A66AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a66a8
	if (ctx.cr6.eq) goto loc_823A66A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6658
	if (ctx.cr6.eq) goto loc_823A6658;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a665c
	if (!ctx.cr6.eq) goto loc_823A665C;
loc_823A6658:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A665C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6790
	if (ctx.cr6.eq) goto loc_823A6790;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a677c
	if (ctx.cr6.eq) goto loc_823A677C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a66b4
	if (ctx.cr6.eq) goto loc_823A66B4;
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
	// b 0x823a6780
	goto loc_823A6780;
loc_823A66A8:
	// bl 0x821940c8
	ctx.lr = 0x823A66AC;
	sub_821940C8(ctx, base);
loc_823A66AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a6658
	goto loc_823A6658;
loc_823A66B4:
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
	// ble 0x823a6724
	if (!ctx.cr0.gt) goto loc_823A6724;
loc_823A66D4:
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
	// blt cr6,0x823a66f4
	if (ctx.cr6.lt) goto loc_823A66F4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A66F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a6710
	if (ctx.cr6.eq) goto loc_823A6710;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a6718
	goto loc_823A6718;
loc_823A6710:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A6718:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a66d4
	if (ctx.cr6.gt) goto loc_823A66D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6724:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a6768
	if (ctx.cr6.eq) goto loc_823A6768;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a6740
	if (ctx.cr6.gt) goto loc_823A6740;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6768
	if (!ctx.cr6.eq) goto loc_823A6768;
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
	// b 0x823a6780
	goto loc_823A6780;
loc_823A6768:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a6780
	goto loc_823A6780;
loc_823A677C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6780:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6790
	if (ctx.cr6.eq) goto loc_823A6790;
	// bl 0x824a23b0
	ctx.lr = 0x823A6790;
	sub_824A23B0(ctx, base);
loc_823A6790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67A0"))) PPC_WEAK_FUNC(sub_823A67A0);
PPC_FUNC_IMPL(__imp__sub_823A67A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27496(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27496, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67AC"))) PPC_WEAK_FUNC(sub_823A67AC);
PPC_FUNC_IMPL(__imp__sub_823A67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67B0"))) PPC_WEAK_FUNC(sub_823A67B0);
PPC_FUNC_IMPL(__imp__sub_823A67B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27664(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27664, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67BC"))) PPC_WEAK_FUNC(sub_823A67BC);
PPC_FUNC_IMPL(__imp__sub_823A67BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67C0"))) PPC_WEAK_FUNC(sub_823A67C0);
PPC_FUNC_IMPL(__imp__sub_823A67C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27660(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27660, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67CC"))) PPC_WEAK_FUNC(sub_823A67CC);
PPC_FUNC_IMPL(__imp__sub_823A67CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67D0"))) PPC_WEAK_FUNC(sub_823A67D0);
PPC_FUNC_IMPL(__imp__sub_823A67D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27727(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27727, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67DC"))) PPC_WEAK_FUNC(sub_823A67DC);
PPC_FUNC_IMPL(__imp__sub_823A67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67E0"))) PPC_WEAK_FUNC(sub_823A67E0);
PPC_FUNC_IMPL(__imp__sub_823A67E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27045, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67EC"))) PPC_WEAK_FUNC(sub_823A67EC);
PPC_FUNC_IMPL(__imp__sub_823A67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67F0"))) PPC_WEAK_FUNC(sub_823A67F0);
PPC_FUNC_IMPL(__imp__sub_823A67F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27046(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27046, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67FC"))) PPC_WEAK_FUNC(sub_823A67FC);
PPC_FUNC_IMPL(__imp__sub_823A67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6800"))) PPC_WEAK_FUNC(sub_823A6800);
PPC_FUNC_IMPL(__imp__sub_823A6800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27047(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27047, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A680C"))) PPC_WEAK_FUNC(sub_823A680C);
PPC_FUNC_IMPL(__imp__sub_823A680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6810"))) PPC_WEAK_FUNC(sub_823A6810);
PPC_FUNC_IMPL(__imp__sub_823A6810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27726(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27726, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A681C"))) PPC_WEAK_FUNC(sub_823A681C);
PPC_FUNC_IMPL(__imp__sub_823A681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6820"))) PPC_WEAK_FUNC(sub_823A6820);
PPC_FUNC_IMPL(__imp__sub_823A6820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27725(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27725, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A682C"))) PPC_WEAK_FUNC(sub_823A682C);
PPC_FUNC_IMPL(__imp__sub_823A682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6830"))) PPC_WEAK_FUNC(sub_823A6830);
PPC_FUNC_IMPL(__imp__sub_823A6830) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,26912(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26912);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v2,v11,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// vrlimi128 v2,v13,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x82623648
	ctx.lr = 0x823A68B0;
	sub_82623648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A68C0"))) PPC_WEAK_FUNC(sub_823A68C0);
PPC_FUNC_IMPL(__imp__sub_823A68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a68ec
	if (ctx.cr6.eq) goto loc_823A68EC;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a68f0
	if (!ctx.cr6.eq) goto loc_823A68F0;
loc_823A68EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A68F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a696c
	if (ctx.cr6.eq) goto loc_823A696C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,26912(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26912);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v2,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v2,v12,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// vrlimi128 v2,v13,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x826236c8
	ctx.lr = 0x823A696C;
	sub_826236C8(ctx, base);
loc_823A696C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A697C"))) PPC_WEAK_FUNC(sub_823A697C);
PPC_FUNC_IMPL(__imp__sub_823A697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6980"))) PPC_WEAK_FUNC(sub_823A6980);
PPC_FUNC_IMPL(__imp__sub_823A6980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6ad4
	if (ctx.cr6.eq) goto loc_823A6AD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6ad0
	if (ctx.cr6.eq) goto loc_823A6AD0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a69e8
	if (ctx.cr6.eq) goto loc_823A69E8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a69ec
	if (!ctx.cr6.eq) goto loc_823A69EC;
loc_823A69E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A69EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6ab8
	if (ctx.cr6.eq) goto loc_823A6AB8;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A6A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-27468
	ctx.r4.s64 = ctx.r6.s64 + -27468;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8222cf18
	ctx.lr = 0x823A6A4C;
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,13128
	ctx.r4.s64 = ctx.r4.s64 + 13128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823A6A60;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// lvlx v0,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,1
	ctx.r6.s64 = 1;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vaddfp128 v1,v127,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// bl 0x82391198
	ctx.lr = 0x823A6AA8;
	sub_82391198(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x823A6AB0;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x823A6AB8;
	sub_82214F08(ctx, base);
loc_823A6AB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823A6AD0:
	// bl 0x821940c8
	ctx.lr = 0x823A6AD4;
	sub_821940C8(ctx, base);
loc_823A6AD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a69e8
	goto loc_823A69E8;
}

__attribute__((alias("__imp__sub_823A6ADC"))) PPC_WEAK_FUNC(sub_823A6ADC);
PPC_FUNC_IMPL(__imp__sub_823A6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6AE0"))) PPC_WEAK_FUNC(sub_823A6AE0);
PPC_FUNC_IMPL(__imp__sub_823A6AE0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
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
	// beq cr6,0x823a6ba0
	if (ctx.cr6.eq) goto loc_823A6BA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6b9c
	if (ctx.cr6.eq) goto loc_823A6B9C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6b50
	if (ctx.cr6.eq) goto loc_823A6B50;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823a6b54
	if (!ctx.cr6.eq) goto loc_823A6B54;
loc_823A6B50:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823A6B54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6c9c
	if (ctx.cr6.eq) goto loc_823A6C9C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a6c6c
	if (ctx.cr6.eq) goto loc_823A6C6C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6ba8
	if (ctx.cr6.eq) goto loc_823A6BA8;
	// lbz r10,154(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 154);
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
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6B9C:
	// bl 0x821940c8
	ctx.lr = 0x823A6BA0;
	sub_821940C8(ctx, base);
loc_823A6BA0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x823a6b50
	goto loc_823A6B50;
loc_823A6BA8:
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
	// ble 0x823a6c14
	if (!ctx.cr0.gt) goto loc_823A6C14;
loc_823A6BC4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,154
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 154, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a6be4
	if (ctx.cr6.lt) goto loc_823A6BE4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_823A6BE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a6c00
	if (ctx.cr6.eq) goto loc_823A6C00;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a6c08
	goto loc_823A6C08;
loc_823A6C00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823A6C08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823a6bc4
	if (ctx.cr6.gt) goto loc_823A6BC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6C14:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823a6c58
	if (ctx.cr6.eq) goto loc_823A6C58;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,154
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 154, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823a6c30
	if (ctx.cr6.gt) goto loc_823A6C30;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823A6C30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6c58
	if (!ctx.cr6.eq) goto loc_823A6C58;
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
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6C58:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6C6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823A6C70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6c9c
	if (ctx.cr6.eq) goto loc_823A6C9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	ctx.lr = 0x823A6C88;
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6c9c
	if (ctx.cr6.eq) goto loc_823A6C9C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
loc_823A6C9C:
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

__attribute__((alias("__imp__sub_823A6CB4"))) PPC_WEAK_FUNC(sub_823A6CB4);
PPC_FUNC_IMPL(__imp__sub_823A6CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6CB8"))) PPC_WEAK_FUNC(sub_823A6CB8);
PPC_FUNC_IMPL(__imp__sub_823A6CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-28189(r11)
	PPC_STORE_U8(ctx.r11.u32 + -28189, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CC4"))) PPC_WEAK_FUNC(sub_823A6CC4);
PPC_FUNC_IMPL(__imp__sub_823A6CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6CC8"))) PPC_WEAK_FUNC(sub_823A6CC8);
PPC_FUNC_IMPL(__imp__sub_823A6CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27892(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27892, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CD4"))) PPC_WEAK_FUNC(sub_823A6CD4);
PPC_FUNC_IMPL(__imp__sub_823A6CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6CD8"))) PPC_WEAK_FUNC(sub_823A6CD8);
PPC_FUNC_IMPL(__imp__sub_823A6CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27891(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27891, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CE4"))) PPC_WEAK_FUNC(sub_823A6CE4);
PPC_FUNC_IMPL(__imp__sub_823A6CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6CE8"))) PPC_WEAK_FUNC(sub_823A6CE8);
PPC_FUNC_IMPL(__imp__sub_823A6CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26994(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26994, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CF4"))) PPC_WEAK_FUNC(sub_823A6CF4);
PPC_FUNC_IMPL(__imp__sub_823A6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6CF8"))) PPC_WEAK_FUNC(sub_823A6CF8);
PPC_FUNC_IMPL(__imp__sub_823A6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26995(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26995, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D04"))) PPC_WEAK_FUNC(sub_823A6D04);
PPC_FUNC_IMPL(__imp__sub_823A6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D08"))) PPC_WEAK_FUNC(sub_823A6D08);
PPC_FUNC_IMPL(__imp__sub_823A6D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26996, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D14"))) PPC_WEAK_FUNC(sub_823A6D14);
PPC_FUNC_IMPL(__imp__sub_823A6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D18"))) PPC_WEAK_FUNC(sub_823A6D18);
PPC_FUNC_IMPL(__imp__sub_823A6D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26997(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26997, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D24"))) PPC_WEAK_FUNC(sub_823A6D24);
PPC_FUNC_IMPL(__imp__sub_823A6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D28"))) PPC_WEAK_FUNC(sub_823A6D28);
PPC_FUNC_IMPL(__imp__sub_823A6D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27887(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27887, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D34"))) PPC_WEAK_FUNC(sub_823A6D34);
PPC_FUNC_IMPL(__imp__sub_823A6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D38"))) PPC_WEAK_FUNC(sub_823A6D38);
PPC_FUNC_IMPL(__imp__sub_823A6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26998(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26998, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D44"))) PPC_WEAK_FUNC(sub_823A6D44);
PPC_FUNC_IMPL(__imp__sub_823A6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D48"))) PPC_WEAK_FUNC(sub_823A6D48);
PPC_FUNC_IMPL(__imp__sub_823A6D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26999(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26999, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D54"))) PPC_WEAK_FUNC(sub_823A6D54);
PPC_FUNC_IMPL(__imp__sub_823A6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D58"))) PPC_WEAK_FUNC(sub_823A6D58);
PPC_FUNC_IMPL(__imp__sub_823A6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27000(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27000, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D64"))) PPC_WEAK_FUNC(sub_823A6D64);
PPC_FUNC_IMPL(__imp__sub_823A6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D68"))) PPC_WEAK_FUNC(sub_823A6D68);
PPC_FUNC_IMPL(__imp__sub_823A6D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27001(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27001, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D74"))) PPC_WEAK_FUNC(sub_823A6D74);
PPC_FUNC_IMPL(__imp__sub_823A6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D78"))) PPC_WEAK_FUNC(sub_823A6D78);
PPC_FUNC_IMPL(__imp__sub_823A6D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27886(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27886, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D84"))) PPC_WEAK_FUNC(sub_823A6D84);
PPC_FUNC_IMPL(__imp__sub_823A6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D88"))) PPC_WEAK_FUNC(sub_823A6D88);
PPC_FUNC_IMPL(__imp__sub_823A6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27885(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27885, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D94"))) PPC_WEAK_FUNC(sub_823A6D94);
PPC_FUNC_IMPL(__imp__sub_823A6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D98"))) PPC_WEAK_FUNC(sub_823A6D98);
PPC_FUNC_IMPL(__imp__sub_823A6D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827cc6a8
	sub_827CC6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A6DDC"))) PPC_WEAK_FUNC(sub_823A6DDC);
PPC_FUNC_IMPL(__imp__sub_823A6DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6DE0"))) PPC_WEAK_FUNC(sub_823A6DE0);
PPC_FUNC_IMPL(__imp__sub_823A6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27884(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27884, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6DEC"))) PPC_WEAK_FUNC(sub_823A6DEC);
PPC_FUNC_IMPL(__imp__sub_823A6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6DF0"))) PPC_WEAK_FUNC(sub_823A6DF0);
PPC_FUNC_IMPL(__imp__sub_823A6DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,27072(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27072, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6DFC"))) PPC_WEAK_FUNC(sub_823A6DFC);
PPC_FUNC_IMPL(__imp__sub_823A6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E00"))) PPC_WEAK_FUNC(sub_823A6E00);
PPC_FUNC_IMPL(__imp__sub_823A6E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27484(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27484, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E0C"))) PPC_WEAK_FUNC(sub_823A6E0C);
PPC_FUNC_IMPL(__imp__sub_823A6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E10"))) PPC_WEAK_FUNC(sub_823A6E10);
PPC_FUNC_IMPL(__imp__sub_823A6E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27480(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27480, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E1C"))) PPC_WEAK_FUNC(sub_823A6E1C);
PPC_FUNC_IMPL(__imp__sub_823A6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E20"))) PPC_WEAK_FUNC(sub_823A6E20);
PPC_FUNC_IMPL(__imp__sub_823A6E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27476, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E2C"))) PPC_WEAK_FUNC(sub_823A6E2C);
PPC_FUNC_IMPL(__imp__sub_823A6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E30"))) PPC_WEAK_FUNC(sub_823A6E30);
PPC_FUNC_IMPL(__imp__sub_823A6E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27002, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E3C"))) PPC_WEAK_FUNC(sub_823A6E3C);
PPC_FUNC_IMPL(__imp__sub_823A6E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E40"))) PPC_WEAK_FUNC(sub_823A6E40);
PPC_FUNC_IMPL(__imp__sub_823A6E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27003(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27003, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E4C"))) PPC_WEAK_FUNC(sub_823A6E4C);
PPC_FUNC_IMPL(__imp__sub_823A6E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E50"))) PPC_WEAK_FUNC(sub_823A6E50);
PPC_FUNC_IMPL(__imp__sub_823A6E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27005(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27005, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E5C"))) PPC_WEAK_FUNC(sub_823A6E5C);
PPC_FUNC_IMPL(__imp__sub_823A6E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E60"))) PPC_WEAK_FUNC(sub_823A6E60);
PPC_FUNC_IMPL(__imp__sub_823A6E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27880(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27880, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E6C"))) PPC_WEAK_FUNC(sub_823A6E6C);
PPC_FUNC_IMPL(__imp__sub_823A6E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E70"))) PPC_WEAK_FUNC(sub_823A6E70);
PPC_FUNC_IMPL(__imp__sub_823A6E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27006(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27006, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E7C"))) PPC_WEAK_FUNC(sub_823A6E7C);
PPC_FUNC_IMPL(__imp__sub_823A6E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E80"))) PPC_WEAK_FUNC(sub_823A6E80);
PPC_FUNC_IMPL(__imp__sub_823A6E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27879(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27879, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E8C"))) PPC_WEAK_FUNC(sub_823A6E8C);
PPC_FUNC_IMPL(__imp__sub_823A6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E90"))) PPC_WEAK_FUNC(sub_823A6E90);
PPC_FUNC_IMPL(__imp__sub_823A6E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27878(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27878, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E9C"))) PPC_WEAK_FUNC(sub_823A6E9C);
PPC_FUNC_IMPL(__imp__sub_823A6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6EA0"))) PPC_WEAK_FUNC(sub_823A6EA0);
PPC_FUNC_IMPL(__imp__sub_823A6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27007, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EAC"))) PPC_WEAK_FUNC(sub_823A6EAC);
PPC_FUNC_IMPL(__imp__sub_823A6EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6EB0"))) PPC_WEAK_FUNC(sub_823A6EB0);
PPC_FUNC_IMPL(__imp__sub_823A6EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27008(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27008, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EBC"))) PPC_WEAK_FUNC(sub_823A6EBC);
PPC_FUNC_IMPL(__imp__sub_823A6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6EC0"))) PPC_WEAK_FUNC(sub_823A6EC0);
PPC_FUNC_IMPL(__imp__sub_823A6EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27009(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27009, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6ECC"))) PPC_WEAK_FUNC(sub_823A6ECC);
PPC_FUNC_IMPL(__imp__sub_823A6ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6ED0"))) PPC_WEAK_FUNC(sub_823A6ED0);
PPC_FUNC_IMPL(__imp__sub_823A6ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27010(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27010, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EDC"))) PPC_WEAK_FUNC(sub_823A6EDC);
PPC_FUNC_IMPL(__imp__sub_823A6EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6EE0"))) PPC_WEAK_FUNC(sub_823A6EE0);
PPC_FUNC_IMPL(__imp__sub_823A6EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27004, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EEC"))) PPC_WEAK_FUNC(sub_823A6EEC);
PPC_FUNC_IMPL(__imp__sub_823A6EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6EF0"))) PPC_WEAK_FUNC(sub_823A6EF0);
PPC_FUNC_IMPL(__imp__sub_823A6EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27876(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27876, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EFC"))) PPC_WEAK_FUNC(sub_823A6EFC);
PPC_FUNC_IMPL(__imp__sub_823A6EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F00"))) PPC_WEAK_FUNC(sub_823A6F00);
PPC_FUNC_IMPL(__imp__sub_823A6F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27011(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27011, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F0C"))) PPC_WEAK_FUNC(sub_823A6F0C);
PPC_FUNC_IMPL(__imp__sub_823A6F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F10"))) PPC_WEAK_FUNC(sub_823A6F10);
PPC_FUNC_IMPL(__imp__sub_823A6F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27872(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27872, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F1C"))) PPC_WEAK_FUNC(sub_823A6F1C);
PPC_FUNC_IMPL(__imp__sub_823A6F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F20"))) PPC_WEAK_FUNC(sub_823A6F20);
PPC_FUNC_IMPL(__imp__sub_823A6F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27012, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F2C"))) PPC_WEAK_FUNC(sub_823A6F2C);
PPC_FUNC_IMPL(__imp__sub_823A6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F30"))) PPC_WEAK_FUNC(sub_823A6F30);
PPC_FUNC_IMPL(__imp__sub_823A6F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27877(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27877, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F3C"))) PPC_WEAK_FUNC(sub_823A6F3C);
PPC_FUNC_IMPL(__imp__sub_823A6F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F40"))) PPC_WEAK_FUNC(sub_823A6F40);
PPC_FUNC_IMPL(__imp__sub_823A6F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27013, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F4C"))) PPC_WEAK_FUNC(sub_823A6F4C);
PPC_FUNC_IMPL(__imp__sub_823A6F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F50"))) PPC_WEAK_FUNC(sub_823A6F50);
PPC_FUNC_IMPL(__imp__sub_823A6F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27868(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27868, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F5C"))) PPC_WEAK_FUNC(sub_823A6F5C);
PPC_FUNC_IMPL(__imp__sub_823A6F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F60"))) PPC_WEAK_FUNC(sub_823A6F60);
PPC_FUNC_IMPL(__imp__sub_823A6F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27864(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27864, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F6C"))) PPC_WEAK_FUNC(sub_823A6F6C);
PPC_FUNC_IMPL(__imp__sub_823A6F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F70"))) PPC_WEAK_FUNC(sub_823A6F70);
PPC_FUNC_IMPL(__imp__sub_823A6F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27860(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F7C"))) PPC_WEAK_FUNC(sub_823A6F7C);
PPC_FUNC_IMPL(__imp__sub_823A6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F80"))) PPC_WEAK_FUNC(sub_823A6F80);
PPC_FUNC_IMPL(__imp__sub_823A6F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27856(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27856, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F8C"))) PPC_WEAK_FUNC(sub_823A6F8C);
PPC_FUNC_IMPL(__imp__sub_823A6F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F90"))) PPC_WEAK_FUNC(sub_823A6F90);
PPC_FUNC_IMPL(__imp__sub_823A6F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27852, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F9C"))) PPC_WEAK_FUNC(sub_823A6F9C);
PPC_FUNC_IMPL(__imp__sub_823A6F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FA0"))) PPC_WEAK_FUNC(sub_823A6FA0);
PPC_FUNC_IMPL(__imp__sub_823A6FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27848, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FAC"))) PPC_WEAK_FUNC(sub_823A6FAC);
PPC_FUNC_IMPL(__imp__sub_823A6FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FB0"))) PPC_WEAK_FUNC(sub_823A6FB0);
PPC_FUNC_IMPL(__imp__sub_823A6FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27844(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27844, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FBC"))) PPC_WEAK_FUNC(sub_823A6FBC);
PPC_FUNC_IMPL(__imp__sub_823A6FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FC0"))) PPC_WEAK_FUNC(sub_823A6FC0);
PPC_FUNC_IMPL(__imp__sub_823A6FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-27840(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27840, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FCC"))) PPC_WEAK_FUNC(sub_823A6FCC);
PPC_FUNC_IMPL(__imp__sub_823A6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FD0"))) PPC_WEAK_FUNC(sub_823A6FD0);
PPC_FUNC_IMPL(__imp__sub_823A6FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,-26460(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -26460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FE0"))) PPC_WEAK_FUNC(sub_823A6FE0);
PPC_FUNC_IMPL(__imp__sub_823A6FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,-26456(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -26456, temp.u32);
	// blr 
	return;
}

