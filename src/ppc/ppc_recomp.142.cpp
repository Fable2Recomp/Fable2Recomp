#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82D95AF0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d95b2c
	if (cr6.eq) goto loc_82D95B2C;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d95b2c
	if (cr6.eq) goto loc_82D95B2C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D95B2C:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(280) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d95b70
	if (cr6.eq) goto loc_82D95B70;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d95b70
	if (cr6.eq) goto loc_82D95B70;
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
	// bne cr6,0x82d95b70
	if (!cr6.eq) goto loc_82D95B70;
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
loc_82D95B70:
	// stw r31,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r31.u32);
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

PPC_WEAK_FUNC(sub_82D95AF0) {
	__imp__sub_82D95AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95B90) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// sth r9,284(r31)
	PPC_STORE_U16(r31.u32 + 284, ctx.r9.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r8,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_82D95B90) {
	__imp__sub_82D95B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95BF8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,25548
	r11.s64 = r11.s64 + 25548;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(280) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d95c5c
	if (cr6.eq) goto loc_82D95C5C;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d95c5c
	if (cr6.eq) goto loc_82D95C5C;
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
	// bne cr6,0x82d95c5c
	if (!cr6.eq) goto loc_82D95C5C;
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
loc_82D95C5C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D95BF8) {
	__imp__sub_82D95BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95C80) {
	__imp__sub_82D95C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95CA8) {
	__imp__sub_82D95CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95CD0) {
	__imp__sub_82D95CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95CF8) {
	__imp__sub_82D95CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95D20) {
	__imp__sub_82D95D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95D28) {
	__imp__sub_82D95D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95D30) {
	__imp__sub_82D95D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95D38) {
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
	// bl 0x82d95b90
	sub_82D95B90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,26196
	r11.s64 = r11.s64 + 26196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D95D38) {
	__imp__sub_82D95D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// lvx128 v0,r11,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r30,64
	r30.s64 = 64;
	// stvx128 v0,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r31,144
	r31.s64 = 144;
	// lvx128 v0,r11,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r3,r4,208
	ctx.r3.s64 = ctx.r4.s64 + 208;
	// stvx128 v0,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r4,r4,224
	ctx.r4.s64 = ctx.r4.s64 + 224;
	// lvx128 v0,r11,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r9,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r8,r5
	ea = (ctx.r8.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r9,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r9,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r9,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// lfs f0,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 168, temp.u32);
	// lbz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 172);
	// stb r9,172(r10)
	PPC_STORE_U8(ctx.r10.u32 + 172, ctx.r9.u8);
	// lbz r9,173(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 173);
	// stb r9,173(r10)
	PPC_STORE_U8(ctx.r10.u32 + 173, ctx.r9.u8);
	// lbz r11,174(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 174);
	// stb r11,174(r10)
	PPC_STORE_U8(ctx.r10.u32 + 174, r11.u8);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95D80) {
	__imp__sub_82D95D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95E58) {
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
	// bl 0x82d95f08
	sub_82D95F08(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,-29060
	r11.s64 = r11.s64 + -29060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D95E58) {
	__imp__sub_82D95E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95EA0) {
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
	// bl 0x82d95f08
	sub_82D95F08(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-28956
	r11.s64 = r11.s64 + -28956;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D95EA0) {
	__imp__sub_82D95EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D95EE8) {
	__imp__sub_82D95EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95F08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d846d0
	sub_82D846D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,-29164
	r11.s64 = r11.s64 + -29164;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82D95F08) {
	__imp__sub_82D95F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// fdivs f0,f0,f11
	f0.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95F78) {
	__imp__sub_82D95F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D95FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r10,192
	ctx.r10.s64 = 192;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f12,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-4(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D95FC8) {
	__imp__sub_82D95FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96010) {
	__imp__sub_82D96010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,192
	r11.s64 = 192;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96050) {
	__imp__sub_82D96050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vspltw v10,v0,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r11,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v11,v10,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v13,v9,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d59410
	sub_82D59410(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96088) {
	__imp__sub_82D96088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96108) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// fdivs f0,f0,f11
	f0.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x82d59528
	sub_82D59528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96108) {
	__imp__sub_82D96108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v12,r3,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v12,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 0));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96180) {
	__imp__sub_82D96180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D961B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D961B8) {
	__imp__sub_82D961B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(80) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96210) {
	__imp__sub_82D96210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// li r31,96
	r31.s64 = 96;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lvx128 v0,r3,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,16896
	ctx.r9.s64 = ctx.r9.s64 + 16896;
	// vsubfp v13,v13,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v0,99
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v9,r11,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v8,r11,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor v5,v9,v9
	simd::store_i8(ctx.v5.u8, simd::load_i8(ctx.v9.u8));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v6,v7,v7
	simd::store_i8(ctx.v6.u8, simd::load_i8(ctx.v7.u8));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v4,v8,v8
	simd::store_i8(ctx.v4.u8, simd::load_i8(ctx.v8.u8));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v2,v13,135
	simd::store_i32(ctx.v2.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v3,v2,v3
	simd::store_f32_aligned(ctx.v3.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v2.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v3
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vmsum3fp128 v13,v9,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v9,v8,v0
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v7,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v13,v13,v12
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v12.u32), simd::load_i32(ctx.v13.u32)));
	// vmrghw v0,v0,v9
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v9.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// vmulfp128 v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vspltw v13,v0,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v12,v0,1
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v6,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v13,v5,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v4,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96260) {
	__imp__sub_82D96260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D96338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r7,192
	ctx.r7.s64 = 192;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,16896
	ctx.r10.s64 = ctx.r10.s64 + 16896;
	// lvx128 v10,r11,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v10,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v9,v9,v0
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v7,r11,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v0,v8,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v12,r3,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// lvx128 v6,r11,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmrghw v13,v10,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v10.u32)));
	// vmrghw v0,v0,v9
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v9.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// vmulfp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vspltw v13,v0,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v12,v0,1
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v13,v7,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v6,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D96338) {
	__imp__sub_82D96338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D963B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D963D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r7,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r7.u32);
	// stw r8,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r8.u32);
	// bne cr6,0x82d963d0
	if (!cr6.eq) goto loc_82D963D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D963B8) {
	__imp__sub_82D963B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D963F0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v31{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r12,r1,-176
	r12.s64 = ctx.r1.s64 + -176;
	// bl 0x82ffff3c
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f30.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	f31.f64 = double(float(f0.f64 * f30.f64));
	// ble cr6,0x82d97054
	if (!cr6.gt) goto loc_82D97054;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// addi r30,r11,16896
	r30.s64 = r11.s64 + 16896;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r28,r3,64
	r28.s64 = ctx.r3.s64 + 64;
	// addi r29,r11,5920
	r29.s64 = r11.s64 + 5920;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// addi r24,r3,32
	r24.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,16912
	r11.s64 = r11.s64 + 16912;
	// addi r23,r3,48
	r23.s64 = ctx.r3.s64 + 48;
	// li r19,0
	r19.s64 = 0;
	// li r17,32
	r17.s64 = 32;
	// li r16,-16
	r16.s64 = -16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r11,32767
	r11.s64 = 2147418112;
	// li r15,16
	r15.s64 = 16;
	// ori r18,r11,65535
	r18.u64 = r11.u64 | 65535;
	// addi r11,r1,448
	r11.s64 = ctx.r1.s64 + 448;
	// lvx128 v123,r0,r11
	simd::store_shuffled(v123, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_82D96478:
	// lwz r31,0(r14)
	r31.u64 = PPC_LOAD_U32(r14.u32 + int32_t(0) );
	// addi r25,r31,16
	r25.s64 = r31.s64 + 16;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// lhz r21,64(r25)
	r21.u64 = PPC_LOAD_U16(r25.u32 + 64);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// beq cr6,0x82d96d44
	if (cr6.eq) goto loc_82D96D44;
	// lwz r20,68(r25)
	r20.u64 = PPC_LOAD_U32(r25.u32 + int32_t(68) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r22,r31,224
	r22.s64 = r31.s64 + 224;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82dbbc00
	sub_82DBBC00(ctx, base);
	// addi r9,r31,304
	ctx.r9.s64 = r31.s64 + 304;
	// addi r11,r1,560
	r11.s64 = ctx.r1.s64 + 560;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lvx128 v125,r0,r9
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,560
	ctx.r9.s64 = ctx.r1.s64 + 560;
	// vor128 v124,v125,v125
	simd::store_i8(v124.u8, simd::load_i8(v125.u8));
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// stvx128 v125,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v125), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r1,576
	ctx.r9.s64 = ctx.r1.s64 + 576;
	// stvx128 v124,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v124), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,416
	r11.s64 = ctx.r1.s64 + 416;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,400
	r11.s64 = ctx.r1.s64 + 400;
	// lvx128 v126,r0,r11
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82d969e0
	if (cr6.eq) goto loc_82D969E0;
loc_82D96530:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d96574
	if (!cr6.eq) goto loc_82D96574;
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
	// stw r18,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r18.u32);
	// stw r18,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r18.u32);
	// stw r19,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r19.u32);
	// stw r19,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r19.u32);
	// stw r19,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r19.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r19.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r19.u32);
	// b 0x82d969a4
	goto loc_82D969A4;
loc_82D96574:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// lwz r9,592(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(592) );
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,960
	ctx.r8.s64 = ctx.r1.s64 + 960;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,480
	r11.s64 = ctx.r1.s64 + 480;
	// vspltw v12,v13,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,976
	ctx.r8.s64 = ctx.r1.s64 + 976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,512
	r11.s64 = ctx.r1.s64 + 512;
	// vsubfp v10,v9,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,992
	ctx.r8.s64 = ctx.r1.s64 + 992;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,880
	ctx.r8.s64 = ctx.r1.s64 + 880;
	// lvx128 v4,r0,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,896
	ctx.r8.s64 = ctx.r1.s64 + 896;
	// vmulfp128 v10,v10,v13
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v13,v11,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v3,r0,r8
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,912
	ctx.r8.s64 = ctx.r1.s64 + 912;
	// lvx128 v2,r0,r8
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// vmulfp128 v13,v13,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v1,r0,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r10,864(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(864) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r7.u64);
	// vmaddfp v13,v12,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vspltw v12,v13,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vspltw v11,v13,1
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 2));
	// vspltw v31,v13,2
	simd::store_i32(v31.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 1));
	// vmulfp128 v12,v8,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v12,v7,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v12,v6,v31,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(v31.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v8,v12,v5
	simd::store_f32_aligned(ctx.v8.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vspltw v12,v8,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vspltw v11,v8,1
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 2));
	// vspltw v7,v8,2
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 1));
	// vmulfp128 v12,v4,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v12,v3,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v12,v2,v7,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v2.f32), simd::load_f32_aligned(ctx.v7.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v11,v12,v1
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v1.f32)));
	// vminfp v12,v13,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaxfp v11,v13,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::max_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// ble cr6,0x82d966f0
	if (!cr6.gt) goto loc_82D966F0;
	// addi r11,r1,512
	r11.s64 = ctx.r1.s64 + 512;
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,624
	r11.s64 = ctx.r1.s64 + 624;
	// vsubfp v6,v8,v7
	simd::store_f32_aligned(ctx.v6.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v7.f32)));
loc_82D966A4:
	// lvx128 v8,r11,r17
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + r17.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltw v13,v8,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 0));
	// lvx128 v4,r11,r16
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r11.u32 + r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lvx128 v3,r11,r15
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((r11.u32 + r15.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vmaddfp v13,v6,v13,v7
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v7.f32)));
	// vspltw v2,v13,0
	simd::store_i32(ctx.v2.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vspltw v1,v13,1
	simd::store_i32(ctx.v1.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 2));
	// vspltw v13,v13,2
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 1));
	// vmulfp128 v4,v4,v2
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v2.f32)));
	// vmaddfp v5,v5,v1,v4
	simd::store_f32_aligned(ctx.v5.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v1.f32)), simd::load_f32_aligned(ctx.v4.f32)));
	// vmaddfp v13,v3,v13,v5
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v5.f32)));
	// vaddfp v13,v13,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vminfp v12,v12,v13
	simd::store_f32_aligned(ctx.v12.f32, simd::min_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaxfp v11,v11,v13
	simd::store_f32_aligned(ctx.v11.f32, simd::max_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// bne cr6,0x82d966a4
	if (!cr6.eq) goto loc_82D966A4;
loc_82D966F0:
	// lvx128 v6,r0,r24
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vor v4,v0,v0
	simd::store_i8(ctx.v4.u8, simd::load_i8(ctx.v0.u8));
	// vaddfp v6,v0,v6
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v6.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// li r10,144
	ctx.r10.s64 = 144;
	// vminfp128 v125,v125,v0
	simd::store_f32_aligned(v125.f32, simd::min_f32(simd::load_f32_aligned(v125.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v10,v10
	simd::store_f32_aligned(ctx.v5.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v10.f32), 0xEF));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lvx128 v8,r0,r30
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vor v3,v9,v9
	simd::store_i8(ctx.v3.u8, simd::load_i8(ctx.v9.u8));
	// vmaxfp128 v124,v124,v9
	simd::store_f32_aligned(v124.f32, simd::max_f32(simd::load_f32_aligned(v124.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r9,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// vspltw v7,v13,3
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// vmulfp128 v0,v6,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v5,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v5), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f0,448(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vminfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::min_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmaxfp v13,v13,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vmaddfp v13,v0,v7,v10
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v7.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// lfs f11,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f11,f11
	ctx.f11.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// vminfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stfiwx f0,0,r31
	ctx.fpscr.disableFlushModeUnconditional();
	PPC_STORE_U32(r31.u32, f0.u32);
	// li r12,4
	r12.s64 = 4;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f13.u32);
	// li r12,8
	r12.s64 = 8;
	// stfiwx f12,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f12.u32);
	// li r12,12
	r12.s64 = 12;
	// stfiwx f11,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f11.u32);
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
	// lvx128 v8,r0,r23
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r29
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r11,r19
	r11.u64 = r19.u64;
	// vaddfp v8,v13,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v8.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v13,v12,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v12,v11,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vminfp v0,v4,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaxfp v13,v3,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v12,v8,v7
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vminfp128 v126,v126,v0
	simd::store_f32_aligned(v126.f32, simd::min_f32(simd::load_f32_aligned(v126.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp128 v127,v127,v13
	simd::store_f32_aligned(v127.f32, simd::max_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vminfp v12,v12,v9
	simd::store_f32_aligned(ctx.v12.f32, simd::min_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaxfp v12,v12,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::max_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// lfs f11,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// li r12,16
	r12.s64 = 16;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, f0.u32);
	// fctiwz f11,f11
	ctx.f11.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// li r12,20
	r12.s64 = 20;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f13.u32);
	// li r12,24
	r12.s64 = 24;
	// stfiwx f12,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f12.u32);
	// li r12,28
	r12.s64 = 28;
	// stfiwx f11,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, ctx.f11.u32);
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vaddfp v10,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vaddfp v13,v13,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r14,r1,352
	r14.s64 = ctx.r1.s64 + 352;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r18,24(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r17,8(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r16,4(r31)
	r16.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r15,0(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// vmulfp128 v10,v10,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vminfp v11,v10,v12
	simd::store_f32_aligned(ctx.v11.f32, simd::min_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vminfp v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp v12,v11,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::max_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v12,r0,r14
	ea = (r14.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,352(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lfs f0,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	f0.f64 = double(temp.f32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lfs f0,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lfs f0,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// lfs f0,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(200) );
	// subf r7,r18,r10
	ctx.r7.s64 = ctx.r10.s64 - r18.s64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// subf r6,r10,r17
	ctx.r6.s64 = r17.s64 - ctx.r10.s64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// subf r5,r10,r16
	ctx.r5.s64 = r16.s64 - ctx.r10.s64;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// subf r4,r10,r15
	ctx.r4.s64 = r15.s64 - ctx.r10.s64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// blt cr6,0x82d96944
	if (cr6.lt) goto loc_82D96944;
loc_82D96934:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// bge cr6,0x82d96934
	if (!cr6.lt) goto loc_82D96934;
loc_82D96944:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// blt cr6,0x82d9695c
	if (cr6.lt) goto loc_82D9695C;
loc_82D9694C:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bge cr6,0x82d9694c
	if (!cr6.lt) goto loc_82D9694C;
loc_82D9695C:
	// sraw r10,r4,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// stb r11,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r11.u8);
	// li r15,16
	r15.s64 = 16;
	// li r16,-16
	r16.s64 = -16;
	// li r17,32
	r17.s64 = 32;
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// sraw r10,r5,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stb r10,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r10.u8);
	// sraw r10,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// stb r10,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// sraw r10,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// sraw r10,r8,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stb r10,29(r31)
	PPC_STORE_U8(r31.u32 + 29, ctx.r10.u8);
	// sraw r11,r7,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	r11.s64 = ctx.r7.s32 >> temp.u32;
	// stb r11,30(r31)
	PPC_STORE_U8(r31.u32 + 30, r11.u8);
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r18,r11,65535
	r18.u64 = r11.u64 | 65535;
loc_82D969A4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// bne cr6,0x82d96530
	if (!cr6.eq) goto loc_82D96530;
	// addi r11,r1,416
	r11.s64 = ctx.r1.s64 + 416;
	// lwz r14,92(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stvx128 v127,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,400
	r11.s64 = ctx.r1.s64 + 400;
	// stvx128 v126,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D969E0:
	// lvx128 v12,r0,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// vaddfp128 v12,v125,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(v125.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vminfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	f0.f64 = double(temp.f32);
	// lfs f13,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// lfs f12,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// li r12,4
	r12.s64 = 4;
	// stfiwx f0,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, f0.u32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// li r12,8
	r12.s64 = 8;
	// stfiwx f13,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f13.u32);
	// li r12,12
	r12.s64 = 12;
	// stfiwx f12,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f12.u32);
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v12,v124,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(v124.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vminfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f0,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	f0.f64 = double(temp.f32);
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// lfs f12,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r0,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v11,v126,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::load_f32_aligned(v126.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v12,r0,r23
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v10,v127,v12
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v11,v13
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v13,v10,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vminfp v11,v11,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::min_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vminfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v13,v11,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lfs f0,320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lfs f0,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// lfs f0,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lfs f0,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	f0.f64 = double(temp.f32);
	// lfs f13,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// subf r3,r3,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r3.s64;
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// blt cr6,0x82d96bcc
	if (cr6.lt) goto loc_82D96BCC;
loc_82D96BBC:
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// bge cr6,0x82d96bbc
	if (!cr6.lt) goto loc_82D96BBC;
loc_82D96BCC:
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// blt cr6,0x82d96be4
	if (cr6.lt) goto loc_82D96BE4;
loc_82D96BD4:
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// bge cr6,0x82d96bd4
	if (!cr6.lt) goto loc_82D96BD4;
loc_82D96BE4:
	// sraw r9,r3,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r9.s64 = ctx.r3.s32 >> temp.u32;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
	// cmpwi cr6,r21,256
	cr6.compare<int32_t>(r21.s32, 256, xer);
	// stb r9,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r9.u8);
	// sraw r9,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// stb r9,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r9.u8);
	// sraw r9,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r9.s64 = ctx.r5.s32 >> temp.u32;
	// stb r9,14(r11)
	PPC_STORE_U8(r11.u32 + 14, ctx.r9.u8);
	// sraw r9,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// stb r9,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r9.u8);
	// sraw r9,r7,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r9.s64 = ctx.r7.s32 >> temp.u32;
	// stb r9,29(r11)
	PPC_STORE_U8(r11.u32 + 29, ctx.r9.u8);
	// sraw r10,r6,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// stb r10,30(r11)
	PPC_STORE_U8(r11.u32 + 30, ctx.r10.u8);
	// bge cr6,0x82d96d20
	if (!cr6.lt) goto loc_82D96D20;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r27,4
	r27.s64 = 4;
	// addi r11,r21,2
	r11.s64 = r21.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d96c54
	if (cr6.gt) goto loc_82D96C54;
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82d96c68
	goto loc_82D96C68;
loc_82D96C54:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82D96C68:
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82d96c9c
	if (!cr6.gt) goto loc_82D96C9C;
loc_82D96C7C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// blt cr6,0x82d96c7c
	if (cr6.lt) goto loc_82D96C7C;
loc_82D96C9C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// stb r19,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r19.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82d96cc0
	if (!cr6.gt) goto loc_82D96CC0;
	// addi r5,r21,-1
	ctx.r5.s64 = r21.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227ccd8
	sub_8227CCD8(ctx, base);
loc_82D96CC0:
	// mr r11,r19
	r11.u64 = r19.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82d96cf4
	if (!cr6.gt) goto loc_82D96CF4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
loc_82D96CD0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + r20.u64;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// stb r8,31(r9)
	PPC_STORE_U8(ctx.r9.u32 + 31, ctx.r8.u8);
	// blt cr6,0x82d96cd0
	if (cr6.lt) goto loc_82D96CD0;
loc_82D96CF4:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82d97038
	if (!cr6.eq) goto loc_82D97038;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d97038
	goto loc_82D97038;
loc_82D96D20:
	// mr r11,r19
	r11.u64 = r19.u64;
	// addi r10,r20,31
	ctx.r10.s64 = r20.s64 + 31;
loc_82D96D28:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// blt cr6,0x82d96d28
	if (cr6.lt) goto loc_82D96D28;
	// b 0x82d97038
	goto loc_82D97038;
loc_82D96D44:
	// addi r31,r31,224
	r31.s64 = r31.s64 + 224;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,528
	r11.s64 = ctx.r1.s64 + 528;
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vxor128 v123,v123,v123
	simd::store_u8(v123.u8, simd::zero_i128());
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,544
	r11.s64 = ctx.r1.s64 + 544;
	// vaddfp v10,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,64
	ctx.r10.s64 = 64;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,432(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,464(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r25,32
	r11.s64 = r25.s64 + 32;
	// lvx128 v8,r31,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// vmulfp128 v10,v10,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vminfp v12,v10,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::min_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::max_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// vsubfp v12,v8,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lfs f12,240(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// stfiwx f12,0,r11
	PPC_STORE_U32(r11.u32, ctx.f12.u32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// lfs f13,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// lfs f12,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// li r12,4
	r12.s64 = 4;
	// stfiwx f0,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, f0.u32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// li r12,8
	r12.s64 = 8;
	// stfiwx f13,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f13.u32);
	// fctiwz f12,f12
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f12.f64)));
	// li r12,12
	r12.s64 = 12;
	// stfiwx f12,r11,r12
	PPC_STORE_U32(r11.u32 + r12.u32, ctx.f12.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vminfp128 v8,v123,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v8.f32, simd::min_f32(simd::load_f32_aligned(v123.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp128 v7,v123,v12
	simd::store_f32_aligned(ctx.v7.f32, simd::max_f32(simd::load_f32_aligned(v123.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vsubfp v12,v13,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// vsubfp v6,v0,v10
	simd::store_f32_aligned(ctx.v6.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vaddfp v11,v9,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmaxfp v12,v12,v6
	simd::store_f32_aligned(ctx.v12.f32, simd::max_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vminfp v11,v11,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::min_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vminfp v0,v12,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaxfp v13,v11,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v9,r0,r23
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v8
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// lvx128 v8,r0,r28
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vaddfp v11,v13,v7
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vaddfp v10,v10,v9
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r27,r1,272
	r27.s64 = ctx.r1.s64 + 272;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// addi r26,r1,336
	r26.s64 = ctx.r1.s64 + 336;
	// vmulfp128 v10,v10,v8
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vminfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r27,r10,12
	r27.s64 = ctx.r10.s64 + 12;
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lfs f0,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r3
	PPC_STORE_U32(ctx.r3.u32, f0.u32);
	// lfs f13,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f13,0,r31
	PPC_STORE_U32(r31.u32, ctx.f13.u32);
	// stfiwx f0,0,r27
	PPC_STORE_U32(r27.u32, f0.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lvx128 v10,r0,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// vaddfp v10,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v12,r0,r23
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v11,v11,v12
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// vmulfp128 v10,v10,v13
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v13,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vminfp v11,v10,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::min_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vminfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaxfp v13,v11,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,336(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lfs f0,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	f0.f64 = double(temp.f32);
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// lfs f0,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// lfs f0,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, f0.u32);
	// lfs f0,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// subf r6,r10,r31
	ctx.r6.s64 = r31.s64 - ctx.r10.s64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// subf r5,r27,r10
	ctx.r5.s64 = ctx.r10.s64 - r27.s64;
	// subf r3,r3,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r3.s64;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// blt cr6,0x82d96fec
	if (cr6.lt) goto loc_82D96FEC;
loc_82D96FDC:
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2048
	cr6.compare<int32_t>(ctx.r9.s32, 2048, xer);
	// bge cr6,0x82d96fdc
	if (!cr6.lt) goto loc_82D96FDC;
loc_82D96FEC:
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// blt cr6,0x82d97004
	if (cr6.lt) goto loc_82D97004;
loc_82D96FF4:
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	cr6.compare<int32_t>(ctx.r9.s32, 256, xer);
	// bge cr6,0x82d96ff4
	if (!cr6.lt) goto loc_82D96FF4;
loc_82D97004:
	// sraw r9,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
	// stb r9,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r9.u8);
	// sraw r9,r7,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r9.s64 = ctx.r7.s32 >> temp.u32;
	// stb r9,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r9.u8);
	// sraw r9,r6,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	// stb r9,14(r11)
	PPC_STORE_U8(r11.u32 + 14, ctx.r9.u8);
	// sraw r9,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r9.s64 = ctx.r5.s32 >> temp.u32;
	// stb r9,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r9.u8);
	// sraw r9,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// stb r9,29(r11)
	PPC_STORE_U8(r11.u32 + 29, ctx.r9.u8);
	// sraw r10,r3,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// stb r10,30(r11)
	PPC_STORE_U8(r11.u32 + 30, ctx.r10.u8);
loc_82D97038:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bne cr6,0x82d96478
	if (!cr6.eq) goto loc_82D96478;
loc_82D97054:
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// addi r12,r1,-176
	r12.s64 = ctx.r1.s64 + -176;
	// bl 0x830001d4
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82D963F0) {
	__imp__sub_82D963F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d51a98
	sub_82D51A98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D97070) {
	__imp__sub_82D97070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97088) {
	__imp__sub_82D97088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r25{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bne cr6,0x82d97128
	if (!cr6.eq) goto loc_82D97128;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// addi r8,r11,3
	ctx.r8.s64 = r11.s64 + 3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// rlwinm r11,r10,1,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_82D97128:
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82D97134:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// bgt cr6,0x82d9747c
	if (cr6.gt) goto loc_82D9747C;
loc_82D97140:
	// lis r12,-32039
	r12.s64 = -2099707904;
	// addi r12,r12,29016
	r12.s64 = r12.s64 + 29016;
	// rlwinm r0,r10,2,0,29
	r0.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82D971C4;
	case 1:
		goto loc_82D97484;
	case 2:
		goto loc_82D97468;
	case 3:
		goto loc_82D97478;
	case 4:
		goto loc_82D97470;
	case 5:
		goto loc_82D971DC;
	case 6:
		goto loc_82D97208;
	case 7:
		goto loc_82D97234;
	case 8:
		goto loc_82D97260;
	case 9:
		goto loc_82D97260;
	case 10:
		goto loc_82D9728C;
	case 11:
		goto loc_82D972B8;
	case 12:
		goto loc_82D972E4;
	case 13:
		goto loc_82D97310;
	case 14:
		goto loc_82D9734C;
	case 15:
		goto loc_82D97378;
	case 16:
		goto loc_82D97378;
	case 17:
		goto loc_82D973A4;
	case 18:
		goto loc_82D973E4;
	case 19:
		goto loc_82D97410;
	case 20:
		goto loc_82D9743C;
	case 21:
		goto loc_82D9747C;
	case 22:
		goto loc_82D9747C;
	case 23:
		goto loc_82D97484;
	case 24:
		goto loc_82D97484;
	case 25:
		goto loc_82D97484;
	case 26:
		goto loc_82D97484;
	default:
		__builtin_unreachable();
	}
	// lwz r22,29124(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29124) );
	// lwz r22,29828(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29828) );
	// lwz r22,29800(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29800) );
	// lwz r22,29816(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29816) );
	// lwz r22,29808(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29808) );
	// lwz r22,29148(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29148) );
	// lwz r22,29192(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29192) );
	// lwz r22,29236(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29236) );
	// lwz r22,29280(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29280) );
	// lwz r22,29280(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29280) );
	// lwz r22,29324(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29324) );
	// lwz r22,29368(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29368) );
	// lwz r22,29412(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29412) );
	// lwz r22,29456(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29456) );
	// lwz r22,29516(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29516) );
	// lwz r22,29560(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29560) );
	// lwz r22,29560(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29560) );
	// lwz r22,29604(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29604) );
	// lwz r22,29668(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29668) );
	// lwz r22,29712(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29712) );
	// lwz r22,29756(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29756) );
	// lwz r22,29820(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29820) );
	// lwz r22,29820(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29820) );
	// lwz r22,29828(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29828) );
	// lwz r22,29828(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29828) );
	// lwz r22,29828(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29828) );
	// lwz r22,29828(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + int32_t(29828) );
loc_82D971C4:
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// ble cr6,0x82d97140
	if (!cr6.gt) goto loc_82D97140;
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D971DC:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97208:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97234:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97260:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D9728C:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D972B8:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D972E4:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97310:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// rotlwi r7,r10,1
	ctx.r7.u64 = rotl32(ctx.r10.u32, 1);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D9734C:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97378:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D973A4:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// rotlwi r6,r10,1
	ctx.r6.u64 = rotl32(ctx.r10.u32, 1);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// rotlwi r9,r10,1
	ctx.r9.u64 = rotl32(ctx.r10.u32, 1);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D973E4:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97410:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,192
	ctx.r8.s64 = ctx.r8.s64 + 192;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D9743C:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97468:
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97470:
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// b 0x82d9747c
	goto loc_82D9747C;
loc_82D97478:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82D9747C:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d97134
	if (cr6.lt) goto loc_82D97134;
loc_82D97484:
	// blr 
	return;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97090) {
	__imp__sub_82D97090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97490) {
	__imp__sub_82D97490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97498) {
	__imp__sub_82D97498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82d9e8a8
	sub_82D9E8A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D974A0) {
	__imp__sub_82D974A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974B0) {
	__imp__sub_82D974B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974B8) {
	__imp__sub_82D974B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974C0) {
	__imp__sub_82D974C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974C8) {
	__imp__sub_82D974C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974D0) {
	__imp__sub_82D974D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974D8) {
	__imp__sub_82D974D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974E0) {
	__imp__sub_82D974E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974E8) {
	__imp__sub_82D974E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974F0) {
	__imp__sub_82D974F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D974F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D974F8) {
	__imp__sub_82D974F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97500) {
	__imp__sub_82D97500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97508) {
	__imp__sub_82D97508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97510) {
	__imp__sub_82D97510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97518) {
	__imp__sub_82D97518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97520) {
	__imp__sub_82D97520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97528) {
	__imp__sub_82D97528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97530) {
	__imp__sub_82D97530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97538) {
	__imp__sub_82D97538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97540) {
	__imp__sub_82D97540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97548) {
	__imp__sub_82D97548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97550) {
	__imp__sub_82D97550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97558) {
	__imp__sub_82D97558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97560) {
	__imp__sub_82D97560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97568) {
	__imp__sub_82D97568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97570) {
	__imp__sub_82D97570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97578) {
	__imp__sub_82D97578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97580) {
	__imp__sub_82D97580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97588) {
	__imp__sub_82D97588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x82d9e708
	sub_82D9E708(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D97590) {
	__imp__sub_82D97590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975A0) {
	__imp__sub_82D975A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x82d9e708
	sub_82D9E708(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D975A8) {
	__imp__sub_82D975A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975B8) {
	__imp__sub_82D975B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975C0) {
	__imp__sub_82D975C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975C8) {
	__imp__sub_82D975C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975D0) {
	__imp__sub_82D975D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975D8) {
	__imp__sub_82D975D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975E0) {
	__imp__sub_82D975E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975E8) {
	__imp__sub_82D975E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975F0) {
	__imp__sub_82D975F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D975F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D975F8) {
	__imp__sub_82D975F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97600) {
	__imp__sub_82D97600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97608) {
	__imp__sub_82D97608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97610) {
	__imp__sub_82D97610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97618) {
	__imp__sub_82D97618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97620) {
	__imp__sub_82D97620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97628) {
	__imp__sub_82D97628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97630) {
	__imp__sub_82D97630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97638) {
	__imp__sub_82D97638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97640) {
	__imp__sub_82D97640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97648) {
	__imp__sub_82D97648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97650) {
	__imp__sub_82D97650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97658) {
	__imp__sub_82D97658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97660) {
	__imp__sub_82D97660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97668) {
	__imp__sub_82D97668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97670) {
	__imp__sub_82D97670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97678) {
	__imp__sub_82D97678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97680) {
	__imp__sub_82D97680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97688) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lfs f31,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lbz r29,162(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 162);
	// rotlwi r11,r29,4
	r11.u64 = rotl32(r29.u32, 4);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// bge cr6,0x82d97780
	if (!cr6.lt) goto loc_82D97780;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D97780:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d9778c
	if (!cr6.lt) goto loc_82D9778C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82D9778C:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r29,2
	ctx.r7.s64 = r29.s64 + 2;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lfsx f0,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r10,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mulhw r10,r7,r9
	ctx.r10.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32)) >> 32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D97688) {
	__imp__sub_82D97688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97838) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,144
	ctx.r8.s64 = 144;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v13,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r5,21845
	ctx.r5.s64 = 1431633920;
	// stvx128 v13,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// ori r5,r5,21846
	ctx.r5.u64 = ctx.r5.u64 | 21846;
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r30,0
	r30.s64 = 0;
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r4,1
	ctx.r4.s64 = 1;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r31,2
	r31.s64 = 2;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lbz r8,162(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 162);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rotlwi r11,r8,4
	r11.u64 = rotl32(ctx.r8.u32, 4);
	// mulhw r7,r10,r5
	ctx.r7.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32)) >> 32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82d9790c
	if (!cr6.lt) goto loc_82D9790C;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r30,1
	r30.s64 = 1;
loc_82D9790C:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82d97918
	if (!cr6.lt) goto loc_82D97918;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82D97918:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfsx f13,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mulhw r7,r8,r5
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32)) >> 32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97838) {
	__imp__sub_82D97838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D979C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,148
	ctx.r4.s64 = 148;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D979C8) {
	__imp__sub_82D979C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D979D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d979f8
	if (cr6.eq) goto loc_82D979F8;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D979F8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D979D8) {
	__imp__sub_82D979D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97A08) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d97a6c
	if (cr6.eq) goto loc_82D97A6C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d97a70
	if (!cr6.eq) goto loc_82D97A70;
loc_82D97A6C:
	// li r11,0
	r11.s64 = 0;
loc_82D97A70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D97A08) {
	__imp__sub_82D97A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97A98) {
	__imp__sub_82D97A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,3080(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r9,-28552
	ctx.r9.s64 = ctx.r9.s64 + -28552;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r31,7
	r31.s64 = 7;
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// sth r31,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, r31.u16);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97AA0) {
	__imp__sub_82D97AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97B60) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82d97ba8
	if (cr6.eq) goto loc_82D97BA8;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82d82b48
	sub_82D82B48(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82D97BA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82D97B60) {
	__imp__sub_82D97B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-27820
	r11.s64 = r11.s64 + -27820;
	// lfs f13,-1264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1264);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f12,2632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2632);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lfs f11,2860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2860);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97BC0) {
	__imp__sub_82D97BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97C28) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r9,-27820
	ctx.r9.s64 = ctx.r9.s64 + -27820;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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

PPC_WEAK_FUNC(sub_82D97C28) {
	__imp__sub_82D97C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d97cf8
	if (cr6.eq) goto loc_82D97CF8;
	// li r11,5
	r11.s64 = 5;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D97CF8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97CD8) {
	__imp__sub_82D97CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97D08) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,150
	ctx.r4.s64 = 150;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D97D08) {
	__imp__sub_82D97D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97D18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d97d7c
	if (cr6.eq) goto loc_82D97D7C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d97d80
	if (!cr6.eq) goto loc_82D97D80;
loc_82D97D7C:
	// li r11,0
	r11.s64 = 0;
loc_82D97D80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D97D18) {
	__imp__sub_82D97D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97DA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97DA8) {
	__imp__sub_82D97DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97DB0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d97e08
	if (!cr6.lt) goto loc_82D97E08;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D97E08:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d97e14
	if (!cr6.lt) goto loc_82D97E14;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D97E14:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfsx f13,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v13,v0,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v13,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D97DB0) {
	__imp__sub_82D97DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D97F40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r31,144
	r31.s64 = 144;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r8,2
	ctx.r8.s64 = 2;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stvx128 v0,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f12,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d97fdc
	if (!cr6.lt) goto loc_82D97FDC;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D97FDC:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82d97fe8
	if (!cr6.lt) goto loc_82D97FE8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82D97FE8:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,32
	r30.s64 = 32;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// li r31,2
	r31.s64 = 2;
	// stfsx f0,r5,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lfsx f0,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r6,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r11,r30
	ea = (r11.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d980e0
	if (!cr6.lt) goto loc_82D980E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D980E0:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82d980ec
	if (!cr6.lt) goto loc_82D980EC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82D980EC:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r10,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r9,r30
	ea = (ctx.r9.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D97F40) {
	__imp__sub_82D97F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,3080(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r9,-27612
	ctx.r9.s64 = ctx.r9.s64 + -27612;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r4,12
	ctx.r4.s64 = 12;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r31,5
	r31.s64 = 5;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// sth r4,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r4.u16);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// sth r31,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r31.u16);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D98178) {
	__imp__sub_82D98178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98240) {
	PPC_FUNC_PROLOGUE();
	// li r3,102
	ctx.r3.s64 = 102;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D98240) {
	__imp__sub_82D98240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98248) {
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
	// vmaddfp v0,v12,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
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
	// vnmsubfp v0,v12,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
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

PPC_WEAK_FUNC(sub_82D98248) {
	__imp__sub_82D98248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D982E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// mulli r10,r11,1332
	ctx.r10.s64 = r11.s64 * 1332;
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D982E8) {
	__imp__sub_82D982E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D98340) {
	__imp__sub_82D98340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r5,1,0,30
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(28) );
	// slw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,1,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D98378) {
	__imp__sub_82D98378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D983C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r5,1,0,30
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(28) );
	// slw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,1,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D983C0) {
	__imp__sub_82D983C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98408) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lfs f12,2824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2824);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,3052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3052);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-1212
	ctx.r10.s64 = r11.s64 + -1212;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f13,-7744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7744);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r8,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r8.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82D98408) {
	__imp__sub_82D98408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D984B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1212
	r11.s64 = r11.s64 + -1212;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
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

PPC_WEAK_FUNC(sub_82D984B0) {
	__imp__sub_82D984B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98518) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,-1212
	r11.s64 = r11.s64 + -1212;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// ble cr6,0x82d985c0
	if (!cr6.gt) goto loc_82D985C0;
	// li r28,64
	r28.s64 = 64;
loc_82D98548:
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,3
	r29.s64 = 3;
loc_82D98550:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d9859c
	if (cr6.eq) goto loc_82D9859C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9859c
	if (cr6.eq) goto loc_82D9859C;
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
	// bne cr6,0x82d9859c
	if (!cr6.eq) goto loc_82D9859C;
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
loc_82D9859C:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82d98550
	if (!cr6.eq) goto loc_82D98550;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,80
	r28.s64 = r28.s64 + 80;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82d98548
	if (cr6.lt) goto loc_82D98548;
loc_82D985C0:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d985f8
	if (!cr6.eq) goto loc_82D985F8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D985F8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D98518) {
	__imp__sub_82D98518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98610) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d98658
	if (!cr6.eq) goto loc_82D98658;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D98658:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r7,32
	ctx.r7.s64 = 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d986b4
	if (cr6.eq) goto loc_82D986B4;
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82D986B4:
	// stw r26,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r26.u32);
	// lhz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d986d0
	if (cr6.eq) goto loc_82D986D0;
	// lhz r10,6(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r26)
	PPC_STORE_U16(r26.u32 + 6, ctx.r10.u16);
loc_82D986D0:
	// stw r25,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r25.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d986ec
	if (cr6.eq) goto loc_82D986EC;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r25)
	PPC_STORE_U16(r25.u32 + 6, ctx.r10.u16);
loc_82D986EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// stb r10,76(r11)
	PPC_STORE_U8(r11.u32 + 76, ctx.r10.u8);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r10,r10,29776
	ctx.r10.s64 = ctx.r10.s64 + 29776;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D98610) {
	__imp__sub_82D98610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,28(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D98710) {
	__imp__sub_82D98710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-2976(r1)
	ea = -2976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,76(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(76) );
	// stw r27,3004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3004, r27.u32);
	// stw r28,3012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3012, r28.u32);
	// bl 0x82de27a8
	sub_82DE27A8(ctx, base);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D987A8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82d987a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D987A8;
	// addi r11,r1,508
	r11.s64 = ctx.r1.s64 + 508;
	// lwz r31,72(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(72) );
	// li r25,0
	r25.s64 = 0;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(48) );
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r25,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r25.u32);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r25,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// stw r25,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r25.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r11,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, r11.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r9,144(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(144) );
	// subf r30,r9,r10
	r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r9,r1,764
	ctx.r9.s64 = ctx.r1.s64 + 764;
	// stw r25,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, r25.u32);
	// addi r15,r10,-1
	r15.s64 = ctx.r10.s64 + -1;
	// stw r11,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, r11.u32);
	// cmpwi cr6,r15,32
	cr6.compare<int32_t>(r15.s32, 32, xer);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r9,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r9.u32);
	// ble cr6,0x82d9883c
	if (!cr6.gt) goto loc_82D9883C;
	// cmpwi cr6,r15,64
	cr6.compare<int32_t>(r15.s32, 64, xer);
	// li r4,64
	ctx.r4.s64 = 64;
	// blt cr6,0x82d98830
	if (cr6.lt) goto loc_82D98830;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
loc_82D98830:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D9883C:
	// stw r15,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, r15.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// lwz r8,496(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(496) );
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// addi r11,r11,224
	r11.s64 = r11.s64 + 224;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r11.u32);
	// lwz r11,344(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(344) );
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f0,368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// bl 0x82de5ba8
	sub_82DE5BA8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82de5bb0
	sub_82DE5BB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82d98e24
	if (!cr6.gt) goto loc_82D98E24;
	// li r11,24
	r11.s64 = 24;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r14,r22,28
	r14.s64 = r22.s64 + 28;
	// addi r19,r31,40
	r19.s64 = r31.s64 + 40;
	// addi r26,r22,24
	r26.s64 = r22.s64 + 24;
	// mr r24,r25
	r24.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r16,16
	r16.s64 = 16;
	// addi r11,r11,-1232
	r11.s64 = r11.s64 + -1232;
	// li r17,32
	r17.s64 = 32;
	// li r18,48
	r18.s64 = 48;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
loc_82D988F8:
	// lwz r11,388(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(388) );
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,504(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(504) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(396) );
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r11.u32);
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r9,500(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r31,r11,208
	r31.s64 = r11.s64 + 208;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// subf r30,r30,r11
	r30.s64 = r11.s64 - r30.s64;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r11.u32);
	// bne cr6,0x82d98950
	if (!cr6.eq) goto loc_82D98950;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D98950:
	// lwz r11,500(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r10,496(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(496) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,500(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(392) );
	// add r9,r24,r9
	ctx.r9.u64 = r24.u64 + ctx.r9.u64;
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r11.u32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r11.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// lvx128 v12,r10,r16
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r16.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lvx128 v11,r10,r17
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r10,r18
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + r18.u32) & ~0xF), VectorMaskL));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r9,r1,640
	ctx.r9.s64 = ctx.r1.s64 + 640;
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// lvx128 v12,r11,r16
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r16.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lvx128 v11,r11,r17
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r11,r18
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + r18.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,688
	r11.s64 = ctx.r1.s64 + 688;
	// vmulfp128 v13,v13,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82dde978
	sub_82DDE978(ctx, base);
	// addi r11,r22,60
	r11.s64 = r22.s64 + 60;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ddf788
	sub_82DDF788(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,392(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(392) );
	// addi r20,r20,144
	r20.s64 = r20.s64 + 144;
	// bl 0x82d50a00
	sub_82D50A00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(396) );
	// bl 0x82d50a00
	sub_82D50A00(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r11,r24,r11
	r11.u64 = r24.u64 + r11.u64;
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d98a84
	if (cr6.eq) goto loc_82D98A84;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,672
	ctx.r9.s64 = ctx.r1.s64 + 672;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82d98a94
	goto loc_82D98A94;
loc_82D98A84:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82D98A94:
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// vpermwi128 v6,v12,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// vspltw v11,v12,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 0));
	// addi r9,r27,76
	ctx.r9.s64 = r27.s64 + 76;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v8,v13,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vspltw v10,v13,3
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// stvewx v9,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v9.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// vpermwi128 v9,v12,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(0) );
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// vmulfp128 v9,v9,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// addi r7,r11,3
	ctx.r7.s64 = r11.s64 + 3;
	// vmulfp128 v8,v6,v7
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r8,r7,0,0,29
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// fmsubs f0,f13,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// vsubfp v9,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v13,v13,v11,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v13,v12,v10,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,444(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
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
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// vmsum4fp128 v13,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xFF));
	// stvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v13,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82d98b98
	if (!cr6.eq) goto loc_82D98B98;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D98B98:
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// vmsum3fp128 v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vspltw v8,v13,3
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vor v6,v13,v13
	simd::store_i8(ctx.v6.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v5,v13,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v4,v13,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v3,v0,v12
	simd::store_f32_aligned(ctx.v3.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v13,v0,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r30,r1,92
	r30.s64 = ctx.r1.s64 + 92;
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// vspltw v7,v12,3
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 0));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// vmulfp128 v5,v13,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvewx v10,r0,r31
	PPC_STORE_U32((r31.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((r31.u32) & 0xF) >> 2));
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r31,r1,464
	r31.s64 = ctx.r1.s64 + 464;
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// vmulfp128 v4,v10,v4
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// fmsubs f13,f0,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// vsubfp v5,v4,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v5.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vmaddfp v9,v6,v11,v5
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v5.f32)));
	// vmaddfp v9,v0,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vpermwi128 v8,v12,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// vmulfp128 v10,v10,v8
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v9,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v9,v12,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// stfs f13,476(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stvewx v3,r0,r30
	PPC_STORE_U32((r30.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v3.u32), 3 - ((r30.u32) & 0xF) >> 2));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,480
	r11.s64 = ctx.r1.s64 + 480;
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vsubfp v13,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v0,v7,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v7.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,492(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// bl 0x82d98248
	sub_82D98248(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d98248
	sub_82D98248(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// add r11,r24,r11
	r11.u64 = r24.u64 + r11.u64;
	// lbz r11,76(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// beq cr6,0x82d98ccc
	if (cr6.eq) goto loc_82D98CCC;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vxor v13,v13,v12
	simd::store_u8(ctx.v13.u8, simd::xor_i8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v12.u8)));
	// vxor v0,v0,v12
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v0.u8), simd::load_u8(ctx.v12.u8)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,320
	r11.s64 = ctx.r1.s64 + 320;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D98CCC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r27,r21,6,0,25
	r27.u64 = rotl64(r21.u32 | (r21.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r28,r24,64
	r28.s64 = r24.s64 + 64;
	// addi r30,r1,704
	r30.s64 = ctx.r1.s64 + 704;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82D98CEC:
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r11,r1,656
	r11.s64 = ctx.r1.s64 + 656;
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r7.u64);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82de0670
	sub_82DE0670(ctx, base);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// ldx r8,r29,r25
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + r25.u32);
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfsx f0,r31,r10
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lwzx r3,r28,r9
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + ctx.r9.u32);
	// bl 0x82de4c10
	sub_82DE4C10(ctx, base);
	// lwz r11,752(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(752) );
	// lfs f13,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	f0.f64 = double(temp.f32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(r31.s32, 12, xer);
	// lfs f13,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	f0.f64 = double(temp.f32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,28(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 28, temp.u32);
	// addi r23,r23,32
	r23.s64 = r23.s64 + 32;
	// blt cr6,0x82d98cec
	if (cr6.lt) goto loc_82D98CEC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r24,r24,80
	r24.s64 = r24.s64 + 80;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r27,3004(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(3004) );
	// cmpw cr6,r21,r15
	cr6.compare<int32_t>(r21.s32, r15.s32, xer);
	// li r25,0
	r25.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt cr6,0x82d988f8
	if (cr6.lt) goto loc_82D988F8;
	// lwz r28,3012(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(3012) );
loc_82D98E24:
	// lwz r10,28(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(28) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(28) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x82d98e6c
	if (!cr6.gt) goto loc_82D98E6C;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82D98E50:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,752(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(752) );
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(r11.s32, r15.s32, xer);
	// stbx r8,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// blt cr6,0x82d98e50
	if (cr6.lt) goto loc_82D98E50;
loc_82D98E6C:
	// lwz r11,496(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(496) );
	// lfs f0,36(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f0,40(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 40);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,44(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 44);
	f0.f64 = double(temp.f32);
	// stw r15,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r15.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r11.u32);
	// stfs f0,268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r11,752(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(752) );
	// lfs f0,48(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r30.u32);
	// lfs f0,52(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 52);
	f0.f64 = double(temp.f32);
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// stfs f0,276(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r23.u32);
	// lfs f0,56(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,280(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r11.u32);
	// stfs f31,296(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x82deea70
	sub_82DEEA70(ctx, base);
	// lwz r11,760(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(760) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d98efc
	if (!cr6.eq) goto loc_82D98EFC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,752(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(752) );
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D98EFC:
	// lwz r11,504(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(504) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d98f28
	if (!cr6.eq) goto loc_82D98F28;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(496) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D98F28:
	// addi r1,r1,2976
	ctx.r1.s64 = ctx.r1.s64 + 2976;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82D98760) {
	__imp__sub_82D98760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98F38) {
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
	// bl 0x82d98518
	sub_82D98518(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d98f80
	if (cr6.eq) goto loc_82D98F80;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D98F80:
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

PPC_WEAK_FUNC(sub_82D98F38) {
	__imp__sub_82D98F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D98FA0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d98ff4
	if (!cr6.lt) goto loc_82D98FF4;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D98FF4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d99000
	if (!cr6.lt) goto loc_82D99000;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D99000:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfsx f13,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v13,v0,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v13,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D98FA0) {
	__imp__sub_82D98FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,-32
	r31.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r30,64
	r30.s64 = 64;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r31,r1,-32
	r31.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,112
	r11.s64 = 112;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99110) {
	__imp__sub_82D99110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99278) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D99278) {
	__imp__sub_82D99278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99288) {
	__imp__sub_82D99288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D992A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d99304
	if (cr6.eq) goto loc_82D99304;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d99308
	if (!cr6.eq) goto loc_82D99308;
loc_82D99304:
	// li r11,0
	r11.s64 = 0;
loc_82D99308:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D992A0) {
	__imp__sub_82D992A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99330) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99330) {
	__imp__sub_82D99330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// addi r7,r8,-26700
	ctx.r7.s64 = ctx.r8.s64 + -26700;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f0,3080(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r31,4
	r31.s64 = 4;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r30,14
	r30.s64 = 14;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r29,12
	r29.s64 = 12;
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lfs f13,2376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2376);
	ctx.f13.f64 = double(temp.f32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r31.u16);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// sth r30,112(r9)
	PPC_STORE_U16(ctx.r9.u32 + 112, r30.u16);
	// stb r4,114(r9)
	PPC_STORE_U8(ctx.r9.u32 + 114, ctx.r4.u8);
	// sth r29,128(r9)
	PPC_STORE_U16(ctx.r9.u32 + 128, r29.u16);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stb r8,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r8.u8);
	// lfs f12,2876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2876);
	ctx.f12.f64 = double(temp.f32);
	// stb r8,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r8.u8);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D99338) {
	__imp__sub_82D99338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r30,80
	r30.s64 = 80;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r31,32
	r31.s64 = 32;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stvx128 v0,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stvx128 v0,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r11,r31
	ea = (r11.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99408) {
	__imp__sub_82D99408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99578) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d995b4
	if (cr6.eq) goto loc_82D995B4;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d995b4
	if (cr6.eq) goto loc_82D995B4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D995B4:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(172) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d995f8
	if (cr6.eq) goto loc_82D995F8;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d995f8
	if (cr6.eq) goto loc_82D995F8;
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
	// bne cr6,0x82d995f8
	if (!cr6.eq) goto loc_82D995F8;
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
loc_82D995F8:
	// stw r31,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r31.u32);
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

PPC_WEAK_FUNC(sub_82D99578) {
	__imp__sub_82D99578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99618) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D99618) {
	__imp__sub_82D99618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,8
	r11.s64 = 8;
	// li r10,72
	ctx.r10.s64 = 72;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99628) {
	__imp__sub_82D99628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d996b4
	if (cr6.eq) goto loc_82D996B4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d996b4
	if (cr6.eq) goto loc_82D996B4;
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d996b8
	if (!cr6.gt) goto loc_82D996B8;
loc_82D996B4:
	// li r11,0
	r11.s64 = 0;
loc_82D996B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D99640) {
	__imp__sub_82D99640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D996E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D996E0) {
	__imp__sub_82D996E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D996E8) {
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
	// addi r11,r11,-26284
	r11.s64 = r11.s64 + -26284;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d9974c
	if (cr6.eq) goto loc_82D9974C;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9974c
	if (cr6.eq) goto loc_82D9974C;
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
	// bne cr6,0x82d9974c
	if (!cr6.eq) goto loc_82D9974C;
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
loc_82D9974C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D996E8) {
	__imp__sub_82D996E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, r11.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99770) {
	__imp__sub_82D99770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D997C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82ca2bdc
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r29,2
	r29.s64 = 2;
	// li r28,11
	r28.s64 = 11;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// li r27,10
	r27.s64 = 10;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// li r26,13
	r26.s64 = 13;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r30,7
	r30.s64 = 7;
	// li r25,9
	r25.s64 = 9;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// addi r6,r10,-26284
	ctx.r6.s64 = ctx.r10.s64 + -26284;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,16
	r31.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r6,r9,48
	ctx.r6.s64 = ctx.r9.s64 + 48;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r29,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r29.u16);
	// sth r28,144(r11)
	PPC_STORE_U16(r11.u32 + 144, r28.u16);
	// stb r7,146(r11)
	PPC_STORE_U8(r11.u32 + 146, ctx.r7.u8);
	// sth r10,148(r11)
	PPC_STORE_U16(r11.u32 + 148, ctx.r10.u16);
	// sth r10,150(r11)
	PPC_STORE_U16(r11.u32 + 150, ctx.r10.u16);
	// sth r27,160(r11)
	PPC_STORE_U16(r11.u32 + 160, r27.u16);
	// stb r7,162(r11)
	PPC_STORE_U8(r11.u32 + 162, ctx.r7.u8);
	// sth r26,168(r11)
	PPC_STORE_U16(r11.u32 + 168, r26.u16);
	// sth r30,172(r11)
	PPC_STORE_U16(r11.u32 + 172, r30.u16);
	// sth r30,176(r11)
	PPC_STORE_U16(r11.u32 + 176, r30.u16);
	// sth r25,180(r11)
	PPC_STORE_U16(r11.u32 + 180, r25.u16);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// lfs f13,3036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3036);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f12,3164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r31
	ea = (ctx.r8.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r11,64
	r11.s64 = 64;
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r10,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, ctx.r10.u8);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stb r10,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r10.u8);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stb r10,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r10.u8);
	// stfs f0,168(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stb r10,163(r3)
	PPC_STORE_U8(ctx.r3.u32 + 163, ctx.r10.u8);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r11.u16);
	// sth r9,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r9.u16);
	// stb r10,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r10.u8);
	// stb r8,187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 187, ctx.r8.u8);
	// stb r7,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r7.u8);
	// stb r29,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, r29.u8);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D997C0) {
	__imp__sub_82D997C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99910) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d999a8
	if (!cr6.lt) goto loc_82D999A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D999A8:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82d999b4
	if (!cr6.lt) goto loc_82D999B4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82D999B4:
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r7,r31,64
	ctx.r7.s64 = r31.s64 + 64;
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	f0.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfsx f0,r10,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, temp.u32);
	// lfsx f0,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r26
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r26.u32, temp.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r4,r3
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v8,v13,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// stvx128 v9,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v9,v9,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r6,r11,16896
	ctx.r6.s64 = r11.s64 + 16896;
loc_82D99A84:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// bge cr6,0x82d99a84
	if (!cr6.lt) goto loc_82D99A84;
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r11,2
	r11.s64 = 2;
	// lvx128 v11,r30,r3
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r30,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
loc_82D99AD4:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d99ad4
	if (!cr6.lt) goto loc_82D99AD4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D99910) {
	__imp__sub_82D99910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99B30) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D99B30) {
	__imp__sub_82D99B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d99b60
	if (cr6.eq) goto loc_82D99B60;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D99B60:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99B40) {
	__imp__sub_82D99B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99B70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82d99b94
	if (!cr6.gt) goto loc_82D99B94;
	// lfs f13,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82d99b98
	if (cr6.gt) goto loc_82D99B98;
loc_82D99B94:
	// li r11,0
	r11.s64 = 0;
loc_82D99B98:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99B70) {
	__imp__sub_82D99B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99BA0) {
	__imp__sub_82D99BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,20
	ctx.r6.s64 = 20;
	// lfs f13,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r8,r10,-25716
	ctx.r8.s64 = ctx.r10.s64 + -25716;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// sth r6,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r6.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99BA8) {
	__imp__sub_82D99BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r31,32
	r31.s64 = 32;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r11,r31
	ea = (r11.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99C30) {
	__imp__sub_82D99C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99D78) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D99D78) {
	__imp__sub_82D99D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99D88) {
	__imp__sub_82D99D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// beq cr6,0x82d99e24
	if (cr6.eq) goto loc_82D99E24;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d99e28
	if (!cr6.eq) goto loc_82D99E28;
loc_82D99E24:
	// li r11,0
	r11.s64 = 0;
loc_82D99E28:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d99e50
	if (cr6.eq) goto loc_82D99E50;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f13,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1828(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1828);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82d99e54
	if (cr6.eq) goto loc_82D99E54;
loc_82D99E50:
	// li r11,0
	r11.s64 = 0;
loc_82D99E54:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d99e7c
	if (cr6.eq) goto loc_82D99E7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d99e80
	if (!cr6.lt) goto loc_82D99E80;
loc_82D99E7C:
	// li r11,0
	r11.s64 = 0;
loc_82D99E80:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d99ea8
	if (cr6.eq) goto loc_82D99EA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82d99eac
	if (cr6.lt) goto loc_82D99EAC;
loc_82D99EA8:
	// li r11,0
	r11.s64 = 0;
loc_82D99EAC:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d99ed0
	if (cr6.eq) goto loc_82D99ED0;
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d99ed4
	if (!cr6.gt) goto loc_82D99ED4;
loc_82D99ED0:
	// li r11,0
	r11.s64 = 0;
loc_82D99ED4:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d99ef8
	if (cr6.eq) goto loc_82D99EF8;
	// lfs f0,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 136);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,140(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d99efc
	if (!cr6.gt) goto loc_82D99EFC;
loc_82D99EF8:
	// li r11,0
	r11.s64 = 0;
loc_82D99EFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D99DA0) {
	__imp__sub_82D99DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99F20) {
	__imp__sub_82D99F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99F48) {
	__imp__sub_82D99F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99F70) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99F70) {
	__imp__sub_82D99F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D99F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r31,4
	r31.s64 = 4;
	// li r30,15
	r30.s64 = 15;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r6,16
	ctx.r6.s64 = 16;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// addi r5,r10,-24740
	ctx.r5.s64 = ctx.r10.s64 + -24740;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,-28644(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28644);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r31,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r31.u16);
	// sth r30,112(r11)
	PPC_STORE_U16(r11.u32 + 112, r30.u16);
	// stb r7,114(r11)
	PPC_STORE_U8(r11.u32 + 114, ctx.r7.u8);
	// sth r6,132(r11)
	PPC_STORE_U16(r11.u32 + 132, ctx.r6.u16);
	// lfs f11,-28648(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28648);
	ctx.f11.f64 = double(temp.f32);
	// stb r7,134(r11)
	PPC_STORE_U8(r11.u32 + 134, ctx.r7.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r10,138(r11)
	PPC_STORE_U8(r11.u32 + 138, ctx.r10.u8);
	// sth r6,152(r11)
	PPC_STORE_U16(r11.u32 + 152, ctx.r6.u16);
	// stb r7,154(r11)
	PPC_STORE_U8(r11.u32 + 154, ctx.r7.u8);
	// stb r10,158(r11)
	PPC_STORE_U8(r11.u32 + 158, ctx.r10.u8);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stb r10,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r10.u8);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stb r7,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r7.u8);
	// lfs f12,1828(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1828);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f11,140(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r10,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, ctx.r10.u8);
	// lfs f13,2860(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2860);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r10.u8);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r10,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r10.u8);
	// stfs f12,156(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stb r6,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r6.u8);
	// lfs f11,-28652(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28652);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,160(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r10,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, ctx.r10.u8);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stb r7,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r7.u8);
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stb r7,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r7.u8);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f10,3176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3176);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,180(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D99F78) {
	__imp__sub_82D99F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v13,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// lvx128 v11,r4,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	f0.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// vspltw v9,v9,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// vmulfp128 v13,v13,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vmulfp128 v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r8,r8,16896
	ctx.r8.s64 = ctx.r8.s64 + 16896;
loc_82D9A174:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d9a174
	if (!cr6.lt) goto loc_82D9A174;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,2
	r11.s64 = 2;
	// lvx128 v11,r5,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v10,r5,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
loc_82D9A1C4:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d9a1c4
	if (!cr6.lt) goto loc_82D9A1C4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A0B0) {
	__imp__sub_82D9A0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A200) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9A200) {
	__imp__sub_82D9A200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A248) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D9A248) {
	__imp__sub_82D9A248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9a278
	if (cr6.eq) goto loc_82D9A278;
	// li r11,3
	r11.s64 = 3;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D9A278:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A258) {
	__imp__sub_82D9A258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A288) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9a2ec
	if (cr6.eq) goto loc_82D9A2EC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d9a2f0
	if (!cr6.eq) goto loc_82D9A2F0;
loc_82D9A2EC:
	// li r11,0
	r11.s64 = 0;
loc_82D9A2F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D9A288) {
	__imp__sub_82D9A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A318) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A318) {
	__imp__sub_82D9A318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r9,r9,-24564
	ctx.r9.s64 = ctx.r9.s64 + -24564;
	// li r6,0
	ctx.r6.s64 = 0;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,3080(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// li r31,13
	r31.s64 = 13;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r31,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, r31.u16);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stb r6,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r6.u8);
	// stb r9,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r9.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A320) {
	__imp__sub_82D9A320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A3C8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A3C8) {
	__imp__sub_82D9A3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A428) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A428) {
	__imp__sub_82D9A428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lfs f12,-1104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1104);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,26348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,3800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	f0.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r9,r9,-23124
	ctx.r9.s64 = ctx.r9.s64 + -23124;
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lfs f11,3052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3052);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f11,92(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f10,2704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2704);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f10,96(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,3164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3164);
	f0.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16976
	r11.s64 = r11.s64 + 16976;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A430) {
	__imp__sub_82D9A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum4fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A4D8) {
	__imp__sub_82D9A4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A4F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r5,224
	r11.s64 = ctx.r5.s64 + 224;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lfs f13,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum4fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r5
	PPC_STORE_U32((ctx.r5.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r5.u32) & 0xF) >> 2));
	// lfs f0,84(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d9a580
	if (!cr6.lt) goto loc_82D9A580;
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d9a580
	if (!cr6.lt) goto loc_82D9A580;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D9A580:
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A4F8) {
	__imp__sub_82D9A4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A598) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r5,224
	r11.s64 = ctx.r5.s64 + 224;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lfs f13,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum4fp128 v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r5
	PPC_STORE_U32((ctx.r5.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r5.u32) & 0xF) >> 2));
	// lfs f0,92(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d9a620
	if (!cr6.lt) goto loc_82D9A620;
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d9a620
	if (!cr6.lt) goto loc_82D9A620;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D9A620:
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A598) {
	__imp__sub_82D9A598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-22928
	r11.s64 = r11.s64 + -22928;
	// lfs f13,-1264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1264);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f12,2632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2632);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A638) {
	__imp__sub_82D9A638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fneg f0,f3
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-22928
	r11.s64 = r11.s64 + -22928;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A688) {
	__imp__sub_82D9A688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A6C8) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r9,-22928
	ctx.r9.s64 = ctx.r9.s64 + -22928;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
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

PPC_WEAK_FUNC(sub_82D9A6C8) {
	__imp__sub_82D9A6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A768) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A768) {
	__imp__sub_82D9A768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r3,160
	r11.s64 = ctx.r3.s64 + 160;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9A770) {
	__imp__sub_82D9A770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82d86180
	sub_82D86180(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D9A790) {
	__imp__sub_82D9A790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A7B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r25,8
	r25.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9a7fc
	if (!cr6.lt) goto loc_82D9A7FC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-1100
	ctx.r9.s64 = ctx.r9.s64 + -1100;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D9A7FC:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82d9a834
	if (cr6.eq) goto loc_82D9A834;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9a834
	if (cr6.eq) goto loc_82D9A834;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82d9a838
	goto loc_82D9A838;
loc_82D9A834:
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82D9A838:
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(196) );
	// lwz r31,192(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(192) );
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82d9a918
	if (cr6.lt) goto loc_82D9A918;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,16
	r28.s64 = 16;
	// addi r29,r11,16896
	r29.s64 = r11.s64 + 16896;
loc_82D9A858:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9a908
	if (cr6.eq) goto loc_82D9A908;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r30,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v10,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v9,v9,v0
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v11,v10,v13
	simd::store_i32(ctx.v11.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v10.u32)));
	// vmrghw v0,v0,v9
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v9.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v11
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v11.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v12,v12,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v13,v12,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v11.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9A908:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bge cr6,0x82d9a858
	if (!cr6.lt) goto loc_82D9A858;
loc_82D9A918:
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9a948
	if (!cr6.lt) goto loc_82D9A948;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D9A948:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D9A7B0) {
	__imp__sub_82D9A7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9A950) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r25,8
	r25.s64 = 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9a99c
	if (!cr6.lt) goto loc_82D9A99C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-1100
	ctx.r9.s64 = ctx.r9.s64 + -1100;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D9A99C:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x82d9a9d4
	if (cr6.eq) goto loc_82D9A9D4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9a9d4
	if (cr6.eq) goto loc_82D9A9D4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// b 0x82d9a9d8
	goto loc_82D9A9D8;
loc_82D9A9D4:
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_82D9A9D8:
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(196) );
	// lwz r27,192(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(192) );
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82d9aacc
	if (cr6.lt) goto loc_82D9AACC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,16
	r28.s64 = 16;
	// addi r30,r11,16896
	r30.s64 = r11.s64 + 16896;
loc_82D9A9F8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d9aabc
	if (cr6.eq) goto loc_82D9AABC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r31,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vsubfp v0,v0,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v10,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v9,v9,v0
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v11,v10,v13
	simd::store_i32(ctx.v11.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v10.u32)));
	// vmrghw v0,v0,v9
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v9.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v11
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v11.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v12,v12,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v13,v12,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v11.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9aabc
	if (cr6.eq) goto loc_82D9AABC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
loc_82D9AABC:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bge cr6,0x82d9a9f8
	if (!cr6.lt) goto loc_82D9A9F8;
loc_82D9AACC:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9aae8
	if (cr6.eq) goto loc_82D9AAE8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d4fe98
	sub_82D4FE98(ctx, base);
loc_82D9AAE8:
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9ab18
	if (!cr6.lt) goto loc_82D9AB18;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D9AB18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D9A950) {
	__imp__sub_82D9A950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(196) );
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d9ab50
	if (!cr6.gt) goto loc_82D9AB50;
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(192) );
loc_82D9AB34:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d9ab5c
	if (cr6.eq) goto loc_82D9AB5C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d9ab34
	if (cr6.lt) goto loc_82D9AB34;
loc_82D9AB50:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D9AB5C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9AB20) {
	__imp__sub_82D9AB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AB68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d9abb0
	if (!cr6.gt) goto loc_82D9ABB0;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(192) );
loc_82D9AB94:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9ac18
	if (cr6.eq) goto loc_82D9AC18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d9ab94
	if (cr6.lt) goto loc_82D9AB94;
loc_82D9ABB0:
	// li r31,-1
	r31.s64 = -1;
loc_82D9ABB4:
	// cntlzw r10,r31
	ctx.r10.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8228ed00
	sub_8228ED00(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82d9ac00
	if (cr6.lt) goto loc_82D9AC00;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(192) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82D9AC00:
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
loc_82D9AC18:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82d9abb4
	goto loc_82D9ABB4;
}

PPC_WEAK_FUNC(sub_82D9AB68) {
	__imp__sub_82D9AB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AC20) {
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
	// addi r11,r11,-22744
	r11.s64 = r11.s64 + -22744;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(200) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9ac6c
	if (!cr6.eq) goto loc_82D9AC6C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9AC6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d860e8
	sub_82D860E8(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9AC20) {
	__imp__sub_82D9AC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r11,8
	r11.s64 = 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r22,r11,r10
	r22.u64 = r11.u64 + ctx.r10.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9ace0
	if (!cr6.lt) goto loc_82D9ACE0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-1088
	ctx.r9.s64 = ctx.r9.s64 + -1088;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82D9ACE0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r9,r28,8
	ctx.r9.s64 = r28.s64 + 8;
	// lfs f0,3120(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3120);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,108(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(108) );
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r10,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r10,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvlx v0,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r4
	PPC_STORE_U32((ctx.r4.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r4.u32) & 0xF) >> 2));
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(196) );
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r29,116(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(112) );
	// ble cr6,0x82d9ae80
	if (!cr6.gt) goto loc_82D9AE80;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// li r26,0
	r26.s64 = 0;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_82D9ADDC:
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(192) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r30,r26,r11
	r30.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9ae70
	if (cr6.eq) goto loc_82D9AE70;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d9ae70
	if (cr6.eq) goto loc_82D9AE70;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82d9ae70
	if (cr6.eq) goto loc_82D9AE70;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// addi r11,r11,13
	r11.s64 = r11.s64 + 13;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = rotl32(r11.u32, 2);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r11,2476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2476) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9AE70:
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82d9addc
	if (!cr6.eq) goto loc_82D9ADDC;
loc_82D9AE80:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d9aeb0
	if (!cr6.lt) goto loc_82D9AEB0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = read_timestamp_counter();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D9AEB0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D9AC88) {
	__imp__sub_82D9AC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AEB8) {
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
	// bl 0x822895d0
	sub_822895D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d9af20
	if (!cr6.eq) goto loc_82D9AF20;
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d9af04
	if (!cr6.eq) goto loc_82D9AF04;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D9AF04:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82D9AF20:
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

PPC_WEAK_FUNC(sub_82D9AEB8) {
	__imp__sub_82D9AEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AF38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-1040
	ctx.r4.s64 = r11.s64 + -1040;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d85f70
	sub_82D85F70(ctx, base);
	// lwz r11,200(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(200) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9afc4
	if (!cr6.eq) goto loc_82D9AFC4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,192(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(192) );
	// addi r4,r10,-1056
	ctx.r4.s64 = ctx.r10.s64 + -1056;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9AFC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

PPC_WEAK_FUNC(sub_82D9AF38) {
	__imp__sub_82D9AF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9AFF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(196) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d9b060
	if (!cr6.eq) goto loc_82D9B060;
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b044
	if (!cr6.eq) goto loc_82D9B044;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B044:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// rlwimi r10,r9,31,2,0
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82D9B060:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d86028
	sub_82D86028(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9AFF0) {
	__imp__sub_82D9AFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B080) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	sub_82D7A4C0(ctx, base);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// subf r28,r10,r31
	r28.s64 = r31.s64 - ctx.r10.s64;
	// addi r7,r7,-22744
	ctx.r7.s64 = ctx.r7.s64 + -22744;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r6,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r6.u32);
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r5.u32);
	// stb r28,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r28.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r4,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r4.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r30,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D9B080) {
	__imp__sub_82D9B080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B120) {
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
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,208
	r11.s64 = 208;
	// addi r4,r27,160
	ctx.r4.s64 = r27.s64 + 160;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r5,44(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// bl 0x82d9b080
	sub_82D9B080(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r30,r27,128
	r30.s64 = r27.s64 + 128;
	// addi r31,r26,128
	r31.s64 = r26.s64 + 128;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d9b1c8
	if (!cr6.lt) goto loc_82D9B1C8;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b19c
	if (!cr6.eq) goto loc_82D9B19C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B19C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D9B1C8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// ble cr6,0x82d9b1fc
	if (!cr6.gt) goto loc_82D9B1FC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82D9B1E4:
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
	// bne cr6,0x82d9b1e4
	if (!cr6.eq) goto loc_82D9B1E4;
loc_82D9B1FC:
	// addi r31,r26,140
	r31.s64 = r26.s64 + 140;
	// addi r30,r27,140
	r30.s64 = r27.s64 + 140;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d9b264
	if (!cr6.lt) goto loc_82D9B264;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b238
	if (!cr6.eq) goto loc_82D9B238;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B238:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D9B264:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// ble cr6,0x82d9b298
	if (!cr6.gt) goto loc_82D9B298;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82D9B280:
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
	// bne cr6,0x82d9b280
	if (!cr6.eq) goto loc_82D9B280;
loc_82D9B298:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82d71a88
	sub_82D71A88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D9B120) {
	__imp__sub_82D9B120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B2B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82d4fe48
	sub_82D4FE48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D9B2B0) {
	__imp__sub_82D9B2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B2F0) {
	__imp__sub_82D9B2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B310) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D9B310) {
	__imp__sub_82D9B310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9b340
	if (cr6.eq) goto loc_82D9B340;
	// li r11,3
	r11.s64 = 3;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D9B340:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B320) {
	__imp__sub_82D9B320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B350) {
	__imp__sub_82D9B350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B360) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B360) {
	__imp__sub_82D9B360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-22316
	ctx.r9.s64 = ctx.r10.s64 + -22316;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// sth r6,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r6.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B368) {
	__imp__sub_82D9B368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B3B8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D9B3B8) {
	__imp__sub_82D9B3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9b3e8
	if (cr6.eq) goto loc_82D9B3E8;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D9B3E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B3C8) {
	__imp__sub_82D9B3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B3F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82d9b414
	if (cr6.gt) goto loc_82D9B414;
	// li r11,0
	r11.s64 = 0;
loc_82D9B414:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B3F8) {
	__imp__sub_82D9B3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B420) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B420) {
	__imp__sub_82D9B420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-22124
	ctx.r9.s64 = ctx.r10.s64 + -22124;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// sth r6,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r6.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B428) {
	__imp__sub_82D9B428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B488) {
	PPC_FUNC_PROLOGUE();
	// li r3,101
	ctx.r3.s64 = 101;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B488) {
	__imp__sub_82D9B488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// mulli r10,r11,308
	ctx.r10.s64 = r11.s64 * 308;
	// addi r10,r10,51
	ctx.r10.s64 = ctx.r10.s64 + 51;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B490) {
	__imp__sub_82D9B490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9b510
	if (cr6.eq) goto loc_82D9B510;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D9B510:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9B4E8) {
	__imp__sub_82D9B4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B520) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lfs f0,2824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2824);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-1024
	ctx.r10.s64 = r11.s64 + -1024;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f12,-7744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7744);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,3052(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r9,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r9.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82D9B520) {
	__imp__sub_82D9B520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B5B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1024
	r11.s64 = r11.s64 + -1024;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9B5B8) {
	__imp__sub_82D9B5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B620) {
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
	// addi r11,r11,-1024
	r11.s64 = r11.s64 + -1024;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b66c
	if (!cr6.eq) goto loc_82D9B66C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B66C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D9B620) {
	__imp__sub_82D9B620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B690) {
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
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d9b6c8
	if (!cr6.eq) goto loc_82D9B6C8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D9B6C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D9B690) {
	__imp__sub_82D9B690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B700) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r5,76(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + int32_t(76) );
	// bl 0x82de27a8
	sub_82DE27A8(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r19
	r11.u64 = r19.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D9B73C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82d9b73c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9B73C;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// lwz r20,72(r19)
	r20.u64 = PPC_LOAD_U32(r19.u32 + int32_t(72) );
	// li r30,0
	r30.s64 = 0;
	// lwz r11,48(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(48) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(0) );
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r30.u32);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// lwz r10,20(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(20) );
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(144) );
	// subf r21,r10,r11
	r21.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,44(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(44) );
	// lwz r11,48(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(48) );
	// addi r18,r11,-1
	r18.s64 = r11.s64 + -1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// addi r11,r11,224
	r11.s64 = r11.s64 + 224;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// add r11,r10,r21
	r11.u64 = ctx.r10.u64 + r21.u64;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x82de5ba0
	sub_82DE5BA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x82d9b924
	if (!cr6.gt) goto loc_82D9B924;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// li r22,16
	r22.s64 = 16;
	// li r23,32
	r23.s64 = 32;
	// li r24,48
	r24.s64 = 48;
loc_82D9B7F8:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r11,44(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(44) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r27,r11,208
	r27.s64 = r11.s64 + 208;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// add r11,r10,r21
	r11.u64 = ctx.r10.u64 + r21.u64;
	// subf r26,r21,r11
	r26.s64 = r11.s64 - r21.s64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// bne cr6,0x82d9b848
	if (!cr6.eq) goto loc_82D9B848;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D9B848:
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// lvx128 v12,r10,r22
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r22.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lvx128 v11,r10,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r10,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + r24.u32) & ~0xF), VectorMaskL));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// lvx128 v12,r11,r22
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r22.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// lvx128 v11,r11,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r11,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + r24.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// vmulfp128 v13,v13,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82dde978
	sub_82DDE978(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f1,48(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ddf788
	sub_82DDF788(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,144
	r31.s64 = r31.s64 + 144;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82d9b7f8
	if (!cr6.eq) goto loc_82D9B7F8;
loc_82D9B924:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lfs f3,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lfs f2,40(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lfs f1,36(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// bl 0x82de53c8
	sub_82DE53C8(ctx, base);
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b978
	if (!cr6.eq) goto loc_82D9B978;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B978:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82D9B700) {
	__imp__sub_82D9B700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9B980) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1024
	r11.s64 = r11.s64 + -1024;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9b9d4
	if (!cr6.eq) goto loc_82D9B9D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9B9D4:
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
	// beq cr6,0x82d9ba08
	if (cr6.eq) goto loc_82D9BA08;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9BA08:
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

PPC_WEAK_FUNC(sub_82D9B980) {
	__imp__sub_82D9B980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,320
	r11.s64 = r31.s64 + 320;
	// addi r10,r31,336
	ctx.r10.s64 = r31.s64 + 336;
	// li r7,256
	ctx.r7.s64 = 256;
	// lvlx v0,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw v12,v0,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// li r6,288
	ctx.r6.s64 = 288;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lfs f13,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f0,f13
	f0.f64 = -double(std::fma(float(f0.f64), float(f0.f64), -float(ctx.f13.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v11,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vor v0,v13,v13
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v13.u8));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v13,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmulfp128 v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v0,v12,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82D9BA28) {
	__imp__sub_82D9BA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BAF0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D9BAF0) {
	__imp__sub_82D9BAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9bb20
	if (cr6.eq) goto loc_82D9BB20;
	// li r11,6
	r11.s64 = 6;
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D9BB20:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9BB00) {
	__imp__sub_82D9BB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BB30) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9BB30) {
	__imp__sub_82D9BB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BB38) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// li r26,48
	r26.s64 = 48;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r27,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32 + r26.u32) & ~0xF), VectorMaskL));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r7.u64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v12,v0,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v11,v13,v13
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stvx128 v11,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// fdivs f0,f31,f13
	f0.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r29,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + r26.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r24,32
	r24.s64 = 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r11,r24
	ea = (r11.u32 + r24.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d9bccc
	if (!cr6.lt) goto loc_82D9BCCC;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D9BCCC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d9bcd8
	if (!cr6.lt) goto loc_82D9BCD8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D9BCD8:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r26,r31,208
	r26.s64 = r31.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfsx f0,r9,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, temp.u32);
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// lfsx f0,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r10,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// li r11,320
	r11.s64 = 320;
	// addi r25,r26,16
	r25.s64 = r26.s64 + 16;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stvx128 v0,r31,r11
	ea = (r31.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d4fed0
	sub_82D4FED0(ctx, base);
	// li r11,336
	r11.s64 = 336;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r26,r24
	ea = (r26.u32 + r24.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r28,r24
	ea = (r28.u32 + r24.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D9BB38) {
	__imp__sub_82D9BB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9BE20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2be0
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r31,80
	r31.s64 = 80;
	// li r28,144
	r28.s64 = 144;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r27,16
	r27.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v13,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r30,0
	r30.s64 = 0;
	// stvx128 v13,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// li r31,2
	r31.s64 = 2;
	// lfs f0,3080(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r4,1
	ctx.r4.s64 = 1;
	// stvx128 v0,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82d9bec0
	if (!cr6.lt) goto loc_82D9BEC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r30,1
	r30.s64 = 1;
loc_82D9BEC0:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82d9becc
	if (!cr6.lt) goto loc_82D9BECC;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82D9BECC:
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r31,2,0,29
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// addi r4,r3,256
	ctx.r4.s64 = ctx.r3.s64 + 256;
	// li r26,320
	r26.s64 = 320;
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r27,0
	r27.s64 = 0;
	// lfsx f13,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// stfsx f13,r30,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfsx f13,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f13,r31,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r11,r29
	ea = (r11.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,2
	r11.s64 = 2;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r3,r26
	ea = (ctx.r3.u32 + r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82d9c000
	if (!cr6.lt) goto loc_82D9C000;
	// li r28,0
	r28.s64 = 0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r27,1
	r27.s64 = 1;
loc_82D9C000:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82d9c00c
	if (!cr6.lt) goto loc_82D9C00C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82D9C00C:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// li r5,336
	ctx.r5.s64 = 336;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfsx f13,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lfsx f13,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f13,r7,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r4,r29
	ea = (ctx.r4.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D9BE20) {
	__imp__sub_82D9BE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C100) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,16896
	r11.s64 = r11.s64 + 16896;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// li r30,16
	r30.s64 = 16;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ld r28,0(r9)
	r28.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r27,0(r8)
	r27.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lvx128 v13,r11,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lvx128 v12,r11,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f31,-16936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16936);
	f31.f64 = double(temp.f32);
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r10,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v12,r10,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// std r28,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, r28.u64);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// std r27,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, r27.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c234
	if (cr6.eq) goto loc_82D9C234;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c234
	if (cr6.eq) goto loc_82D9C234;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c234
	if (cr6.eq) goto loc_82D9C234;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82d51130
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c234
	if (cr6.eq) goto loc_82D9C234;
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d9c238
	if (!cr6.gt) goto loc_82D9C238;
loc_82D9C234:
	// li r11,0
	r11.s64 = 0;
loc_82D9C238:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D9C100) {
	__imp__sub_82D9C100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-21268
	ctx.r10.s64 = ctx.r10.s64 + -21268;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r8,9
	ctx.r8.s64 = 9;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r31.u16);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// sth r4,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r4.u16);
	// li r30,12
	r30.s64 = 12;
	// sth r8,144(r11)
	PPC_STORE_U16(r11.u32 + 144, ctx.r8.u16);
	// addi r10,r11,176
	ctx.r10.s64 = r11.s64 + 176;
	// sth r7,156(r11)
	PPC_STORE_U16(r11.u32 + 156, ctx.r7.u16);
	// sth r9,168(r11)
	PPC_STORE_U16(r11.u32 + 168, ctx.r9.u16);
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// sth r9,172(r11)
	PPC_STORE_U16(r11.u32 + 172, ctx.r9.u16);
	// sth r6,176(r11)
	PPC_STORE_U16(r11.u32 + 176, ctx.r6.u16);
	// sth r30,288(r11)
	PPC_STORE_U16(r11.u32 + 288, r30.u16);
	// bge cr6,0x82d9c2d8
	if (!cr6.lt) goto loc_82D9C2D8;
	// subf r11,r10,r10
	r11.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c2d8
	if (cr6.eq) goto loc_82D9C2D8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82D9C2CC:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82d9c2cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9C2CC;
loc_82D9C2D8:
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stb r4,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r4.u8);
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r5,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r5.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r31,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, r31.u8);
	// addi r8,r3,256
	ctx.r8.s64 = ctx.r3.s64 + 256;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vxor v12,v12,v12
	simd::store_u8(ctx.v12.u8, simd::zero_i128());
	// lfs f13,3204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3204);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f12,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,168(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r5,306(r3)
	PPC_STORE_U8(ctx.r3.u32 + 306, ctx.r5.u8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9C250) {
	__imp__sub_82D9C250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C3F0) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r9,-21020
	ctx.r9.s64 = ctx.r9.s64 + -21020;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
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

PPC_WEAK_FUNC(sub_82D9C3F0) {
	__imp__sub_82D9C3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C498) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82de27a8
	sub_82DE27A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D9C498) {
	__imp__sub_82D9C498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C4B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82D9C4B0) {
	__imp__sub_82D9C4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,30(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lhz r11,28(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9C508) {
	__imp__sub_82D9C508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C520) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82D9C520) {
	__imp__sub_82D9C520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C560) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9C560) {
	__imp__sub_82D9C560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C568) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-940
	ctx.r9.s64 = r11.s64 + -940;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27524);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r10,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r10.u16);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stb r11,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r11.u8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d9c5dc
	if (cr6.eq) goto loc_82D9C5DC;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82D9C5DC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r11.u16);
	// sth r10,30(r31)
	PPC_STORE_U16(r31.u32 + 30, ctx.r10.u16);
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D9C568) {
	__imp__sub_82D9C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C638) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9C638) {
	__imp__sub_82D9C638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C6A0) {
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
	// addi r11,r11,-940
	r11.s64 = r11.s64 + -940;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c6fc
	if (cr6.eq) goto loc_82D9C6FC;
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
	// bne cr6,0x82d9c6fc
	if (!cr6.eq) goto loc_82D9C6FC;
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
loc_82D9C6FC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82D9C6A0) {
	__imp__sub_82D9C6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	// bl 0x82ca2be4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r11,28(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// lwz r27,76(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(76) );
	// lhz r28,30(r30)
	r28.u64 = PPC_LOAD_U16(r30.u32 + 30);
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// bne cr6,0x82d9c994
	if (!cr6.eq) goto loc_82D9C994;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82d9c7b4
	if (cr6.lt) goto loc_82D9C7B4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D9C784:
	// lfs f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmadds f13,f0,f0,f31
	ctx.f13.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(f31.f64)));
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f13.f64)));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f13.f64)));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// fmadds f31,f0,f0,f13
	f31.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f13.f64)));
	// bne cr6,0x82d9c784
	if (!cr6.eq) goto loc_82D9C784;
loc_82D9C7B4:
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bge cr6,0x82d9c7e0
	if (!cr6.lt) goto loc_82D9C7E0;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r28
	r11.s64 = r28.s64 - ctx.r9.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
loc_82D9C7C8:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmadds f31,f0,f0,f31
	f31.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(f31.f64)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d9c7c8
	if (!cr6.eq) goto loc_82D9C7C8;
loc_82D9C7E0:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82d9c994
	if (!cr6.gt) goto loc_82D9C994;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r10.u8);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c84c
	if (cr6.eq) goto loc_82D9C84C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// fsqrts f0,f31
	f0.f64 = double(simd::sqrt_f32(float(f31.f64)));
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9C84C:
	// lbz r11,37(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9c994
	if (cr6.eq) goto loc_82D9C994;
	// fsqrts f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(simd::sqrt_f32(float(f31.f64)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(48) );
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16912
	r11.s64 = r11.s64 + 16912;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v8,r0,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v0,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v13,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v13,v10
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v13,v0,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v13,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v13,v9
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v13,v0,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v13,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v13,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v0,v0,v12,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D9C994:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82d9c9b8
	if (!cr6.gt) goto loc_82D9C9B8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82D9C9A4:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d9c9a4
	if (!cr6.eq) goto loc_82D9C9A4;
loc_82D9C9B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D9C720) {
	__imp__sub_82D9C720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9C9C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lhz r11,28(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d9cab4
	if (!cr6.eq) goto loc_82D9CAB4;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f0,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bne cr6,0x82d9caa0
	if (!cr6.eq) goto loc_82D9CAA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82deec50
	sub_82DEEC50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
loc_82D9CAA0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82de2950
	sub_82DE2950(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
loc_82D9CAB4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82de27a8
	sub_82DE27A8(ctx, base);
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9cae8
	if (cr6.eq) goto loc_82D9CAE8;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(20) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x82d78cd0
	sub_82D78CD0(ctx, base);
loc_82D9CAE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D9C9C8) {
	__imp__sub_82D9C9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CAF0) {
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
	// bl 0x82d9c6a0
	sub_82D9C6A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9cb38
	if (cr6.eq) goto loc_82D9CB38;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9CB38:
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

PPC_WEAK_FUNC(sub_82D9CAF0) {
	__imp__sub_82D9CAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CB58) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9CB58) {
	__imp__sub_82D9CB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CB60) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82d9cb88
	if (!cr6.eq) goto loc_82D9CB88;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r27,108(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
loc_82D9CB88:
	// lwz r11,340(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(340) );
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82d9cbdc
	if (cr6.lt) goto loc_82D9CBDC;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// rlwinm r30,r31,3,0,28
	r30.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82D9CBA0:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(336) );
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82d9cba0
	if (!cr6.lt) goto loc_82D9CBA0;
loc_82D9CBDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D9CB60) {
	__imp__sub_82D9CB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CBE8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82d9cc10
	if (!cr6.eq) goto loc_82D9CC10;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r27,108(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
loc_82D9CC10:
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(340) );
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82d9cc70
	if (cr6.lt) goto loc_82D9CC70;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// rlwinm r31,r26,3,0,28
	r31.u64 = rotl64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_82D9CC28:
	// lwz r11,336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(336) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d9cc70
	if (!cr6.eq) goto loc_82D9CC70;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bge cr6,0x82d9cc28
	if (!cr6.lt) goto loc_82D9CC28;
loc_82D9CC70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D9CBE8) {
	__imp__sub_82D9CBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,340(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(340) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d9ccac
	if (!cr6.gt) goto loc_82D9CCAC;
	// lwz r11,336(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(336) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82D9CC90:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d9ccb8
	if (cr6.eq) goto loc_82D9CCB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d9cc90
	if (cr6.lt) goto loc_82D9CC90;
loc_82D9CCAC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D9CCB8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9CC78) {
	__imp__sub_82D9CC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CCC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-6524
	r11.s64 = r11.s64 + -6524;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r9,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r9.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82d9cd54
	if (cr6.eq) goto loc_82D9CD54;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82d9cd3c
	if (cr6.lt) goto loc_82D9CD3C;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// rlwinm r11,r30,3,0,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82D9CD20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9cd6c
	if (cr6.eq) goto loc_82D9CD6C;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82d9cd20
	if (!cr6.lt) goto loc_82D9CD20;
loc_82D9CD3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8228ed00
	sub_8228ED00(ctx, base);
loc_82D9CD54:
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
loc_82D9CD6C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8228ed00
	sub_8228ED00(ctx, base);
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// rlwinm r30,r30,3,0,28
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9cda8
	if (cr6.eq) goto loc_82D9CDA8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9CDA8:
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// b 0x82d9cd54
	goto loc_82D9CD54;
}

PPC_WEAK_FUNC(sub_82D9CCC8) {
	__imp__sub_82D9CCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D9CDFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82d9cdfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9CDFC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,340(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(340) );
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-6524
	r11.s64 = r11.s64 + -6524;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ble cr6,0x82d9ce7c
	if (!cr6.gt) goto loc_82D9CE7C;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// li r31,0
	r31.s64 = 0;
loc_82D9CE3C:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(336) );
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,340(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(340) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82d9ce3c
	if (cr6.lt) goto loc_82D9CE3C;
loc_82D9CE7C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D9CDD8) {
	__imp__sub_82D9CDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CE88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82d7a9a0
	sub_82D7A9A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17116
	r11.s64 = r11.s64 + 17116;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
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

PPC_WEAK_FUNC(sub_82D9CE88) {
	__imp__sub_82D9CE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CEE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,17116
	ctx.r10.s64 = ctx.r10.s64 + 17116;
	// addi r9,r9,-6524
	ctx.r9.s64 = ctx.r9.s64 + -6524;
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(340) );
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r11.u16);
	// blt cr6,0x82d9cf58
	if (cr6.lt) goto loc_82D9CF58;
	// rlwinm r29,r31,3,0,28
	r29.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82D9CF2C:
	// lwz r11,336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(336) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82d9cf2c
	if (!cr6.lt) goto loc_82D9CF2C;
loc_82D9CF58:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r10,340(r30)
	PPC_STORE_U32(r30.u32 + 340, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(344) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9cf98
	if (!cr6.eq) goto loc_82D9CF98;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,336(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(336) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9CF98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d860e8
	sub_82D860E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D9CEE8) {
	__imp__sub_82D9CEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9CFA8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r26,4
	r26.s64 = 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,352
	ctx.r4.s64 = 352;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,352
	r11.s64 = 352;
	// addi r5,r27,160
	ctx.r5.s64 = r27.s64 + 160;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// lwz r28,44(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(16) );
	// bl 0x82d7a9a0
	sub_82D7A9A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17116
	r11.s64 = r11.s64 + 17116;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r29,r27,128
	r29.s64 = r27.s64 + 128;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// stw r9,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d9d078
	if (!cr6.lt) goto loc_82D9D078;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9d04c
	if (!cr6.eq) goto loc_82D9D04C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9D04C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_82D9D078:
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
	// ble cr6,0x82d9d0ac
	if (!cr6.gt) goto loc_82D9D0AC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82D9D094:
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
	// bne cr6,0x82d9d094
	if (!cr6.eq) goto loc_82D9D094;
loc_82D9D0AC:
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// addi r29,r27,140
	r29.s64 = r27.s64 + 140;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d9d114
	if (!cr6.lt) goto loc_82D9D114;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9d0e8
	if (!cr6.eq) goto loc_82D9D0E8;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9D0E8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_82D9D114:
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
	// ble cr6,0x82d9d148
	if (!cr6.gt) goto loc_82D9D148;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82D9D130:
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
	// bne cr6,0x82d9d130
	if (!cr6.eq) goto loc_82D9D130;
loc_82D9D148:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d71a88
	sub_82D71A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D9CFA8) {
	__imp__sub_82D9CFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d9d258
	if (cr6.eq) goto loc_82D9D258;
	// bl 0x822895d0
	sub_822895D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d9d258
	if (!cr6.eq) goto loc_82D9D258;
	// addi r31,r28,336
	r31.s64 = r28.s64 + 336;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d9d1b0
	if (!cr6.eq) goto loc_82D9D1B0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D9D1B0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D9D1DC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82d9d1dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9D1DC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,7264
	ctx.r10.s64 = r11.s64 + 7264;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r11,416
	ctx.r10.s64 = r11.s64 + 416;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = rotl32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,2464(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2464) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
loc_82D9D258:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D9D160) {
	__imp__sub_82D9D160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D260) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-880
	ctx.r4.s64 = r11.s64 + -880;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d85f70
	sub_82D85F70(ctx, base);
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(344) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9d2e4
	if (!cr6.eq) goto loc_82D9D2E4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// addi r4,r10,-892
	ctx.r4.s64 = ctx.r10.s64 + -892;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9D2E4:
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d9d338
	if (!cr6.gt) goto loc_82D9D338;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-20212
	r27.s64 = r11.s64 + -20212;
loc_82D9D300:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82d9d300
	if (cr6.lt) goto loc_82D9D300;
loc_82D9D338:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D9D260) {
	__imp__sub_82D9D260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D358) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(340) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d9d3c8
	if (!cr6.eq) goto loc_82D9D3C8;
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d9d3ac
	if (!cr6.eq) goto loc_82D9D3AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9D3AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// rlwimi r10,r9,31,2,0
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82D9D3C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7a6f0
	sub_82D7A6F0(ctx, base);
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

PPC_WEAK_FUNC(sub_82D9D358) {
	__imp__sub_82D9D358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,208
	ctx.r10.s64 = 208;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r30,20
	r25.s64 = r30.s64 + 20;
	// lwz r11,108(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(108) );
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v127,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(v127.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vminfp128 v11,v0,v127
	simd::store_f32_aligned(ctx.v11.f32, simd::min_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// vmaxfp128 v0,v0,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vaddfp v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vaddfp v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d86180
	sub_82D86180(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// vmsum3fp128 v0,v127,v127
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,3120(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3120);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lwz r11,108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(108) );
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r10,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r10,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(108) );
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v127,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v0,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(340) );
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// stfs f0,240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stfs f0,244(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// blt cr6,0x82d9d5c4
	if (cr6.lt) goto loc_82D9D5C4;
	// rlwinm r29,r30,3,0,28
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_82D9D584:
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(336) );
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82d9d584
	if (!cr6.lt) goto loc_82D9D584;
loc_82D9D5C4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D9D3E8) {
	__imp__sub_82D9D3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-16056
	r11.s64 = r11.s64 + -16056;
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f0,-1264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1264);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// lfs f13,2632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2632);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D5D8) {
	__imp__sub_82D9D5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D620) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r8,40
	ctx.r8.s64 = 40;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r9,-16056
	ctx.r9.s64 = ctx.r9.s64 + -16056;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
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

PPC_WEAK_FUNC(sub_82D9D620) {
	__imp__sub_82D9D620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D6D8) {
	__imp__sub_82D9D6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D6E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D6E0) {
	__imp__sub_82D9D6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D9D6E8) {
	__imp__sub_82D9D6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D700) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r10,44
	r30.s64 = ctx.r10.s64 + 44;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d9d790
	if (!cr6.lt) goto loc_82D9D790;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d9d75c
	if (!cr6.eq) goto loc_82D9D75C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D9D75C:
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D9D790:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// ble cr6,0x82d9d7c4
	if (!cr6.gt) goto loc_82D9D7C4;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82D9D7AC:
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
	// bne cr6,0x82d9d7ac
	if (!cr6.eq) goto loc_82D9D7AC;
loc_82D9D7C4:
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

PPC_WEAK_FUNC(sub_82D9D700) {
	__imp__sub_82D9D700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D7E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D7E0) {
	__imp__sub_82D9D7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D7E8) {
	__imp__sub_82D9D7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D7F8) {
	__imp__sub_82D9D7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D808) {
	PPC_FUNC_PROLOGUE();
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D808) {
	__imp__sub_82D9D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D810) {
	__imp__sub_82D9D810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D820) {
	__imp__sub_82D9D820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D830) {
	__imp__sub_82D9D830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9D838) {
	__imp__sub_82D9D838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82d9d87c
	if (!cr6.lt) goto loc_82D9D87C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d9d884
	goto loc_82D9D884;
loc_82D9D87C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82d505c0
	sub_82D505C0(ctx, base);
loc_82D9D884:
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = static_cast<float>(f31.f64 - f0.f64);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bge cr6,0x82d9d8f0
	if (!cr6.lt) goto loc_82D9D8F0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16912
	ctx.r10.s64 = ctx.r10.s64 + 16912;
	// lvlx v0,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v11,r9,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v12,r10,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmulfp128 v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v11,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// b 0x82d9d8f8
	goto loc_82D9D8F8;
loc_82D9D8F0:
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r10,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r11.u32) & ~0xF), VectorMaskL));
loc_82D9D8F8:
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82D9D840) {
	__imp__sub_82D9D840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9D918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82d9d948
	if (!cr6.lt) goto loc_82D9D948;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_82D9D948:
	// bl 0x82d505c0
	sub_82D505C0(ctx, base);
	// lwz r28,36(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r25,r31,36
	r25.s64 = r31.s64 + 36;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// blt cr6,0x82d9d968
	if (cr6.lt) goto loc_82D9D968;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
loc_82D9D968:
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r11,r10,4,0,27
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r29,16
	r29.s64 = 16;
loc_82D9D990:
	// lvx128 v13,r11,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r24,r1,84
	r24.s64 = ctx.r1.s64 + 84;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v12,v0,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v13,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stvewx v12,r0,r24
	PPC_STORE_U32((r24.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((r24.u32) & 0xF) >> 2));
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82d9da00
	if (!cr6.lt) goto loc_82D9DA00;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d9db14
	if (cr6.eq) goto loc_82D9DB14;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// b 0x82d9d990
	goto loc_82D9D990;
loc_82D9DA00:
	// lvx128 v13,r11,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// vsubfp v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v12,v0,v13
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r6
	PPC_STORE_U32((ctx.r6.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((ctx.r6.u32) & 0xF) >> 2));
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x82d9db14
	if (!cr6.gt) goto loc_82D9DB14;
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, r28.s32, xer);
	// bge cr6,0x82d9db14
	if (!cr6.lt) goto loc_82D9DB14;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// add r23,r11,r6
	r23.u64 = r11.u64 + ctx.r6.u64;
	// lvx128 v12,r11,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r23,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r23.u32 + r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v10,v12,v13
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v10,r0,r24
	PPC_STORE_U32((r24.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((r24.u32) & 0xF) >> 2));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82d9da70
	if (!cr6.gt) goto loc_82D9DA70;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x82d9d990
	goto loc_82D9D990;
loc_82D9DA70:
	// vmsum3fp128 v11,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v10,v12,v12
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmulfp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmsum3fp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// vmulfp128 v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmsum3fp128 v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// stvewx v13,r0,r9
	PPC_STORE_U32((ctx.r9.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r9.u32) & 0xF) >> 2));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82d9db00
	if (!cr6.gt) goto loc_82D9DB00;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3028(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3028);
	f0.f64 = double(temp.f32);
	// b 0x82d9db10
	goto loc_82D9DB10;
loc_82D9DB00:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,26348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26348);
	f0.f64 = double(temp.f32);
loc_82D9DB10:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82D9DB14:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// addi r9,r9,16912
	ctx.r9.s64 = ctx.r9.s64 + 16912;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvlx v0,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lvx128 v11,r10,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v12,r9,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// frsp f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f13.f64 + f0.f64));
	// vmaddfp v0,v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d9dbe0
	if (cr6.eq) goto loc_82D9DBE0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f13,2680(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// bge cr6,0x82d9dbb0
	if (!cr6.lt) goto loc_82D9DBB0;
	// fsubs f13,f12,f1
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f1.f64);
	// fsubs f1,f0,f13
	ctx.f1.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// b 0x82d9dbc4
	goto loc_82D9DBC4;
loc_82D9DBB0:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82d9dbe0
	if (!cr6.gt) goto loc_82D9DBE0;
	// fsubs f0,f0,f1
	f0.f64 = static_cast<float>(f0.f64 - ctx.f1.f64);
	// fsubs f1,f12,f0
	ctx.f1.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
loc_82D9DBC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D9DBE0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82D9D918) {
	__imp__sub_82D9D918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7508
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// fdivs f28,f31,f30
	f28.f64 = double(float(f31.f64 / f30.f64));
	// bl 0x82d505c0
	sub_82D505C0(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d9dc48
	if (cr6.lt) goto loc_82D9DC48;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// b 0x82d9dc58
	goto loc_82D9DC58;
loc_82D9DC48:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d9dc58
	if (!cr6.lt) goto loc_82D9DC58;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,1
	r11.s64 = 1;
loc_82D9DC58:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v0,r10,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// frsp f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f29,f0
	f0.f64 = static_cast<float>(f29.f64 - f0.f64);
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,3056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// addi r7,r8,16912
	ctx.r7.s64 = ctx.r8.s64 + 16912;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bge cr6,0x82d9dd88
	if (!cr6.lt) goto loc_82D9DD88;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d9dd88
	if (!cr6.gt) goto loc_82D9DD88;
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = static_cast<float>(f30.f64 - f0.f64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// lvx128 v11,r8,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v12,v0,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v0,r8,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v11,v0,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmulfp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D9DD88:
	// extsw r8,r11
	ctx.r8.s64 = r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = static_cast<float>(f0.f64 - f29.f64);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82d9de64
	if (!cr6.lt) goto loc_82D9DE64;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x82d9de64
	if (!cr6.lt) goto loc_82D9DE64;
	// fsubs f0,f30,f0
	f0.f64 = static_cast<float>(f30.f64 - f0.f64);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lvx128 v10,r11,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v13,v0,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v0,r10,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v12,v12,v13
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v12,v12,v11
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmsum3fp128 v11,v0,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v11,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmulfp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82D9DE64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
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

PPC_WEAK_FUNC(sub_82D9DBF0) {
	__imp__sub_82D9DBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9DE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(36) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9DE88) {
	__imp__sub_82D9DE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82d505c0
	sub_82D505C0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x82d9def4
	if (cr6.lt) goto loc_82D9DEF4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d9df14
	goto loc_82D9DF14;
loc_82D9DEF4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d9df00
	if (!cr6.lt) goto loc_82D9DF00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D9DF00:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_82D9DF14:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = static_cast<float>(f31.f64 - ctx.f12.f64);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D9DEA8) {
	__imp__sub_82D9DEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D9DF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,27936
	r11.s64 = r11.s64 + 27936;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v13,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31108);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d9dfec
	if (!cr6.lt) goto loc_82D9DFEC;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// vpermwi128 v13,v0,135
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmulfp128 v13,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82d9e060
	goto loc_82D9E060;
loc_82D9DFEC:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d9e024
	if (!cr6.lt) goto loc_82D9E024;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82D9E024:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d9e030
	if (!cr6.lt) goto loc_82D9E030;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82D9E030:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + r31.u32, temp.u32);
	// stfsx f0,r10,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
loc_82D9E060:
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82D9DF58) {
	__imp__sub_82D9DF58(ctx, base);
}

