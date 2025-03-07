#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7B6A0"))) PPC_WEAK_FUNC(sub_82D7B6A0);
PPC_FUNC_IMPL(__imp__sub_82D7B6A0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b7b8
	if (ctx.cr6.eq) goto loc_82D7B7B8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b6ec
	if (ctx.cr6.eq) goto loc_82D7B6EC;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B6E8;
	sub_82D72148(ctx, base);
	// b 0x82d7b7b8
	goto loc_82D7B7B8;
loc_82D7B6EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b744
	if (ctx.cr6.eq) goto loc_82D7B744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d892d8
	ctx.lr = 0x82D7B744;
	sub_82D892D8(ctx, base);
loc_82D7B744:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7c158
	ctx.lr = 0x82D7B750;
	sub_82D7C158(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7b788
	if (!ctx.cr6.eq) goto loc_82D7B788;
	// lbz r11,198(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 198);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b77c
	if (ctx.cr6.eq) goto loc_82D7B77C;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7b77c
	if (ctx.cr6.eq) goto loc_82D7B77C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7B77C;
	sub_82D7C3A8(ctx, base);
loc_82D7B77C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8f350
	ctx.lr = 0x82D7B788;
	sub_82D8F350(ctx, base);
loc_82D7B788:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bne 0x82d7b7b8
	if (!ctx.cr0.eq) goto loc_82D7B7B8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b7b8
	if (ctx.cr6.eq) goto loc_82D7B7B8;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7b7b8
	if (!ctx.cr6.eq) goto loc_82D7B7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d72130
	ctx.lr = 0x82D7B7B8;
	sub_82D72130(ctx, base);
loc_82D7B7B8:
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

__attribute__((alias("__imp__sub_82D7B7D0"))) PPC_WEAK_FUNC(sub_82D7B7D0);
PPC_FUNC_IMPL(__imp__sub_82D7B7D0) {
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
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B800;
	sub_82D7B6A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7B814"))) PPC_WEAK_FUNC(sub_82D7B814);
PPC_FUNC_IMPL(__imp__sub_82D7B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B818"))) PPC_WEAK_FUNC(sub_82D7B818);
PPC_FUNC_IMPL(__imp__sub_82D7B818) {
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
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B848;
	sub_82D7B6A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7B85C"))) PPC_WEAK_FUNC(sub_82D7B85C);
PPC_FUNC_IMPL(__imp__sub_82D7B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B860"))) PPC_WEAK_FUNC(sub_82D7B860);
PPC_FUNC_IMPL(__imp__sub_82D7B860) {
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
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B890;
	sub_82D7B6A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7B8A4"))) PPC_WEAK_FUNC(sub_82D7B8A4);
PPC_FUNC_IMPL(__imp__sub_82D7B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B8A8"))) PPC_WEAK_FUNC(sub_82D7B8A8);
PPC_FUNC_IMPL(__imp__sub_82D7B8A8) {
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
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B8D8;
	sub_82D7B6A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7B8EC"))) PPC_WEAK_FUNC(sub_82D7B8EC);
PPC_FUNC_IMPL(__imp__sub_82D7B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7B8F0"))) PPC_WEAK_FUNC(sub_82D7B8F0);
PPC_FUNC_IMPL(__imp__sub_82D7B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7B8F8;
	sub_82CA2BEC(ctx, base);
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b974
	if (ctx.cr6.eq) goto loc_82D7B974;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b974
	if (ctx.cr6.eq) goto loc_82D7B974;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7B944;
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B96C;
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7B974:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B998;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7B9A0"))) PPC_WEAK_FUNC(sub_82D7B9A0);
PPC_FUNC_IMPL(__imp__sub_82D7B9A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7ba04
	if (ctx.cr6.eq) goto loc_82D7BA04;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7ba04
	if (ctx.cr6.eq) goto loc_82D7BA04;
	// li r11,24
	ctx.r11.s64 = 24;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BA00;
	sub_82D72148(ctx, base);
	// b 0x82d7ba24
	goto loc_82D7BA24;
loc_82D7BA04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BA0C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BA24:
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

__attribute__((alias("__imp__sub_82D7BA3C"))) PPC_WEAK_FUNC(sub_82D7BA3C);
PPC_FUNC_IMPL(__imp__sub_82D7BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BA40"))) PPC_WEAK_FUNC(sub_82D7BA40);
PPC_FUNC_IMPL(__imp__sub_82D7BA40) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7baa4
	if (ctx.cr6.eq) goto loc_82D7BAA4;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7baa4
	if (ctx.cr6.eq) goto loc_82D7BAA4;
	// li r11,25
	ctx.r11.s64 = 25;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BAA0;
	sub_82D72148(ctx, base);
	// b 0x82d7bac4
	goto loc_82D7BAC4;
loc_82D7BAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BAAC;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BAC4:
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

__attribute__((alias("__imp__sub_82D7BADC"))) PPC_WEAK_FUNC(sub_82D7BADC);
PPC_FUNC_IMPL(__imp__sub_82D7BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BAE0"))) PPC_WEAK_FUNC(sub_82D7BAE0);
PPC_FUNC_IMPL(__imp__sub_82D7BAE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7bb44
	if (ctx.cr6.eq) goto loc_82D7BB44;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bb44
	if (ctx.cr6.eq) goto loc_82D7BB44;
	// li r11,26
	ctx.r11.s64 = 26;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BB40;
	sub_82D72148(ctx, base);
	// b 0x82d7bb64
	goto loc_82D7BB64;
loc_82D7BB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BB4C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BB64:
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

__attribute__((alias("__imp__sub_82D7BB7C"))) PPC_WEAK_FUNC(sub_82D7BB7C);
PPC_FUNC_IMPL(__imp__sub_82D7BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BB80"))) PPC_WEAK_FUNC(sub_82D7BB80);
PPC_FUNC_IMPL(__imp__sub_82D7BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BB88;
	sub_82CA2BEC(ctx, base);
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc04
	if (ctx.cr6.eq) goto loc_82D7BC04;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc04
	if (ctx.cr6.eq) goto loc_82D7BC04;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BBD4;
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BBFC;
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7BC04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BC0C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7BC30"))) PPC_WEAK_FUNC(sub_82D7BC30);
PPC_FUNC_IMPL(__imp__sub_82D7BC30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc94
	if (ctx.cr6.eq) goto loc_82D7BC94;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc94
	if (ctx.cr6.eq) goto loc_82D7BC94;
	// li r11,28
	ctx.r11.s64 = 28;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BC90;
	sub_82D72148(ctx, base);
	// b 0x82d7bcb4
	goto loc_82D7BCB4;
loc_82D7BC94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BC9C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BCB4:
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

__attribute__((alias("__imp__sub_82D7BCCC"))) PPC_WEAK_FUNC(sub_82D7BCCC);
PPC_FUNC_IMPL(__imp__sub_82D7BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BCD0"))) PPC_WEAK_FUNC(sub_82D7BCD0);
PPC_FUNC_IMPL(__imp__sub_82D7BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BCD8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7bdb4
	if (ctx.cr6.eq) goto loc_82D7BDB4;
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7bd08
	if (ctx.cr6.eq) goto loc_82D7BD08;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d7bd0c
	if (!ctx.cr6.eq) goto loc_82D7BD0C;
loc_82D7BD08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7BD0C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7bd70
	if (!ctx.cr6.eq) goto loc_82D7BD70;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82d7bd28
	if (ctx.cr6.eq) goto loc_82D7BD28;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21, ctx.xer);
	// bne cr6,0x82d7bd4c
	if (!ctx.cr6.eq) goto loc_82D7BD4C;
loc_82D7BD28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BD4C:
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x82d7bd70
	if (!ctx.cr6.eq) goto loc_82D7BD70;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7BD70:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82d7bd98
	if (!ctx.cr6.eq) goto loc_82D7BD98;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7BD98:
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bne cr6,0x82d7bdb4
	if (!ctx.cr6.eq) goto loc_82D7BDB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BDB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7BDBC"))) PPC_WEAK_FUNC(sub_82D7BDBC);
PPC_FUNC_IMPL(__imp__sub_82D7BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BDC0"))) PPC_WEAK_FUNC(sub_82D7BDC0);
PPC_FUNC_IMPL(__imp__sub_82D7BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BDC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,416
	ctx.r10.s64 = 416;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,432
	ctx.r8.s64 = 432;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,182(r30)
	PPC_STORE_U8(ctx.r30.u32 + 182, ctx.r11.u8);
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// stb r11,180(r30)
	PPC_STORE_U8(ctx.r30.u32 + 180, ctx.r11.u8);
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// stb r11,181(r30)
	PPC_STORE_U8(ctx.r30.u32 + 181, ctx.r11.u8);
	// lhz r11,150(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 150);
	// sth r11,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r11.u16);
	// lbz r11,217(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,177(r30)
	PPC_STORE_U8(ctx.r30.u32 + 177, ctx.r11.u8);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// lvx128 v0,r31,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d84640
	ctx.lr = 0x82D7BE68;
	sub_82D84640(ctx, base);
	// stfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r11,14840
	ctx.r11.s64 = ctx.r11.s64 + 14840;
	// li r7,336
	ctx.r7.s64 = 336;
	// stb r10,176(r30)
	PPC_STORE_U8(ctx.r30.u32 + 176, ctx.r10.u8);
	// li r10,272
	ctx.r10.s64 = 272;
	// lbz r9,398(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 398);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,352
	ctx.r5.s64 = 352;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r9,178(r30)
	PPC_STORE_U8(ctx.r30.u32 + 178, ctx.r9.u8);
	// lbz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// lbz r9,397(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 397);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lvx128 v0,r31,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// stb r11,179(r30)
	PPC_STORE_U8(ctx.r30.u32 + 179, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7BF14"))) PPC_WEAK_FUNC(sub_82D7BF14);
PPC_FUNC_IMPL(__imp__sub_82D7BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7BF18"))) PPC_WEAK_FUNC(sub_82D7BF18);
PPC_FUNC_IMPL(__imp__sub_82D7BF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7BF20;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7aaa8
	ctx.lr = 0x82D7BF30;
	sub_82D7AAA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7bdc0
	ctx.lr = 0x82D7BF3C;
	sub_82D7BDC0(ctx, base);
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,4
	ctx.r29.s64 = 4;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BF54;
	sub_82D4EC28(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d7b138
	ctx.lr = 0x82D7BF64;
	sub_82D7B138(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82D7BF84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82d7bf84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D7BF84;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c034
	if (ctx.cr6.eq) goto loc_82D7C034;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BFCC;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,288
	ctx.r10.s64 = 288;
	// addi r11,r11,-29276
	ctx.r11.s64 = ctx.r11.s64 + -29276;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// stw r3,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r3.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
loc_82D7C000:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82d7c000
	if (ctx.cr6.gt) goto loc_82D7C000;
loc_82D7C034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82d71a88
	ctx.lr = 0x82D7C05C;
	sub_82D71A88(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D7C078"))) PPC_WEAK_FUNC(sub_82D7C078);
PPC_FUNC_IMPL(__imp__sub_82D7C078) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d7d378
	ctx.lr = 0x82D7C0A4;
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c0cc
	if (ctx.cr6.eq) goto loc_82D7C0CC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7C0CC;
	sub_82D4ECA8(ctx, base);
loc_82D7C0CC:
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

__attribute__((alias("__imp__sub_82D7C0E8"))) PPC_WEAK_FUNC(sub_82D7C0E8);
PPC_FUNC_IMPL(__imp__sub_82D7C0E8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c120
	if (ctx.cr6.eq) goto loc_82D7C120;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7c120
	if (ctx.cr6.eq) goto loc_82D7C120;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x82d963f0
	ctx.lr = 0x82D7C120;
	sub_82D963F0(ctx, base);
loc_82D7C120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C130"))) PPC_WEAK_FUNC(sub_82D7C130);
PPC_FUNC_IMPL(__imp__sub_82D7C130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c144
	if (!ctx.cr6.eq) goto loc_82D7C144;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82D7C144:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C154"))) PPC_WEAK_FUNC(sub_82D7C154);
PPC_FUNC_IMPL(__imp__sub_82D7C154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C158"))) PPC_WEAK_FUNC(sub_82D7C158);
PPC_FUNC_IMPL(__imp__sub_82D7C158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c16c
	if (!ctx.cr6.eq) goto loc_82D7C16C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82D7C16C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C17C"))) PPC_WEAK_FUNC(sub_82D7C17C);
PPC_FUNC_IMPL(__imp__sub_82D7C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C180"))) PPC_WEAK_FUNC(sub_82D7C180);
PPC_FUNC_IMPL(__imp__sub_82D7C180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C188"))) PPC_WEAK_FUNC(sub_82D7C188);
PPC_FUNC_IMPL(__imp__sub_82D7C188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C190"))) PPC_WEAK_FUNC(sub_82D7C190);
PPC_FUNC_IMPL(__imp__sub_82D7C190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C198"))) PPC_WEAK_FUNC(sub_82D7C198);
PPC_FUNC_IMPL(__imp__sub_82D7C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7C1A0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d7c1e4
	if (ctx.cr6.eq) goto loc_82D7C1E4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lhz r9,80(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7C1DC;
	sub_82D4ECA8(ctx, base);
	// sth r28,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r28.u16);
	// stw r28,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r28.u32);
loc_82D7C1E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c230
	if (ctx.cr6.eq) goto loc_82D7C230;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d7c254
	goto loc_82D7C254;
loc_82D7C230:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D7C254:
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7c26c
	if (ctx.cr6.eq) goto loc_82D7C26C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x82d7c270
	if (!ctx.cr6.eq) goto loc_82D7C270;
loc_82D7C26C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7C270:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7c288
	if (ctx.cr6.eq) goto loc_82D7C288;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c2b8
	if (!ctx.cr6.eq) goto loc_82D7C2B8;
loc_82D7C288:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r3,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r3.u16);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7C2B4;
	sub_82D4EC28(ctx, base);
	// stw r3,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
loc_82D7C2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D7C2C0"))) PPC_WEAK_FUNC(sub_82D7C2C0);
PPC_FUNC_IMPL(__imp__sub_82D7C2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c2f4
	if (!ctx.cr6.gt) goto loc_82D7C2F4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82D7C2D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7c2f8
	if (ctx.cr6.eq) goto loc_82D7C2F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c2d8
	if (ctx.cr6.lt) goto loc_82D7C2D8;
loc_82D7C2F4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7C2F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C30C"))) PPC_WEAK_FUNC(sub_82D7C30C);
PPC_FUNC_IMPL(__imp__sub_82D7C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C310"))) PPC_WEAK_FUNC(sub_82D7C310);
PPC_FUNC_IMPL(__imp__sub_82D7C310) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,500(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c340
	if (!ctx.cr6.gt) goto loc_82D7C340;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
loc_82D7C324:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7c344
	if (ctx.cr6.eq) goto loc_82D7C344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c324
	if (ctx.cr6.lt) goto loc_82D7C324;
loc_82D7C340:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7C344:
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C358"))) PPC_WEAK_FUNC(sub_82D7C358);
PPC_FUNC_IMPL(__imp__sub_82D7C358) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c390
	if (!ctx.cr6.gt) goto loc_82D7C390;
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_82D7C374:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d7c398
	if (ctx.cr6.eq) goto loc_82D7C398;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c374
	if (ctx.cr6.lt) goto loc_82D7C374;
loc_82D7C390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7C398:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C3A8"))) PPC_WEAK_FUNC(sub_82D7C3A8);
PPC_FUNC_IMPL(__imp__sub_82D7C3A8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82d7c3d4
	if (!ctx.cr6.eq) goto loc_82D7C3D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82d7c3dc
	goto loc_82D7C3DC;
loc_82D7C3D4:
	// lbz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
loc_82D7C3DC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c424
	if (!ctx.cr6.eq) goto loc_82D7C424;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7c424
	if (ctx.cr6.eq) goto loc_82D7C424;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c424
	if (ctx.cr6.eq) goto loc_82D7C424;
	// sth r10,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r10.u16);
	// sth r10,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r10.u16);
	// bl 0x82d90440
	ctx.lr = 0x82D7C40C;
	sub_82D90440(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lbz r6,711(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 711);
	// lbz r5,710(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 710);
	// lbz r4,709(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 709);
	// bl 0x82688030
	ctx.lr = 0x82D7C424;
	sub_82688030(ctx, base);
loc_82D7C424:
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

__attribute__((alias("__imp__sub_82D7C438"))) PPC_WEAK_FUNC(sub_82D7C438);
PPC_FUNC_IMPL(__imp__sub_82D7C438) {
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
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c464
	if (!ctx.cr6.eq) goto loc_82D7C464;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d7c46c
	goto loc_82D7C46C;
loc_82D7C464:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
loc_82D7C46C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c524
	if (ctx.cr6.eq) goto loc_82D7C524;
	// lbz r11,39(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7c494
	if (!ctx.cr6.eq) goto loc_82D7C494;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c4dc
	if (ctx.cr6.eq) goto loc_82D7C4DC;
loc_82D7C494:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// andi. r9,r9,207
	ctx.r9.u64 = ctx.r9.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r9,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r9.u8);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwimi r9,r10,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r9.u8);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d92f48
	ctx.lr = 0x82D7C4D4;
	sub_82D92F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r30.u32);
loc_82D7C4DC:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d7c51c
	if (!ctx.cr6.gt) goto loc_82D7C51C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lfs f0,3164(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
loc_82D7C4FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,460(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// stfs f0,476(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 476, temp.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c4fc
	if (ctx.cr6.lt) goto loc_82D7C4FC;
loc_82D7C51C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d90318
	ctx.lr = 0x82D7C524;
	sub_82D90318(ctx, base);
loc_82D7C524:
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

__attribute__((alias("__imp__sub_82D7C53C"))) PPC_WEAK_FUNC(sub_82D7C53C);
PPC_FUNC_IMPL(__imp__sub_82D7C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C540"))) PPC_WEAK_FUNC(sub_82D7C540);
PPC_FUNC_IMPL(__imp__sub_82D7C540) {
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
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c58c
	if (ctx.cr6.eq) goto loc_82D7C58C;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c58c
	if (ctx.cr6.eq) goto loc_82D7C58C;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7C57C;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7C58C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7C594;
	sub_82D7C3A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C5A4"))) PPC_WEAK_FUNC(sub_82D7C5A4);
PPC_FUNC_IMPL(__imp__sub_82D7C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C5A8"))) PPC_WEAK_FUNC(sub_82D7C5A8);
PPC_FUNC_IMPL(__imp__sub_82D7C5A8) {
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
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c5f4
	if (ctx.cr6.eq) goto loc_82D7C5F4;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c5f4
	if (ctx.cr6.eq) goto loc_82D7C5F4;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7C5E4;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7C5F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d7c438
	ctx.lr = 0x82D7C5FC;
	sub_82D7C438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C60C"))) PPC_WEAK_FUNC(sub_82D7C60C);
PPC_FUNC_IMPL(__imp__sub_82D7C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C610"))) PPC_WEAK_FUNC(sub_82D7C610);
PPC_FUNC_IMPL(__imp__sub_82D7C610) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C620"))) PPC_WEAK_FUNC(sub_82D7C620);
PPC_FUNC_IMPL(__imp__sub_82D7C620) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d7c644
	if (!ctx.cr6.lt) goto loc_82D7C644;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82D7C644:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C658"))) PPC_WEAK_FUNC(sub_82D7C658);
PPC_FUNC_IMPL(__imp__sub_82D7C658) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d7c67c
	if (!ctx.cr6.lt) goto loc_82D7C67C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82D7C67C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7C690"))) PPC_WEAK_FUNC(sub_82D7C690);
PPC_FUNC_IMPL(__imp__sub_82D7C690) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,30388
	ctx.r4.s64 = ctx.r11.s64 + 30388;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d567e8
	ctx.lr = 0x82D7C6E0;
	sub_82D567E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-28768
	ctx.r4.s64 = ctx.r11.s64 + -28768;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,502(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7c744
	if (!ctx.cr6.eq) goto loc_82D7C744;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r7,500(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 500);
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwz r6,496(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// addi r4,r10,-28784
	ctx.r4.s64 = ctx.r10.s64 + -28784;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C744:
	// lwz r6,204(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d7c800
	if (ctx.cr6.eq) goto loc_82D7C800;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-28808
	ctx.r4.s64 = ctx.r11.s64 + -28808;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7c7bc
	if (!ctx.cr6.eq) goto loc_82D7C7BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r9,-28824
	ctx.r4.s64 = ctx.r9.s64 + -28824;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C7BC:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7c800
	if (!ctx.cr6.eq) goto loc_82D7C800;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r9,-28844
	ctx.r4.s64 = ctx.r9.s64 + -28844;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C800:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7a328
	ctx.lr = 0x82D7C80C;
	sub_82D7A328(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,488(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-28856
	ctx.r4.s64 = ctx.r11.s64 + -28856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C844;
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

__attribute__((alias("__imp__sub_82D7C85C"))) PPC_WEAK_FUNC(sub_82D7C85C);
PPC_FUNC_IMPL(__imp__sub_82D7C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7C860"))) PPC_WEAK_FUNC(sub_82D7C860);
PPC_FUNC_IMPL(__imp__sub_82D7C860) {
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
	// addi r31,r3,496
	ctx.r31.s64 = ctx.r3.s64 + 496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c8ac
	if (!ctx.cr6.gt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7C890:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d7c900
	if (ctx.cr6.eq) goto loc_82D7C900;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c890
	if (ctx.cr6.lt) goto loc_82D7C890;
loc_82D7C8AC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7c8cc
	if (!ctx.cr6.eq) goto loc_82D7C8CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7C8CC;
	sub_82D54F78(ctx, base);
loc_82D7C8CC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_82D7C8E8:
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
loc_82D7C900:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7c8ac
	if (ctx.cr6.lt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// b 0x82d7c8e8
	goto loc_82D7C8E8;
}

__attribute__((alias("__imp__sub_82D7C918"))) PPC_WEAK_FUNC(sub_82D7C918);
PPC_FUNC_IMPL(__imp__sub_82D7C918) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	ctx.lr = 0x82D7C934;
	sub_82D7A4C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2676);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r11,-28748
	ctx.r9.s64 = ctx.r11.s64 + -28748;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r9,r9,-29276
	ctx.r9.s64 = ctx.r9.s64 + -29276;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// sth r4,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r4.u16);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r4,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r4.u16);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// stb r9,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r9.u8);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// stb r7,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r7.u8);
	// sth r9,214(r31)
	PPC_STORE_U16(ctx.r31.u32 + 214, ctx.r9.u16);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r11.u16);
	// sth r10,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r10.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r11.u16);
	// sth r10,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r10.u16);
	// sth r6,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r6.u16);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D7CA2C"))) PPC_WEAK_FUNC(sub_82D7CA2C);
PPC_FUNC_IMPL(__imp__sub_82D7CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7CA30"))) PPC_WEAK_FUNC(sub_82D7CA30);
PPC_FUNC_IMPL(__imp__sub_82D7CA30) {
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
	// bl 0x82d7a438
	ctx.lr = 0x82D7CA50;
	sub_82D7A438(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-28748
	ctx.r8.s64 = ctx.r11.s64 + -28748;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r7,r8,-29276
	ctx.r7.s64 = ctx.r8.s64 + -29276;
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r9.u16);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// stb r5,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r5.u8);
	// stb r8,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r8.u8);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r11.u16);
	// sth r9,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r9.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r11.u16);
	// sth r9,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r9.u16);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d7cbc8
	if (ctx.cr6.gt) goto loc_82D7CBC8;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-13564
	ctx.r12.s64 = ctx.r12.s64 + -13564;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D7CB24;
	case 1:
		goto loc_82D7CB38;
	case 2:
		goto loc_82D7CB4C;
	case 3:
		goto loc_82D7CB60;
	case 4:
		goto loc_82D7CB74;
	case 5:
		goto loc_82D7CB88;
	case 6:
		goto loc_82D7CB9C;
	case 7:
		goto loc_82D7CBB0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13532(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13532);
	// lwz r22,-13512(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13512);
	// lwz r22,-13492(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13492);
	// lwz r22,-13472(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13472);
	// lwz r22,-13452(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13452);
	// lwz r22,-13432(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13432);
	// lwz r22,-13412(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13412);
	// lwz r22,-13392(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13392);
loc_82D7CB24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29588
	ctx.r11.s64 = ctx.r11.s64 + -29588;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB4C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29164
	ctx.r11.s64 = ctx.r11.s64 + -29164;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29060
	ctx.r11.s64 = ctx.r11.s64 + -29060;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB74:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25548
	ctx.r11.s64 = ctx.r11.s64 + 25548;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB88:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26196
	ctx.r11.s64 = ctx.r11.s64 + 26196;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB9C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-28956
	ctx.r11.s64 = ctx.r11.s64 + -28956;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CBB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29484
	ctx.r11.s64 = ctx.r11.s64 + -29484;
loc_82D7CBC0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
loc_82D7CBC8:
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

__attribute__((alias("__imp__sub_82D7CBE4"))) PPC_WEAK_FUNC(sub_82D7CBE4);
PPC_FUNC_IMPL(__imp__sub_82D7CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7CBE8"))) PPC_WEAK_FUNC(sub_82D7CBE8);
PPC_FUNC_IMPL(__imp__sub_82D7CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CBF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cc7c
	if (!ctx.cr6.eq) goto loc_82D7CC7C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cc3c
	if (ctx.cr6.eq) goto loc_82D7CC3C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cc48
	goto loc_82D7CC48;
loc_82D7CC3C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CC44;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CC48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cc74
	if (ctx.cr6.eq) goto loc_82D7CC74;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cc78
	goto loc_82D7CC78;
loc_82D7CC74:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D7CC78:
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
loc_82D7CC7C:
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7ccbc
	if (!ctx.cr6.gt) goto loc_82D7CCBC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D7CC9C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7ccfc
	if (ctx.cr6.eq) goto loc_82D7CCFC;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d7cc9c
	if (ctx.cr6.lt) goto loc_82D7CC9C;
loc_82D7CCBC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7ccd8
	if (!ctx.cr6.eq) goto loc_82D7CCD8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7CCD8;
	sub_82D54F78(ctx, base);
loc_82D7CCD8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7CCFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7ccbc
	if (ctx.cr6.lt) goto loc_82D7CCBC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7CD14"))) PPC_WEAK_FUNC(sub_82D7CD14);
PPC_FUNC_IMPL(__imp__sub_82D7CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7CD18"))) PPC_WEAK_FUNC(sub_82D7CD18);
PPC_FUNC_IMPL(__imp__sub_82D7CD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CD20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cdac
	if (!ctx.cr6.eq) goto loc_82D7CDAC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cd6c
	if (ctx.cr6.eq) goto loc_82D7CD6C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cd78
	goto loc_82D7CD78;
loc_82D7CD6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CD74;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CD78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cda4
	if (ctx.cr6.eq) goto loc_82D7CDA4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cda8
	goto loc_82D7CDA8;
loc_82D7CDA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7CDA8:
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_82D7CDAC:
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7cde0
	if (!ctx.cr6.gt) goto loc_82D7CDE0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82D7CDC4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d7cde4
	if (ctx.cr6.eq) goto loc_82D7CDE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7cdc4
	if (ctx.cr6.lt) goto loc_82D7CDC4;
loc_82D7CDE0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7CDE4:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7CDF8"))) PPC_WEAK_FUNC(sub_82D7CDF8);
PPC_FUNC_IMPL(__imp__sub_82D7CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CE00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ce8c
	if (!ctx.cr6.eq) goto loc_82D7CE8C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ce4c
	if (ctx.cr6.eq) goto loc_82D7CE4C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7ce58
	goto loc_82D7CE58;
loc_82D7CE4C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CE54;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CE58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ce84
	if (ctx.cr6.eq) goto loc_82D7CE84;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7ce88
	goto loc_82D7CE88;
loc_82D7CE84:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7CE88:
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_82D7CE8C:
	// lwz r31,204(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d7cec8
	if (!ctx.cr6.gt) goto loc_82D7CEC8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D7CEA8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7cf08
	if (ctx.cr6.eq) goto loc_82D7CF08;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d7cea8
	if (ctx.cr6.lt) goto loc_82D7CEA8;
loc_82D7CEC8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7cee4
	if (!ctx.cr6.eq) goto loc_82D7CEE4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7CEE4;
	sub_82D54F78(ctx, base);
loc_82D7CEE4:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82D7CF08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7cec8
	if (ctx.cr6.lt) goto loc_82D7CEC8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7CF20"))) PPC_WEAK_FUNC(sub_82D7CF20);
PPC_FUNC_IMPL(__imp__sub_82D7CF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D7CF28;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r28,92
	ctx.r31.s64 = ctx.r28.s64 + 92;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7cf88
	if (!ctx.cr6.eq) goto loc_82D7CF88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7cf74
	if (!ctx.cr6.eq) goto loc_82D7CF74;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7CF74;
	sub_82D4ECA8(ctx, base);
loc_82D7CF74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7CF88:
	// lhz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cfe8
	if (!ctx.cr6.eq) goto loc_82D7CFE8;
	// addi r31,r28,152
	ctx.r31.s64 = ctx.r28.s64 + 152;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7cfd0
	if (!ctx.cr6.eq) goto loc_82D7CFD0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x82D7CFD0;
	sub_82D4ECA8(ctx, base);
loc_82D7CFD0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7CFE8:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d038
	if (!ctx.cr6.eq) goto loc_82D7D038;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d024
	if (!ctx.cr6.eq) goto loc_82D7D024;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D024;
	sub_82D4ECA8(ctx, base);
loc_82D7D024:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7D038:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d088
	if (!ctx.cr6.eq) goto loc_82D7D088;
	// addi r31,r28,172
	ctx.r31.s64 = ctx.r28.s64 + 172;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d074
	if (!ctx.cr6.eq) goto loc_82D7D074;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D074;
	sub_82D4ECA8(ctx, base);
loc_82D7D074:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7D088:
	// lhz r10,500(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 500);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d0c8
	if (ctx.cr6.eq) goto loc_82D7D0C8;
	// lwz r10,496(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 496);
loc_82D7D0A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d7d0c4
	if (!ctx.cr6.eq) goto loc_82D7D0C4;
	// lhz r8,500(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d7d0a0
	if (ctx.cr6.lt) goto loc_82D7D0A0;
	// b 0x82d7d0c8
	goto loc_82D7D0C8;
loc_82D7D0C4:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82D7D0C8:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d11c
	if (!ctx.cr6.eq) goto loc_82D7D11C;
	// addi r31,r28,496
	ctx.r31.s64 = ctx.r28.s64 + 496;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d104
	if (!ctx.cr6.eq) goto loc_82D7D104;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D104;
	sub_82D4ECA8(ctx, base);
loc_82D7D104:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D11C:
	// lwz r31,204(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d1b8
	if (ctx.cr6.eq) goto loc_82D7D1B8;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d168
	if (ctx.cr6.eq) goto loc_82D7D168;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7D140:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7d164
	if (!ctx.cr6.eq) goto loc_82D7D164;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d140
	if (ctx.cr6.lt) goto loc_82D7D140;
	// b 0x82d7d168
	goto loc_82D7D168;
loc_82D7D164:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82D7D168:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d1b8
	if (!ctx.cr6.eq) goto loc_82D7D1B8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d1a0
	if (!ctx.cr6.eq) goto loc_82D7D1A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D1A0;
	sub_82D4ECA8(ctx, base);
loc_82D7D1A0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D1B8:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d258
	if (ctx.cr6.eq) goto loc_82D7D258;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d208
	if (ctx.cr6.eq) goto loc_82D7D208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7D1E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7d204
	if (!ctx.cr6.eq) goto loc_82D7D204;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d1e0
	if (ctx.cr6.lt) goto loc_82D7D1E0;
	// b 0x82d7d208
	goto loc_82D7D208;
loc_82D7D204:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82D7D208:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d258
	if (!ctx.cr6.eq) goto loc_82D7D258;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d240
	if (!ctx.cr6.eq) goto loc_82D7D240;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D240;
	sub_82D4ECA8(ctx, base);
loc_82D7D240:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D258:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d31c
	if (!ctx.cr6.eq) goto loc_82D7D31C;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d31c
	if (!ctx.cr6.eq) goto loc_82D7D31C;
	// lwz r31,204(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d318
	if (ctx.cr6.eq) goto loc_82D7D318;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2a8
	if (!ctx.cr6.eq) goto loc_82D7D2A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D2A8;
	sub_82D4ECA8(ctx, base);
loc_82D7D2A8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2d4
	if (!ctx.cr6.eq) goto loc_82D7D2D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D2D4;
	sub_82D4ECA8(ctx, base);
loc_82D7D2D4:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d7d300
	if (ctx.cr6.lt) goto loc_82D7D300;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4eb08
	ctx.lr = 0x82D7D2FC;
	sub_82D4EB08(ctx, base);
	// b 0x82d7d318
	goto loc_82D7D318;
loc_82D7D300:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
loc_82D7D318:
	// stw r27,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r27.u32);
loc_82D7D31C:
	// lhz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d370
	if (!ctx.cr6.eq) goto loc_82D7D370;
	// addi r31,r28,504
	ctx.r31.s64 = ctx.r28.s64 + 504;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d358
	if (!ctx.cr6.eq) goto loc_82D7D358;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D358;
	sub_82D4ECA8(ctx, base);
loc_82D7D358:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D7D378"))) PPC_WEAK_FUNC(sub_82D7D378);
PPC_FUNC_IMPL(__imp__sub_82D7D378) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28748
	ctx.r11.s64 = ctx.r11.s64 + -28748;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d8d718
	ctx.lr = 0x82D7D39C;
	sub_82D8D718(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7d3b0
	if (ctx.cr6.eq) goto loc_82D7D3B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7d608
	ctx.lr = 0x82D7D3B0;
	sub_82D7D608(ctx, base);
loc_82D7D3B0:
	// lhz r11,510(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 510);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d3dc
	if (!ctx.cr6.eq) goto loc_82D7D3DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D3DC;
	sub_82D4ECA8(ctx, base);
loc_82D7D3DC:
	// lhz r11,502(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d408
	if (!ctx.cr6.eq) goto loc_82D7D408;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D408;
	sub_82D4ECA8(ctx, base);
loc_82D7D408:
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82d95bf8
	ctx.lr = 0x82D7D410;
	sub_82D95BF8(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d43c
	if (!ctx.cr6.eq) goto loc_82D7D43C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D43C;
	sub_82D4ECA8(ctx, base);
loc_82D7D43C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d468
	if (!ctx.cr6.eq) goto loc_82D7D468;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D468;
	sub_82D4ECA8(ctx, base);
loc_82D7D468:
	// lhz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d4a0
	if (!ctx.cr6.eq) goto loc_82D7D4A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D4A0;
	sub_82D4ECA8(ctx, base);
loc_82D7D4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7a5a0
	ctx.lr = 0x82D7D4A8;
	sub_82D7A5A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7D4BC"))) PPC_WEAK_FUNC(sub_82D7D4BC);
PPC_FUNC_IMPL(__imp__sub_82D7D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D4C0"))) PPC_WEAK_FUNC(sub_82D7D4C0);
PPC_FUNC_IMPL(__imp__sub_82D7D4C0) {
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
	// bl 0x82d95bf8
	ctx.lr = 0x82D7D4E0;
	sub_82D95BF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d508
	if (ctx.cr6.eq) goto loc_82D7D508;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D508;
	sub_82D4ECA8(ctx, base);
loc_82D7D508:
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

__attribute__((alias("__imp__sub_82D7D524"))) PPC_WEAK_FUNC(sub_82D7D524);
PPC_FUNC_IMPL(__imp__sub_82D7D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D528"))) PPC_WEAK_FUNC(sub_82D7D528);
PPC_FUNC_IMPL(__imp__sub_82D7D528) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7d570
	if (ctx.cr6.eq) goto loc_82D7D570;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D570;
	sub_82D4ECA8(ctx, base);
loc_82D7D570:
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

__attribute__((alias("__imp__sub_82D7D588"))) PPC_WEAK_FUNC(sub_82D7D588);
PPC_FUNC_IMPL(__imp__sub_82D7D588) {
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
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d5c8
	if (!ctx.cr6.eq) goto loc_82D7D5C8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D5C8;
	sub_82D4ECA8(ctx, base);
loc_82D7D5C8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d5f4
	if (!ctx.cr6.eq) goto loc_82D7D5F4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D5F4;
	sub_82D4ECA8(ctx, base);
loc_82D7D5F4:
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

__attribute__((alias("__imp__sub_82D7D608"))) PPC_WEAK_FUNC(sub_82D7D608);
PPC_FUNC_IMPL(__imp__sub_82D7D608) {
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
	// bl 0x82d7d588
	ctx.lr = 0x82D7D628;
	sub_82D7D588(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d684
	if (ctx.cr6.eq) goto loc_82D7D684;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d684
	if (ctx.cr6.eq) goto loc_82D7D684;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d66c
	if (ctx.cr6.lt) goto loc_82D7D66C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82D7D668;
	sub_82D4EB08(ctx, base);
	// b 0x82d7d684
	goto loc_82D7D684;
loc_82D7D66C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
loc_82D7D684:
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

__attribute__((alias("__imp__sub_82D7D6A0"))) PPC_WEAK_FUNC(sub_82D7D6A0);
PPC_FUNC_IMPL(__imp__sub_82D7D6A0) {
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
	// bl 0x82d7d378
	ctx.lr = 0x82D7D6C0;
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d6e8
	if (ctx.cr6.eq) goto loc_82D7D6E8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D6E8;
	sub_82D4ECA8(ctx, base);
loc_82D7D6E8:
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

__attribute__((alias("__imp__sub_82D7D704"))) PPC_WEAK_FUNC(sub_82D7D704);
PPC_FUNC_IMPL(__imp__sub_82D7D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D708"))) PPC_WEAK_FUNC(sub_82D7D708);
PPC_FUNC_IMPL(__imp__sub_82D7D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7D710;
	sub_82CA2BE8(ctx, base);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// li r28,80
	ctx.r28.s64 = 80;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lfs f0,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3080(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v0,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// li r8,144
	ctx.r8.s64 = 144;
	// vpermwi128 v13,v13,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vmsum3fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D7D88C"))) PPC_WEAK_FUNC(sub_82D7D88C);
PPC_FUNC_IMPL(__imp__sub_82D7D88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D890"))) PPC_WEAK_FUNC(sub_82D7D890);
PPC_FUNC_IMPL(__imp__sub_82D7D890) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,298
	ctx.r4.s64 = 298;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	sub_82D97098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D8A0"))) PPC_WEAK_FUNC(sub_82D7D8A0);
PPC_FUNC_IMPL(__imp__sub_82D7D8A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7D8B4"))) PPC_WEAK_FUNC(sub_82D7D8B4);
PPC_FUNC_IMPL(__imp__sub_82D7D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7D8B8"))) PPC_WEAK_FUNC(sub_82D7D8B8);
PPC_FUNC_IMPL(__imp__sub_82D7D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7D8C0"))) PPC_WEAK_FUNC(sub_82D7D8C0);
PPC_FUNC_IMPL(__imp__sub_82D7D8C0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82d51130
	ctx.lr = 0x82D7D900;
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// beq cr6,0x82d7d944
	if (ctx.cr6.eq) goto loc_82D7D944;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51130
	ctx.lr = 0x82D7D934;
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d7d948
	if (!ctx.cr6.eq) goto loc_82D7D948;
loc_82D7D944:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D948:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d970
	if (ctx.cr6.eq) goto loc_82D7D970;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d7d974
	if (ctx.cr6.eq) goto loc_82D7D974;
loc_82D7D970:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D974:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d99c
	if (ctx.cr6.eq) goto loc_82D7D99C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d7d9a0
	if (!ctx.cr6.lt) goto loc_82D7D9A0;
loc_82D7D99C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9A0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d9c8
	if (ctx.cr6.eq) goto loc_82D7D9C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d7d9cc
	if (ctx.cr6.lt) goto loc_82D7D9CC;
loc_82D7D9C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9CC:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d9f0
	if (ctx.cr6.eq) goto loc_82D7D9F0;
	// lfs f0,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7d9f4
	if (!ctx.cr6.gt) goto loc_82D7D9F4;
loc_82D7D9F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9F4:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7da18
	if (ctx.cr6.eq) goto loc_82D7DA18;
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7da1c
	if (!ctx.cr6.gt) goto loc_82D7DA1C;
loc_82D7DA18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DA1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D7DA40"))) PPC_WEAK_FUNC(sub_82D7DA40);
PPC_FUNC_IMPL(__imp__sub_82D7DA40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DA68"))) PPC_WEAK_FUNC(sub_82D7DA68);
PPC_FUNC_IMPL(__imp__sub_82D7DA68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DA90"))) PPC_WEAK_FUNC(sub_82D7DA90);
PPC_FUNC_IMPL(__imp__sub_82D7DA90) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DAB8"))) PPC_WEAK_FUNC(sub_82D7DAB8);
PPC_FUNC_IMPL(__imp__sub_82D7DAB8) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x82d593b8
	sub_82D593B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DAC4"))) PPC_WEAK_FUNC(sub_82D7DAC4);
PPC_FUNC_IMPL(__imp__sub_82D7DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DAC8"))) PPC_WEAK_FUNC(sub_82D7DAC8);
PPC_FUNC_IMPL(__imp__sub_82D7DAC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DAF0"))) PPC_WEAK_FUNC(sub_82D7DAF0);
PPC_FUNC_IMPL(__imp__sub_82D7DAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DAF8"))) PPC_WEAK_FUNC(sub_82D7DAF8);
PPC_FUNC_IMPL(__imp__sub_82D7DAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DB00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7db2c
	if (ctx.cr6.eq) goto loc_82D7DB2C;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7db2c
	if (ctx.cr6.eq) goto loc_82D7DB2C;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D7DB2C:
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7db78
	if (ctx.cr6.eq) goto loc_82D7DB78;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7db78
	if (ctx.cr6.eq) goto loc_82D7DB78;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7db78
	if (!ctx.cr6.eq) goto loc_82D7DB78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7DB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DB78:
	// stwx r30,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7DB84"))) PPC_WEAK_FUNC(sub_82D7DB84);
PPC_FUNC_IMPL(__imp__sub_82D7DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DB88"))) PPC_WEAK_FUNC(sub_82D7DB88);
PPC_FUNC_IMPL(__imp__sub_82D7DB88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DB94"))) PPC_WEAK_FUNC(sub_82D7DB94);
PPC_FUNC_IMPL(__imp__sub_82D7DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DB98"))) PPC_WEAK_FUNC(sub_82D7DB98);
PPC_FUNC_IMPL(__imp__sub_82D7DB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DBA0"))) PPC_WEAK_FUNC(sub_82D7DBA0);
PPC_FUNC_IMPL(__imp__sub_82D7DBA0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DBAC"))) PPC_WEAK_FUNC(sub_82D7DBAC);
PPC_FUNC_IMPL(__imp__sub_82D7DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DBB0"))) PPC_WEAK_FUNC(sub_82D7DBB0);
PPC_FUNC_IMPL(__imp__sub_82D7DBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DBB8"))) PPC_WEAK_FUNC(sub_82D7DBB8);
PPC_FUNC_IMPL(__imp__sub_82D7DBB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DBC4"))) PPC_WEAK_FUNC(sub_82D7DBC4);
PPC_FUNC_IMPL(__imp__sub_82D7DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DBC8"))) PPC_WEAK_FUNC(sub_82D7DBC8);
PPC_FUNC_IMPL(__imp__sub_82D7DBC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,162(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 162);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DBD4"))) PPC_WEAK_FUNC(sub_82D7DBD4);
PPC_FUNC_IMPL(__imp__sub_82D7DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DBD8"))) PPC_WEAK_FUNC(sub_82D7DBD8);
PPC_FUNC_IMPL(__imp__sub_82D7DBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DBE0"))) PPC_WEAK_FUNC(sub_82D7DBE0);
PPC_FUNC_IMPL(__imp__sub_82D7DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D7DBE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r28,16
	ctx.r28.s64 = 16;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r29,32
	ctx.r29.s64 = 32;
	// lvx128 v12,r0,r4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v11,r4,r28
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lvx128 v10,r4,r29
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltw v9,v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v8,r0,r8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v8,v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v13,v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v8,v0,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v9,v13,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v9,v8,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r8,r8,16896
	ctx.r8.s64 = ctx.r8.s64 + 16896;
loc_82D7DCBC:
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vmrghw v13,v9,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dcbc
	if (!ctx.cr6.lt) goto loc_82D7DCBC;
	// lvx128 v12,r0,r30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,2
	ctx.r11.s64 = 2;
	// lvx128 v11,r30,r28
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r30,r29
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
loc_82D7DD0C:
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vmrghw v13,v9,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dd0c
	if (!ctx.cr6.lt) goto loc_82D7DD0C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82d4fe48
	ctx.lr = 0x82D7DD50;
	sub_82D4FE48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82d4fe48
	ctx.lr = 0x82D7DD60;
	sub_82D4FE48(ctx, base);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D7DD88"))) PPC_WEAK_FUNC(sub_82D7DD88);
PPC_FUNC_IMPL(__imp__sub_82D7DD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DD90;
	sub_82CA2BEC(ctx, base);
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// lfs f29,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82d506f8
	ctx.lr = 0x82D7DDD4;
	sub_82D506F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v7,v13,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// vpermwi128 v6,v13,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v8,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r11,17024
	ctx.r11.s64 = ctx.r11.s64 + 17024;
	// vpermwi128 v10,v0,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v9,v0,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v10,v10,v7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v7.f32)));
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v9,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v11,v12,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vspltw v8,v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v10,v9,v10
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v8,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,284(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7DE78"))) PPC_WEAK_FUNC(sub_82D7DE78);
PPC_FUNC_IMPL(__imp__sub_82D7DE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DE80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-28700
	ctx.r11.s64 = ctx.r11.s64 + -28700;
	// addi r31,r29,224
	ctx.r31.s64 = ctx.r29.s64 + 224;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D7DE9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7dee0
	if (ctx.cr6.eq) goto loc_82D7DEE0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7dee0
	if (ctx.cr6.eq) goto loc_82D7DEE0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7dee0
	if (!ctx.cr6.eq) goto loc_82D7DEE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7DEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DEE0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d7de9c
	if (!ctx.cr6.eq) goto loc_82D7DE9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D7DF04"))) PPC_WEAK_FUNC(sub_82D7DF04);
PPC_FUNC_IMPL(__imp__sub_82D7DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF08"))) PPC_WEAK_FUNC(sub_82D7DF08);
PPC_FUNC_IMPL(__imp__sub_82D7DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF78"))) PPC_WEAK_FUNC(sub_82D7DF78);
PPC_FUNC_IMPL(__imp__sub_82D7DF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7DF80;
	sub_82CA2BE8(ctx, base);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,19
	ctx.r31.s64 = 19;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// addi r7,r10,-28700
	ctx.r7.s64 = ctx.r10.s64 + -28700;
	// lfs f0,3080(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// li r30,17
	ctx.r30.s64 = 17;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r7,r3,96
	ctx.r7.s64 = ctx.r3.s64 + 96;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// sth r31,144(r11)
	PPC_STORE_U16(ctx.r11.u32 + 144, ctx.r31.u16);
	// li r31,96
	ctx.r31.s64 = 96;
	// stb r9,146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 146, ctx.r9.u8);
	// sth r10,148(r11)
	PPC_STORE_U16(ctx.r11.u32 + 148, ctx.r10.u16);
	// sth r10,150(r11)
	PPC_STORE_U16(ctx.r11.u32 + 150, ctx.r10.u16);
	// sth r30,224(r11)
	PPC_STORE_U16(ctx.r11.u32 + 224, ctx.r30.u16);
	// li r30,100
	ctx.r30.s64 = 100;
	// stb r9,226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 226, ctx.r9.u8);
	// stb r9,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r9.u8);
	// sth r29,236(r11)
	PPC_STORE_U16(ctx.r11.u32 + 236, ctx.r29.u16);
	// stb r9,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r9.u8);
	// sth r6,256(r11)
	PPC_STORE_U16(ctx.r11.u32 + 256, ctx.r6.u16);
	// stb r9,258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 258, ctx.r9.u8);
	// stb r10,262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 262, ctx.r10.u8);
	// sth r6,276(r11)
	PPC_STORE_U16(ctx.r11.u32 + 276, ctx.r6.u16);
	// stb r9,278(r11)
	PPC_STORE_U8(ctx.r11.u32 + 278, ctx.r9.u8);
	// stb r10,282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 282, ctx.r10.u8);
	// sth r28,296(r11)
	PPC_STORE_U16(ctx.r11.u32 + 296, ctx.r28.u16);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stvx128 v0,r8,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r7,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,40(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// li r5,3
	ctx.r5.s64 = 3;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f11,-28644(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28644);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,243(r3)
	PPC_STORE_U8(ctx.r3.u32 + 243, ctx.r10.u8);
	// lfs f10,-28648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28648);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,2860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2860);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f9,1828(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1828);
	ctx.f9.f64 = double(temp.f32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r5,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r5.u8);
	// stb r10,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r10.u8);
	// sth r31,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r31.u16);
	// sth r30,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r30.u16);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stfs f11,260(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stfs f10,264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stb r10,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, ctx.r10.u8);
	// lfs f0,-28652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28652);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f9,280(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stb r9,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r9.u8);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stb r10,275(r3)
	PPC_STORE_U8(ctx.r3.u32 + 275, ctx.r10.u8);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stb r10,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r10.u8);
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stb r10,277(r3)
	PPC_STORE_U8(ctx.r3.u32 + 277, ctx.r10.u8);
	// lfs f12,3176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	ctx.f12.f64 = double(temp.f32);
	// stb r7,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r7.u8);
	// stfs f12,304(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stb r10,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, ctx.r10.u8);
	// stb r9,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r9.u8);
	// stb r9,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r9.u8);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D7E158"))) PPC_WEAK_FUNC(sub_82D7E158);
PPC_FUNC_IMPL(__imp__sub_82D7E158) {
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
	// bl 0x82d7de78
	ctx.lr = 0x82D7E178;
	sub_82D7DE78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e1a0
	if (ctx.cr6.eq) goto loc_82D7E1A0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E1A0;
	sub_82D4ECA8(ctx, base);
loc_82D7E1A0:
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

__attribute__((alias("__imp__sub_82D7E1BC"))) PPC_WEAK_FUNC(sub_82D7E1BC);
PPC_FUNC_IMPL(__imp__sub_82D7E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1C0"))) PPC_WEAK_FUNC(sub_82D7E1C0);
PPC_FUNC_IMPL(__imp__sub_82D7E1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E1C4"))) PPC_WEAK_FUNC(sub_82D7E1C4);
PPC_FUNC_IMPL(__imp__sub_82D7E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1C8"))) PPC_WEAK_FUNC(sub_82D7E1C8);
PPC_FUNC_IMPL(__imp__sub_82D7E1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E1DC"))) PPC_WEAK_FUNC(sub_82D7E1DC);
PPC_FUNC_IMPL(__imp__sub_82D7E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1E0"))) PPC_WEAK_FUNC(sub_82D7E1E0);
PPC_FUNC_IMPL(__imp__sub_82D7E1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E1E4"))) PPC_WEAK_FUNC(sub_82D7E1E4);
PPC_FUNC_IMPL(__imp__sub_82D7E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1E8"))) PPC_WEAK_FUNC(sub_82D7E1E8);
PPC_FUNC_IMPL(__imp__sub_82D7E1E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E208"))) PPC_WEAK_FUNC(sub_82D7E208);
PPC_FUNC_IMPL(__imp__sub_82D7E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28552
	ctx.r3.s64 = ctx.r11.s64 + -28552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E214"))) PPC_WEAK_FUNC(sub_82D7E214);
PPC_FUNC_IMPL(__imp__sub_82D7E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E218"))) PPC_WEAK_FUNC(sub_82D7E218);
PPC_FUNC_IMPL(__imp__sub_82D7E218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E21C"))) PPC_WEAK_FUNC(sub_82D7E21C);
PPC_FUNC_IMPL(__imp__sub_82D7E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E220"))) PPC_WEAK_FUNC(sub_82D7E220);
PPC_FUNC_IMPL(__imp__sub_82D7E220) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d97b60
	sub_82D97B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E230"))) PPC_WEAK_FUNC(sub_82D7E230);
PPC_FUNC_IMPL(__imp__sub_82D7E230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E234"))) PPC_WEAK_FUNC(sub_82D7E234);
PPC_FUNC_IMPL(__imp__sub_82D7E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E238"))) PPC_WEAK_FUNC(sub_82D7E238);
PPC_FUNC_IMPL(__imp__sub_82D7E238) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7e240
	sub_82D7E240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E23C"))) PPC_WEAK_FUNC(sub_82D7E23C);
PPC_FUNC_IMPL(__imp__sub_82D7E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E240"))) PPC_WEAK_FUNC(sub_82D7E240);
PPC_FUNC_IMPL(__imp__sub_82D7E240) {
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
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e280
	if (!ctx.cr6.eq) goto loc_82D7E280;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E280;
	sub_82D4ECA8(ctx, base);
loc_82D7E280:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e2ac
	if (!ctx.cr6.eq) goto loc_82D7E2AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E2AC;
	sub_82D4ECA8(ctx, base);
loc_82D7E2AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e2d8
	if (!ctx.cr6.eq) goto loc_82D7E2D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E2D8;
	sub_82D4ECA8(ctx, base);
loc_82D7E2D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e304
	if (!ctx.cr6.eq) goto loc_82D7E304;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E304;
	sub_82D4ECA8(ctx, base);
loc_82D7E304:
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

__attribute__((alias("__imp__sub_82D7E318"))) PPC_WEAK_FUNC(sub_82D7E318);
PPC_FUNC_IMPL(__imp__sub_82D7E318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E32C"))) PPC_WEAK_FUNC(sub_82D7E32C);
PPC_FUNC_IMPL(__imp__sub_82D7E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E330"))) PPC_WEAK_FUNC(sub_82D7E330);
PPC_FUNC_IMPL(__imp__sub_82D7E330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27820
	ctx.r11.s64 = ctx.r11.s64 + -27820;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E350"))) PPC_WEAK_FUNC(sub_82D7E350);
PPC_FUNC_IMPL(__imp__sub_82D7E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27820
	ctx.r3.s64 = ctx.r11.s64 + -27820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E35C"))) PPC_WEAK_FUNC(sub_82D7E35C);
PPC_FUNC_IMPL(__imp__sub_82D7E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E360"))) PPC_WEAK_FUNC(sub_82D7E360);
PPC_FUNC_IMPL(__imp__sub_82D7E360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E364"))) PPC_WEAK_FUNC(sub_82D7E364);
PPC_FUNC_IMPL(__imp__sub_82D7E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E368"))) PPC_WEAK_FUNC(sub_82D7E368);
PPC_FUNC_IMPL(__imp__sub_82D7E368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E37C"))) PPC_WEAK_FUNC(sub_82D7E37C);
PPC_FUNC_IMPL(__imp__sub_82D7E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E380"))) PPC_WEAK_FUNC(sub_82D7E380);
PPC_FUNC_IMPL(__imp__sub_82D7E380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E384"))) PPC_WEAK_FUNC(sub_82D7E384);
PPC_FUNC_IMPL(__imp__sub_82D7E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E388"))) PPC_WEAK_FUNC(sub_82D7E388);
PPC_FUNC_IMPL(__imp__sub_82D7E388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27612
	ctx.r11.s64 = ctx.r11.s64 + -27612;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E3A8"))) PPC_WEAK_FUNC(sub_82D7E3A8);
PPC_FUNC_IMPL(__imp__sub_82D7E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27612
	ctx.r3.s64 = ctx.r11.s64 + -27612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E3B4"))) PPC_WEAK_FUNC(sub_82D7E3B4);
PPC_FUNC_IMPL(__imp__sub_82D7E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3B8"))) PPC_WEAK_FUNC(sub_82D7E3B8);
PPC_FUNC_IMPL(__imp__sub_82D7E3B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7e400
	if (ctx.cr6.eq) goto loc_82D7E400;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E400;
	sub_82D4ECA8(ctx, base);
loc_82D7E400:
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

__attribute__((alias("__imp__sub_82D7E418"))) PPC_WEAK_FUNC(sub_82D7E418);
PPC_FUNC_IMPL(__imp__sub_82D7E418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E41C"))) PPC_WEAK_FUNC(sub_82D7E41C);
PPC_FUNC_IMPL(__imp__sub_82D7E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E420"))) PPC_WEAK_FUNC(sub_82D7E420);
PPC_FUNC_IMPL(__imp__sub_82D7E420) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d984b0
	sub_82D984B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E430"))) PPC_WEAK_FUNC(sub_82D7E430);
PPC_FUNC_IMPL(__imp__sub_82D7E430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E434"))) PPC_WEAK_FUNC(sub_82D7E434);
PPC_FUNC_IMPL(__imp__sub_82D7E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E438"))) PPC_WEAK_FUNC(sub_82D7E438);
PPC_FUNC_IMPL(__imp__sub_82D7E438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E44C"))) PPC_WEAK_FUNC(sub_82D7E44C);
PPC_FUNC_IMPL(__imp__sub_82D7E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E450"))) PPC_WEAK_FUNC(sub_82D7E450);
PPC_FUNC_IMPL(__imp__sub_82D7E450) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d984b0
	ctx.lr = 0x82D7E468;
	sub_82D984B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E47C"))) PPC_WEAK_FUNC(sub_82D7E47C);
PPC_FUNC_IMPL(__imp__sub_82D7E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E480"))) PPC_WEAK_FUNC(sub_82D7E480);
PPC_FUNC_IMPL(__imp__sub_82D7E480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E484"))) PPC_WEAK_FUNC(sub_82D7E484);
PPC_FUNC_IMPL(__imp__sub_82D7E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E488"))) PPC_WEAK_FUNC(sub_82D7E488);
PPC_FUNC_IMPL(__imp__sub_82D7E488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E49C"))) PPC_WEAK_FUNC(sub_82D7E49C);
PPC_FUNC_IMPL(__imp__sub_82D7E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4A0"))) PPC_WEAK_FUNC(sub_82D7E4A0);
PPC_FUNC_IMPL(__imp__sub_82D7E4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E4A4"))) PPC_WEAK_FUNC(sub_82D7E4A4);
PPC_FUNC_IMPL(__imp__sub_82D7E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4A8"))) PPC_WEAK_FUNC(sub_82D7E4A8);
PPC_FUNC_IMPL(__imp__sub_82D7E4A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26700
	ctx.r11.s64 = ctx.r11.s64 + -26700;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E4C8"))) PPC_WEAK_FUNC(sub_82D7E4C8);
PPC_FUNC_IMPL(__imp__sub_82D7E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26700
	ctx.r3.s64 = ctx.r11.s64 + -26700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E4D4"))) PPC_WEAK_FUNC(sub_82D7E4D4);
PPC_FUNC_IMPL(__imp__sub_82D7E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4D8"))) PPC_WEAK_FUNC(sub_82D7E4D8);
PPC_FUNC_IMPL(__imp__sub_82D7E4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E4DC"))) PPC_WEAK_FUNC(sub_82D7E4DC);
PPC_FUNC_IMPL(__imp__sub_82D7E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4E0"))) PPC_WEAK_FUNC(sub_82D7E4E0);
PPC_FUNC_IMPL(__imp__sub_82D7E4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E4F4"))) PPC_WEAK_FUNC(sub_82D7E4F4);
PPC_FUNC_IMPL(__imp__sub_82D7E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4F8"))) PPC_WEAK_FUNC(sub_82D7E4F8);
PPC_FUNC_IMPL(__imp__sub_82D7E4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E4FC"))) PPC_WEAK_FUNC(sub_82D7E4FC);
PPC_FUNC_IMPL(__imp__sub_82D7E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E500"))) PPC_WEAK_FUNC(sub_82D7E500);
PPC_FUNC_IMPL(__imp__sub_82D7E500) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26284
	ctx.r11.s64 = ctx.r11.s64 + -26284;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E520"))) PPC_WEAK_FUNC(sub_82D7E520);
PPC_FUNC_IMPL(__imp__sub_82D7E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26284
	ctx.r3.s64 = ctx.r11.s64 + -26284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E52C"))) PPC_WEAK_FUNC(sub_82D7E52C);
PPC_FUNC_IMPL(__imp__sub_82D7E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E530"))) PPC_WEAK_FUNC(sub_82D7E530);
PPC_FUNC_IMPL(__imp__sub_82D7E530) {
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
	// bl 0x82d996e8
	ctx.lr = 0x82D7E550;
	sub_82D996E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e578
	if (ctx.cr6.eq) goto loc_82D7E578;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E578;
	sub_82D4ECA8(ctx, base);
loc_82D7E578:
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

__attribute__((alias("__imp__sub_82D7E594"))) PPC_WEAK_FUNC(sub_82D7E594);
PPC_FUNC_IMPL(__imp__sub_82D7E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E598"))) PPC_WEAK_FUNC(sub_82D7E598);
PPC_FUNC_IMPL(__imp__sub_82D7E598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E59C"))) PPC_WEAK_FUNC(sub_82D7E59C);
PPC_FUNC_IMPL(__imp__sub_82D7E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5A0"))) PPC_WEAK_FUNC(sub_82D7E5A0);
PPC_FUNC_IMPL(__imp__sub_82D7E5A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E5B4"))) PPC_WEAK_FUNC(sub_82D7E5B4);
PPC_FUNC_IMPL(__imp__sub_82D7E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5B8"))) PPC_WEAK_FUNC(sub_82D7E5B8);
PPC_FUNC_IMPL(__imp__sub_82D7E5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E5BC"))) PPC_WEAK_FUNC(sub_82D7E5BC);
PPC_FUNC_IMPL(__imp__sub_82D7E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5C0"))) PPC_WEAK_FUNC(sub_82D7E5C0);
PPC_FUNC_IMPL(__imp__sub_82D7E5C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25932
	ctx.r11.s64 = ctx.r11.s64 + -25932;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E5E0"))) PPC_WEAK_FUNC(sub_82D7E5E0);
PPC_FUNC_IMPL(__imp__sub_82D7E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-25932
	ctx.r3.s64 = ctx.r11.s64 + -25932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E5EC"))) PPC_WEAK_FUNC(sub_82D7E5EC);
PPC_FUNC_IMPL(__imp__sub_82D7E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5F0"))) PPC_WEAK_FUNC(sub_82D7E5F0);
PPC_FUNC_IMPL(__imp__sub_82D7E5F0) {
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
	// bl 0x82d85040
	ctx.lr = 0x82D7E610;
	sub_82D85040(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e638
	if (ctx.cr6.eq) goto loc_82D7E638;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E638;
	sub_82D4ECA8(ctx, base);
loc_82D7E638:
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

__attribute__((alias("__imp__sub_82D7E654"))) PPC_WEAK_FUNC(sub_82D7E654);
PPC_FUNC_IMPL(__imp__sub_82D7E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E658"))) PPC_WEAK_FUNC(sub_82D7E658);
PPC_FUNC_IMPL(__imp__sub_82D7E658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E65C"))) PPC_WEAK_FUNC(sub_82D7E65C);
PPC_FUNC_IMPL(__imp__sub_82D7E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E660"))) PPC_WEAK_FUNC(sub_82D7E660);
PPC_FUNC_IMPL(__imp__sub_82D7E660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E674"))) PPC_WEAK_FUNC(sub_82D7E674);
PPC_FUNC_IMPL(__imp__sub_82D7E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E678"))) PPC_WEAK_FUNC(sub_82D7E678);
PPC_FUNC_IMPL(__imp__sub_82D7E678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E67C"))) PPC_WEAK_FUNC(sub_82D7E67C);
PPC_FUNC_IMPL(__imp__sub_82D7E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E680"))) PPC_WEAK_FUNC(sub_82D7E680);
PPC_FUNC_IMPL(__imp__sub_82D7E680) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25716
	ctx.r11.s64 = ctx.r11.s64 + -25716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6A0"))) PPC_WEAK_FUNC(sub_82D7E6A0);
PPC_FUNC_IMPL(__imp__sub_82D7E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-25716
	ctx.r3.s64 = ctx.r11.s64 + -25716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6AC"))) PPC_WEAK_FUNC(sub_82D7E6AC);
PPC_FUNC_IMPL(__imp__sub_82D7E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6B0"))) PPC_WEAK_FUNC(sub_82D7E6B0);
PPC_FUNC_IMPL(__imp__sub_82D7E6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6B4"))) PPC_WEAK_FUNC(sub_82D7E6B4);
PPC_FUNC_IMPL(__imp__sub_82D7E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6B8"))) PPC_WEAK_FUNC(sub_82D7E6B8);
PPC_FUNC_IMPL(__imp__sub_82D7E6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6BC"))) PPC_WEAK_FUNC(sub_82D7E6BC);
PPC_FUNC_IMPL(__imp__sub_82D7E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6C0"))) PPC_WEAK_FUNC(sub_82D7E6C0);
PPC_FUNC_IMPL(__imp__sub_82D7E6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E6D4"))) PPC_WEAK_FUNC(sub_82D7E6D4);
PPC_FUNC_IMPL(__imp__sub_82D7E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6D8"))) PPC_WEAK_FUNC(sub_82D7E6D8);
PPC_FUNC_IMPL(__imp__sub_82D7E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6DC"))) PPC_WEAK_FUNC(sub_82D7E6DC);
PPC_FUNC_IMPL(__imp__sub_82D7E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6E0"))) PPC_WEAK_FUNC(sub_82D7E6E0);
PPC_FUNC_IMPL(__imp__sub_82D7E6E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r9,278(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28700
	ctx.r11.s64 = ctx.r11.s64 + -28700;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,56
	ctx.r11.s64 = 56;
	// stb r11,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E714"))) PPC_WEAK_FUNC(sub_82D7E714);
PPC_FUNC_IMPL(__imp__sub_82D7E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E718"))) PPC_WEAK_FUNC(sub_82D7E718);
PPC_FUNC_IMPL(__imp__sub_82D7E718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28700
	ctx.r3.s64 = ctx.r11.s64 + -28700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E724"))) PPC_WEAK_FUNC(sub_82D7E724);
PPC_FUNC_IMPL(__imp__sub_82D7E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E728"))) PPC_WEAK_FUNC(sub_82D7E728);
PPC_FUNC_IMPL(__imp__sub_82D7E728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E72C"))) PPC_WEAK_FUNC(sub_82D7E72C);
PPC_FUNC_IMPL(__imp__sub_82D7E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E730"))) PPC_WEAK_FUNC(sub_82D7E730);
PPC_FUNC_IMPL(__imp__sub_82D7E730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E744"))) PPC_WEAK_FUNC(sub_82D7E744);
PPC_FUNC_IMPL(__imp__sub_82D7E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E748"))) PPC_WEAK_FUNC(sub_82D7E748);
PPC_FUNC_IMPL(__imp__sub_82D7E748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E74C"))) PPC_WEAK_FUNC(sub_82D7E74C);
PPC_FUNC_IMPL(__imp__sub_82D7E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E750"))) PPC_WEAK_FUNC(sub_82D7E750);
PPC_FUNC_IMPL(__imp__sub_82D7E750) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r9,154(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24740
	ctx.r11.s64 = ctx.r11.s64 + -24740;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E784"))) PPC_WEAK_FUNC(sub_82D7E784);
PPC_FUNC_IMPL(__imp__sub_82D7E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E788"))) PPC_WEAK_FUNC(sub_82D7E788);
PPC_FUNC_IMPL(__imp__sub_82D7E788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-24740
	ctx.r3.s64 = ctx.r11.s64 + -24740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E794"))) PPC_WEAK_FUNC(sub_82D7E794);
PPC_FUNC_IMPL(__imp__sub_82D7E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E798"))) PPC_WEAK_FUNC(sub_82D7E798);
PPC_FUNC_IMPL(__imp__sub_82D7E798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E7AC"))) PPC_WEAK_FUNC(sub_82D7E7AC);
PPC_FUNC_IMPL(__imp__sub_82D7E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E7B0"))) PPC_WEAK_FUNC(sub_82D7E7B0);
PPC_FUNC_IMPL(__imp__sub_82D7E7B0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7e7e0
	if (ctx.cr6.eq) goto loc_82D7E7E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7ca30
	ctx.lr = 0x82D7E7D4;
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7E7E0:
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

__attribute__((alias("__imp__sub_82D7E7F4"))) PPC_WEAK_FUNC(sub_82D7E7F4);
PPC_FUNC_IMPL(__imp__sub_82D7E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E7F8"))) PPC_WEAK_FUNC(sub_82D7E7F8);
PPC_FUNC_IMPL(__imp__sub_82D7E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ca30
	ctx.lr = 0x82D7E810;
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E828"))) PPC_WEAK_FUNC(sub_82D7E828);
PPC_FUNC_IMPL(__imp__sub_82D7E828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E82C"))) PPC_WEAK_FUNC(sub_82D7E82C);
PPC_FUNC_IMPL(__imp__sub_82D7E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E830"))) PPC_WEAK_FUNC(sub_82D7E830);
PPC_FUNC_IMPL(__imp__sub_82D7E830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E844"))) PPC_WEAK_FUNC(sub_82D7E844);
PPC_FUNC_IMPL(__imp__sub_82D7E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E848"))) PPC_WEAK_FUNC(sub_82D7E848);
PPC_FUNC_IMPL(__imp__sub_82D7E848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E84C"))) PPC_WEAK_FUNC(sub_82D7E84C);
PPC_FUNC_IMPL(__imp__sub_82D7E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E850"))) PPC_WEAK_FUNC(sub_82D7E850);
PPC_FUNC_IMPL(__imp__sub_82D7E850) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24564
	ctx.r11.s64 = ctx.r11.s64 + -24564;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E870"))) PPC_WEAK_FUNC(sub_82D7E870);
PPC_FUNC_IMPL(__imp__sub_82D7E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-24564
	ctx.r3.s64 = ctx.r11.s64 + -24564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E87C"))) PPC_WEAK_FUNC(sub_82D7E87C);
PPC_FUNC_IMPL(__imp__sub_82D7E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E880"))) PPC_WEAK_FUNC(sub_82D7E880);
PPC_FUNC_IMPL(__imp__sub_82D7E880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E884"))) PPC_WEAK_FUNC(sub_82D7E884);
PPC_FUNC_IMPL(__imp__sub_82D7E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E888"))) PPC_WEAK_FUNC(sub_82D7E888);
PPC_FUNC_IMPL(__imp__sub_82D7E888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E88C"))) PPC_WEAK_FUNC(sub_82D7E88C);
PPC_FUNC_IMPL(__imp__sub_82D7E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E890"))) PPC_WEAK_FUNC(sub_82D7E890);
PPC_FUNC_IMPL(__imp__sub_82D7E890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E894"))) PPC_WEAK_FUNC(sub_82D7E894);
PPC_FUNC_IMPL(__imp__sub_82D7E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E898"))) PPC_WEAK_FUNC(sub_82D7E898);
PPC_FUNC_IMPL(__imp__sub_82D7E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E8AC"))) PPC_WEAK_FUNC(sub_82D7E8AC);
PPC_FUNC_IMPL(__imp__sub_82D7E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E8B0"))) PPC_WEAK_FUNC(sub_82D7E8B0);
PPC_FUNC_IMPL(__imp__sub_82D7E8B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e8f8
	sub_82D7E8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E8C0"))) PPC_WEAK_FUNC(sub_82D7E8C0);
PPC_FUNC_IMPL(__imp__sub_82D7E8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E8C4"))) PPC_WEAK_FUNC(sub_82D7E8C4);
PPC_FUNC_IMPL(__imp__sub_82D7E8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E8C8"))) PPC_WEAK_FUNC(sub_82D7E8C8);
PPC_FUNC_IMPL(__imp__sub_82D7E8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e8f8
	ctx.lr = 0x82D7E8E0;
	sub_82D7E8F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E8F4"))) PPC_WEAK_FUNC(sub_82D7E8F4);
PPC_FUNC_IMPL(__imp__sub_82D7E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E8F8"))) PPC_WEAK_FUNC(sub_82D7E8F8);
PPC_FUNC_IMPL(__imp__sub_82D7E8F8) {
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
	// bl 0x82d7a438
	ctx.lr = 0x82D7E910;
	sub_82D7A438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,19580
	ctx.r9.s64 = ctx.r11.s64 + 19580;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7E960"))) PPC_WEAK_FUNC(sub_82D7E960);
PPC_FUNC_IMPL(__imp__sub_82D7E960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E974"))) PPC_WEAK_FUNC(sub_82D7E974);
PPC_FUNC_IMPL(__imp__sub_82D7E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E978"))) PPC_WEAK_FUNC(sub_82D7E978);
PPC_FUNC_IMPL(__imp__sub_82D7E978) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23716
	ctx.r11.s64 = ctx.r11.s64 + -23716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E998"))) PPC_WEAK_FUNC(sub_82D7E998);
PPC_FUNC_IMPL(__imp__sub_82D7E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-23716
	ctx.r3.s64 = ctx.r11.s64 + -23716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E9A4"))) PPC_WEAK_FUNC(sub_82D7E9A4);
PPC_FUNC_IMPL(__imp__sub_82D7E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E9A8"))) PPC_WEAK_FUNC(sub_82D7E9A8);
PPC_FUNC_IMPL(__imp__sub_82D7E9A8) {
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
	// bl 0x82d87c18
	ctx.lr = 0x82D7E9C8;
	sub_82D87C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e9f0
	if (ctx.cr6.eq) goto loc_82D7E9F0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,20
	ctx.r6.s64 = 20;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E9F0;
	sub_82D4ECA8(ctx, base);
loc_82D7E9F0:
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

__attribute__((alias("__imp__sub_82D7EA0C"))) PPC_WEAK_FUNC(sub_82D7EA0C);
PPC_FUNC_IMPL(__imp__sub_82D7EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA10"))) PPC_WEAK_FUNC(sub_82D7EA10);
PPC_FUNC_IMPL(__imp__sub_82D7EA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA14"))) PPC_WEAK_FUNC(sub_82D7EA14);
PPC_FUNC_IMPL(__imp__sub_82D7EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA18"))) PPC_WEAK_FUNC(sub_82D7EA18);
PPC_FUNC_IMPL(__imp__sub_82D7EA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EA2C"))) PPC_WEAK_FUNC(sub_82D7EA2C);
PPC_FUNC_IMPL(__imp__sub_82D7EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA30"))) PPC_WEAK_FUNC(sub_82D7EA30);
PPC_FUNC_IMPL(__imp__sub_82D7EA30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23124
	ctx.r11.s64 = ctx.r11.s64 + -23124;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA50"))) PPC_WEAK_FUNC(sub_82D7EA50);
PPC_FUNC_IMPL(__imp__sub_82D7EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-23124
	ctx.r3.s64 = ctx.r11.s64 + -23124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA5C"))) PPC_WEAK_FUNC(sub_82D7EA5C);
PPC_FUNC_IMPL(__imp__sub_82D7EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA60"))) PPC_WEAK_FUNC(sub_82D7EA60);
PPC_FUNC_IMPL(__imp__sub_82D7EA60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7eaa8
	if (ctx.cr6.eq) goto loc_82D7EAA8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,42
	ctx.r6.s64 = 42;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7EAA8;
	sub_82D4ECA8(ctx, base);
loc_82D7EAA8:
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

__attribute__((alias("__imp__sub_82D7EAC0"))) PPC_WEAK_FUNC(sub_82D7EAC0);
PPC_FUNC_IMPL(__imp__sub_82D7EAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EAD4"))) PPC_WEAK_FUNC(sub_82D7EAD4);
PPC_FUNC_IMPL(__imp__sub_82D7EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EAD8"))) PPC_WEAK_FUNC(sub_82D7EAD8);
PPC_FUNC_IMPL(__imp__sub_82D7EAD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EAF8"))) PPC_WEAK_FUNC(sub_82D7EAF8);
PPC_FUNC_IMPL(__imp__sub_82D7EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29692
	ctx.r3.s64 = ctx.r11.s64 + -29692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EB04"))) PPC_WEAK_FUNC(sub_82D7EB04);
PPC_FUNC_IMPL(__imp__sub_82D7EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB08"))) PPC_WEAK_FUNC(sub_82D7EB08);
PPC_FUNC_IMPL(__imp__sub_82D7EB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

