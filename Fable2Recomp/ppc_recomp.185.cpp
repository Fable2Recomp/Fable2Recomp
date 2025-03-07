#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C86388"))) PPC_WEAK_FUNC(sub_82C86388);
PPC_FUNC_IMPL(__imp__sub_82C86388) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-5816
	ctx.r10.s64 = ctx.r11.s64 + -5816;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c863c8
	if (ctx.cr6.eq) goto loc_82C863C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C863C0;
	sub_82C88A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C863C8;
	sub_82CA29E8(ctx, base);
loc_82C863C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C863D0;
	sub_82C81BF8(ctx, base);
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

__attribute__((alias("__imp__sub_82C863E8"))) PPC_WEAK_FUNC(sub_82C863E8);
PPC_FUNC_IMPL(__imp__sub_82C863E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C863F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86490
	if (ctx.cr6.eq) goto loc_82C86490;
	// clrlwi r27,r6,24
	ctx.r27.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c86424
	if (ctx.cr6.eq) goto loc_82C86424;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c8642c
	if (!ctx.cr6.eq) goto loc_82C8642C;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82C86424:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c8646c
	if (ctx.cr6.eq) goto loc_82C8646C;
loc_82C8642C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C86430:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C86438;
	sub_82C81E58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82caaf08
	ctx.lr = 0x82C86440;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c86478
	if (ctx.cr6.eq) goto loc_82C86478;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c86464
	if (!ctx.cr6.eq) goto loc_82C86464;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c8646c
	if (ctx.cr6.eq) goto loc_82C8646C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82C86464:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82c86430
	if (!ctx.cr6.eq) goto loc_82C86430;
loc_82C8646C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C86478:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C86490:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c864a8
	if (!ctx.cr6.eq) goto loc_82C864A8;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c8646c
	if (!ctx.cr6.eq) goto loc_82C8646C;
loc_82C864A8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c8646c
	if (ctx.cr6.eq) goto loc_82C8646C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C864C0;
	sub_82C81E58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82caaf08
	ctx.lr = 0x82C864C8;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8646c
	if (!ctx.cr6.eq) goto loc_82C8646C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C864F0"))) PPC_WEAK_FUNC(sub_82C864F0);
PPC_FUNC_IMPL(__imp__sub_82C864F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C86508"))) PPC_WEAK_FUNC(sub_82C86508);
PPC_FUNC_IMPL(__imp__sub_82C86508) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c86558
	if (ctx.cr6.eq) goto loc_82C86558;
	// bl 0x82c88ee8
	ctx.lr = 0x82C8652C;
	sub_82C88EE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c86558
	if (ctx.cr6.eq) goto loc_82C86558;
	// bl 0x82ca3b30
	ctx.lr = 0x82C86538;
	sub_82CA3B30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_82C86558:
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

__attribute__((alias("__imp__sub_82C86570"))) PPC_WEAK_FUNC(sub_82C86570);
PPC_FUNC_IMPL(__imp__sub_82C86570) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c865c0
	if (ctx.cr6.eq) goto loc_82C865C0;
	// bl 0x82c88ee8
	ctx.lr = 0x82C86594;
	sub_82C88EE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c865c0
	if (ctx.cr6.eq) goto loc_82C865C0;
	// bl 0x82c85b88
	ctx.lr = 0x82C865A0;
	sub_82C85B88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_82C865C0:
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

__attribute__((alias("__imp__sub_82C865D8"))) PPC_WEAK_FUNC(sub_82C865D8);
PPC_FUNC_IMPL(__imp__sub_82C865D8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c86624
	if (ctx.cr6.eq) goto loc_82C86624;
	// bl 0x82c88ee8
	ctx.lr = 0x82C865FC;
	sub_82C88EE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c86624
	if (ctx.cr6.eq) goto loc_82C86624;
	// bl 0x82c85c20
	ctx.lr = 0x82C86608;
	sub_82C85C20(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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
loc_82C86624:
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

__attribute__((alias("__imp__sub_82C8663C"))) PPC_WEAK_FUNC(sub_82C8663C);
PPC_FUNC_IMPL(__imp__sub_82C8663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86640"))) PPC_WEAK_FUNC(sub_82C86640);
PPC_FUNC_IMPL(__imp__sub_82C86640) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c8669c
	if (ctx.cr6.eq) goto loc_82C8669C;
	// bl 0x82c88ee8
	ctx.lr = 0x82C86664;
	sub_82C88EE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c8669c
	if (ctx.cr6.eq) goto loc_82C8669C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// bl 0x82caaf80
	ctx.lr = 0x82C86678;
	sub_82CAAF80(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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
loc_82C8669C:
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

__attribute__((alias("__imp__sub_82C866B4"))) PPC_WEAK_FUNC(sub_82C866B4);
PPC_FUNC_IMPL(__imp__sub_82C866B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C866B8"))) PPC_WEAK_FUNC(sub_82C866B8);
PPC_FUNC_IMPL(__imp__sub_82C866B8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c86710
	if (ctx.cr6.eq) goto loc_82C86710;
	// bl 0x82c88ee8
	ctx.lr = 0x82C866DC;
	sub_82C88EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c86710
	if (ctx.cr6.eq) goto loc_82C86710;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c823d8
	ctx.lr = 0x82C866F0;
	sub_82C823D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82C86710:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82C86728"))) PPC_WEAK_FUNC(sub_82C86728);
PPC_FUNC_IMPL(__imp__sub_82C86728) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c8676c
	if (ctx.cr6.eq) goto loc_82C8676C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c8674c
	if (ctx.cr6.eq) goto loc_82C8674C;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82c86798
	goto loc_82C86798;
loc_82C8674C:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c867b4
	if (ctx.cr6.eq) goto loc_82C867B4;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c867b4
	if (ctx.cr6.eq) goto loc_82C867B4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82c86798
	goto loc_82C86798;
loc_82C8676C:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c86784
	if (!ctx.cr6.eq) goto loc_82C86784;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c86798
	if (!ctx.cr6.eq) goto loc_82C86798;
loc_82C86784:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_82C86798:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c867b4
	if (ctx.cr6.eq) goto loc_82C867B4;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x82c81e58
	sub_82C81E58(ctx, base);
	return;
loc_82C867B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C867BC"))) PPC_WEAK_FUNC(sub_82C867BC);
PPC_FUNC_IMPL(__imp__sub_82C867BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C867C0"))) PPC_WEAK_FUNC(sub_82C867C0);
PPC_FUNC_IMPL(__imp__sub_82C867C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c867d4
	if (ctx.cr6.eq) goto loc_82C867D4;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82c867d8
	goto loc_82C867D8;
loc_82C867D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C867D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82c863e8
	sub_82C863E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C867E0"))) PPC_WEAK_FUNC(sub_82C867E0);
PPC_FUNC_IMPL(__imp__sub_82C867E0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c86728
	sub_82C86728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C867E8"))) PPC_WEAK_FUNC(sub_82C867E8);
PPC_FUNC_IMPL(__imp__sub_82C867E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82c863e8
	sub_82C863E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C867F4"))) PPC_WEAK_FUNC(sub_82C867F4);
PPC_FUNC_IMPL(__imp__sub_82C867F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C867F8"))) PPC_WEAK_FUNC(sub_82C867F8);
PPC_FUNC_IMPL(__imp__sub_82C867F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C86810"))) PPC_WEAK_FUNC(sub_82C86810);
PPC_FUNC_IMPL(__imp__sub_82C86810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C86828"))) PPC_WEAK_FUNC(sub_82C86828);
PPC_FUNC_IMPL(__imp__sub_82C86828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86830;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,-5816
	ctx.r10.s64 = ctx.r11.s64 + -5816;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c86864
	if (ctx.cr6.eq) goto loc_82C86864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C8685C;
	sub_82C88A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C86864;
	sub_82CA29E8(ctx, base);
loc_82C86864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C8686C;
	sub_82C81BF8(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86884
	if (ctx.cr6.eq) goto loc_82C86884;
	// bl 0x824fe010
	ctx.lr = 0x82C86880;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C86884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C8688C"))) PPC_WEAK_FUNC(sub_82C8688C);
PPC_FUNC_IMPL(__imp__sub_82C8688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86890"))) PPC_WEAK_FUNC(sub_82C86890);
PPC_FUNC_IMPL(__imp__sub_82C86890) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82c863e8
	sub_82C863E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C8689C"))) PPC_WEAK_FUNC(sub_82C8689C);
PPC_FUNC_IMPL(__imp__sub_82C8689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C868A0"))) PPC_WEAK_FUNC(sub_82C868A0);
PPC_FUNC_IMPL(__imp__sub_82C868A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c86728
	sub_82C86728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C868A8"))) PPC_WEAK_FUNC(sub_82C868A8);
PPC_FUNC_IMPL(__imp__sub_82C868A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,128
	ctx.r4.s64 = 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c87b08
	ctx.lr = 0x82C868D4;
	sub_82C87B08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,-5728
	ctx.r31.s64 = ctx.r11.s64 + -5728;
	// bl 0x82c87a40
	ctx.lr = 0x82C868E4;
	sub_82C87A40(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86900;
	sub_82CA3EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82C86918"))) PPC_WEAK_FUNC(sub_82C86918);
PPC_FUNC_IMPL(__imp__sub_82C86918) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82c87b08
	ctx.lr = 0x82C86940;
	sub_82C87B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c87a40
	ctx.lr = 0x82C86948;
	sub_82C87A40(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86960
	if (ctx.cr6.eq) goto loc_82C86960;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-22980
	ctx.r5.s64 = ctx.r11.s64 + -22980;
	// b 0x82c86968
	goto loc_82C86968;
loc_82C86960:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-22988
	ctx.r5.s64 = ctx.r11.s64 + -22988;
loc_82C86968:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86970;
	sub_82CA3EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82C86988"))) PPC_WEAK_FUNC(sub_82C86988);
PPC_FUNC_IMPL(__imp__sub_82C86988) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c869d0
	if (!ctx.cr6.eq) goto loc_82C869D0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c88628
	ctx.lr = 0x82C869B8;
	sub_82C88628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c869c8
	if (ctx.cr6.eq) goto loc_82C869C8;
	// bl 0x82c88678
	ctx.lr = 0x82C869C4;
	sub_82C88678(ctx, base);
	// b 0x82c869cc
	goto loc_82C869CC;
loc_82C869C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C869CC:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82C869D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c89270
	ctx.lr = 0x82C869E0;
	sub_82C89270(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82c869fc
	if (ctx.cr6.eq) goto loc_82C869FC;
	// bl 0x82c88d78
	ctx.lr = 0x82C869F8;
	sub_82C88D78(ctx, base);
	// b 0x82c86a04
	goto loc_82C86A04;
loc_82C869FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c88630
	ctx.lr = 0x82C86A04;
	sub_82C88630(ctx, base);
loc_82C86A04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C86A2C"))) PPC_WEAK_FUNC(sub_82C86A2C);
PPC_FUNC_IMPL(__imp__sub_82C86A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86A30"))) PPC_WEAK_FUNC(sub_82C86A30);
PPC_FUNC_IMPL(__imp__sub_82C86A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C86A40"))) PPC_WEAK_FUNC(sub_82C86A40);
PPC_FUNC_IMPL(__imp__sub_82C86A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86A48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c892c8
	ctx.lr = 0x82C86A60;
	sub_82C892C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c892c8
	ctx.lr = 0x82C86A68;
	sub_82C892C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c823d8
	ctx.lr = 0x82C86A74;
	sub_82C823D8(ctx, base);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86aa0
	if (ctx.cr6.eq) goto loc_82C86AA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9784
	ctx.r4.s64 = ctx.r10.s64 + -9784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C86AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C86AA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c88cf0
	ctx.lr = 0x82C86AAC;
	sub_82C88CF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86ABC"))) PPC_WEAK_FUNC(sub_82C86ABC);
PPC_FUNC_IMPL(__imp__sub_82C86ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86AC0"))) PPC_WEAK_FUNC(sub_82C86AC0);
PPC_FUNC_IMPL(__imp__sub_82C86AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C86AC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86b48
	if (ctx.cr6.eq) goto loc_82C86B48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86AEC;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C86AFC;
	sub_82C87B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,2864
	ctx.r28.s64 = ctx.r11.s64 + 2864;
	// bl 0x82c87a40
	ctx.lr = 0x82C86B0C;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86B1C;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86B28;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C86B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86B48;
	sub_82C87A10(ctx, base);
loc_82C86B48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C86B50"))) PPC_WEAK_FUNC(sub_82C86B50);
PPC_FUNC_IMPL(__imp__sub_82C86B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C86B58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86bd8
	if (ctx.cr6.eq) goto loc_82C86BD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86B7C;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C86B8C;
	sub_82C87B08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,30568
	ctx.r28.s64 = ctx.r11.s64 + 30568;
	// bl 0x82c87a40
	ctx.lr = 0x82C86B9C;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86BAC;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86BB8;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C86BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86BD8;
	sub_82C87A10(ctx, base);
loc_82C86BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C86BE0"))) PPC_WEAK_FUNC(sub_82C86BE0);
PPC_FUNC_IMPL(__imp__sub_82C86BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86BE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86c44
	if (ctx.cr6.eq) goto loc_82C86C44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86C0C;
	sub_82C879B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c868a8
	ctx.lr = 0x82C86C18;
	sub_82C868A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86C24;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86C44;
	sub_82C87A10(ctx, base);
loc_82C86C44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86C4C"))) PPC_WEAK_FUNC(sub_82C86C4C);
PPC_FUNC_IMPL(__imp__sub_82C86C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86C50"))) PPC_WEAK_FUNC(sub_82C86C50);
PPC_FUNC_IMPL(__imp__sub_82C86C50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c88e68
	sub_82C88E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C86C6C"))) PPC_WEAK_FUNC(sub_82C86C6C);
PPC_FUNC_IMPL(__imp__sub_82C86C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C86C70"))) PPC_WEAK_FUNC(sub_82C86C70);
PPC_FUNC_IMPL(__imp__sub_82C86C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86C78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c81e58
	ctx.lr = 0x82C86C90;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86CB0"))) PPC_WEAK_FUNC(sub_82C86CB0);
PPC_FUNC_IMPL(__imp__sub_82C86CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86CB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86d14
	if (ctx.cr6.eq) goto loc_82C86D14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86CDC;
	sub_82C879B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c86918
	ctx.lr = 0x82C86CE8;
	sub_82C86918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86CF4;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86D14;
	sub_82C87A10(ctx, base);
loc_82C86D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86D1C"))) PPC_WEAK_FUNC(sub_82C86D1C);
PPC_FUNC_IMPL(__imp__sub_82C86D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86D20"))) PPC_WEAK_FUNC(sub_82C86D20);
PPC_FUNC_IMPL(__imp__sub_82C86D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C86D28;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86da8
	if (ctx.cr6.eq) goto loc_82C86DA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86D4C;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C86D5C;
	sub_82C87B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,2864
	ctx.r28.s64 = ctx.r11.s64 + 2864;
	// bl 0x82c87a40
	ctx.lr = 0x82C86D6C;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86D7C;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86D88;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C86DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86DA8;
	sub_82C87A10(ctx, base);
loc_82C86DA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C86DB4"))) PPC_WEAK_FUNC(sub_82C86DB4);
PPC_FUNC_IMPL(__imp__sub_82C86DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86DB8"))) PPC_WEAK_FUNC(sub_82C86DB8);
PPC_FUNC_IMPL(__imp__sub_82C86DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C86DC0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86e40
	if (ctx.cr6.eq) goto loc_82C86E40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86DE4;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C86DF4;
	sub_82C87B08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,30568
	ctx.r28.s64 = ctx.r11.s64 + 30568;
	// bl 0x82c87a40
	ctx.lr = 0x82C86E04;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C86E14;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86E20;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C86E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86E40;
	sub_82C87A10(ctx, base);
loc_82C86E40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C86E4C"))) PPC_WEAK_FUNC(sub_82C86E4C);
PPC_FUNC_IMPL(__imp__sub_82C86E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86E50"))) PPC_WEAK_FUNC(sub_82C86E50);
PPC_FUNC_IMPL(__imp__sub_82C86E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86E58;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86eb4
	if (ctx.cr6.eq) goto loc_82C86EB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86E7C;
	sub_82C879B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c868a8
	ctx.lr = 0x82C86E88;
	sub_82C868A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86E94;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86EB4;
	sub_82C87A10(ctx, base);
loc_82C86EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86EC0"))) PPC_WEAK_FUNC(sub_82C86EC0);
PPC_FUNC_IMPL(__imp__sub_82C86EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86EC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c81e58
	ctx.lr = 0x82C86EE0;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86F04"))) PPC_WEAK_FUNC(sub_82C86F04);
PPC_FUNC_IMPL(__imp__sub_82C86F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86F08"))) PPC_WEAK_FUNC(sub_82C86F08);
PPC_FUNC_IMPL(__imp__sub_82C86F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C86F10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c86f6c
	if (ctx.cr6.eq) goto loc_82C86F6C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c879b0
	ctx.lr = 0x82C86F34;
	sub_82C879B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c86918
	ctx.lr = 0x82C86F40;
	sub_82C86918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a40
	ctx.lr = 0x82C86F4C;
	sub_82C87A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C86F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C86F6C;
	sub_82C87A10(ctx, base);
loc_82C86F6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C86F78"))) PPC_WEAK_FUNC(sub_82C86F78);
PPC_FUNC_IMPL(__imp__sub_82C86F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82c88cf8
	sub_82C88CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C86F80"))) PPC_WEAK_FUNC(sub_82C86F80);
PPC_FUNC_IMPL(__imp__sub_82C86F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82c886f0
	sub_82C886F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C86F88"))) PPC_WEAK_FUNC(sub_82C86F88);
PPC_FUNC_IMPL(__imp__sub_82C86F88) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C86FB4;
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

__attribute__((alias("__imp__sub_82C86FC4"))) PPC_WEAK_FUNC(sub_82C86FC4);
PPC_FUNC_IMPL(__imp__sub_82C86FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C86FC8"))) PPC_WEAK_FUNC(sub_82C86FC8);
PPC_FUNC_IMPL(__imp__sub_82C86FC8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C86FF4;
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

__attribute__((alias("__imp__sub_82C87004"))) PPC_WEAK_FUNC(sub_82C87004);
PPC_FUNC_IMPL(__imp__sub_82C87004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87008"))) PPC_WEAK_FUNC(sub_82C87008);
PPC_FUNC_IMPL(__imp__sub_82C87008) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87030;
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

__attribute__((alias("__imp__sub_82C87040"))) PPC_WEAK_FUNC(sub_82C87040);
PPC_FUNC_IMPL(__imp__sub_82C87040) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C8705C;
	sub_82C81E58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C87088"))) PPC_WEAK_FUNC(sub_82C87088);
PPC_FUNC_IMPL(__imp__sub_82C87088) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C870B4;
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

__attribute__((alias("__imp__sub_82C870C4"))) PPC_WEAK_FUNC(sub_82C870C4);
PPC_FUNC_IMPL(__imp__sub_82C870C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C870C8"))) PPC_WEAK_FUNC(sub_82C870C8);
PPC_FUNC_IMPL(__imp__sub_82C870C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C870D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C870E4;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C870F4;
	sub_82C87B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,2864
	ctx.r29.s64 = ctx.r11.s64 + 2864;
	// bl 0x82c87a40
	ctx.lr = 0x82C87104;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C87114;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C8711C;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c86a40
	ctx.lr = 0x82C8712C;
	sub_82C86A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C87134;
	sub_82C87A10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C8713C"))) PPC_WEAK_FUNC(sub_82C8713C);
PPC_FUNC_IMPL(__imp__sub_82C8713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87140"))) PPC_WEAK_FUNC(sub_82C87140);
PPC_FUNC_IMPL(__imp__sub_82C87140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C87148;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C8715C;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C8716C;
	sub_82C87B08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,30568
	ctx.r29.s64 = ctx.r11.s64 + 30568;
	// bl 0x82c87a40
	ctx.lr = 0x82C8717C;
	sub_82C87A40(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C8718C;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C87194;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82c86a40
	ctx.lr = 0x82C871A4;
	sub_82C86A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C871AC;
	sub_82C87A10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C871B4"))) PPC_WEAK_FUNC(sub_82C871B4);
PPC_FUNC_IMPL(__imp__sub_82C871B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C871B8"))) PPC_WEAK_FUNC(sub_82C871B8);
PPC_FUNC_IMPL(__imp__sub_82C871B8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C871E0;
	sub_82C879B0(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82c87b08
	ctx.lr = 0x82C871F4;
	sub_82C87B08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-5728
	ctx.r30.s64 = ctx.r11.s64 + -5728;
	// bl 0x82c87a40
	ctx.lr = 0x82C87204;
	sub_82C87A40(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C87220;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C87228;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82c86a40
	ctx.lr = 0x82C87238;
	sub_82C86A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C87240;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C8725C"))) PPC_WEAK_FUNC(sub_82C8725C);
PPC_FUNC_IMPL(__imp__sub_82C8725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87260"))) PPC_WEAK_FUNC(sub_82C87260);
PPC_FUNC_IMPL(__imp__sub_82C87260) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c81e58
	ctx.lr = 0x82C87284;
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C87298;
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

__attribute__((alias("__imp__sub_82C872B0"))) PPC_WEAK_FUNC(sub_82C872B0);
PPC_FUNC_IMPL(__imp__sub_82C872B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C872D4;
	sub_82C879B0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c87b08
	ctx.lr = 0x82C872E4;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C872EC;
	sub_82C87A40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c87300
	if (ctx.cr6.eq) goto loc_82C87300;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-22980
	ctx.r5.s64 = ctx.r11.s64 + -22980;
	// b 0x82c87308
	goto loc_82C87308;
loc_82C87300:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-22988
	ctx.r5.s64 = ctx.r11.s64 + -22988;
loc_82C87308:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C87310;
	sub_82CA3EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C87318;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82c86a40
	ctx.lr = 0x82C87328;
	sub_82C86A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C87330;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C87348"))) PPC_WEAK_FUNC(sub_82C87348);
PPC_FUNC_IMPL(__imp__sub_82C87348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82C87350;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// bl 0x82c823d8
	ctx.lr = 0x82C8736C;
	sub_82C823D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C87374;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C87378:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87378
	if (!ctx.cr6.eq) goto loc_82C87378;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82c81e58
	ctx.lr = 0x82C8739C;
	sub_82C81E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c8747c
	if (ctx.cr6.eq) goto loc_82C8747C;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,-5996
	ctx.r26.s64 = ctx.r11.s64 + -5996;
loc_82C873B4:
	// li r31,5
	ctx.r31.s64 = 5;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c87410
	if (ctx.cr6.eq) goto loc_82C87410;
loc_82C873C4:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x82c87418
	if (!ctx.cr6.eq) goto loc_82C87418;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82C873DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82c873fc
	if (ctx.cr6.eq) goto loc_82C873FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// blt cr6,0x82c873dc
	if (ctx.cr6.lt) goto loc_82C873DC;
loc_82C873FC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82c873c4
	if (!ctx.cr0.eq) goto loc_82C873C4;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x82c87418
	if (!ctx.cr6.eq) goto loc_82C87418;
loc_82C87410:
	// subf r30,r28,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r28.s64;
	// b 0x82c87420
	goto loc_82C87420;
loc_82C87418:
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82C87420:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c87458
	if (!ctx.cr6.gt) goto loc_82C87458;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x82c87a50
	ctx.lr = 0x82C87430;
	sub_82C87A50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C87440;
	sub_82CA2C60(ctx, base);
	// stbx r25,r23,r30
	PPC_STORE_U8(ctx.r23.u32 + ctx.r30.u32, ctx.r25.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c824d8
	ctx.lr = 0x82C87450;
	sub_82C824D8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C87458;
	sub_82C87A68(ctx, base);
loc_82C87458:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// beq cr6,0x82c87474
	if (ctx.cr6.eq) goto loc_82C87474;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82c824d8
	ctx.lr = 0x82C87474;
	sub_82C824D8(ctx, base);
loc_82C87474:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c873b4
	if (!ctx.cr6.eq) goto loc_82C873B4;
loc_82C8747C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81e58
	ctx.lr = 0x82C87484;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C87488:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87488
	if (!ctx.cr6.eq) goto loc_82C87488;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c87b08
	ctx.lr = 0x82C874B4;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81e58
	ctx.lr = 0x82C874BC;
	sub_82C81E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87a40
	ctx.lr = 0x82C874C8;
	sub_82C87A40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82C874D4;
	sub_82CA3EB8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82C874DC"))) PPC_WEAK_FUNC(sub_82C874DC);
PPC_FUNC_IMPL(__imp__sub_82C874DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C874E0"))) PPC_WEAK_FUNC(sub_82C874E0);
PPC_FUNC_IMPL(__imp__sub_82C874E0) {
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
	// bl 0x82c81ba8
	ctx.lr = 0x82C874F8;
	sub_82C81BA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5720
	ctx.r9.s64 = ctx.r10.s64 + -5720;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r8,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82C87534"))) PPC_WEAK_FUNC(sub_82C87534);
PPC_FUNC_IMPL(__imp__sub_82C87534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87538"))) PPC_WEAK_FUNC(sub_82C87538);
PPC_FUNC_IMPL(__imp__sub_82C87538) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-5720
	ctx.r10.s64 = ctx.r11.s64 + -5720;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c87578
	if (ctx.cr6.eq) goto loc_82C87578;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C87570;
	sub_82C88A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C87578;
	sub_82CA29E8(ctx, base);
loc_82C87578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C87580;
	sub_82C81BF8(ctx, base);
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

__attribute__((alias("__imp__sub_82C87598"))) PPC_WEAK_FUNC(sub_82C87598);
PPC_FUNC_IMPL(__imp__sub_82C87598) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C875BC;
	sub_82C879B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c823d8
	ctx.lr = 0x82C875C8;
	sub_82C823D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c87348
	ctx.lr = 0x82C875D4;
	sub_82C87348(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C875DC;
	sub_82C87A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82c86a40
	ctx.lr = 0x82C875EC;
	sub_82C86A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C875F4;
	sub_82C87A10(ctx, base);
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

__attribute__((alias("__imp__sub_82C8760C"))) PPC_WEAK_FUNC(sub_82C8760C);
PPC_FUNC_IMPL(__imp__sub_82C8760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87610"))) PPC_WEAK_FUNC(sub_82C87610);
PPC_FUNC_IMPL(__imp__sub_82C87610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C87618;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,-5720
	ctx.r10.s64 = ctx.r11.s64 + -5720;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c8764c
	if (ctx.cr6.eq) goto loc_82C8764C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c88a58
	ctx.lr = 0x82C87644;
	sub_82C88A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C8764C;
	sub_82CA29E8(ctx, base);
loc_82C8764C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81bf8
	ctx.lr = 0x82C87654;
	sub_82C81BF8(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8766c
	if (ctx.cr6.eq) goto loc_82C8766C;
	// bl 0x824fe010
	ctx.lr = 0x82C87668;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C8766C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C87674"))) PPC_WEAK_FUNC(sub_82C87674);
PPC_FUNC_IMPL(__imp__sub_82C87674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87678"))) PPC_WEAK_FUNC(sub_82C87678);
PPC_FUNC_IMPL(__imp__sub_82C87678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87684"))) PPC_WEAK_FUNC(sub_82C87684);
PPC_FUNC_IMPL(__imp__sub_82C87684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87688"))) PPC_WEAK_FUNC(sub_82C87688);
PPC_FUNC_IMPL(__imp__sub_82C87688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87698"))) PPC_WEAK_FUNC(sub_82C87698);
PPC_FUNC_IMPL(__imp__sub_82C87698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C876A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// bl 0x82c87a50
	ctx.lr = 0x82C876C0;
	sub_82C87A50(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C876D0;
	sub_82CA2C60(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c87a68
	ctx.lr = 0x82C876D8;
	sub_82C87A68(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x82c81ed0
	ctx.lr = 0x82C876F4;
	sub_82C81ED0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r31,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C87708"))) PPC_WEAK_FUNC(sub_82C87708);
PPC_FUNC_IMPL(__imp__sub_82C87708) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-5608
	ctx.r10.s64 = ctx.r11.s64 + -5608;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c87a50
	ctx.lr = 0x82C87730;
	sub_82C87A50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c87744
	if (ctx.cr6.eq) goto loc_82C87744;
	// bl 0x82c87698
	ctx.lr = 0x82C8773C;
	sub_82C87698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82c87748
	goto loc_82C87748;
loc_82C87744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C87748:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C87764"))) PPC_WEAK_FUNC(sub_82C87764);
PPC_FUNC_IMPL(__imp__sub_82C87764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87768"))) PPC_WEAK_FUNC(sub_82C87768);
PPC_FUNC_IMPL(__imp__sub_82C87768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C87770;
	sub_82CA2BE0(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C8779C;
	sub_82C879B0(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// bl 0x82c87b08
	ctx.lr = 0x82C877AC;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C877B4;
	sub_82C87A40(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C877C8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca46e8
	ctx.lr = 0x82C877E0;
	sub_82CA46E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82c87804
	if (!ctx.cr6.eq) goto loc_82C87804;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c87b08
	ctx.lr = 0x82C877F8;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C87800;
	sub_82C87A40(ctx, base);
	// b 0x82c877c8
	goto loc_82C877C8;
loc_82C87804:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82C87808:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87808
	if (!ctx.cr6.eq) goto loc_82C87808;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x82c81ed0
	ctx.lr = 0x82C8783C;
	sub_82C81ED0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C87850;
	sub_82CA2C60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x82c81ed0
	ctx.lr = 0x82C87860;
	sub_82C81ED0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x82c87a10
	ctx.lr = 0x82C87874;
	sub_82C87A10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8787C"))) PPC_WEAK_FUNC(sub_82C8787C);
PPC_FUNC_IMPL(__imp__sub_82C8787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87880"))) PPC_WEAK_FUNC(sub_82C87880);
PPC_FUNC_IMPL(__imp__sub_82C87880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C87888;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82c81ed0
	ctx.lr = 0x82C878AC;
	sub_82C81ED0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C878C0;
	sub_82CA2C60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x82c81ed0
	ctx.lr = 0x82C878D0;
	sub_82C81ED0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C878E4"))) PPC_WEAK_FUNC(sub_82C878E4);
PPC_FUNC_IMPL(__imp__sub_82C878E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C878E8"))) PPC_WEAK_FUNC(sub_82C878E8);
PPC_FUNC_IMPL(__imp__sub_82C878E8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-5608
	ctx.r10.s64 = ctx.r11.s64 + -5608;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c87938
	if (ctx.cr6.eq) goto loc_82C87938;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c87a68
	ctx.lr = 0x82C87920;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82c87a68
	ctx.lr = 0x82C87938;
	sub_82C87A68(ctx, base);
loc_82C87938:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-12180
	ctx.r10.s64 = ctx.r11.s64 + -12180;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C8795C"))) PPC_WEAK_FUNC(sub_82C8795C);
PPC_FUNC_IMPL(__imp__sub_82C8795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87960"))) PPC_WEAK_FUNC(sub_82C87960);
PPC_FUNC_IMPL(__imp__sub_82C87960) {
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
	// bl 0x82c878e8
	ctx.lr = 0x82C87980;
	sub_82C878E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c87998
	if (ctx.cr6.eq) goto loc_82C87998;
	// bl 0x824fe010
	ctx.lr = 0x82C87994;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C87998:
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

__attribute__((alias("__imp__sub_82C879B0"))) PPC_WEAK_FUNC(sub_82C879B0);
PPC_FUNC_IMPL(__imp__sub_82C879B0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,22648
	ctx.r31.s64 = ctx.r11.s64 + 22648;
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c879ec
	if (!ctx.cr6.eq) goto loc_82C879EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b258c
	ctx.lr = 0x82C879E4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
loc_82C879EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82C879F4;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82C87A10"))) PPC_WEAK_FUNC(sub_82C87A10);
PPC_FUNC_IMPL(__imp__sub_82C87A10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,22648
	ctx.r3.s64 = ctx.r10.s64 + 22648;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C87A24"))) PPC_WEAK_FUNC(sub_82C87A24);
PPC_FUNC_IMPL(__imp__sub_82C87A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87A28"))) PPC_WEAK_FUNC(sub_82C87A28);
PPC_FUNC_IMPL(__imp__sub_82C87A28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,22688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22688);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,22688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87A3C"))) PPC_WEAK_FUNC(sub_82C87A3C);
PPC_FUNC_IMPL(__imp__sub_82C87A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87A40"))) PPC_WEAK_FUNC(sub_82C87A40);
PPC_FUNC_IMPL(__imp__sub_82C87A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22676);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87A4C"))) PPC_WEAK_FUNC(sub_82C87A4C);
PPC_FUNC_IMPL(__imp__sub_82C87A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87A50"))) PPC_WEAK_FUNC(sub_82C87A50);
PPC_FUNC_IMPL(__imp__sub_82C87A50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,22692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22692);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,22692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22692, ctx.r11.u32);
	// b 0x8221f388
	sub_8221F388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C87A64"))) PPC_WEAK_FUNC(sub_82C87A64);
PPC_FUNC_IMPL(__imp__sub_82C87A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87A68"))) PPC_WEAK_FUNC(sub_82C87A68);
PPC_FUNC_IMPL(__imp__sub_82C87A68) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c87a90
	if (ctx.cr6.eq) goto loc_82C87A90;
	// bl 0x824fe010
	ctx.lr = 0x82C87A80;
	sub_824FE010(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,22692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22692);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,22692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22692, ctx.r11.u32);
loc_82C87A90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87AA0"))) PPC_WEAK_FUNC(sub_82C87AA0);
PPC_FUNC_IMPL(__imp__sub_82C87AA0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,22692
	ctx.r31.s64 = ctx.r11.s64 + 22692;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bne 0x82c87af4
	if (!ctx.cr0.eq) goto loc_82C87AF4;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c87ae4
	if (ctx.cr6.eq) goto loc_82C87AE4;
	// bl 0x824fe010
	ctx.lr = 0x82C87AD8;
	sub_824FE010(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82C87AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// stw r10,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r10.u32);
loc_82C87AF4:
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

__attribute__((alias("__imp__sub_82C87B08"))) PPC_WEAK_FUNC(sub_82C87B08);
PPC_FUNC_IMPL(__imp__sub_82C87B08) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,22692
	ctx.r31.s64 = ctx.r11.s64 + 22692;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c87b50
	if (ctx.cr6.eq) goto loc_82C87B50;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82c87b6c
	if (!ctx.cr6.lt) goto loc_82C87B6C;
	// bl 0x824fe010
	ctx.lr = 0x82C87B44;
	sub_824FE010(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82c87b54
	goto loc_82C87B54;
loc_82C87B50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C87B54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221f388
	ctx.lr = 0x82C87B64;
	sub_8221F388(ctx, base);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
loc_82C87B6C:
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

__attribute__((alias("__imp__sub_82C87B84"))) PPC_WEAK_FUNC(sub_82C87B84);
PPC_FUNC_IMPL(__imp__sub_82C87B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87B88"))) PPC_WEAK_FUNC(sub_82C87B88);
PPC_FUNC_IMPL(__imp__sub_82C87B88) {
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
	// bl 0x82240578
	ctx.lr = 0x82C87BA0;
	sub_82240578(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ca7120
	ctx.lr = 0x82C87BAC;
	sub_82CA7120(ctx, base);
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

__attribute__((alias("__imp__sub_82C87BC0"))) PPC_WEAK_FUNC(sub_82C87BC0);
PPC_FUNC_IMPL(__imp__sub_82C87BC0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-5580
	ctx.r9.s64 = ctx.r11.s64 + -5580;
	// addi r30,r10,3224
	ctx.r30.s64 = ctx.r10.s64 + 3224;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c823d8
	ctx.lr = 0x82C87BF8;
	sub_82C823D8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c823d8
	ctx.lr = 0x82C87C04;
	sub_82C823D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C87C30"))) PPC_WEAK_FUNC(sub_82C87C30);
PPC_FUNC_IMPL(__imp__sub_82C87C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C87C38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C87C50;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C87C54:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87c54
	if (!ctx.cr6.eq) goto loc_82C87C54;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87c94
	if (!ctx.cr6.eq) goto loc_82C87C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C87C94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C87C9C"))) PPC_WEAK_FUNC(sub_82C87C9C);
PPC_FUNC_IMPL(__imp__sub_82C87C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87CA0"))) PPC_WEAK_FUNC(sub_82C87CA0);
PPC_FUNC_IMPL(__imp__sub_82C87CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C87CA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C87CC0;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C87CC4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87cc4
	if (!ctx.cr6.eq) goto loc_82C87CC4;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c87d1c
	if (ctx.cr6.eq) goto loc_82C87D1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c823d8
	ctx.lr = 0x82C87CF4;
	sub_82C823D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c87d30
	if (!ctx.cr6.eq) goto loc_82C87D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// bl 0x82c825a0
	ctx.lr = 0x82C87D14;
	sub_82C825A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C87D1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C87D30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C87D38"))) PPC_WEAK_FUNC(sub_82C87D38);
PPC_FUNC_IMPL(__imp__sub_82C87D38) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87D44"))) PPC_WEAK_FUNC(sub_82C87D44);
PPC_FUNC_IMPL(__imp__sub_82C87D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87D48"))) PPC_WEAK_FUNC(sub_82C87D48);
PPC_FUNC_IMPL(__imp__sub_82C87D48) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82c87da0
	if (!ctx.cr6.gt) goto loc_82C87DA0;
loc_82C87D54:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82c87d80
	if (ctx.cr6.eq) goto loc_82C87D80;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82c87d80
	if (ctx.cr6.eq) goto loc_82C87D80;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82c87d80
	if (ctx.cr6.eq) goto loc_82C87D80;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82c87d84
	if (!ctx.cr6.eq) goto loc_82C87D84;
loc_82C87D80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C87D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c87da8
	if (ctx.cr6.eq) goto loc_82C87DA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c87d54
	if (ctx.cr6.lt) goto loc_82C87D54;
loc_82C87DA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C87DA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87DB0"))) PPC_WEAK_FUNC(sub_82C87DB0);
PPC_FUNC_IMPL(__imp__sub_82C87DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// stw r3,-5940(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5940, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C87DBC"))) PPC_WEAK_FUNC(sub_82C87DBC);
PPC_FUNC_IMPL(__imp__sub_82C87DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87DC0"))) PPC_WEAK_FUNC(sub_82C87DC0);
PPC_FUNC_IMPL(__imp__sub_82C87DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C87DC8;
	sub_82CA2BE8(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6e88
	ctx.lr = 0x82C87E04;
	sub_82CA6E88(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// addi r31,r11,22696
	ctx.r31.s64 = ctx.r11.s64 + 22696;
	// lwz r11,22704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22704);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c87e44
	if (!ctx.cr6.eq) goto loc_82C87E44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,22704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22704, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x82ca3700
	ctx.lr = 0x82C87E44;
	sub_82CA3700(ctx, base);
loc_82C87E44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c87e68
	if (!ctx.cr6.gt) goto loc_82C87E68;
	// bl 0x824fe010
	ctx.lr = 0x82C87E58;
	sub_824FE010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f388
	ctx.lr = 0x82C87E60;
	sub_8221F388(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82C87E68:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca4578
	ctx.lr = 0x82C87E78;
	sub_82CA4578(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,-5940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5940);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C87E94"))) PPC_WEAK_FUNC(sub_82C87E94);
PPC_FUNC_IMPL(__imp__sub_82C87E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C87E98"))) PPC_WEAK_FUNC(sub_82C87E98);
PPC_FUNC_IMPL(__imp__sub_82C87E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C87EA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C87EB8;
	sub_82C81E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C87EBC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87ebc
	if (!ctx.cr6.eq) goto loc_82C87EBC;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c87f28
	if (!ctx.cr6.eq) goto loc_82C87F28;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c87f28
	if (ctx.cr6.eq) goto loc_82C87F28;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c87f0c
	if (!ctx.cr6.eq) goto loc_82C87F0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c87d48
	ctx.lr = 0x82C87F00;
	sub_82C87D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c87f28
	if (!ctx.cr6.eq) goto loc_82C87F28;
loc_82C87F0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C87F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C87F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C87F30"))) PPC_WEAK_FUNC(sub_82C87F30);
PPC_FUNC_IMPL(__imp__sub_82C87F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C87F38;
	sub_82CA2BE4(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ca6e88
	ctx.lr = 0x82C87F78;
	sub_82CA6E88(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// addi r31,r11,22708
	ctx.r31.s64 = ctx.r11.s64 + 22708;
	// lwz r11,22716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22716);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c87fb8
	if (!ctx.cr6.eq) goto loc_82C87FB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,22716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22716, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82ca3700
	ctx.lr = 0x82C87FB8;
	sub_82CA3700(ctx, base);
loc_82C87FB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c87fdc
	if (!ctx.cr6.gt) goto loc_82C87FDC;
	// bl 0x824fe010
	ctx.lr = 0x82C87FCC;
	sub_824FE010(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f388
	ctx.lr = 0x82C87FD4;
	sub_8221F388(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82C87FDC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca4578
	ctx.lr = 0x82C87FEC;
	sub_82CA4578(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c988d8
	ctx.lr = 0x82C87FF4;
	sub_82C988D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c81e58
	ctx.lr = 0x82C88004;
	sub_82C81E58(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82c87dc0
	ctx.lr = 0x82C8801C;
	sub_82C87DC0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C88030"))) PPC_WEAK_FUNC(sub_82C88030);
PPC_FUNC_IMPL(__imp__sub_82C88030) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-5952
	ctx.r4.s64 = ctx.r11.s64 + -5952;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ca2968
	ctx.lr = 0x82C88058;
	sub_82CA2968(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c986b0
	ctx.lr = 0x82C88064;
	sub_82C986B0(ctx, base);
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lis r9,-32056
	ctx.r9.s64 = -2100822016;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r10,31904
	ctx.r5.s64 = ctx.r10.s64 + 31904;
	// addi r4,r9,31792
	ctx.r4.s64 = ctx.r9.s64 + 31792;
	// bl 0x82c986d0
	ctx.lr = 0x82C8807C;
	sub_82C986D0(ctx, base);
	// lis r8,-32056
	ctx.r8.s64 = -2100822016;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r8,32408
	ctx.r4.s64 = ctx.r8.s64 + 32408;
	// bl 0x82c986e0
	ctx.lr = 0x82C8808C;
	sub_82C986E0(ctx, base);
	// lis r7,-32024
	ctx.r7.s64 = -2098724864;
	// lis r6,-32056
	ctx.r6.s64 = -2100822016;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,22088
	ctx.r5.s64 = ctx.r7.s64 + 22088;
	// addi r4,r6,32056
	ctx.r4.s64 = ctx.r6.s64 + 32056;
	// bl 0x82c986e8
	ctx.lr = 0x82C880A4;
	sub_82C986E8(ctx, base);
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

__attribute__((alias("__imp__sub_82C880B8"))) PPC_WEAK_FUNC(sub_82C880B8);
PPC_FUNC_IMPL(__imp__sub_82C880B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C880C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82c9b8f8
	ctx.lr = 0x82C880DC;
	sub_82C9B8F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8824c
	if (!ctx.cr6.eq) goto loc_82C8824C;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8233d248
	ctx.lr = 0x82C880EC;
	sub_8233D248(ctx, base);
	// bl 0x82c98940
	ctx.lr = 0x82C880F0;
	sub_82C98940(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C880FC;
	sub_82C81E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82c87f30
	ctx.lr = 0x82C8810C;
	sub_82C87F30(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82c988b0
	ctx.lr = 0x82C88114;
	sub_82C988B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82c88240
	if (!ctx.cr6.lt) goto loc_82C88240;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x82c88158
	if (ctx.cr6.eq) goto loc_82C88158;
loc_82C88130:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82c88158
	if (ctx.cr6.eq) goto loc_82C88158;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82c88158
	if (ctx.cr6.eq) goto loc_82C88158;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82c88130
	if (!ctx.cr6.eq) goto loc_82C88130;
loc_82C88158:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c88168
	if (ctx.cr6.eq) goto loc_82C88168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C88168:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r31,r7,22720
	ctx.r31.s64 = ctx.r7.s64 + 22720;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c881bc
	if (ctx.cr6.eq) goto loc_82C881BC;
	// subf r7,r11,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82C88188:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82c881bc
	if (ctx.cr6.eq) goto loc_82C881BC;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x82c881bc
	if (ctx.cr6.eq) goto loc_82C881BC;
	// cmpwi cr6,r8,4096
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4096, ctx.xer);
	// bge cr6,0x82c881bc
	if (!ctx.cr6.lt) goto loc_82C881BC;
	// stbx r10,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c88188
	if (!ctx.cr6.eq) goto loc_82C88188;
loc_82C881BC:
	// stbx r28,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-21148
	ctx.r30.s64 = ctx.r11.s64 + -21148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c87dc0
	ctx.lr = 0x82C881D4;
	sub_82C87DC0(ctx, base);
	// cmpwi cr6,r29,4094
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4094, ctx.xer);
	// ble cr6,0x82c881e0
	if (!ctx.cr6.gt) goto loc_82C881E0;
	// li r29,4094
	ctx.r29.s64 = 4094;
loc_82C881E0:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82c88224
	if (!ctx.cr6.gt) goto loc_82C88224;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82C881FC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// beq cr6,0x82c8820c
	if (ctx.cr6.eq) goto loc_82C8820C;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82C8820C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c881fc
	if (!ctx.cr0.eq) goto loc_82C881FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c88224
	if (ctx.cr6.eq) goto loc_82C88224;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_82C88224:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r10,94
	ctx.r10.s64 = 94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stbx r10,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// bl 0x82c87dc0
	ctx.lr = 0x82C88240;
	sub_82C87DC0(ctx, base);
loc_82C88240:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
loc_82C8824C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C88254"))) PPC_WEAK_FUNC(sub_82C88254);
PPC_FUNC_IMPL(__imp__sub_82C88254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88258"))) PPC_WEAK_FUNC(sub_82C88258);
PPC_FUNC_IMPL(__imp__sub_82C88258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C88260;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82c825a0
	ctx.lr = 0x82C88278;
	sub_82C825A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11936
	ctx.r4.s64 = ctx.r11.s64 + 11936;
	// bl 0x82ca4890
	ctx.lr = 0x82C88288;
	sub_82CA4890(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c882b8
	if (!ctx.cr6.eq) goto loc_82C882B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-5504
	ctx.r3.s64 = ctx.r11.s64 + -5504;
	// bl 0x82c87dc0
	ctx.lr = 0x82C882A4;
	sub_82C87DC0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C882B8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5338
	ctx.lr = 0x82C882C8;
	sub_82CA5338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5670
	ctx.lr = 0x82C882D0;
	sub_82CA5670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5338
	ctx.lr = 0x82C882E4;
	sub_82CA5338(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c87a50
	ctx.lr = 0x82C882EC;
	sub_82C87A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c88030
	ctx.lr = 0x82C882F8;
	sub_82C88030(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c88350
	if (ctx.cr6.eq) goto loc_82C88350;
loc_82C88300:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x82c88310
	if (ctx.cr6.lt) goto loc_82C88310;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82C88310:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cab340
	ctx.lr = 0x82C88324;
	sub_82CAB340(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82c88370
	if (!ctx.cr6.eq) goto loc_82C88370;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c880b8
	ctx.lr = 0x82C88348;
	sub_82C880B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c88300
	if (!ctx.cr6.eq) goto loc_82C88300;
loc_82C88350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca49d8
	ctx.lr = 0x82C88358;
	sub_82CA49D8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82c9b770
	ctx.lr = 0x82C88360;
	sub_82C9B770(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C88368;
	sub_82C87A68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C88370:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// bl 0x82c87dc0
	ctx.lr = 0x82C8837C;
	sub_82C87DC0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C88390"))) PPC_WEAK_FUNC(sub_82C88390);
PPC_FUNC_IMPL(__imp__sub_82C88390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82C88398;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c883d0
	if (!ctx.cr6.eq) goto loc_82C883D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// bl 0x82c87dc0
	ctx.lr = 0x82C883BC;
	sub_82C87DC0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82C883D0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// addi r4,r11,5792
	ctx.r4.s64 = ctx.r11.s64 + 5792;
	// bl 0x82c825a0
	ctx.lr = 0x82C883E0;
	sub_82C825A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c88030
	ctx.lr = 0x82C883E8;
	sub_82C88030(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c87a50
	ctx.lr = 0x82C883F0;
	sub_82C87A50(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C88408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r31,r3,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// beq cr6,0x82c88488
	if (ctx.cr6.eq) goto loc_82C88488;
loc_82C8841C:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x82c8842c
	if (ctx.cr6.lt) goto loc_82C8842C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C8842C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// clrldi r5,r29,32
	ctx.r5.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C88458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c884a0
	if (!ctx.cr6.eq) goto loc_82C884A0;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x82c880b8
	ctx.lr = 0x82C88480;
	sub_82C880B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c8841c
	if (!ctx.cr6.eq) goto loc_82C8841C;
loc_82C88488:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82c9b770
	ctx.lr = 0x82C88490;
	sub_82C9B770(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C88498;
	sub_82C87A68(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82C884A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// bl 0x82c87dc0
	ctx.lr = 0x82C884AC;
	sub_82C87DC0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82C884C0"))) PPC_WEAK_FUNC(sub_82C884C0);
PPC_FUNC_IMPL(__imp__sub_82C884C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C884C8;
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c884e8
	if (!ctx.cr6.eq) goto loc_82C884E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,-5600
	ctx.r6.s64 = ctx.r11.s64 + -5600;
loc_82C884E8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c825a0
	ctx.lr = 0x82C884F4;
	sub_82C825A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c88030
	ctx.lr = 0x82C884FC;
	sub_82C88030(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c880b8
	ctx.lr = 0x82C88510;
	sub_82C880B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c9b770
	ctx.lr = 0x82C88518;
	sub_82C9B770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C88520"))) PPC_WEAK_FUNC(sub_82C88520);
PPC_FUNC_IMPL(__imp__sub_82C88520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C88528;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C88548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8859c
	if (ctx.cr6.eq) goto loc_82C8859C;
loc_82C88554:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c8859c
	if (ctx.cr6.eq) goto loc_82C8859C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c823d8
	ctx.lr = 0x82C88570;
	sub_82C823D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C88590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c88554
	if (!ctx.cr6.eq) goto loc_82C88554;
loc_82C8859C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C885A4"))) PPC_WEAK_FUNC(sub_82C885A4);
PPC_FUNC_IMPL(__imp__sub_82C885A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C885A8"))) PPC_WEAK_FUNC(sub_82C885A8);
PPC_FUNC_IMPL(__imp__sub_82C885A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C885BC"))) PPC_WEAK_FUNC(sub_82C885BC);
PPC_FUNC_IMPL(__imp__sub_82C885BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C885C0"))) PPC_WEAK_FUNC(sub_82C885C0);
PPC_FUNC_IMPL(__imp__sub_82C885C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C885C8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c879b0
	ctx.lr = 0x82C885E0;
	sub_82C879B0(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87b08
	ctx.lr = 0x82C885EC;
	sub_82C87B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a40
	ctx.lr = 0x82C885F4;
	sub_82C87A40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82cab3c8
	ctx.lr = 0x82C88604;
	sub_82CAB3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stbx r11,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c86f78
	ctx.lr = 0x82C88618;
	sub_82C86F78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87a10
	ctx.lr = 0x82C88620;
	sub_82C87A10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C88628"))) PPC_WEAK_FUNC(sub_82C88628);
PPC_FUNC_IMPL(__imp__sub_82C88628) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c87a50
	sub_82C87A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C8862C"))) PPC_WEAK_FUNC(sub_82C8862C);
PPC_FUNC_IMPL(__imp__sub_82C8862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88630"))) PPC_WEAK_FUNC(sub_82C88630);
PPC_FUNC_IMPL(__imp__sub_82C88630) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c89208
	ctx.lr = 0x82C88658;
	sub_82C89208(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C88674"))) PPC_WEAK_FUNC(sub_82C88674);
PPC_FUNC_IMPL(__imp__sub_82C88674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88678"))) PPC_WEAK_FUNC(sub_82C88678);
PPC_FUNC_IMPL(__imp__sub_82C88678) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x82c87a50
	ctx.lr = 0x82C886A0;
	sub_82C87A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c886d0
	if (ctx.cr6.eq) goto loc_82C886D0;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
loc_82C886D0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C886F0"))) PPC_WEAK_FUNC(sub_82C886F0);
PPC_FUNC_IMPL(__imp__sub_82C886F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82C886F8;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// bl 0x82c87768
	ctx.lr = 0x82C88714;
	sub_82C87768(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c88934
	if (ctx.cr6.eq) goto loc_82C88934;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r9,-27472
	ctx.r21.s64 = ctx.r9.s64 + -27472;
	// addi r20,r8,-5400
	ctx.r20.s64 = ctx.r8.s64 + -5400;
	// addi r15,r7,-5404
	ctx.r15.s64 = ctx.r7.s64 + -5404;
	// addi r14,r6,-17152
	ctx.r14.s64 = ctx.r6.s64 + -17152;
	// addi r16,r5,-6332
	ctx.r16.s64 = ctx.r5.s64 + -6332;
	// addi r17,r4,22552
	ctx.r17.s64 = ctx.r4.s64 + 22552;
	// addi r19,r10,-5416
	ctx.r19.s64 = ctx.r10.s64 + -5416;
	// addi r18,r11,-5420
	ctx.r18.s64 = ctx.r11.s64 + -5420;
loc_82C8876C:
	// addi r27,r26,8
	ctx.r27.s64 = ctx.r26.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C88778;
	sub_82C81E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82c8879c
	if (!ctx.cr6.gt) goto loc_82C8879C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C88788:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88794;
	sub_82C87768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c88788
	if (!ctx.cr0.eq) goto loc_82C88788;
loc_82C8879C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C887AC;
	sub_82C87768(ctx, base);
	// lwz r29,40(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c88804
	if (ctx.cr6.eq) goto loc_82C88804;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble cr6,0x82c88804
	if (!ctx.cr6.gt) goto loc_82C88804;
loc_82C887C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c88f58
	ctx.lr = 0x82C887CC;
	sub_82C88F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82c81e58
	ctx.lr = 0x82C887D8;
	sub_82C81E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C887E4;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C887F8;
	sub_82C87768(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82c887c0
	if (ctx.cr6.lt) goto loc_82C887C0;
loc_82C88804:
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C88810;
	sub_82C81E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82baa130
	ctx.lr = 0x82C8881C;
	sub_82BAA130(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r29,r10,1
	ctx.r29.u64 = ctx.r10.u64 ^ 1;
	// bne cr6,0x82c88844
	if (!ctx.cr6.eq) goto loc_82C88844;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c88844
	if (!ctx.cr6.eq) goto loc_82C88844;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// b 0x82c888a8
	goto loc_82C888A8;
loc_82C88844:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88850;
	sub_82C87768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C88858;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c88898
	if (ctx.cr6.eq) goto loc_82C88898;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82C88868:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c88868
	if (!ctx.cr6.eq) goto loc_82C88868;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c88898
	if (ctx.cr6.eq) goto loc_82C88898;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88898;
	sub_82C87768(ctx, base);
loc_82C88898:
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c888b0
	if (ctx.cr6.eq) goto loc_82C888B0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
loc_82C888A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C888B0;
	sub_82C87768(ctx, base);
loc_82C888B0:
	// lwz r28,20(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c88944
	if (ctx.cr6.eq) goto loc_82C88944;
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r29
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c8891c
	if (!ctx.cr6.lt) goto loc_82C8891C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82c888d8
	if (!ctx.cr6.eq) goto loc_82C888D8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C888D8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c888ec
	if (!ctx.cr6.lt) goto loc_82C888EC;
loc_82C888E0:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c888e0
	if (ctx.cr6.lt) goto loc_82C888E0;
loc_82C888EC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82c8891c
	if (!ctx.cr6.gt) goto loc_82C8891C;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c87a50
	ctx.lr = 0x82C888FC;
	sub_82C87A50(ctx, base);
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C8890C;
	sub_82CA2C60(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C88914;
	sub_82C87A68(ctx, base);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_82C8891C:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stwx r26,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r26.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82C8892C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82c8876c
	if (!ctx.cr6.eq) goto loc_82C8876C;
loc_82C88934:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C8893C;
	sub_82C87A68(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82C88944:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c88968
	if (ctx.cr6.eq) goto loc_82C88968;
	// addic. r31,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82c88968
	if (!ctx.cr0.gt) goto loc_82C88968;
loc_82C88954:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88960;
	sub_82C87768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c88954
	if (!ctx.cr0.eq) goto loc_82C88954;
loc_82C88968:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c81e58
	ctx.lr = 0x82C88970;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88980;
	sub_82C87768(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c88994
	if (ctx.cr6.eq) goto loc_82C88994;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82c8892c
	goto loc_82C8892C;
loc_82C88994:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82C88998:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c8892c
	if (ctx.cr6.eq) goto loc_82C8892C;
	// rlwinm r28,r25,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// lwz r27,-4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bge cr6,0x82c88a0c
	if (!ctx.cr6.lt) goto loc_82C88A0C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82c889c8
	if (!ctx.cr6.eq) goto loc_82C889C8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C889C8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82c889dc
	if (!ctx.cr6.lt) goto loc_82C889DC;
loc_82C889D0:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82c889d0
	if (ctx.cr6.lt) goto loc_82C889D0;
loc_82C889DC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82c88a0c
	if (!ctx.cr6.gt) goto loc_82C88A0C;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c87a50
	ctx.lr = 0x82C889EC;
	sub_82C87A50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82C889FC;
	sub_82CA2C60(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C88A04;
	sub_82C87A68(ctx, base);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_82C88A0C:
	// lwz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c88a34
	if (!ctx.cr6.gt) goto loc_82C88A34;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82C88A20:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88A2C;
	sub_82C87768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c88a20
	if (!ctx.cr0.eq) goto loc_82C88A20;
loc_82C88A34:
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C88A3C;
	sub_82C81E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c87768
	ctx.lr = 0x82C88A4C;
	sub_82C87768(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c88998
	if (ctx.cr6.eq) goto loc_82C88998;
	// b 0x82c8876c
	goto loc_82C8876C;
}

__attribute__((alias("__imp__sub_82C88A58"))) PPC_WEAK_FUNC(sub_82C88A58);
PPC_FUNC_IMPL(__imp__sub_82C88A58) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c89208
	ctx.lr = 0x82C88A78;
	sub_82C89208(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c88aac
	if (ctx.cr6.eq) goto loc_82C88AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c82038
	ctx.lr = 0x82C88A8C;
	sub_82C82038(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c87a68
	ctx.lr = 0x82C88A94;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82c87a68
	ctx.lr = 0x82C88AAC;
	sub_82C87A68(ctx, base);
loc_82C88AAC:
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

__attribute__((alias("__imp__sub_82C88AC0"))) PPC_WEAK_FUNC(sub_82C88AC0);
PPC_FUNC_IMPL(__imp__sub_82C88AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C88AC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c89208
	ctx.lr = 0x82C88AE0;
	sub_82C89208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c88b20
	if (ctx.cr6.eq) goto loc_82C88B20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c82038
	ctx.lr = 0x82C88B04;
	sub_82C82038(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82c87a68
	ctx.lr = 0x82C88B0C;
	sub_82C87A68(ctx, base);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// bl 0x82c87a68
	ctx.lr = 0x82C88B20;
	sub_82C87A68(ctx, base);
loc_82C88B20:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C88B34"))) PPC_WEAK_FUNC(sub_82C88B34);
PPC_FUNC_IMPL(__imp__sub_82C88B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88B38"))) PPC_WEAK_FUNC(sub_82C88B38);
PPC_FUNC_IMPL(__imp__sub_82C88B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C88B40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c87bc0
	ctx.lr = 0x82C88B58;
	sub_82C87BC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r10,r11,-5432
	ctx.r10.s64 = ctx.r11.s64 + -5432;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c874e0
	ctx.lr = 0x82C88B6C;
	sub_82C874E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c88258
	ctx.lr = 0x82C88B7C;
	sub_82C88258(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c88bb0
	if (!ctx.cr6.eq) goto loc_82C88BB0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x830418a8
	ctx.lr = 0x82C88B90;
	sub_830418A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c88ac0
	ctx.lr = 0x82C88B98;
	sub_82C88AC0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82c87538
	ctx.lr = 0x82C88BA4;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C88BB0:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c87538
	ctx.lr = 0x82C88BBC;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C88BC8"))) PPC_WEAK_FUNC(sub_82C88BC8);
PPC_FUNC_IMPL(__imp__sub_82C88BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C88BD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c87bc0
	ctx.lr = 0x82C88BE8;
	sub_82C87BC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r10,r11,-5432
	ctx.r10.s64 = ctx.r11.s64 + -5432;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c874e0
	ctx.lr = 0x82C88BFC;
	sub_82C874E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c88390
	ctx.lr = 0x82C88C0C;
	sub_82C88390(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c88c40
	if (!ctx.cr6.eq) goto loc_82C88C40;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x830418a8
	ctx.lr = 0x82C88C20;
	sub_830418A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c88ac0
	ctx.lr = 0x82C88C28;
	sub_82C88AC0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82c87538
	ctx.lr = 0x82C88C34;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C88C40:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c87538
	ctx.lr = 0x82C88C4C;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C88C58"))) PPC_WEAK_FUNC(sub_82C88C58);
PPC_FUNC_IMPL(__imp__sub_82C88C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C88C60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c87bc0
	ctx.lr = 0x82C88C78;
	sub_82C87BC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r10,r11,-5432
	ctx.r10.s64 = ctx.r11.s64 + -5432;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c874e0
	ctx.lr = 0x82C88C8C;
	sub_82C874E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c884c0
	ctx.lr = 0x82C88CA0;
	sub_82C884C0(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c88cd4
	if (!ctx.cr6.eq) goto loc_82C88CD4;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x830418a8
	ctx.lr = 0x82C88CB4;
	sub_830418A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c88ac0
	ctx.lr = 0x82C88CBC;
	sub_82C88AC0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82c87538
	ctx.lr = 0x82C88CC8;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C88CD4:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c87538
	ctx.lr = 0x82C88CE0;
	sub_82C87538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C88CEC"))) PPC_WEAK_FUNC(sub_82C88CEC);
PPC_FUNC_IMPL(__imp__sub_82C88CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88CF0"))) PPC_WEAK_FUNC(sub_82C88CF0);
PPC_FUNC_IMPL(__imp__sub_82C88CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82c825a0
	sub_82C825A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C88CF8"))) PPC_WEAK_FUNC(sub_82C88CF8);
PPC_FUNC_IMPL(__imp__sub_82C88CF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82c824d8
	sub_82C824D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C88D00"))) PPC_WEAK_FUNC(sub_82C88D00);
PPC_FUNC_IMPL(__imp__sub_82C88D00) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82c823d8
	ctx.lr = 0x82C88D2C;
	sub_82C823D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// bl 0x82c823d8
	ctx.lr = 0x82C88D3C;
	sub_82C823D8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C88D74"))) PPC_WEAK_FUNC(sub_82C88D74);
PPC_FUNC_IMPL(__imp__sub_82C88D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88D78"))) PPC_WEAK_FUNC(sub_82C88D78);
PPC_FUNC_IMPL(__imp__sub_82C88D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c88db4
	if (ctx.cr6.eq) goto loc_82C88DB4;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_82C88DB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C88DDC"))) PPC_WEAK_FUNC(sub_82C88DDC);
PPC_FUNC_IMPL(__imp__sub_82C88DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88DE0"))) PPC_WEAK_FUNC(sub_82C88DE0);
PPC_FUNC_IMPL(__imp__sub_82C88DE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82ca2a08
	ctx.lr = 0x82C88E04;
	sub_82CA2A08(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c88e30
	if (ctx.cr6.eq) goto loc_82C88E30;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82c88e44
	goto loc_82C88E44;
loc_82C88E30:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82C88E44:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C88E64"))) PPC_WEAK_FUNC(sub_82C88E64);
PPC_FUNC_IMPL(__imp__sub_82C88E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88E68"))) PPC_WEAK_FUNC(sub_82C88E68);
PPC_FUNC_IMPL(__imp__sub_82C88E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C88E70;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c88eb4
	if (ctx.cr6.eq) goto loc_82C88EB4;
loc_82C88E90:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C88E98;
	sub_82C81E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caaf08
	ctx.lr = 0x82C88EA0;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c88ed0
	if (ctx.cr6.eq) goto loc_82C88ED0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c88e90
	if (!ctx.cr6.eq) goto loc_82C88E90;
loc_82C88EB4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c88de0
	ctx.lr = 0x82C88EC8;
	sub_82C88DE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C88ED0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82c825a0
	ctx.lr = 0x82C88EDC;
	sub_82C825A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C88EE4"))) PPC_WEAK_FUNC(sub_82C88EE4);
PPC_FUNC_IMPL(__imp__sub_82C88EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88EE8"))) PPC_WEAK_FUNC(sub_82C88EE8);
PPC_FUNC_IMPL(__imp__sub_82C88EE8) {
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
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c88f30
	if (ctx.cr6.eq) goto loc_82C88F30;
loc_82C88F0C:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c81e58
	ctx.lr = 0x82C88F14;
	sub_82C81E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caaf08
	ctx.lr = 0x82C88F1C;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c88f4c
	if (ctx.cr6.eq) goto loc_82C88F4C;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c88f0c
	if (!ctx.cr6.eq) goto loc_82C88F0C;
loc_82C88F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C88F34:
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
loc_82C88F4C:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82c81e58
	ctx.lr = 0x82C88F54;
	sub_82C81E58(ctx, base);
	// b 0x82c88f34
	goto loc_82C88F34;
}

__attribute__((alias("__imp__sub_82C88F58"))) PPC_WEAK_FUNC(sub_82C88F58);
PPC_FUNC_IMPL(__imp__sub_82C88F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C88F68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82c88f68
	if (ctx.cr6.lt) goto loc_82C88F68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C88F84"))) PPC_WEAK_FUNC(sub_82C88F84);
PPC_FUNC_IMPL(__imp__sub_82C88F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C88F88"))) PPC_WEAK_FUNC(sub_82C88F88);
PPC_FUNC_IMPL(__imp__sub_82C88F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C88F90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c8901c
	if (ctx.cr6.eq) goto loc_82C8901C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C88FAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c88fc4
	if (!ctx.cr6.eq) goto loc_82C88FC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c88fd0
	goto loc_82C88FD0;
loc_82C88FC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82C88FD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c88fe8
	if (!ctx.cr6.eq) goto loc_82C88FE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82c88ff4
	goto loc_82C88FF4;
loc_82C88FE8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C88FF4:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82ca29f0
	ctx.lr = 0x82C89010;
	sub_82CA29F0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c88fac
	if (!ctx.cr6.eq) goto loc_82C88FAC;
loc_82C8901C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C89024"))) PPC_WEAK_FUNC(sub_82C89024);
PPC_FUNC_IMPL(__imp__sub_82C89024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89028"))) PPC_WEAK_FUNC(sub_82C89028);
PPC_FUNC_IMPL(__imp__sub_82C89028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C89030;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c89064
	if (ctx.cr6.eq) goto loc_82C89064;
loc_82C89044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829ce870
	ctx.lr = 0x82C89050;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C89058;
	sub_82CA29E8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c89044
	if (!ctx.cr6.eq) goto loc_82C89044;
loc_82C89064:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C8907C"))) PPC_WEAK_FUNC(sub_82C8907C);
PPC_FUNC_IMPL(__imp__sub_82C8907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89080"))) PPC_WEAK_FUNC(sub_82C89080);
PPC_FUNC_IMPL(__imp__sub_82C89080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C89088;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c890f8
	if (ctx.cr6.eq) goto loc_82C890F8;
loc_82C890A0:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c890d0
	if (ctx.cr6.eq) goto loc_82C890D0;
loc_82C890B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x829ce870
	ctx.lr = 0x82C890BC;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C890C4;
	sub_82CA29E8(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c890b0
	if (!ctx.cr6.eq) goto loc_82C890B0;
loc_82C890D0:
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// bl 0x82c89080
	ctx.lr = 0x82C890E4;
	sub_82C89080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c87a68
	ctx.lr = 0x82C890EC;
	sub_82C87A68(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c890a0
	if (!ctx.cr6.eq) goto loc_82C890A0;
loc_82C890F8:
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8910C"))) PPC_WEAK_FUNC(sub_82C8910C);
PPC_FUNC_IMPL(__imp__sub_82C8910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89110"))) PPC_WEAK_FUNC(sub_82C89110);
PPC_FUNC_IMPL(__imp__sub_82C89110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C89118;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c89200
	if (ctx.cr6.eq) goto loc_82C89200;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C89134:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c89110
	ctx.lr = 0x82C89140;
	sub_82C89110(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c89158
	if (!ctx.cr6.eq) goto loc_82C89158;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82c89164
	goto loc_82C89164;
loc_82C89158:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82C89164:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c8917c
	if (!ctx.cr6.eq) goto loc_82C8917C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82c89188
	goto loc_82C89188;
loc_82C8917C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C89188:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82c88f88
	ctx.lr = 0x82C891A8;
	sub_82C88F88(ctx, base);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c891d4
	if (ctx.cr6.eq) goto loc_82C891D4;
loc_82C891B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x829ce870
	ctx.lr = 0x82C891C0;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca29e8
	ctx.lr = 0x82C891C8;
	sub_82CA29E8(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c891b4
	if (!ctx.cr6.eq) goto loc_82C891B4;
loc_82C891D4:
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// bl 0x82c89080
	ctx.lr = 0x82C891E8;
	sub_82C89080(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c89134
	if (!ctx.cr6.eq) goto loc_82C89134;
loc_82C89200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C89208"))) PPC_WEAK_FUNC(sub_82C89208);
PPC_FUNC_IMPL(__imp__sub_82C89208) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c89258
	if (ctx.cr6.eq) goto loc_82C89258;
	// bl 0x82c89110
	ctx.lr = 0x82C89230;
	sub_82C89110(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c88f88
	ctx.lr = 0x82C8923C;
	sub_82C88F88(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82c89028
	ctx.lr = 0x82C89244;
	sub_82C89028(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82c89080
	ctx.lr = 0x82C8924C;
	sub_82C89080(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82C89258:
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

__attribute__((alias("__imp__sub_82C89270"))) PPC_WEAK_FUNC(sub_82C89270);
PPC_FUNC_IMPL(__imp__sub_82C89270) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82c82220
	ctx.lr = 0x82C89294;
	sub_82C82220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c892ac
	if (ctx.cr6.eq) goto loc_82C892AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c88d00
	ctx.lr = 0x82C892A8;
	sub_82C88D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C892AC:
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

__attribute__((alias("__imp__sub_82C892C4"))) PPC_WEAK_FUNC(sub_82C892C4);
PPC_FUNC_IMPL(__imp__sub_82C892C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C892C8"))) PPC_WEAK_FUNC(sub_82C892C8);
PPC_FUNC_IMPL(__imp__sub_82C892C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5348
	ctx.r9.s64 = ctx.r11.s64 + -5348;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C892DC"))) PPC_WEAK_FUNC(sub_82C892DC);
PPC_FUNC_IMPL(__imp__sub_82C892DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C892E0"))) PPC_WEAK_FUNC(sub_82C892E0);
PPC_FUNC_IMPL(__imp__sub_82C892E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C892E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-5348
	ctx.r31.s64 = ctx.r11.s64 + -5348;
loc_82C892FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82caaf80
	ctx.lr = 0x82C89308;
	sub_82CAAF80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8932c
	if (ctx.cr6.eq) goto loc_82C8932C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// blt cr6,0x82c892fc
	if (ctx.cr6.lt) goto loc_82C892FC;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C8932C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C89338"))) PPC_WEAK_FUNC(sub_82C89338);
PPC_FUNC_IMPL(__imp__sub_82C89338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-4144
	ctx.r11.s64 = ctx.r11.s64 + -4144;
	// rlwinm r6,r10,30,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7;
	// addi r5,r11,1536
	ctx.r5.s64 = ctx.r11.s64 + 1536;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rotlwi r9,r3,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// and r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 & ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89388"))) PPC_WEAK_FUNC(sub_82C89388);
PPC_FUNC_IMPL(__imp__sub_82C89388) {
	PPC_FUNC_PROLOGUE();
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r7,-4144
	ctx.r11.s64 = ctx.r7.s64 + -4144;
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r9,r6,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r8,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
	// addi r3,r11,1536
	ctx.r3.s64 = ctx.r11.s64 + 1536;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// lbzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// slw r5,r5,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 & ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C893E4"))) PPC_WEAK_FUNC(sub_82C893E4);
PPC_FUNC_IMPL(__imp__sub_82C893E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C893E8"))) PPC_WEAK_FUNC(sub_82C893E8);
PPC_FUNC_IMPL(__imp__sub_82C893E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-4144
	ctx.r11.s64 = ctx.r11.s64 + -4144;
	// rlwinm r6,r10,30,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7;
	// addi r5,r11,1280
	ctx.r5.s64 = ctx.r11.s64 + 1280;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rotlwi r9,r3,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// and r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 & ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89438"))) PPC_WEAK_FUNC(sub_82C89438);
PPC_FUNC_IMPL(__imp__sub_82C89438) {
	PPC_FUNC_PROLOGUE();
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r7,-4144
	ctx.r11.s64 = ctx.r7.s64 + -4144;
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r9,r6,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r8,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// lbzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// slw r5,r5,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 & ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89494"))) PPC_WEAK_FUNC(sub_82C89494);
PPC_FUNC_IMPL(__imp__sub_82C89494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89498"))) PPC_WEAK_FUNC(sub_82C89498);
PPC_FUNC_IMPL(__imp__sub_82C89498) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,194
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 194, ctx.xer);
	// blt cr6,0x82c894c4
	if (ctx.cr6.lt) goto loc_82C894C4;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c894c4
	if (ctx.cr6.eq) goto loc_82C894C4;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C894C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C894CC"))) PPC_WEAK_FUNC(sub_82C894CC);
PPC_FUNC_IMPL(__imp__sub_82C894CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C894D0"))) PPC_WEAK_FUNC(sub_82C894D0);
PPC_FUNC_IMPL(__imp__sub_82C894D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c89500
	if (ctx.cr6.eq) goto loc_82C89500;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,239
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 239, ctx.xer);
	// bne cr6,0x82c89508
	if (!ctx.cr6.eq) goto loc_82C89508;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r9,191
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 191, ctx.xer);
	// bne cr6,0x82c89508
	if (!ctx.cr6.eq) goto loc_82C89508;
	// cmplwi cr6,r11,189
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 189, ctx.xer);
	// ble cr6,0x82c89520
	if (!ctx.cr6.gt) goto loc_82C89520;
loc_82C89500:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C89508:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82c89500
	if (!ctx.cr6.eq) goto loc_82C89500;
loc_82C89520:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bne cr6,0x82c89548
	if (!ctx.cr6.eq) goto loc_82C89548;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// blt cr6,0x82c89500
	if (ctx.cr6.lt) goto loc_82C89500;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82c89584
	if (!ctx.cr6.eq) goto loc_82C89584;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C89548:
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c89500
	if (ctx.cr6.eq) goto loc_82C89500;
	// cmplwi cr6,r10,237
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 237, ctx.xer);
	// bne cr6,0x82c8956c
	if (!ctx.cr6.eq) goto loc_82C8956C;
	// cmplwi cr6,r11,159
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 159, ctx.xer);
	// bgt cr6,0x82c89500
	if (ctx.cr6.gt) goto loc_82C89500;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C8956C:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c89500
	if (!ctx.cr6.eq) goto loc_82C89500;
loc_82C89584:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8958C"))) PPC_WEAK_FUNC(sub_82C8958C);
PPC_FUNC_IMPL(__imp__sub_82C8958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89590"))) PPC_WEAK_FUNC(sub_82C89590);
PPC_FUNC_IMPL(__imp__sub_82C89590) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c895ec
	if (ctx.cr6.eq) goto loc_82C895EC;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// beq cr6,0x82c895ec
	if (ctx.cr6.eq) goto loc_82C895EC;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c895ec
	if (ctx.cr6.eq) goto loc_82C895EC;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// beq cr6,0x82c895ec
	if (ctx.cr6.eq) goto loc_82C895EC;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bne cr6,0x82c895f4
	if (!ctx.cr6.eq) goto loc_82C895F4;
	// cmplwi cr6,r11,144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 144, ctx.xer);
	// blt cr6,0x82c895ec
	if (ctx.cr6.lt) goto loc_82C895EC;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82c89630
	if (!ctx.cr6.eq) goto loc_82C89630;
loc_82C895EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C895F4:
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c895ec
	if (ctx.cr6.eq) goto loc_82C895EC;
	// cmplwi cr6,r10,244
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 244, ctx.xer);
	// bne cr6,0x82c89618
	if (!ctx.cr6.eq) goto loc_82C89618;
	// cmplwi cr6,r11,143
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 143, ctx.xer);
	// bgt cr6,0x82c895ec
	if (ctx.cr6.gt) goto loc_82C895EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C89618:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c895ec
	if (!ctx.cr6.eq) goto loc_82C895EC;
loc_82C89630:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89638"))) PPC_WEAK_FUNC(sub_82C89638);
PPC_FUNC_IMPL(__imp__sub_82C89638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C89640;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89804
	if (ctx.cr6.eq) goto loc_82C89804;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82c89674
	if (ctx.cr6.eq) goto loc_82C89674;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C89674:
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89804
	if (ctx.cr6.eq) goto loc_82C89804;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C89684:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82c897f4
	if (ctx.cr6.gt) goto loc_82C897F4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-26960
	ctx.r12.s64 = ctx.r12.s64 + -26960;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8981C;
	case 1:
		goto loc_82C8981C;
	case 2:
		goto loc_82C897F4;
	case 3:
		goto loc_82C897F4;
	case 4:
		goto loc_82C897F4;
	case 5:
		goto loc_82C89720;
	case 6:
		goto loc_82C89750;
	case 7:
		goto loc_82C89780;
	case 8:
		goto loc_82C8981C;
	case 9:
		goto loc_82C897F4;
	case 10:
		goto loc_82C897F4;
	case 11:
		goto loc_82C897F4;
	case 12:
		goto loc_82C897F4;
	case 13:
		goto loc_82C897F4;
	case 14:
		goto loc_82C897F4;
	case 15:
		goto loc_82C897F4;
	case 16:
		goto loc_82C897F4;
	case 17:
		goto loc_82C897F4;
	case 18:
		goto loc_82C897F4;
	case 19:
		goto loc_82C897F4;
	case 20:
		goto loc_82C897F4;
	case 21:
		goto loc_82C897F4;
	case 22:
		goto loc_82C897F4;
	case 23:
		goto loc_82C897F4;
	case 24:
		goto loc_82C897F4;
	case 25:
		goto loc_82C897F4;
	case 26:
		goto loc_82C897F4;
	case 27:
		goto loc_82C897B0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-26596(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26596);
	// lwz r22,-26596(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26596);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26848(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26848);
	// lwz r22,-26800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26800);
	// lwz r22,-26752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26752);
	// lwz r22,-26596(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26596);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26636(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26636);
	// lwz r22,-26704(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26704);
loc_82C89720:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c89810
	if (ctx.cr6.lt) goto loc_82C89810;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8973C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8981c
	if (!ctx.cr6.eq) goto loc_82C8981C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c897fc
	goto loc_82C897FC;
loc_82C89750:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c89810
	if (ctx.cr6.lt) goto loc_82C89810;
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8976C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8981c
	if (!ctx.cr6.eq) goto loc_82C8981C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c897fc
	goto loc_82C897FC;
loc_82C89780:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c89810
	if (ctx.cr6.lt) goto loc_82C89810;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8979C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8981c
	if (!ctx.cr6.eq) goto loc_82C8981C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c897fc
	goto loc_82C897FC;
loc_82C897B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89804
	if (ctx.cr6.eq) goto loc_82C89804;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82c897fc
	if (!ctx.cr6.eq) goto loc_82C897FC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89804
	if (ctx.cr6.eq) goto loc_82C89804;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82c8982c
	if (ctx.cr6.eq) goto loc_82C8982C;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C897F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82C897FC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c89684
	if (!ctx.cr6.eq) goto loc_82C89684;
loc_82C89804:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C89810:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8981C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8982C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C89840"))) PPC_WEAK_FUNC(sub_82C89840);
PPC_FUNC_IMPL(__imp__sub_82C89840) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c89850
	if (!ctx.cr6.eq) goto loc_82C89850;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C89850:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82c89a0c
	if (ctx.cr6.gt) {
		sub_82C89A0C(ctx, base);
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-26496
	ctx.r12.s64 = ctx.r12.s64 + -26496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C898A8
		return;
	case 1:
		// ERROR: 0x82C89A0C
		return;
	case 2:
		// ERROR: 0x82C898B8
		return;
	case 3:
		// ERROR: 0x82C89A0C
		return;
	case 4:
		// ERROR: 0x82C898B8
		return;
	case 5:
		// ERROR: 0x82C89A0C
		return;
	case 6:
		// ERROR: 0x82C89A0C
		return;
	case 7:
		// ERROR: 0x82C898A0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C89880"))) PPC_WEAK_FUNC(sub_82C89880);
PPC_FUNC_IMPL(__imp__sub_82C89880) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-26456(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26456);
	// lwz r22,-26100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26100);
	// lwz r22,-26440(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26440);
	// lwz r22,-26100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26100);
	// lwz r22,-26440(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26440);
	// lwz r22,-26100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26100);
	// lwz r22,-26100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26100);
	// lwz r22,-26464(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26464);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c89638
	sub_82C89638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C898A8"))) PPC_WEAK_FUNC(sub_82C898A8);
PPC_FUNC_IMPL(__imp__sub_82C898A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,33
	ctx.r3.s64 = 33;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C898B8"))) PPC_WEAK_FUNC(sub_82C898B8);
PPC_FUNC_IMPL(__imp__sub_82C898B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c89848
	if (ctx.cr6.eq) {
		// ERROR 82C89848
		return;
	}
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bgt cr6,0x82c899f4
	if (ctx.cr6.gt) {
		// ERROR 82C899F4
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-26380
	ctx.r12.s64 = ctx.r12.s64 + -26380;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C89A00
		return;
	case 1:
		// ERROR: 0x82C89A00
		return;
	case 2:
		// ERROR: 0x82C899F4
		return;
	case 3:
		// ERROR: 0x82C899F4
		return;
	case 4:
		// ERROR: 0x82C899F4
		return;
	case 5:
		// ERROR: 0x82C899F4
		return;
	case 6:
		// ERROR: 0x82C899F4
		return;
	case 7:
		// ERROR: 0x82C899F4
		return;
	case 8:
		// ERROR: 0x82C899F4
		return;
	case 9:
		// ERROR: 0x82C899F4
		return;
	case 10:
		// ERROR: 0x82C899F4
		return;
	case 11:
		// ERROR: 0x82C899F4
		return;
	case 12:
		// ERROR: 0x82C89A00
		return;
	case 13:
		// ERROR: 0x82C8994C
		return;
	case 14:
		// ERROR: 0x82C899F4
		return;
	case 15:
		// ERROR: 0x82C8994C
		return;
	case 16:
		// ERROR: 0x82C899F4
		return;
	case 17:
		// ERROR: 0x82C899F4
		return;
	case 18:
		// ERROR: 0x82C899F4
		return;
	case 19:
		// ERROR: 0x82C899F4
		return;
	case 20:
		// ERROR: 0x82C899F4
		return;
	case 21:
		// ERROR: 0x82C89960
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C898F4"))) PPC_WEAK_FUNC(sub_82C898F4);
PPC_FUNC_IMPL(__imp__sub_82C898F4) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26292);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26292);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26272(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c898c4
	if (!ctx.cr6.eq) {
		// ERROR 82C898C4
		return;
	}
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89960"))) PPC_WEAK_FUNC(sub_82C89960);
PPC_FUNC_IMPL(__imp__sub_82C89960) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c89848
	if (ctx.cr6.eq) {
		// ERROR 82C89848
		return;
	}
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bgt cr6,0x82c89a00
	if (ctx.cr6.gt) {
		sub_82C89A00(ctx, base);
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-26212
	ctx.r12.s64 = ctx.r12.s64 + -26212;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C899F4
		return;
	case 1:
		// ERROR: 0x82C899F4
		return;
	case 2:
		// ERROR: 0x82C89A00
		return;
	case 3:
		// ERROR: 0x82C89A00
		return;
	case 4:
		// ERROR: 0x82C89A00
		return;
	case 5:
		// ERROR: 0x82C89A00
		return;
	case 6:
		// ERROR: 0x82C89A00
		return;
	case 7:
		// ERROR: 0x82C89A00
		return;
	case 8:
		// ERROR: 0x82C89A00
		return;
	case 9:
		// ERROR: 0x82C89A00
		return;
	case 10:
		// ERROR: 0x82C89A00
		return;
	case 11:
		// ERROR: 0x82C89A00
		return;
	case 12:
		// ERROR: 0x82C899F4
		return;
	case 13:
		// ERROR: 0x82C89A00
		return;
	case 14:
		// ERROR: 0x82C89A00
		return;
	case 15:
		// ERROR: 0x82C89A00
		return;
	case 16:
		// ERROR: 0x82C89A00
		return;
	case 17:
		// ERROR: 0x82C89A00
		return;
	case 18:
		// ERROR: 0x82C89A00
		return;
	case 19:
		// ERROR: 0x82C89A00
		return;
	case 20:
		// ERROR: 0x82C89A00
		return;
	case 21:
		// ERROR: 0x82C899F4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8999C"))) PPC_WEAK_FUNC(sub_82C8999C);
PPC_FUNC_IMPL(__imp__sub_82C8999C) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26112(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26112);
	// lwz r22,-26124(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26124);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89A00"))) PPC_WEAK_FUNC(sub_82C89A00);
PPC_FUNC_IMPL(__imp__sub_82C89A00) {
	PPC_FUNC_PROLOGUE();
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89A0C"))) PPC_WEAK_FUNC(sub_82C89A0C);
PPC_FUNC_IMPL(__imp__sub_82C89A0C) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89A18"))) PPC_WEAK_FUNC(sub_82C89A18);
PPC_FUNC_IMPL(__imp__sub_82C89A18) {
	PPC_FUNC_PROLOGUE();
	// li r11,11
	ctx.r11.s64 = 11;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82c89aa8
	if (!ctx.cr6.eq) goto loc_82C89AA8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82c89a50
	if (ctx.cr6.eq) goto loc_82C89A50;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82c89a54
	if (ctx.cr6.eq) goto loc_82C89A54;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C89A50:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C89A54:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82c89a74
	if (ctx.cr6.eq) goto loc_82C89A74;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x82c89a78
	if (ctx.cr6.eq) goto loc_82C89A78;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C89A74:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C89A78:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,76
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 76, ctx.xer);
	// beq cr6,0x82c89a98
	if (ctx.cr6.eq) goto loc_82C89A98;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x82c89aa8
	if (!ctx.cr6.eq) goto loc_82C89AA8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c89aa0
	if (ctx.cr6.eq) goto loc_82C89AA0;
loc_82C89A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C89AA0:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82C89AA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C89AB0"))) PPC_WEAK_FUNC(sub_82C89AB0);
PPC_FUNC_IMPL(__imp__sub_82C89AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C89AB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c89ae4
	if (!ctx.cr6.eq) goto loc_82C89AE4;
loc_82C89AD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C89AE4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c89f0c
	if (ctx.cr6.gt) goto loc_82C89F0C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-25836
	ctx.r12.s64 = ctx.r12.s64 + -25836;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C89B80;
	case 1:
		goto loc_82C89BBC;
	case 2:
		goto loc_82C89BEC;
	case 3:
		goto loc_82C89F0C;
	case 4:
		goto loc_82C89F0C;
	case 5:
		goto loc_82C89F0C;
	case 6:
		goto loc_82C89F0C;
	case 7:
		goto loc_82C89F0C;
	case 8:
		goto loc_82C89F0C;
	case 9:
		goto loc_82C89F0C;
	case 10:
		goto loc_82C89F0C;
	case 11:
		goto loc_82C89F0C;
	case 12:
		goto loc_82C89F0C;
	case 13:
		goto loc_82C89F0C;
	case 14:
		goto loc_82C89F0C;
	case 15:
		goto loc_82C89F0C;
	case 16:
		goto loc_82C89F0C;
	case 17:
		goto loc_82C89B78;
	case 18:
		goto loc_82C89F0C;
	case 19:
		goto loc_82C89B78;
	case 20:
		goto loc_82C89F0C;
	case 21:
		goto loc_82C89F0C;
	case 22:
		goto loc_82C89F0C;
	case 23:
		goto loc_82C89F0C;
	case 24:
		goto loc_82C89F0C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-25728(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25728);
	// lwz r22,-25668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25668);
	// lwz r22,-25620(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25620);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-25736(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25736);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-25736(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25736);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
loc_82C89B78:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c89c18
	goto loc_82C89C18;
loc_82C89B80:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c89b98
	if (!ctx.cr6.lt) goto loc_82C89B98;
loc_82C89B8C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C89B98:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c89c18
	goto loc_82C89C18;
loc_82C89BBC:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c89c18
	goto loc_82C89C18;
loc_82C89BEC:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C89C18:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c89ad8
	if (ctx.cr6.eq) goto loc_82C89AD8;
	// subf r30,r31,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_82C89C24:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c89f0c
	if (ctx.cr6.gt) goto loc_82C89F0C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-25516
	ctx.r12.s64 = ctx.r12.s64 + -25516;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C89CC4;
	case 1:
		goto loc_82C89CF4;
	case 2:
		goto loc_82C89D24;
	case 3:
		goto loc_82C89F0C;
	case 4:
		goto loc_82C89D64;
	case 5:
		goto loc_82C89D64;
	case 6:
		goto loc_82C89F0C;
	case 7:
		goto loc_82C89F0C;
	case 8:
		goto loc_82C89F0C;
	case 9:
		goto loc_82C89F0C;
	case 10:
		goto loc_82C89ED8;
	case 11:
		goto loc_82C89F0C;
	case 12:
		goto loc_82C89F0C;
	case 13:
		goto loc_82C89F0C;
	case 14:
		goto loc_82C89F0C;
	case 15:
		goto loc_82C89F0C;
	case 16:
		goto loc_82C89D64;
	case 17:
		goto loc_82C89CB8;
	case 18:
		goto loc_82C89F0C;
	case 19:
		goto loc_82C89CB8;
	case 20:
		goto loc_82C89CB8;
	case 21:
		goto loc_82C89CB8;
	case 22:
		goto loc_82C89CB8;
	case 23:
		goto loc_82C89F0C;
	case 24:
		goto loc_82C89F0C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-25404(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25404);
	// lwz r22,-25356(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25356);
	// lwz r22,-25308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25308);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-25244(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25244);
	// lwz r22,-25244(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25244);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24872(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24872);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-25244(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25244);
	// lwz r22,-25416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25416);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-25416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25416);
	// lwz r22,-25416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25416);
	// lwz r22,-25416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25416);
	// lwz r22,-25416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25416);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
loc_82C89CB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c89d50
	goto loc_82C89D50;
loc_82C89CC4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c89d50
	goto loc_82C89D50;
loc_82C89CF4:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c89d50
	goto loc_82C89D50;
loc_82C89D24:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82C89D50:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c89c24
	if (!ctx.cr6.eq) goto loc_82C89C24;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C89D64:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89a18
	ctx.lr = 0x82C89D78;
	sub_82C89A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c89ad8
	if (ctx.cr6.eq) goto loc_82C89AD8;
	// subf r30,r31,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_82C89D90:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82c89ebc
	if (ctx.cr6.gt) goto loc_82C89EBC;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-25156
	ctx.r12.s64 = ctx.r12.s64 + -25156;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C89F0C;
	case 1:
		goto loc_82C89F0C;
	case 2:
		goto loc_82C89EBC;
	case 3:
		goto loc_82C89EBC;
	case 4:
		goto loc_82C89EBC;
	case 5:
		goto loc_82C89DFC;
	case 6:
		goto loc_82C89E2C;
	case 7:
		goto loc_82C89E5C;
	case 8:
		goto loc_82C89F0C;
	case 9:
		goto loc_82C89EBC;
	case 10:
		goto loc_82C89EBC;
	case 11:
		goto loc_82C89EBC;
	case 12:
		goto loc_82C89EBC;
	case 13:
		goto loc_82C89EBC;
	case 14:
		goto loc_82C89EBC;
	case 15:
		goto loc_82C89E8C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-25092(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25092);
	// lwz r22,-25044(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25044);
	// lwz r22,-24996(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24996);
	// lwz r22,-24820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24900);
	// lwz r22,-24948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24948);
loc_82C89DFC:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c89f0c
	if (!ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c89ec4
	goto loc_82C89EC4;
loc_82C89E2C:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c89f0c
	if (!ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c89ec4
	goto loc_82C89EC4;
loc_82C89E5C:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c89b8c
	if (ctx.cr6.lt) goto loc_82C89B8C;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C89E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c89f0c
	if (!ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c89ec4
	goto loc_82C89EC4;
loc_82C89E8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c89ad8
	if (ctx.cr6.eq) goto loc_82C89AD8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82c89ec4
	if (!ctx.cr6.eq) goto loc_82C89EC4;
loc_82C89EA8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C89EBC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82C89EC4:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c89d90
	if (!ctx.cr6.eq) goto loc_82C89D90;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C89ED8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89a18
	ctx.lr = 0x82C89EEC;
	sub_82C89A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c89f0c
	if (ctx.cr6.eq) goto loc_82C89F0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c89ad8
	if (ctx.cr6.eq) goto loc_82C89AD8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82c89ea8
	if (ctx.cr6.eq) goto loc_82C89EA8;
loc_82C89F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C89F1C"))) PPC_WEAK_FUNC(sub_82C89F1C);
PPC_FUNC_IMPL(__imp__sub_82C89F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C89F20"))) PPC_WEAK_FUNC(sub_82C89F20);
PPC_FUNC_IMPL(__imp__sub_82C89F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C89F28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c89f50
	if (!ctx.cr6.eq) goto loc_82C89F50;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C89F50:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82c8a0f4
	if (ctx.cr6.gt) goto loc_82C8A0F4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-24708
	ctx.r12.s64 = ctx.r12.s64 + -24708;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A07C;
	case 1:
		goto loc_82C8A07C;
	case 2:
		goto loc_82C8A0F4;
	case 3:
		goto loc_82C8A0F4;
	case 4:
		goto loc_82C89FA8;
	case 5:
		goto loc_82C8A048;
	case 6:
		goto loc_82C8A094;
	case 7:
		goto loc_82C8A0C4;
	case 8:
		goto loc_82C8A07C;
	case 9:
		goto loc_82C8A000;
	case 10:
		goto loc_82C8A034;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24452(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24452);
	// lwz r22,-24452(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24452);
	// lwz r22,-24332(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24332);
	// lwz r22,-24332(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24332);
	// lwz r22,-24664(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24664);
	// lwz r22,-24504(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24504);
	// lwz r22,-24428(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24428);
	// lwz r22,-24380(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24380);
	// lwz r22,-24452(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24452);
	// lwz r22,-24576(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24576);
	// lwz r22,-24524(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24524);
loc_82C89FA8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c89fc0
	if (!ctx.cr6.eq) goto loc_82C89FC0;
loc_82C89FB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C89FC0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82c8a0f8
	if (!ctx.cr6.eq) goto loc_82C8A0F8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89fb4
	if (ctx.cr6.eq) goto loc_82C89FB4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82c89fec
	if (ctx.cr6.eq) goto loc_82C89FEC;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x82c8a0f8
	goto loc_82C8A0F8;
loc_82C89FEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A000:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c89fb4
	if (ctx.cr6.eq) goto loc_82C89FB4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82c8a024
	if (!ctx.cr6.eq) goto loc_82C8A024;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C8A024:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A034:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A048:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8a060
	if (!ctx.cr6.lt) goto loc_82C8A060;
loc_82C8A054:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A060:
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a08c
	if (ctx.cr6.eq) goto loc_82C8A08C;
loc_82C8A07C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A08C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8a0f8
	goto loc_82C8A0F8;
loc_82C8A094:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8a054
	if (ctx.cr6.lt) goto loc_82C8A054;
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8a07c
	if (!ctx.cr6.eq) goto loc_82C8A07C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8a0f8
	goto loc_82C8A0F8;
loc_82C8A0C4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8a054
	if (ctx.cr6.lt) goto loc_82C8A054;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8a07c
	if (!ctx.cr6.eq) goto loc_82C8A07C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82c8a0f8
	goto loc_82C8A0F8;
loc_82C8A0F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8A0F8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8a1fc
	if (ctx.cr6.eq) goto loc_82C8A1FC;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8A104:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82c8a1ec
	if (ctx.cr6.gt) goto loc_82C8A1EC;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-24272
	ctx.r12.s64 = ctx.r12.s64 + -24272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A1FC;
	case 1:
		goto loc_82C8A1FC;
	case 2:
		goto loc_82C8A1EC;
	case 3:
		goto loc_82C8A1EC;
	case 4:
		goto loc_82C8A1FC;
	case 5:
		goto loc_82C8A15C;
	case 6:
		goto loc_82C8A18C;
	case 7:
		goto loc_82C8A1BC;
	case 8:
		goto loc_82C8A1FC;
	case 9:
		goto loc_82C8A1FC;
	case 10:
		goto loc_82C8A1FC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r22,-24084(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24084);
	// lwz r22,-24084(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24084);
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r22,-24228(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24228);
	// lwz r22,-24180(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24180);
	// lwz r22,-24132(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24132);
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r22,-24068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
loc_82C8A15C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8a1fc
	if (ctx.cr6.lt) goto loc_82C8A1FC;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8a1fc
	if (!ctx.cr6.eq) goto loc_82C8A1FC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8a1f4
	goto loc_82C8A1F4;
loc_82C8A18C:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8a1fc
	if (ctx.cr6.lt) goto loc_82C8A1FC;
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8a1fc
	if (!ctx.cr6.eq) goto loc_82C8A1FC;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8a1f4
	goto loc_82C8A1F4;
loc_82C8A1BC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8a1fc
	if (ctx.cr6.lt) goto loc_82C8A1FC;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8a1fc
	if (!ctx.cr6.eq) goto loc_82C8A1FC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c8a1f4
	goto loc_82C8A1F4;
loc_82C8A1EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82C8A1F4:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a104
	if (!ctx.cr6.eq) goto loc_82C8A104;
loc_82C8A1FC:
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8A20C"))) PPC_WEAK_FUNC(sub_82C8A20C);
PPC_FUNC_IMPL(__imp__sub_82C8A20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8A210"))) PPC_WEAK_FUNC(sub_82C8A210);
PPC_FUNC_IMPL(__imp__sub_82C8A210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C8A218;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a240
	if (!ctx.cr6.eq) goto loc_82C8A240;
loc_82C8A234:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A240:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8a580
	if (ctx.cr6.gt) goto loc_82C8A580;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-23952
	ctx.r12.s64 = ctx.r12.s64 + -23952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A2DC;
	case 1:
		goto loc_82C8A318;
	case 2:
		goto loc_82C8A348;
	case 3:
		goto loc_82C8A580;
	case 4:
		goto loc_82C8A580;
	case 5:
		goto loc_82C8A580;
	case 6:
		goto loc_82C8A580;
	case 7:
		goto loc_82C8A580;
	case 8:
		goto loc_82C8A580;
	case 9:
		goto loc_82C8A580;
	case 10:
		goto loc_82C8A580;
	case 11:
		goto loc_82C8A580;
	case 12:
		goto loc_82C8A580;
	case 13:
		goto loc_82C8A580;
	case 14:
		goto loc_82C8A580;
	case 15:
		goto loc_82C8A580;
	case 16:
		goto loc_82C8A580;
	case 17:
		goto loc_82C8A2D4;
	case 18:
		goto loc_82C8A580;
	case 19:
		goto loc_82C8A2D4;
	case 20:
		goto loc_82C8A580;
	case 21:
		goto loc_82C8A580;
	case 22:
		goto loc_82C8A580;
	case 23:
		goto loc_82C8A580;
	case 24:
		goto loc_82C8A580;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23844(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23844);
	// lwz r22,-23784(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23784);
	// lwz r22,-23736(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23736);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23852(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23852);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23852(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23852);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
loc_82C8A2D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8a374
	goto loc_82C8A374;
loc_82C8A2DC:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8a2f4
	if (!ctx.cr6.lt) goto loc_82C8A2F4;
loc_82C8A2E8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A2F4:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8a374
	goto loc_82C8A374;
loc_82C8A318:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8a2e8
	if (ctx.cr6.lt) goto loc_82C8A2E8;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8a374
	goto loc_82C8A374;
loc_82C8A348:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8a2e8
	if (ctx.cr6.lt) goto loc_82C8A2E8;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8A374:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8a234
	if (ctx.cr6.eq) goto loc_82C8A234;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8A380:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8a580
	if (ctx.cr6.gt) goto loc_82C8A580;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-23632
	ctx.r12.s64 = ctx.r12.s64 + -23632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A414;
	case 1:
		goto loc_82C8A444;
	case 2:
		goto loc_82C8A474;
	case 3:
		goto loc_82C8A580;
	case 4:
		goto loc_82C8A4C0;
	case 5:
		goto loc_82C8A4C0;
	case 6:
		goto loc_82C8A56C;
	case 7:
		goto loc_82C8A580;
	case 8:
		goto loc_82C8A580;
	case 9:
		goto loc_82C8A580;
	case 10:
		goto loc_82C8A580;
	case 11:
		goto loc_82C8A580;
	case 12:
		goto loc_82C8A580;
	case 13:
		goto loc_82C8A580;
	case 14:
		goto loc_82C8A580;
	case 15:
		goto loc_82C8A580;
	case 16:
		goto loc_82C8A4C0;
	case 17:
		goto loc_82C8A4A4;
	case 18:
		goto loc_82C8A4A4;
	case 19:
		goto loc_82C8A4A4;
	case 20:
		goto loc_82C8A4A4;
	case 21:
		goto loc_82C8A4A4;
	case 22:
		goto loc_82C8A4A4;
	case 23:
		goto loc_82C8A580;
	case 24:
		goto loc_82C8A580;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23532(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23532);
	// lwz r22,-23484(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23484);
	// lwz r22,-23436(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23436);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23360(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23360);
	// lwz r22,-23360(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23360);
	// lwz r22,-23188(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23188);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23360(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23360);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23388(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23388);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	// lwz r22,-23168(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
loc_82C8A414:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8a2e8
	if (ctx.cr6.lt) goto loc_82C8A2E8;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8a4ac
	goto loc_82C8A4AC;
loc_82C8A444:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8a2e8
	if (ctx.cr6.lt) goto loc_82C8A2E8;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8a4ac
	goto loc_82C8A4AC;
loc_82C8A474:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8a2e8
	if (ctx.cr6.lt) goto loc_82C8A2E8;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a580
	if (ctx.cr6.eq) goto loc_82C8A580;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c8a4ac
	goto loc_82C8A4AC;
loc_82C8A4A4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8A4AC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a380
	if (!ctx.cr6.eq) goto loc_82C8A380;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A4C0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8a234
	if (ctx.cr6.eq) goto loc_82C8A234;
loc_82C8A4CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bgt cr6,0x82c8a55c
	if (ctx.cr6.gt) goto loc_82C8A55C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-23300
	ctx.r12.s64 = ctx.r12.s64 + -23300;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C8A530;
	case 1:
		goto loc_82C8A530;
	case 2:
		goto loc_82C8A548;
	case 3:
		goto loc_82C8A55C;
	case 4:
		goto loc_82C8A55C;
	case 5:
		goto loc_82C8A55C;
	case 6:
		goto loc_82C8A55C;
	case 7:
		goto loc_82C8A55C;
	case 8:
		goto loc_82C8A55C;
	case 9:
		goto loc_82C8A55C;
	case 10:
		goto loc_82C8A55C;
	case 11:
		goto loc_82C8A55C;
	case 12:
		goto loc_82C8A530;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23248(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23248);
	// lwz r22,-23248(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23248);
	// lwz r22,-23224(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23224);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23204(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23204);
	// lwz r22,-23248(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23248);
loc_82C8A530:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a4cc
	if (!ctx.cr6.eq) goto loc_82C8A4CC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A548:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A55C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A56C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A580:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8A590"))) PPC_WEAK_FUNC(sub_82C8A590);
PPC_FUNC_IMPL(__imp__sub_82C8A590) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8a608
	if (ctx.cr6.eq) goto loc_82C8A608;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x82c8a61c
	if (!ctx.cr6.eq) goto loc_82C8A61C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8a608
	if (ctx.cr6.eq) goto loc_82C8A608;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// blt cr6,0x82c8a610
	if (ctx.cr6.lt) goto loc_82C8A610;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bgt cr6,0x82c8a610
	if (ctx.cr6.gt) goto loc_82C8A610;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8a608
	if (ctx.cr6.eq) goto loc_82C8A608;
loc_82C8A5D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// beq cr6,0x82c8a684
	if (ctx.cr6.eq) goto loc_82C8A684;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// ble cr6,0x82c8a678
	if (!ctx.cr6.gt) goto loc_82C8A678;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bgt cr6,0x82c8a678
	if (ctx.cr6.gt) goto loc_82C8A678;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8a5d8
	if (!ctx.cr6.eq) goto loc_82C8A5D8;
loc_82C8A608:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C8A610:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C8A61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// beq cr6,0x82c8a63c
	if (ctx.cr6.eq) goto loc_82C8A63C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C8A63C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8a608
	if (ctx.cr6.eq) goto loc_82C8A608;
loc_82C8A648:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// beq cr6,0x82c8a684
	if (ctx.cr6.eq) goto loc_82C8A684;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x82c8a678
	if (!ctx.cr6.eq) goto loc_82C8A678;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8a648
	if (!ctx.cr6.eq) goto loc_82C8A648;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C8A678:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C8A684:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8A694"))) PPC_WEAK_FUNC(sub_82C8A694);
PPC_FUNC_IMPL(__imp__sub_82C8A694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8A698"))) PPC_WEAK_FUNC(sub_82C8A698);
PPC_FUNC_IMPL(__imp__sub_82C8A698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C8A6A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a6c8
	if (!ctx.cr6.eq) goto loc_82C8A6C8;
loc_82C8A6BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A6C8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8a978
	if (ctx.cr6.gt) goto loc_82C8A978;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-22792
	ctx.r12.s64 = ctx.r12.s64 + -22792;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A764;
	case 1:
		goto loc_82C8A7A0;
	case 2:
		goto loc_82C8A7D0;
	case 3:
		goto loc_82C8A978;
	case 4:
		goto loc_82C8A978;
	case 5:
		goto loc_82C8A978;
	case 6:
		goto loc_82C8A978;
	case 7:
		goto loc_82C8A978;
	case 8:
		goto loc_82C8A978;
	case 9:
		goto loc_82C8A978;
	case 10:
		goto loc_82C8A978;
	case 11:
		goto loc_82C8A978;
	case 12:
		goto loc_82C8A978;
	case 13:
		goto loc_82C8A978;
	case 14:
		goto loc_82C8A95C;
	case 15:
		goto loc_82C8A978;
	case 16:
		goto loc_82C8A978;
	case 17:
		goto loc_82C8A75C;
	case 18:
		goto loc_82C8A978;
	case 19:
		goto loc_82C8A75C;
	case 20:
		goto loc_82C8A978;
	case 21:
		goto loc_82C8A978;
	case 22:
		goto loc_82C8A978;
	case 23:
		goto loc_82C8A978;
	case 24:
		goto loc_82C8A978;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-22684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22684);
	// lwz r22,-22624(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22624);
	// lwz r22,-22576(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22576);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22180(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22180);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22692(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22692);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22692(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22692);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
loc_82C8A75C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8a7fc
	goto loc_82C8A7FC;
loc_82C8A764:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8a77c
	if (!ctx.cr6.lt) goto loc_82C8A77C;
loc_82C8A770:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A77C:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8a7fc
	goto loc_82C8A7FC;
loc_82C8A7A0:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8a770
	if (ctx.cr6.lt) goto loc_82C8A770;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8a7fc
	goto loc_82C8A7FC;
loc_82C8A7D0:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8a770
	if (ctx.cr6.lt) goto loc_82C8A770;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8A7FC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8a6bc
	if (ctx.cr6.eq) goto loc_82C8A6BC;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8A808:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8a978
	if (ctx.cr6.gt) goto loc_82C8A978;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-22472
	ctx.r12.s64 = ctx.r12.s64 + -22472;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8A8A8;
	case 1:
		goto loc_82C8A8D8;
	case 2:
		goto loc_82C8A908;
	case 3:
		goto loc_82C8A978;
	case 4:
		goto loc_82C8A978;
	case 5:
		goto loc_82C8A978;
	case 6:
		goto loc_82C8A978;
	case 7:
		goto loc_82C8A978;
	case 8:
		goto loc_82C8A978;
	case 9:
		goto loc_82C8A978;
	case 10:
		goto loc_82C8A978;
	case 11:
		goto loc_82C8A978;
	case 12:
		goto loc_82C8A978;
	case 13:
		goto loc_82C8A948;
	case 14:
		goto loc_82C8A978;
	case 15:
		goto loc_82C8A978;
	case 16:
		goto loc_82C8A978;
	case 17:
		goto loc_82C8A89C;
	case 18:
		goto loc_82C8A978;
	case 19:
		goto loc_82C8A89C;
	case 20:
		goto loc_82C8A89C;
	case 21:
		goto loc_82C8A89C;
	case 22:
		goto loc_82C8A89C;
	case 23:
		goto loc_82C8A978;
	case 24:
		goto loc_82C8A978;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-22360(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22360);
	// lwz r22,-22312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22312);
	// lwz r22,-22264(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22264);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22200(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22200);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22372);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22372);
	// lwz r22,-22372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22372);
	// lwz r22,-22372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22372);
	// lwz r22,-22372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22372);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// lwz r22,-22152(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
loc_82C8A89C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c8a934
	goto loc_82C8A934;
loc_82C8A8A8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8a770
	if (ctx.cr6.lt) goto loc_82C8A770;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8a934
	goto loc_82C8A934;
loc_82C8A8D8:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8a770
	if (ctx.cr6.lt) goto loc_82C8A770;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8a934
	goto loc_82C8A934;
loc_82C8A908:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8a770
	if (ctx.cr6.lt) goto loc_82C8A770;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8A924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8a978
	if (ctx.cr6.eq) goto loc_82C8A978;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82C8A934:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a808
	if (!ctx.cr6.eq) goto loc_82C8A808;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A948:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A95C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a590
	ctx.lr = 0x82C8A970;
	sub_82C8A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8A978:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8A988"))) PPC_WEAK_FUNC(sub_82C8A988);
PPC_FUNC_IMPL(__imp__sub_82C8A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C8A990;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
loc_82C8A9B0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8ab9c
	if (ctx.cr6.gt) goto loc_82C8AB9C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-22048
	ctx.r12.s64 = ctx.r12.s64 + -22048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8AA44;
	case 1:
		goto loc_82C8AA74;
	case 2:
		goto loc_82C8AAA4;
	case 3:
		goto loc_82C8AB9C;
	case 4:
		goto loc_82C8AB64;
	case 5:
		goto loc_82C8AB64;
	case 6:
		goto loc_82C8AB9C;
	case 7:
		goto loc_82C8AB9C;
	case 8:
		goto loc_82C8AB9C;
	case 9:
		goto loc_82C8ABAC;
	case 10:
		goto loc_82C8AB9C;
	case 11:
		goto loc_82C8AB9C;
	case 12:
		goto loc_82C8AB9C;
	case 13:
		goto loc_82C8AB9C;
	case 14:
		goto loc_82C8AB9C;
	case 15:
		goto loc_82C8AB9C;
	case 16:
		goto loc_82C8AB64;
	case 17:
		goto loc_82C8AE2C;
	case 18:
		goto loc_82C8AAB8;
	case 19:
		goto loc_82C8AE2C;
	case 20:
		goto loc_82C8AE2C;
	case 21:
		goto loc_82C8AE2C;
	case 22:
		goto loc_82C8AE2C;
	case 23:
		goto loc_82C8AB9C;
	case 24:
		goto loc_82C8AB9C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21948);
	// lwz r22,-21900(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21900);
	// lwz r22,-21852(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21852);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21660(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21660);
	// lwz r22,-21660(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21660);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21588(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21588);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21660(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21660);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21832(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21832);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
loc_82C8AA44:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8ab9c
	if (ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8aec0
	goto loc_82C8AEC0;
loc_82C8AA74:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8ab9c
	if (ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8aec0
	goto loc_82C8AEC0;
loc_82C8AAA4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// b 0x82c8aea4
	goto loc_82C8AEA4;
loc_82C8AAB8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82c8ab9c
	if (!ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8ab9c
	if (ctx.cr6.gt) goto loc_82C8AB9C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-21760
	ctx.r12.s64 = ctx.r12.s64 + -21760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8AE34;
	case 1:
		goto loc_82C8AE64;
	case 2:
		goto loc_82C8AE94;
	case 3:
		goto loc_82C8AB9C;
	case 4:
		goto loc_82C8AB9C;
	case 5:
		goto loc_82C8AB9C;
	case 6:
		goto loc_82C8AB9C;
	case 7:
		goto loc_82C8AB9C;
	case 8:
		goto loc_82C8AB9C;
	case 9:
		goto loc_82C8AB9C;
	case 10:
		goto loc_82C8AB9C;
	case 11:
		goto loc_82C8AB9C;
	case 12:
		goto loc_82C8AB9C;
	case 13:
		goto loc_82C8AB9C;
	case 14:
		goto loc_82C8AB9C;
	case 15:
		goto loc_82C8AB9C;
	case 16:
		goto loc_82C8AB9C;
	case 17:
		goto loc_82C8AE2C;
	case 18:
		goto loc_82C8AB9C;
	case 19:
		goto loc_82C8AE2C;
	case 20:
		goto loc_82C8AB9C;
	case 21:
		goto loc_82C8AB9C;
	case 22:
		goto loc_82C8AB9C;
	case 23:
		goto loc_82C8AB9C;
	case 24:
		goto loc_82C8AB9C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20940(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20940);
	// lwz r22,-20892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20892);
	// lwz r22,-20844(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20844);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
loc_82C8AB64:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82c8abac
	if (ctx.cr6.eq) goto loc_82C8ABAC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82c8ab9c
	if (ctx.cr6.lt) goto loc_82C8AB9C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x82c8ab64
	if (!ctx.cr6.gt) goto loc_82C8AB64;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82c8ab64
	if (ctx.cr6.eq) goto loc_82C8AB64;
loc_82C8AB9C:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8ABAC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C8ABB0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// beq cr6,0x82c8ac00
	if (ctx.cr6.eq) goto loc_82C8AC00;
	// cmpwi cr6,r29,13
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 13, ctx.xer);
	// beq cr6,0x82c8ac00
	if (ctx.cr6.eq) goto loc_82C8AC00;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x82c8ab9c
	if (ctx.cr6.lt) goto loc_82C8AB9C;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// ble cr6,0x82c8abb0
	if (!ctx.cr6.gt) goto loc_82C8ABB0;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82c8abb0
	if (ctx.cr6.eq) goto loc_82C8ABB0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AC00:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8AC04:
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
loc_82C8AC08:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82c8ad1c
	if (ctx.cr6.eq) goto loc_82C8AD1C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82c8ac00
	if (ctx.cr6.gt) goto loc_82C8AC00;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-21436
	ctx.r12.s64 = ctx.r12.s64 + -21436;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8AB9C;
	case 1:
		goto loc_82C8AB9C;
	case 2:
		goto loc_82C8AB9C;
	case 3:
		goto loc_82C8ACF8;
	case 4:
		goto loc_82C8AC00;
	case 5:
		goto loc_82C8AC68;
	case 6:
		goto loc_82C8AC98;
	case 7:
		goto loc_82C8ACC8;
	case 8:
		goto loc_82C8AB9C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21256);
	// lwz r22,-21504(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21504);
	// lwz r22,-21400(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21400);
	// lwz r22,-21352(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21352);
	// lwz r22,-21304(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21304);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
loc_82C8AC68:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ab9c
	if (!ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8ac04
	goto loc_82C8AC04;
loc_82C8AC98:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8ACB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ab9c
	if (!ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8ac04
	goto loc_82C8AC04;
loc_82C8ACC8:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8ACE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ab9c
	if (!ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82c8ac04
	goto loc_82C8AC04;
loc_82C8ACF8:
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c8a698
	ctx.lr = 0x82C8AD0C;
	sub_82C8A698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c8af30
	if (!ctx.cr6.gt) goto loc_82C8AF30;
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x82c8ac08
	goto loc_82C8AC08;
loc_82C8AD1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82c8ab9c
	if (ctx.cr6.gt) goto loc_82C8AB9C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-21160
	ctx.r12.s64 = ctx.r12.s64 + -21160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8AD8C;
	case 1:
		goto loc_82C8AD8C;
	case 2:
		goto loc_82C8AF1C;
	case 3:
		goto loc_82C8AB9C;
	case 4:
		goto loc_82C8AB9C;
	case 5:
		goto loc_82C8AB9C;
	case 6:
		goto loc_82C8AB9C;
	case 7:
		goto loc_82C8AB9C;
	case 8:
		goto loc_82C8AEE0;
	case 9:
		goto loc_82C8AB9C;
	case 10:
		goto loc_82C8AB9C;
	case 11:
		goto loc_82C8AB9C;
	case 12:
		goto loc_82C8AD8C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
	// lwz r22,-20708(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20708);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-20768(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20768);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
loc_82C8AD8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8ab9c
	if (ctx.cr6.gt) goto loc_82C8AB9C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-21048
	ctx.r12.s64 = ctx.r12.s64 + -21048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8AE34;
	case 1:
		goto loc_82C8AE64;
	case 2:
		goto loc_82C8AE94;
	case 3:
		goto loc_82C8AB9C;
	case 4:
		goto loc_82C8AD8C;
	case 5:
		goto loc_82C8AD8C;
	case 6:
		goto loc_82C8AF1C;
	case 7:
		goto loc_82C8AB9C;
	case 8:
		goto loc_82C8AB9C;
	case 9:
		goto loc_82C8AB9C;
	case 10:
		goto loc_82C8AB9C;
	case 11:
		goto loc_82C8AB9C;
	case 12:
		goto loc_82C8AEE0;
	case 13:
		goto loc_82C8AB9C;
	case 14:
		goto loc_82C8AB9C;
	case 15:
		goto loc_82C8AB9C;
	case 16:
		goto loc_82C8AD8C;
	case 17:
		goto loc_82C8AE2C;
	case 18:
		goto loc_82C8AB9C;
	case 19:
		goto loc_82C8AE2C;
	case 20:
		goto loc_82C8AB9C;
	case 21:
		goto loc_82C8AB9C;
	case 22:
		goto loc_82C8AB9C;
	case 23:
		goto loc_82C8AB9C;
	case 24:
		goto loc_82C8AB9C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20940(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20940);
	// lwz r22,-20892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20892);
	// lwz r22,-20844(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20844);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
	// lwz r22,-20708(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20708);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-20768(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20768);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21108(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21108);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-20948(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20948);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
	// lwz r22,-21604(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21604);
loc_82C8AE2C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8aec0
	goto loc_82C8AEC0;
loc_82C8AE34:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8ab9c
	if (ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8aec0
	goto loc_82C8AEC0;
loc_82C8AE64:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8ab9c
	if (ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8aec0
	goto loc_82C8AEC0;
loc_82C8AE94:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8aed4
	if (ctx.cr6.lt) goto loc_82C8AED4;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
loc_82C8AEA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8AEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8ab9c
	if (ctx.cr6.eq) goto loc_82C8AB9C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8AEC0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8a9b0
	if (!ctx.cr6.eq) goto loc_82C8A9B0;
loc_82C8AEC8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C8AECC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AED4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AEE0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8aec8
	if (ctx.cr6.eq) goto loc_82C8AEC8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82c8af08
	if (ctx.cr6.eq) goto loc_82C8AF08;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AF08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AF1C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AF30:
	// bne cr6,0x82c8aecc
	if (!ctx.cr6.eq) goto loc_82C8AECC;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8AF44"))) PPC_WEAK_FUNC(sub_82C8AF44);
PPC_FUNC_IMPL(__imp__sub_82C8AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8AF48"))) PPC_WEAK_FUNC(sub_82C8AF48);
PPC_FUNC_IMPL(__imp__sub_82C8AF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C8AF50;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8af78
	if (!ctx.cr6.eq) goto loc_82C8AF78;
loc_82C8AF6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8AF78:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8b5e4
	if (ctx.cr6.gt) goto loc_82C8B5E4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-20568
	ctx.r12.s64 = ctx.r12.s64 + -20568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B014;
	case 1:
		goto loc_82C8B050;
	case 2:
		goto loc_82C8B080;
	case 3:
		goto loc_82C8B5E4;
	case 4:
		goto loc_82C8B5E4;
	case 5:
		goto loc_82C8B5E4;
	case 6:
		goto loc_82C8B5E4;
	case 7:
		goto loc_82C8B5E4;
	case 8:
		goto loc_82C8B5E4;
	case 9:
		goto loc_82C8B5E4;
	case 10:
		goto loc_82C8B5AC;
	case 11:
		goto loc_82C8B50C;
	case 12:
		goto loc_82C8B5C8;
	case 13:
		goto loc_82C8B5E4;
	case 14:
		goto loc_82C8B5E4;
	case 15:
		goto loc_82C8B5E4;
	case 16:
		goto loc_82C8B5E4;
	case 17:
		goto loc_82C8B00C;
	case 18:
		goto loc_82C8B5E4;
	case 19:
		goto loc_82C8B00C;
	case 20:
		goto loc_82C8B5E4;
	case 21:
		goto loc_82C8B5E4;
	case 22:
		goto loc_82C8B5E4;
	case 23:
		goto loc_82C8B5E4;
	case 24:
		goto loc_82C8B5E4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20460);
	// lwz r22,-20400(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20400);
	// lwz r22,-20352(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20352);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19028(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19028);
	// lwz r22,-19188(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19188);
	// lwz r22,-19000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19000);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-20468(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20468);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-20468(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20468);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
loc_82C8B00C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8b0ac
	goto loc_82C8B0AC;
loc_82C8B014:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8b02c
	if (!ctx.cr6.lt) goto loc_82C8B02C;
loc_82C8B020:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B02C:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8b0ac
	goto loc_82C8B0AC;
loc_82C8B050:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8b0ac
	goto loc_82C8B0AC;
loc_82C8B080:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8B0AC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8af6c
	if (ctx.cr6.eq) goto loc_82C8AF6C;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8B0BC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8b5e4
	if (ctx.cr6.gt) goto loc_82C8B5E4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-20244
	ctx.r12.s64 = ctx.r12.s64 + -20244;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B150;
	case 1:
		goto loc_82C8B180;
	case 2:
		goto loc_82C8B1B0;
	case 3:
		goto loc_82C8B5E4;
	case 4:
		goto loc_82C8B31C;
	case 5:
		goto loc_82C8B31C;
	case 6:
		goto loc_82C8B4BC;
	case 7:
		goto loc_82C8B5E4;
	case 8:
		goto loc_82C8B5E4;
	case 9:
		goto loc_82C8B5E4;
	case 10:
		goto loc_82C8B5E4;
	case 11:
		goto loc_82C8B5E4;
	case 12:
		goto loc_82C8B4D0;
	case 13:
		goto loc_82C8B5E4;
	case 14:
		goto loc_82C8B5E4;
	case 15:
		goto loc_82C8B5E4;
	case 16:
		goto loc_82C8B31C;
	case 17:
		goto loc_82C8B270;
	case 18:
		goto loc_82C8B1C0;
	case 19:
		goto loc_82C8B270;
	case 20:
		goto loc_82C8B270;
	case 21:
		goto loc_82C8B270;
	case 22:
		goto loc_82C8B270;
	case 23:
		goto loc_82C8B5E4;
	case 24:
		goto loc_82C8B5E4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20144(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20144);
	// lwz r22,-20096(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20096);
	// lwz r22,-20048(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20048);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19684);
	// lwz r22,-19684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19684);
	// lwz r22,-19268(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19268);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19248(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19248);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19684);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-20032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20032);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
loc_82C8B150:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8b308
	goto loc_82C8B308;
loc_82C8B180:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8b308
	goto loc_82C8B308;
loc_82C8B1B0:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// b 0x82c8b2e8
	goto loc_82C8B2E8;
loc_82C8B1C0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82c8b5e4
	if (!ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8af6c
	if (ctx.cr6.eq) goto loc_82C8AF6C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8b5e4
	if (ctx.cr6.gt) goto loc_82C8B5E4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-19956
	ctx.r12.s64 = ctx.r12.s64 + -19956;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B27C;
	case 1:
		goto loc_82C8B2AC;
	case 2:
		goto loc_82C8B2DC;
	case 3:
		goto loc_82C8B5E4;
	case 4:
		goto loc_82C8B5E4;
	case 5:
		goto loc_82C8B5E4;
	case 6:
		goto loc_82C8B5E4;
	case 7:
		goto loc_82C8B5E4;
	case 8:
		goto loc_82C8B5E4;
	case 9:
		goto loc_82C8B5E4;
	case 10:
		goto loc_82C8B5E4;
	case 11:
		goto loc_82C8B5E4;
	case 12:
		goto loc_82C8B5E4;
	case 13:
		goto loc_82C8B5E4;
	case 14:
		goto loc_82C8B5E4;
	case 15:
		goto loc_82C8B5E4;
	case 16:
		goto loc_82C8B5E4;
	case 17:
		goto loc_82C8B270;
	case 18:
		goto loc_82C8B5E4;
	case 19:
		goto loc_82C8B270;
	case 20:
		goto loc_82C8B5E4;
	case 21:
		goto loc_82C8B5E4;
	case 22:
		goto loc_82C8B5E4;
	case 23:
		goto loc_82C8B5E4;
	case 24:
		goto loc_82C8B5E4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-19844(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19844);
	// lwz r22,-19796(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19796);
	// lwz r22,-19748(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19748);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19856);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
loc_82C8B270:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c8b308
	goto loc_82C8B308;
loc_82C8B27C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8b308
	goto loc_82C8B308;
loc_82C8B2AC:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8b308
	goto loc_82C8B308;
loc_82C8B2DC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
loc_82C8B2E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8B308:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8b0bc
	if (!ctx.cr6.eq) goto loc_82C8B0BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B31C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8af6c
	if (ctx.cr6.eq) goto loc_82C8AF6C;
loc_82C8B328:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8b5e4
	if (ctx.cr6.gt) goto loc_82C8B5E4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-19624
	ctx.r12.s64 = ctx.r12.s64 + -19624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B3F0;
	case 1:
		goto loc_82C8B434;
	case 2:
		goto loc_82C8B478;
	case 3:
		goto loc_82C8B5E4;
	case 4:
		goto loc_82C8B3BC;
	case 5:
		goto loc_82C8B3BC;
	case 6:
		goto loc_82C8B4BC;
	case 7:
		goto loc_82C8B5E4;
	case 8:
		goto loc_82C8B5E4;
	case 9:
		goto loc_82C8B5E4;
	case 10:
		goto loc_82C8B5E4;
	case 11:
		goto loc_82C8B5E4;
	case 12:
		goto loc_82C8B4D0;
	case 13:
		goto loc_82C8B5E4;
	case 14:
		goto loc_82C8B5E4;
	case 15:
		goto loc_82C8B5E4;
	case 16:
		goto loc_82C8B3BC;
	case 17:
		goto loc_82C8B3D4;
	case 18:
		goto loc_82C8B5E4;
	case 19:
		goto loc_82C8B3D4;
	case 20:
		goto loc_82C8B5E4;
	case 21:
		goto loc_82C8B5E4;
	case 22:
		goto loc_82C8B5E4;
	case 23:
		goto loc_82C8B5E4;
	case 24:
		goto loc_82C8B5E4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-19472(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19472);
	// lwz r22,-19404(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19404);
	// lwz r22,-19336(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19336);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19524(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19524);
	// lwz r22,-19524(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19524);
	// lwz r22,-19268(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19268);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19248(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19248);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19524(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19524);
	// lwz r22,-19500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19500);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-19500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19500);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
	// lwz r22,-18972(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18972);
loc_82C8B3BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8b328
	if (!ctx.cr6.eq) goto loc_82C8B328;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B3D4:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a988
	ctx.lr = 0x82C8B3E8;
	sub_82C8A988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B3F0:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a988
	ctx.lr = 0x82C8B42C;
	sub_82C8A988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B434:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a988
	ctx.lr = 0x82C8B470;
	sub_82C8A988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B478:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8b020
	if (ctx.cr6.lt) goto loc_82C8B020;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b5e4
	if (ctx.cr6.eq) goto loc_82C8B5E4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a988
	ctx.lr = 0x82C8B4B4;
	sub_82C8A988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B4BC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B4D0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8af6c
	if (ctx.cr6.eq) goto loc_82C8AF6C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82c8b4f8
	if (ctx.cr6.eq) goto loc_82C8B4F8;
loc_82C8B4E8:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B4F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B50C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8af6c
	if (ctx.cr6.eq) goto loc_82C8AF6C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// beq cr6,0x82c8b550
	if (ctx.cr6.eq) goto loc_82C8B550;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82c8b4e8
	if (!ctx.cr6.eq) goto loc_82C8B4E8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89638
	ctx.lr = 0x82C8B548;
	sub_82C89638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B550:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82c8af6c
	if (ctx.cr6.lt) goto loc_82C8AF6C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-2352
	ctx.r9.s64 = ctx.r9.s64 + -2352;
loc_82C8B56C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82c8b59c
	if (!ctx.cr6.eq) goto loc_82C8B59C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82c8b56c
	if (ctx.cr6.lt) goto loc_82C8B56C;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B59C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B5AC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89ab0
	ctx.lr = 0x82C8B5C0;
	sub_82C89AB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B5C8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8a210
	ctx.lr = 0x82C8B5DC;
	sub_82C8A210(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8B5E4:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8B5F4"))) PPC_WEAK_FUNC(sub_82C8B5F4);
PPC_FUNC_IMPL(__imp__sub_82C8B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8B5F8"))) PPC_WEAK_FUNC(sub_82C8B5F8);
PPC_FUNC_IMPL(__imp__sub_82C8B5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C8B600;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c8b628
	if (!ctx.cr6.eq) goto loc_82C8B628;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B628:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82c8b80c
	if (ctx.cr6.gt) goto loc_82C8B80C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-18860
	ctx.r12.s64 = ctx.r12.s64 + -18860;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B794;
	case 1:
		goto loc_82C8B794;
	case 2:
		goto loc_82C8B680;
	case 3:
		goto loc_82C8B69C;
	case 4:
		goto loc_82C8B70C;
	case 5:
		goto loc_82C8B760;
	case 6:
		goto loc_82C8B7AC;
	case 7:
		goto loc_82C8B7DC;
	case 8:
		goto loc_82C8B794;
	case 9:
		goto loc_82C8B6B8;
	case 10:
		goto loc_82C8B6F8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-18540(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18540);
	// lwz r22,-18540(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18540);
	// lwz r22,-18816(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18816);
	// lwz r22,-18788(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18788);
	// lwz r22,-18676(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18676);
	// lwz r22,-18592(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18592);
	// lwz r22,-18516(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18516);
	// lwz r22,-18468(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18468);
	// lwz r22,-18540(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18540);
	// lwz r22,-18760(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18760);
	// lwz r22,-18696(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18696);
loc_82C8B680:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c8af48
	ctx.lr = 0x82C8B694;
	sub_82C8AF48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B69C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c8a698
	ctx.lr = 0x82C8B6B0;
	sub_82C8A698(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B6B8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c8b6d0
	if (!ctx.cr6.eq) goto loc_82C8B6D0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B6D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82c8b6e8
	if (!ctx.cr6.eq) goto loc_82C8B6E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C8B6E8:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B6F8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B70C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c8b724
	if (!ctx.cr6.eq) goto loc_82C8B724;
loc_82C8B718:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B724:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82c8b810
	if (!ctx.cr6.eq) goto loc_82C8B810;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c8b718
	if (ctx.cr6.eq) goto loc_82C8B718;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82c8b750
	if (ctx.cr6.eq) goto loc_82C8B750;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x82c8b810
	goto loc_82C8B810;
loc_82C8B750:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B760:
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8b778
	if (!ctx.cr6.lt) goto loc_82C8B778;
loc_82C8B76C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B778:
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8b7a4
	if (ctx.cr6.eq) goto loc_82C8B7A4;
loc_82C8B794:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B7A4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8b810
	goto loc_82C8B810;
loc_82C8B7AC:
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8b76c
	if (ctx.cr6.lt) goto loc_82C8B76C;
	// lwz r11,360(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8b794
	if (!ctx.cr6.eq) goto loc_82C8B794;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8b810
	goto loc_82C8B810;
loc_82C8B7DC:
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8b76c
	if (ctx.cr6.lt) goto loc_82C8B76C;
	// lwz r11,364(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8b794
	if (!ctx.cr6.eq) goto loc_82C8B794;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82c8b810
	goto loc_82C8B810;
loc_82C8B80C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8B810:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c8b964
	if (ctx.cr6.eq) goto loc_82C8B964;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// subf r30,r31,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r31.s64;
loc_82C8B824:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82c8b94c
	if (ctx.cr6.gt) goto loc_82C8B94C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-18352
	ctx.r12.s64 = ctx.r12.s64 + -18352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8B964;
	case 1:
		goto loc_82C8B964;
	case 2:
		goto loc_82C8B964;
	case 3:
		goto loc_82C8B964;
	case 4:
		goto loc_82C8B924;
	case 5:
		goto loc_82C8B87C;
	case 6:
		goto loc_82C8B8B4;
	case 7:
		goto loc_82C8B8EC;
	case 8:
		goto loc_82C8B964;
	case 9:
		goto loc_82C8B964;
	case 10:
		goto loc_82C8B964;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18140(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18140);
	// lwz r22,-18308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18308);
	// lwz r22,-18252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18252);
	// lwz r22,-18196(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18196);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
	// lwz r22,-18076(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18076);
loc_82C8B87C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8b964
	if (ctx.cr6.lt) goto loc_82C8B964;
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8b964
	if (!ctx.cr6.eq) goto loc_82C8B964;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x82c8b95c
	goto loc_82C8B95C;
loc_82C8B8B4:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8b964
	if (ctx.cr6.lt) goto loc_82C8B964;
	// lwz r11,360(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8b964
	if (!ctx.cr6.eq) goto loc_82C8B964;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x82c8b95c
	goto loc_82C8B95C;
loc_82C8B8EC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8b964
	if (ctx.cr6.lt) goto loc_82C8B964;
	// lwz r11,364(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8B908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8b964
	if (!ctx.cr6.eq) goto loc_82C8B964;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x82c8b95c
	goto loc_82C8B95C;
loc_82C8B924:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c8b964
	if (ctx.cr6.eq) goto loc_82C8B964;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82c8b94c
	if (!ctx.cr6.eq) goto loc_82C8B94C;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c8b964
	if (ctx.cr6.eq) goto loc_82C8B964;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82c8b974
	if (ctx.cr6.eq) goto loc_82C8B974;
loc_82C8B94C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82C8B95C:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c8b824
	if (!ctx.cr6.eq) goto loc_82C8B824;
loc_82C8B964:
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82C8B974:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C8B988"))) PPC_WEAK_FUNC(sub_82C8B988);
PPC_FUNC_IMPL(__imp__sub_82C8B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C8B990;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8b9b8
	if (!ctx.cr6.eq) goto loc_82C8B9B8;
	// li r3,-22
	ctx.r3.s64 = -22;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8B9B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgt cr6,0x82c8bc60
	if (ctx.cr6.gt) goto loc_82C8BC60;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-17944
	ctx.r12.s64 = ctx.r12.s64 + -17944;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8BA58;
	case 1:
		goto loc_82C8BA94;
	case 2:
		goto loc_82C8BAC4;
	case 3:
		goto loc_82C8BC60;
	case 4:
		goto loc_82C8BC50;
	case 5:
		goto loc_82C8BC50;
	case 6:
		goto loc_82C8BC60;
	case 7:
		goto loc_82C8BC60;
	case 8:
		goto loc_82C8BC60;
	case 9:
		goto loc_82C8BC60;
	case 10:
		goto loc_82C8BC60;
	case 11:
		goto loc_82C8BC60;
	case 12:
		goto loc_82C8BC60;
	case 13:
		goto loc_82C8BC60;
	case 14:
		goto loc_82C8BC60;
	case 15:
		goto loc_82C8BC60;
	case 16:
		goto loc_82C8BC50;
	case 17:
		goto loc_82C8BA50;
	case 18:
		goto loc_82C8BC60;
	case 19:
		goto loc_82C8BA50;
	case 20:
		goto loc_82C8BC60;
	case 21:
		goto loc_82C8BC60;
	case 22:
		goto loc_82C8BC60;
	case 23:
		goto loc_82C8BC60;
	case 24:
		goto loc_82C8BC60;
	case 25:
		goto loc_82C8BC50;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-17832(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17832);
	// lwz r22,-17772(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17772);
	// lwz r22,-17724(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17724);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17328);
	// lwz r22,-17328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17328);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17328);
	// lwz r22,-17840(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17840);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17840(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17840);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17328);
loc_82C8BA50:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8baf0
	goto loc_82C8BAF0;
loc_82C8BA58:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8ba70
	if (!ctx.cr6.lt) goto loc_82C8BA70;
loc_82C8BA64:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BA70:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8baf0
	goto loc_82C8BAF0;
loc_82C8BA94:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8ba64
	if (ctx.cr6.lt) goto loc_82C8BA64;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8baf0
	goto loc_82C8BAF0;
loc_82C8BAC4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8ba64
	if (ctx.cr6.lt) goto loc_82C8BA64;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8BAF0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8bc30
	if (ctx.cr6.eq) goto loc_82C8BC30;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8BAFC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8bc60
	if (ctx.cr6.gt) goto loc_82C8BC60;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-17620
	ctx.r12.s64 = ctx.r12.s64 + -17620;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8BB9C;
	case 1:
		goto loc_82C8BBCC;
	case 2:
		goto loc_82C8BBFC;
	case 3:
		goto loc_82C8BC60;
	case 4:
		goto loc_82C8BC60;
	case 5:
		goto loc_82C8BC60;
	case 6:
		goto loc_82C8BC60;
	case 7:
		goto loc_82C8BC60;
	case 8:
		goto loc_82C8BC60;
	case 9:
		goto loc_82C8BC60;
	case 10:
		goto loc_82C8BC60;
	case 11:
		goto loc_82C8BC60;
	case 12:
		goto loc_82C8BC60;
	case 13:
		goto loc_82C8BC3C;
	case 14:
		goto loc_82C8BC60;
	case 15:
		goto loc_82C8BC60;
	case 16:
		goto loc_82C8BC60;
	case 17:
		goto loc_82C8BB90;
	case 18:
		goto loc_82C8BC60;
	case 19:
		goto loc_82C8BB90;
	case 20:
		goto loc_82C8BB90;
	case 21:
		goto loc_82C8BB90;
	case 22:
		goto loc_82C8BB90;
	case 23:
		goto loc_82C8BC60;
	case 24:
		goto loc_82C8BC60;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-17508(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17508);
	// lwz r22,-17460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17460);
	// lwz r22,-17412(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17412);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17348(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17348);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17520);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17520);
	// lwz r22,-17520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17520);
	// lwz r22,-17520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17520);
	// lwz r22,-17520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17520);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// lwz r22,-17312(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
loc_82C8BB90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c8bc28
	goto loc_82C8BC28;
loc_82C8BB9C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8ba64
	if (ctx.cr6.lt) goto loc_82C8BA64;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8bc28
	goto loc_82C8BC28;
loc_82C8BBCC:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8ba64
	if (ctx.cr6.lt) goto loc_82C8BA64;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8bc28
	goto loc_82C8BC28;
loc_82C8BBFC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8ba64
	if (ctx.cr6.lt) goto loc_82C8BA64;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bc60
	if (ctx.cr6.eq) goto loc_82C8BC60;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82C8BC28:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8bafc
	if (!ctx.cr6.eq) goto loc_82C8BAFC;
loc_82C8BC30:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BC3C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BC50:
	// li r3,22
	ctx.r3.s64 = 22;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BC60:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8BC70"))) PPC_WEAK_FUNC(sub_82C8BC70);
PPC_FUNC_IMPL(__imp__sub_82C8BC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C8BC78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8bca0
	if (!ctx.cr6.eq) goto loc_82C8BCA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BCA0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8bf4c
	if (ctx.cr6.gt) goto loc_82C8BF4C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-17200
	ctx.r12.s64 = ctx.r12.s64 + -17200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8BD3C;
	case 1:
		goto loc_82C8BD78;
	case 2:
		goto loc_82C8BDA8;
	case 3:
		goto loc_82C8BF4C;
	case 4:
		goto loc_82C8BF4C;
	case 5:
		goto loc_82C8BF4C;
	case 6:
		goto loc_82C8BF4C;
	case 7:
		goto loc_82C8BF4C;
	case 8:
		goto loc_82C8BF4C;
	case 9:
		goto loc_82C8BF4C;
	case 10:
		goto loc_82C8BF4C;
	case 11:
		goto loc_82C8BF4C;
	case 12:
		goto loc_82C8BF4C;
	case 13:
		goto loc_82C8BF4C;
	case 14:
		goto loc_82C8BF4C;
	case 15:
		goto loc_82C8BF4C;
	case 16:
		goto loc_82C8BF4C;
	case 17:
		goto loc_82C8BD34;
	case 18:
		goto loc_82C8BF4C;
	case 19:
		goto loc_82C8BD34;
	case 20:
		goto loc_82C8BF4C;
	case 21:
		goto loc_82C8BF4C;
	case 22:
		goto loc_82C8BF4C;
	case 23:
		goto loc_82C8BF4C;
	case 24:
		goto loc_82C8BF4C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-17092(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17092);
	// lwz r22,-17032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17032);
	// lwz r22,-16984(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16984);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-17100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17100);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-17100(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17100);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
loc_82C8BD34:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8bdd4
	goto loc_82C8BDD4;
loc_82C8BD3C:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8bd54
	if (!ctx.cr6.lt) goto loc_82C8BD54;
loc_82C8BD48:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BD54:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8bdd4
	goto loc_82C8BDD4;
loc_82C8BD78:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8bd48
	if (ctx.cr6.lt) goto loc_82C8BD48;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8bdd4
	goto loc_82C8BDD4;
loc_82C8BDA8:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8bd48
	if (ctx.cr6.lt) goto loc_82C8BD48;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C8BDD4:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8bf30
	if (ctx.cr6.eq) goto loc_82C8BF30;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8BDE0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x82c8bf4c
	if (ctx.cr6.gt) goto loc_82C8BF4C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-16880
	ctx.r12.s64 = ctx.r12.s64 + -16880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8BE9C;
	case 1:
		goto loc_82C8BECC;
	case 2:
		goto loc_82C8BEFC;
	case 3:
		goto loc_82C8BF4C;
	case 4:
		goto loc_82C8BF3C;
	case 5:
		goto loc_82C8BF3C;
	case 6:
		goto loc_82C8BF3C;
	case 7:
		goto loc_82C8BF4C;
	case 8:
		goto loc_82C8BF4C;
	case 9:
		goto loc_82C8BF4C;
	case 10:
		goto loc_82C8BF4C;
	case 11:
		goto loc_82C8BF4C;
	case 12:
		goto loc_82C8BF4C;
	case 13:
		goto loc_82C8BF4C;
	case 14:
		goto loc_82C8BF4C;
	case 15:
		goto loc_82C8BF4C;
	case 16:
		goto loc_82C8BF3C;
	case 17:
		goto loc_82C8BE90;
	case 18:
		goto loc_82C8BF4C;
	case 19:
		goto loc_82C8BE90;
	case 20:
		goto loc_82C8BE90;
	case 21:
		goto loc_82C8BE90;
	case 22:
		goto loc_82C8BE90;
	case 23:
		goto loc_82C8BF4C;
	case 24:
		goto loc_82C8BF4C;
	case 25:
		goto loc_82C8BF3C;
	case 26:
		goto loc_82C8BF4C;
	case 27:
		goto loc_82C8BF3C;
	case 28:
		goto loc_82C8BF4C;
	case 29:
		goto loc_82C8BF4C;
	case 30:
		goto loc_82C8BF4C;
	case 31:
		goto loc_82C8BF3C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16740(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16740);
	// lwz r22,-16692(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16692);
	// lwz r22,-16644(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16644);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16752);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16752);
	// lwz r22,-16752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16752);
	// lwz r22,-16752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16752);
	// lwz r22,-16752(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16752);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16564);
	// lwz r22,-16580(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16580);
loc_82C8BE90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c8bf28
	goto loc_82C8BF28;
loc_82C8BE9C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8bd48
	if (ctx.cr6.lt) goto loc_82C8BD48;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8bf28
	goto loc_82C8BF28;
loc_82C8BECC:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8bd48
	if (ctx.cr6.lt) goto loc_82C8BD48;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8bf28
	goto loc_82C8BF28;
loc_82C8BEFC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8bd48
	if (ctx.cr6.lt) goto loc_82C8BD48;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8BF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8bf4c
	if (ctx.cr6.eq) goto loc_82C8BF4C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82C8BF28:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8bde0
	if (!ctx.cr6.eq) goto loc_82C8BDE0;
loc_82C8BF30:
	// li r3,-20
	ctx.r3.s64 = -20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BF3C:
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C8BF4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8BF5C"))) PPC_WEAK_FUNC(sub_82C8BF5C);
PPC_FUNC_IMPL(__imp__sub_82C8BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8BF60"))) PPC_WEAK_FUNC(sub_82C8BF60);
PPC_FUNC_IMPL(__imp__sub_82C8BF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C8BF68;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c8c0b4
	if (ctx.cr6.eq) goto loc_82C8C0B4;
	// subf r30,r31,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82C8BF8C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82c8c0a4
	if (ctx.cr6.gt) goto loc_82C8C0A4;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-16456
	ctx.r12.s64 = ctx.r12.s64 + -16456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8C0CC;
	case 1:
		goto loc_82C8C0CC;
	case 2:
		goto loc_82C8C0A4;
	case 3:
		goto loc_82C8C0A4;
	case 4:
		goto loc_82C8C0A4;
	case 5:
		goto loc_82C8BFF0;
	case 6:
		goto loc_82C8C020;
	case 7:
		goto loc_82C8C050;
	case 8:
		goto loc_82C8C0CC;
	case 9:
		goto loc_82C8C0A4;
	case 10:
		goto loc_82C8C0A4;
	case 11:
		goto loc_82C8C0A4;
	case 12:
		goto loc_82C8C080;
	case 13:
		goto loc_82C8C080;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16180(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16180);
	// lwz r22,-16180(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16180);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16400(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16400);
	// lwz r22,-16352(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16352);
	// lwz r22,-16304(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16304);
	// lwz r22,-16180(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16180);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16220(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16220);
	// lwz r22,-16256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16256);
	// lwz r22,-16256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16256);
loc_82C8BFF0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8c0c0
	if (ctx.cr6.lt) goto loc_82C8C0C0;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8c0cc
	if (!ctx.cr6.eq) goto loc_82C8C0CC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8c0ac
	goto loc_82C8C0AC;
loc_82C8C020:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8c0c0
	if (ctx.cr6.lt) goto loc_82C8C0C0;
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8c0cc
	if (!ctx.cr6.eq) goto loc_82C8C0CC;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8c0ac
	goto loc_82C8C0AC;
loc_82C8C050:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8c0c0
	if (ctx.cr6.lt) goto loc_82C8C0C0;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8c0cc
	if (!ctx.cr6.eq) goto loc_82C8C0CC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c8c0ac
	goto loc_82C8C0AC;
loc_82C8C080:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82c8c0ac
	if (!ctx.cr6.eq) goto loc_82C8C0AC;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8c0dc
	if (!ctx.cr6.eq) goto loc_82C8C0DC;
	// li r3,-27
	ctx.r3.s64 = -27;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C0A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82C8C0AC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c8bf8c
	if (!ctx.cr6.eq) goto loc_82C8BF8C;
loc_82C8C0B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C0C0:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C0CC:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82C8C0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C0DC:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82c8c0d0
	if (ctx.cr6.gt) goto loc_82C8C0D0;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-16112
	ctx.r12.s64 = ctx.r12.s64 + -16112;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8C168;
	case 1:
		goto loc_82C8C168;
	case 2:
		goto loc_82C8C168;
	case 3:
		goto loc_82C8C0D0;
	case 4:
		goto loc_82C8C0D0;
	case 5:
		goto loc_82C8C0D0;
	case 6:
		goto loc_82C8C0D0;
	case 7:
		goto loc_82C8C0D0;
	case 8:
		goto loc_82C8C0D0;
	case 9:
		goto loc_82C8C0D0;
	case 10:
		goto loc_82C8C0D0;
	case 11:
		goto loc_82C8C168;
	case 12:
		goto loc_82C8C168;
	case 13:
		goto loc_82C8C0D0;
	case 14:
		goto loc_82C8C0D0;
	case 15:
		goto loc_82C8C0D0;
	case 16:
		goto loc_82C8C0D0;
	case 17:
		goto loc_82C8C0D0;
	case 18:
		goto loc_82C8C0D0;
	case 19:
		goto loc_82C8C0D0;
	case 20:
		goto loc_82C8C0D0;
	case 21:
		goto loc_82C8C168;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16176);
	// lwz r22,-16024(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16024);
loc_82C8C168:
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8C174"))) PPC_WEAK_FUNC(sub_82C8C174);
PPC_FUNC_IMPL(__imp__sub_82C8C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8C178"))) PPC_WEAK_FUNC(sub_82C8C178);
PPC_FUNC_IMPL(__imp__sub_82C8C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C8C180;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c1a8
	if (!ctx.cr6.eq) goto loc_82C8C1A8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C1A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x82c8c9dc
	if (ctx.cr6.gt) goto loc_82C8C9DC;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-15912
	ctx.r12.s64 = ctx.r12.s64 + -15912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8C2A4;
	case 1:
		goto loc_82C8C9DC;
	case 2:
		goto loc_82C8C46C;
	case 3:
		goto loc_82C8C628;
	case 4:
		goto loc_82C8C68C;
	case 5:
		goto loc_82C8C6E4;
	case 6:
		goto loc_82C8C9DC;
	case 7:
		goto loc_82C8C3AC;
	case 8:
		goto loc_82C8C3C8;
	case 9:
		goto loc_82C8C5F8;
	case 10:
		goto loc_82C8C264;
	case 11:
		goto loc_82C8C284;
	case 12:
		goto loc_82C8C9DC;
	case 13:
		goto loc_82C8C9DC;
	case 14:
		goto loc_82C8C9DC;
	case 15:
		goto loc_82C8C9DC;
	case 16:
		goto loc_82C8C9DC;
	case 17:
		goto loc_82C8C60C;
	case 18:
		goto loc_82C8C458;
	case 19:
		goto loc_82C8C3C8;
	case 20:
		goto loc_82C8C73C;
	case 21:
		goto loc_82C8C748;
	case 22:
		goto loc_82C8C73C;
	case 23:
		goto loc_82C8C748;
	case 24:
		goto loc_82C8C748;
	case 25:
		goto loc_82C8C748;
	case 26:
		goto loc_82C8C9DC;
	case 27:
		goto loc_82C8C9DC;
	case 28:
		goto loc_82C8C428;
	case 29:
		goto loc_82C8C4CC;
	case 30:
		goto loc_82C8C4E0;
	case 31:
		goto loc_82C8C9DC;
	case 32:
		goto loc_82C8C9DC;
	case 33:
		goto loc_82C8C444;
	case 34:
		goto loc_82C8C5E4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-15708(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15708);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-15252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15252);
	// lwz r22,-14808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14808);
	// lwz r22,-14708(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14708);
	// lwz r22,-14620(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14620);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-15444(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15444);
	// lwz r22,-15416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15416);
	// lwz r22,-14856(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14856);
	// lwz r22,-15772(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15772);
	// lwz r22,-15740(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15740);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-14836(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14836);
	// lwz r22,-15272(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15272);
	// lwz r22,-15416(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15416);
	// lwz r22,-14532(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14532);
	// lwz r22,-14520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14520);
	// lwz r22,-14532(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14532);
	// lwz r22,-14520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14520);
	// lwz r22,-14520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14520);
	// lwz r22,-14520(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14520);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-15320(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15320);
	// lwz r22,-15156(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15156);
	// lwz r22,-15136(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15136);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-15292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15292);
	// lwz r22,-14876(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14876);
loc_82C8C264:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82c8bf60
	ctx.lr = 0x82C8C27C;
	sub_82C8BF60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C284:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82c8bf60
	ctx.lr = 0x82C8C29C;
	sub_82C8BF60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C2A4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c2bc
	if (!ctx.cr6.eq) goto loc_82C8C2BC;
loc_82C8C2B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C2BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bgt cr6,0x82c8c39c
	if (ctx.cr6.gt) goto loc_82C8C39C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-15636
	ctx.r12.s64 = ctx.r12.s64 + -15636;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C8C388;
	case 1:
		goto loc_82C8C388;
	case 2:
		goto loc_82C8C388;
	case 3:
		goto loc_82C8C39C;
	case 4:
		goto loc_82C8C39C;
	case 5:
		goto loc_82C8C39C;
	case 6:
		goto loc_82C8C39C;
	case 7:
		goto loc_82C8C39C;
	case 8:
		goto loc_82C8C39C;
	case 9:
		goto loc_82C8C39C;
	case 10:
		goto loc_82C8C36C;
	case 11:
		goto loc_82C8C350;
	case 12:
		goto loc_82C8C39C;
	case 13:
		goto loc_82C8C39C;
	case 14:
		goto loc_82C8C39C;
	case 15:
		goto loc_82C8C39C;
	case 16:
		goto loc_82C8C39C;
	case 17:
		goto loc_82C8C388;
	case 18:
		goto loc_82C8C39C;
	case 19:
		goto loc_82C8C388;
	case 20:
		goto loc_82C8C39C;
	case 21:
		goto loc_82C8C39C;
	case 22:
		goto loc_82C8C39C;
	case 23:
		goto loc_82C8C39C;
	case 24:
		goto loc_82C8C388;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15508(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15508);
	// lwz r22,-15536(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15536);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15480(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15480);
loc_82C8C350:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89840
	ctx.lr = 0x82C8C364;
	sub_82C89840(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C36C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c89ab0
	ctx.lr = 0x82C8C380;
	sub_82C89AB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C388:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C39C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C3AC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c3c8
	if (!ctx.cr6.eq) goto loc_82C8C3C8;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,-15
	ctx.r3.s64 = -15;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C3C8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c8c418
	if (ctx.cr6.eq) goto loc_82C8C418;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82C8C3D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82c8c400
	if (ctx.cr6.eq) goto loc_82C8C400;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82c8c408
	if (ctx.cr6.eq) goto loc_82C8C408;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// bne cr6,0x82c8c418
	if (!ctx.cr6.eq) goto loc_82C8C418;
	// b 0x82c8c408
	goto loc_82C8C408;
loc_82C8C400:
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c8c418
	if (ctx.cr6.eq) goto loc_82C8C418;
loc_82C8C408:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c3d8
	if (!ctx.cr6.eq) goto loc_82C8C3D8;
loc_82C8C418:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C428:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8b988
	ctx.lr = 0x82C8C43C;
	sub_82C8B988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C444:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,38
	ctx.r3.s64 = 38;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C458:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C46C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c484
	if (!ctx.cr6.eq) goto loc_82C8C484;
	// li r3,-26
	ctx.r3.s64 = -26;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C484:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// bne cr6,0x82c8c4bc
	if (!ctx.cr6.eq) goto loc_82C8C4BC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c8c2b0
	if (ctx.cr6.eq) goto loc_82C8C2B0;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// bne cr6,0x82c8c4bc
	if (!ctx.cr6.eq) goto loc_82C8C4BC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C4BC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C4CC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C4E0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c4f8
	if (!ctx.cr6.eq) goto loc_82C8C4F8;
	// li r3,-24
	ctx.r3.s64 = -24;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C4F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bgt cr6,0x82c8c39c
	if (ctx.cr6.gt) goto loc_82C8C39C;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-15064
	ctx.r12.s64 = ctx.r12.s64 + -15064;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C8C5D4;
	case 1:
		goto loc_82C8C5D4;
	case 2:
		goto loc_82C8C5D4;
	case 3:
		goto loc_82C8C39C;
	case 4:
		goto loc_82C8C39C;
	case 5:
		goto loc_82C8C39C;
	case 6:
		goto loc_82C8C5AC;
	case 7:
		goto loc_82C8C39C;
	case 8:
		goto loc_82C8C39C;
	case 9:
		goto loc_82C8C39C;
	case 10:
		goto loc_82C8C39C;
	case 11:
		goto loc_82C8C39C;
	case 12:
		goto loc_82C8C5D4;
	case 13:
		goto loc_82C8C39C;
	case 14:
		goto loc_82C8C39C;
	case 15:
		goto loc_82C8C39C;
	case 16:
		goto loc_82C8C39C;
	case 17:
		goto loc_82C8C39C;
	case 18:
		goto loc_82C8C39C;
	case 19:
		goto loc_82C8C39C;
	case 20:
		goto loc_82C8C39C;
	case 21:
		goto loc_82C8C39C;
	case 22:
		goto loc_82C8C39C;
	case 23:
		goto loc_82C8C5D4;
	case 24:
		goto loc_82C8C598;
	case 25:
		goto loc_82C8C5C0;
	case 26:
		goto loc_82C8C5D4;
	case 27:
		goto loc_82C8C5D4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-14932(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14932);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-15460(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-14952(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14952);
	// lwz r22,-14912(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14912);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// lwz r22,-14892(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
loc_82C8C598:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C5AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C5C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,37
	ctx.r3.s64 = 37;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C5D4:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C5E4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C5F8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C60C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c8bc70
	ctx.lr = 0x82C8C620;
	sub_82C8BC70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C628:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82c8c640
	if (!ctx.cr6.lt) goto loc_82C8C640;
loc_82C8C634:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C640:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c668
	if (ctx.cr6.eq) goto loc_82C8C668;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r28,18
	ctx.r28.s64 = 18;
	// b 0x82c8c750
	goto loc_82C8C750;
loc_82C8C668:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82c8c74c
	goto loc_82C8C74C;
loc_82C8C68C:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c8c634
	if (ctx.cr6.lt) goto loc_82C8C634;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c6c0
	if (ctx.cr6.eq) goto loc_82C8C6C0;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// li r28,18
	ctx.r28.s64 = 18;
	// b 0x82c8c750
	goto loc_82C8C750;
loc_82C8C6C0:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82c8c74c
	goto loc_82C8C74C;
loc_82C8C6E4:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82c8c634
	if (ctx.cr6.lt) goto loc_82C8C634;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c718
	if (ctx.cr6.eq) goto loc_82C8C718;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r28,18
	ctx.r28.s64 = 18;
	// b 0x82c8c750
	goto loc_82C8C750;
loc_82C8C718:
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82c8c74c
	goto loc_82C8C74C;
loc_82C8C73C:
	// li r28,18
	ctx.r28.s64 = 18;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82c8c750
	goto loc_82C8C750;
loc_82C8C748:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8C74C:
	// li r28,19
	ctx.r28.s64 = 19;
loc_82C8C750:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c8c860
	if (ctx.cr6.eq) goto loc_82C8C860;
	// subf r30,r31,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_82C8C75C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x82c8c9dc
	if (ctx.cr6.gt) goto loc_82C8C9DC;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-14452
	ctx.r12.s64 = ctx.r12.s64 + -14452;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8C80C;
	case 1:
		goto loc_82C8C918;
	case 2:
		goto loc_82C8C948;
	case 3:
		goto loc_82C8C9DC;
	case 4:
		goto loc_82C8C978;
	case 5:
		goto loc_82C8C978;
	case 6:
		goto loc_82C8C978;
	case 7:
		goto loc_82C8C9DC;
	case 8:
		goto loc_82C8C9DC;
	case 9:
		goto loc_82C8C9DC;
	case 10:
		goto loc_82C8C9C0;
	case 11:
		goto loc_82C8C9DC;
	case 12:
		goto loc_82C8C9DC;
	case 13:
		goto loc_82C8C9DC;
	case 14:
		goto loc_82C8C9DC;
	case 15:
		goto loc_82C8C978;
	case 16:
		goto loc_82C8C978;
	case 17:
		goto loc_82C8C90C;
	case 18:
		goto loc_82C8C83C;
	case 19:
		goto loc_82C8C90C;
	case 20:
		goto loc_82C8C90C;
	case 21:
		goto loc_82C8C90C;
	case 22:
		goto loc_82C8C90C;
	case 23:
		goto loc_82C8C9DC;
	case 24:
		goto loc_82C8C9DC;
	case 25:
		goto loc_82C8C978;
	case 26:
		goto loc_82C8C9DC;
	case 27:
		goto loc_82C8C978;
	case 28:
		goto loc_82C8C9A4;
	case 29:
		goto loc_82C8C988;
	case 30:
		goto loc_82C8C978;
	case 31:
		goto loc_82C8C978;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14324(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14324);
	// lwz r22,-14056(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14056);
	// lwz r22,-14008(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14008);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13888(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13888);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14276);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13916(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13916);
	// lwz r22,-13944(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13944);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
	// lwz r22,-13960(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13960);
loc_82C8C80C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8c634
	if (ctx.cr6.lt) goto loc_82C8C634;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8c858
	goto loc_82C8C858;
loc_82C8C83C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// beq cr6,0x82c8c86c
	if (ctx.cr6.eq) goto loc_82C8C86C;
	// cmpwi cr6,r28,41
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 41, ctx.xer);
	// bne cr6,0x82c8c858
	if (!ctx.cr6.eq) goto loc_82C8C858;
loc_82C8C854:
	// li r28,19
	ctx.r28.s64 = 19;
loc_82C8C858:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c8c75c
	if (!ctx.cr6.eq) goto loc_82C8C75C;
loc_82C8C860:
	// neg r3,r28
	ctx.r3.s64 = -ctx.r28.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C86C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c8c2b0
	if (ctx.cr6.eq) goto loc_82C8C2B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r28,41
	ctx.r28.s64 = 41;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8c854
	if (ctx.cr6.gt) goto loc_82C8C854;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-14168
	ctx.r12.s64 = ctx.r12.s64 + -14168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8C80C;
	case 1:
		goto loc_82C8C918;
	case 2:
		goto loc_82C8C948;
	case 3:
		goto loc_82C8C854;
	case 4:
		goto loc_82C8C854;
	case 5:
		goto loc_82C8C854;
	case 6:
		goto loc_82C8C854;
	case 7:
		goto loc_82C8C854;
	case 8:
		goto loc_82C8C854;
	case 9:
		goto loc_82C8C854;
	case 10:
		goto loc_82C8C854;
	case 11:
		goto loc_82C8C854;
	case 12:
		goto loc_82C8C854;
	case 13:
		goto loc_82C8C854;
	case 14:
		goto loc_82C8C854;
	case 15:
		goto loc_82C8C854;
	case 16:
		goto loc_82C8C854;
	case 17:
		goto loc_82C8C90C;
	case 18:
		goto loc_82C8C854;
	case 19:
		goto loc_82C8C90C;
	case 20:
		goto loc_82C8C90C;
	case 21:
		goto loc_82C8C90C;
	case 22:
		goto loc_82C8C90C;
	case 23:
		goto loc_82C8C854;
	case 24:
		goto loc_82C8C9DC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14324(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14324);
	// lwz r22,-14056(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14056);
	// lwz r22,-14008(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14008);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14068(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14068);
	// lwz r22,-14252(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14252);
	// lwz r22,-13860(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13860);
loc_82C8C90C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x82c8c858
	goto loc_82C8C858;
loc_82C8C918:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8c634
	if (ctx.cr6.lt) goto loc_82C8C634;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8c858
	goto loc_82C8C858;
loc_82C8C948:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8c634
	if (ctx.cr6.lt) goto loc_82C8C634;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8C964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c8c858
	goto loc_82C8C858;
loc_82C8C978:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C988:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C9A4:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C9C0:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// beq cr6,0x82c8c9dc
	if (ctx.cr6.eq) goto loc_82C8C9DC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,30
	ctx.r3.s64 = 30;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8C9DC:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8C9EC"))) PPC_WEAK_FUNC(sub_82C8C9EC);
PPC_FUNC_IMPL(__imp__sub_82C8C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8C9F0"))) PPC_WEAK_FUNC(sub_82C8C9F0);
PPC_FUNC_IMPL(__imp__sub_82C8C9F0) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8ca00
	if (!ctx.cr6.eq) goto loc_82C8CA00;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_82C8CA00:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x82c8ca9c
	if (ctx.cr6.gt) {
		// ERROR 82C8CA9C
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-13772
	ctx.r12.s64 = ctx.r12.s64 + -13772;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C8CAC4
		return;
	case 1:
		// ERROR: 0x82C8CAB4
		return;
	case 2:
		// ERROR: 0x82C8CA9C
		return;
	case 3:
		// ERROR: 0x82C8CA84
		return;
	case 4:
		// ERROR: 0x82C8CA8C
		return;
	case 5:
		// ERROR: 0x82C8CA94
		return;
	case 6:
		// ERROR: 0x82C8CA9C
		return;
	case 7:
		// ERROR: 0x82C8CAE8
		return;
	case 8:
		// ERROR: 0x82C8CAD0
		return;
	case 9:
		// ERROR: 0x82C8CA9C
		return;
	case 10:
		// ERROR: 0x82C8CA9C
		return;
	case 11:
		// ERROR: 0x82C8CA9C
		return;
	case 12:
		// ERROR: 0x82C8CA9C
		return;
	case 13:
		// ERROR: 0x82C8CA9C
		return;
	case 14:
		// ERROR: 0x82C8CA9C
		return;
	case 15:
		// ERROR: 0x82C8CA9C
		return;
	case 16:
		// ERROR: 0x82C8CA9C
		return;
	case 17:
		// ERROR: 0x82C8CA9C
		return;
	case 18:
		// ERROR: 0x82C8CA9C
		return;
	case 19:
		// ERROR: 0x82C8CB28
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8CA34"))) PPC_WEAK_FUNC(sub_82C8CA34);
PPC_FUNC_IMPL(__imp__sub_82C8CA34) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-13628(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13628);
	// lwz r22,-13644(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13644);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13692(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13692);
	// lwz r22,-13684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13684);
	// lwz r22,-13676(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13676);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13592(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13592);
	// lwz r22,-13616(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13616);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13668(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13668);
	// lwz r22,-13528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13528);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// b 0x82c8caa0
	// ERROR 82C8CAA0
	return;
}

__attribute__((alias("__imp__sub_82C8CA8C"))) PPC_WEAK_FUNC(sub_82C8CA8C);
PPC_FUNC_IMPL(__imp__sub_82C8CA8C) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// b 0x82c8caa0
	// ERROR 82C8CAA0
	return;
}

__attribute__((alias("__imp__sub_82C8CA94"))) PPC_WEAK_FUNC(sub_82C8CA94);
PPC_FUNC_IMPL(__imp__sub_82C8CA94) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82c8caa0
	goto loc_82C8CAA0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82C8CAA0:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8ca04
	if (!ctx.cr6.eq) {
		// ERROR 82C8CA04
		return;
	}
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CAB4"))) PPC_WEAK_FUNC(sub_82C8CAB4);
PPC_FUNC_IMPL(__imp__sub_82C8CAB4) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8caa8
	if (!ctx.cr6.eq) {
		// ERROR 82C8CAA8
		return;
	}
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8a698
	sub_82C8A698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C8CAC4"))) PPC_WEAK_FUNC(sub_82C8CAC4);
PPC_FUNC_IMPL(__imp__sub_82C8CAC4) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CAD0"))) PPC_WEAK_FUNC(sub_82C8CAD0);
PPC_FUNC_IMPL(__imp__sub_82C8CAD0) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8caa8
	if (!ctx.cr6.eq) {
		// ERROR 82C8CAA8
		return;
	}
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CAE8"))) PPC_WEAK_FUNC(sub_82C8CAE8);
PPC_FUNC_IMPL(__imp__sub_82C8CAE8) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8caa8
	if (!ctx.cr6.eq) {
		// ERROR 82C8CAA8
		return;
	}
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8cb04
	if (!ctx.cr6.eq) goto loc_82C8CB04;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_82C8CB04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82c8cb1c
	if (!ctx.cr6.eq) goto loc_82C8CB1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C8CB1C:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CB28"))) PPC_WEAK_FUNC(sub_82C8CB28);
PPC_FUNC_IMPL(__imp__sub_82C8CB28) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8caa8
	if (!ctx.cr6.eq) {
		// ERROR 82C8CAA8
		return;
	}
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,39
	ctx.r3.s64 = 39;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CB40"))) PPC_WEAK_FUNC(sub_82C8CB40);
PPC_FUNC_IMPL(__imp__sub_82C8CB40) {
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
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8cb68
	if (!ctx.cr6.eq) goto loc_82C8CB68;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CB68:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82C8CB6C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82c8cc24
	if (ctx.cr6.gt) goto loc_82C8CC24;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-13412
	ctx.r12.s64 = ctx.r12.s64 + -13412;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8CC48;
	case 1:
		goto loc_82C8CC24;
	case 2:
		goto loc_82C8CC0C;
	case 3:
		goto loc_82C8CC14;
	case 4:
		goto loc_82C8CC1C;
	case 5:
		goto loc_82C8CC24;
	case 6:
		goto loc_82C8CCB8;
	case 7:
		goto loc_82C8CC94;
	case 8:
		goto loc_82C8CC24;
	case 9:
		goto loc_82C8CC24;
	case 10:
		goto loc_82C8CC24;
	case 11:
		goto loc_82C8CC24;
	case 12:
		goto loc_82C8CC24;
	case 13:
		goto loc_82C8CC24;
	case 14:
		goto loc_82C8CC24;
	case 15:
		goto loc_82C8CC24;
	case 16:
		goto loc_82C8CC24;
	case 17:
		goto loc_82C8CC24;
	case 18:
		goto loc_82C8CC24;
	case 19:
		goto loc_82C8CC24;
	case 20:
		goto loc_82C8CC24;
	case 21:
		goto loc_82C8CC24;
	case 22:
		goto loc_82C8CC24;
	case 23:
		goto loc_82C8CC24;
	case 24:
		goto loc_82C8CC24;
	case 25:
		goto loc_82C8CC24;
	case 26:
		goto loc_82C8CC24;
	case 27:
		goto loc_82C8CC68;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13240(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13240);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13300(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13300);
	// lwz r22,-13292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13292);
	// lwz r22,-13284(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13284);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13128(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13128);
	// lwz r22,-13164(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13164);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13276(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13276);
	// lwz r22,-13208(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13208);
loc_82C8CC0C:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// b 0x82c8cc28
	goto loc_82C8CC28;
loc_82C8CC14:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// b 0x82c8cc28
	goto loc_82C8CC28;
loc_82C8CC1C:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82c8cc28
	goto loc_82C8CC28;
loc_82C8CC24:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82C8CC28:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8cb6c
	if (!ctx.cr6.eq) goto loc_82C8CB6C;
loc_82C8CC30:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// li r3,6
	ctx.r3.s64 = 6;
loc_82C8CC38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CC48:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8cc30
	if (!ctx.cr6.eq) goto loc_82C8CC30;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bl 0x82c8a698
	ctx.lr = 0x82C8CC58;
	sub_82C8A698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CC68:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8cc30
	if (!ctx.cr6.eq) goto loc_82C8CC30;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bl 0x82c8b988
	ctx.lr = 0x82C8CC78;
	sub_82C8B988(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82c8cc38
	if (!ctx.cr6.eq) goto loc_82C8CC38;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CC94:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8cc30
	if (!ctx.cr6.eq) goto loc_82C8CC30;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CCB8:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8cc30
	if (!ctx.cr6.eq) goto loc_82C8CC30;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8cce0
	if (!ctx.cr6.eq) goto loc_82C8CCE0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C8CCE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82c8ccf8
	if (!ctx.cr6.eq) goto loc_82C8CCF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C8CCF8:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CD10"))) PPC_WEAK_FUNC(sub_82C8CD10);
PPC_FUNC_IMPL(__imp__sub_82C8CD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C8CD18;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c8ce68
	if (ctx.cr6.eq) goto loc_82C8CE68;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82C8CD3C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82c8ce58
	if (ctx.cr6.gt) goto loc_82C8CE58;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-12952
	ctx.r12.s64 = ctx.r12.s64 + -12952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8CEE0;
	case 1:
		goto loc_82C8CEE0;
	case 2:
		goto loc_82C8CE1C;
	case 3:
		goto loc_82C8CE58;
	case 4:
		goto loc_82C8CE74;
	case 5:
		goto loc_82C8CD8C;
	case 6:
		goto loc_82C8CDBC;
	case 7:
		goto loc_82C8CDEC;
	case 8:
		goto loc_82C8CEE0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-12576(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12576);
	// lwz r22,-12576(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12576);
	// lwz r22,-12772(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12772);
	// lwz r22,-12712(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12712);
	// lwz r22,-12684(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12684);
	// lwz r22,-12916(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12916);
	// lwz r22,-12868(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12868);
	// lwz r22,-12820(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12820);
	// lwz r22,-12576(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12576);
loc_82C8CD8C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c8cec4
	if (ctx.cr6.lt) goto loc_82C8CEC4;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8CDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ced0
	if (!ctx.cr6.eq) goto loc_82C8CED0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82c8ce60
	goto loc_82C8CE60;
loc_82C8CDBC:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82c8cec4
	if (ctx.cr6.lt) goto loc_82C8CEC4;
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8CDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ced0
	if (!ctx.cr6.eq) goto loc_82C8CED0;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x82c8ce60
	goto loc_82C8CE60;
loc_82C8CDEC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82c8cec4
	if (ctx.cr6.lt) goto loc_82C8CEC4;
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C8CE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c8ced0
	if (!ctx.cr6.eq) goto loc_82C8CED0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// b 0x82c8ce60
	goto loc_82C8CE60;
loc_82C8CE1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c8ce68
	if (ctx.cr6.eq) goto loc_82C8CE68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x82c8ce60
	if (!ctx.cr6.eq) goto loc_82C8CE60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c8ce68
	if (ctx.cr6.eq) goto loc_82C8CE68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82c8ce60
	if (!ctx.cr6.eq) goto loc_82C8CE60;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82C8CE58:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C8CE60:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82c8cd3c
	if (!ctx.cr6.eq) goto loc_82C8CD3C;
loc_82C8CE68:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8CE74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c8ce68
	if (ctx.cr6.eq) goto loc_82C8CE68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82c8ce60
	if (!ctx.cr6.eq) goto loc_82C8CE60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c8ce68
	if (ctx.cr6.eq) goto loc_82C8CE68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82c8ce60
	if (!ctx.cr6.eq) goto loc_82C8CE60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c8cef0
	if (ctx.cr6.eq) goto loc_82C8CEF0;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// b 0x82c8ce60
	goto loc_82C8CE60;
loc_82C8CEC4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8CED0:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8CEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C8CEF0:
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C8CF00"))) PPC_WEAK_FUNC(sub_82C8CF00);
PPC_FUNC_IMPL(__imp__sub_82C8CF00) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82c8cff8
	if (ctx.cr6.eq) {
		// ERROR 82C8CFF8
		return;
	}
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// cmplwi cr6,r9,26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 26, ctx.xer);
	// bgt cr6,0x82c8cfd8
	if (ctx.cr6.gt) {
		// ERROR 82C8CFD8
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-12480
	ctx.r12.s64 = ctx.r12.s64 + -12480;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		// ERROR: 0x82C8CFEC
		return;
	case 1:
		// ERROR: 0x82C8CFEC
		return;
	case 2:
		// ERROR: 0x82C8CFD8
		return;
	case 3:
		// ERROR: 0x82C8CFD8
		return;
	case 4:
		// ERROR: 0x82C8CFEC
		return;
	case 5:
		// ERROR: 0x82C8CFEC
		return;
	case 6:
		// ERROR: 0x82C8CFEC
		return;
	case 7:
		// ERROR: 0x82C8CFEC
		return;
	case 8:
		// ERROR: 0x82C8CFEC
		return;
	case 9:
		// ERROR: 0x82C8CFEC
		return;
	case 10:
		// ERROR: 0x82C8CFEC
		return;
	case 11:
		// ERROR: 0x82C8CFD8
		return;
	case 12:
		// ERROR: 0x82C8CFAC
		return;
	case 13:
		// ERROR: 0x82C8CFC4
		return;
	case 14:
		// ERROR: 0x82C8CFEC
		return;
	case 15:
		// ERROR: 0x82C8CFEC
		return;
	case 16:
		// ERROR: 0x82C8CFEC
		return;
	case 17:
		// ERROR: 0x82C8CFC4
		return;
	case 18:
		// ERROR: 0x82C8CFEC
		return;
	case 19:
		// ERROR: 0x82C8CFD8
		return;
	case 20:
		// ERROR: 0x82C8CFD8
		return;
	case 21:
		// ERROR: 0x82C8CFEC
		return;
	case 22:
		// ERROR: 0x82C8CFEC
		return;
	case 23:
		// ERROR: 0x82C8CFEC
		return;
	case 24:
		// ERROR: 0x82C8CFEC
		return;
	case 25:
		// ERROR: 0x82C8CFEC
		return;
	case 26:
		// ERROR: 0x82C8CFEC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8CF40"))) PPC_WEAK_FUNC(sub_82C8CF40);
PPC_FUNC_IMPL(__imp__sub_82C8CF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12328);
	// lwz r22,-12328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12328);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12328);
	// lwz r22,-12372(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12372);
	// lwz r22,-12348(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12348);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12348(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12348);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12328);
	// lwz r22,-12328(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12328);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// lwz r22,-12308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12308);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82c8cfec
	if (!ctx.cr6.eq) {
		// ERROR 82C8CFEC
		return;
	}
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8CFC4"))) PPC_WEAK_FUNC(sub_82C8CFC4);
PPC_FUNC_IMPL(__imp__sub_82C8CFC4) {
	PPC_FUNC_PROLOGUE();
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r7,r9,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82c8cfec
	if (ctx.cr6.eq) goto loc_82C8CFEC;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x82c8cfec
	if (ctx.cr6.eq) goto loc_82C8CFEC;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x82c8cfb8
	if (!ctx.cr6.eq) {
		// ERROR 82C8CFB8
		return;
	}
loc_82C8CFEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c8cf10
	if (!ctx.cr6.eq) {
		// ERROR 82C8CF10
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D000"))) PPC_WEAK_FUNC(sub_82C8D000);
PPC_FUNC_IMPL(__imp__sub_82C8D000) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C8D008;
	sub_82CA2BEC(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
loc_82C8D024:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82c8d2dc
	if (ctx.cr6.gt) goto loc_82C8D2DC;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-12204
	ctx.r12.s64 = ctx.r12.s64 + -12204;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C8D2BC;
	case 1:
		goto loc_82C8D2DC;
	case 2:
		goto loc_82C8D0C0;
	case 3:
		goto loc_82C8D0F0;
	case 4:
		goto loc_82C8D120;
	case 5:
		goto loc_82C8D2DC;
	case 6:
		goto loc_82C8D29C;
	case 7:
		goto loc_82C8D29C;
	case 8:
		goto loc_82C8D2D4;
	case 9:
		goto loc_82C8D178;
	case 10:
		goto loc_82C8D1CC;
	case 11:
		goto loc_82C8D2DC;
	case 12:
		goto loc_82C8D2DC;
	case 13:
		goto loc_82C8D2DC;
	case 14:
		goto loc_82C8D2D4;
	case 15:
		goto loc_82C8D2DC;
	case 16:
		goto loc_82C8D2DC;
	case 17:
		goto loc_82C8D2DC;
	case 18:
		goto loc_82C8D220;
	case 19:
		goto loc_82C8D150;
	case 20:
		goto loc_82C8D2DC;
	case 21:
		goto loc_82C8D150;
	case 22:
		goto loc_82C8D2DC;
	case 23:
		goto loc_82C8D2DC;
	case 24:
		goto loc_82C8D2DC;
	case 25:
		goto loc_82C8D2DC;
	case 26:
		goto loc_82C8D150;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-11588(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11588);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-12096(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12096);
	// lwz r22,-12048(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12048);
	// lwz r22,-12000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12000);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11620(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11620);
	// lwz r22,-11620(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11620);
	// lwz r22,-11564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11564);
	// lwz r22,-11912(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11912);
	// lwz r22,-11828(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11828);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11564(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11564);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11744(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11744);
	// lwz r22,-11952(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11952);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11952(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11952);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11556(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11556);
	// lwz r22,-11952(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11952);
loc_82C8D0C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c8d0dc
	if (!ctx.cr6.eq) goto loc_82C8D0DC;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d0d8
	if (!ctx.cr6.lt) goto loc_82C8D0D8;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stb r30,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r30.u8);
loc_82C8D0D8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82C8D0DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D0F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c8d10c
	if (!ctx.cr6.eq) goto loc_82C8D10C;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d108
	if (!ctx.cr6.lt) goto loc_82C8D108;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stb r30,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r30.u8);
loc_82C8D108:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82C8D10C:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D120:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c8d13c
	if (!ctx.cr6.eq) goto loc_82C8D13C;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d138
	if (!ctx.cr6.lt) goto loc_82C8D138;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stb r30,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r30.u8);
loc_82C8D138:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82C8D13C:
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D150:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d168
	if (!ctx.cr6.lt) goto loc_82C8D168;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stb r30,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r30.u8);
loc_82C8D168:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D178:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82c8d1a0
	if (ctx.cr6.eq) goto loc_82C8D1A0;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d18c
	if (!ctx.cr6.lt) goto loc_82C8D18C;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
loc_82C8D18C:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r31,12
	ctx.r31.s64 = 12;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D1A0:
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d1b8
	if (!ctx.cr6.lt) goto loc_82C8D1B8;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
loc_82C8D1B8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D1CC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82c8d1f4
	if (ctx.cr6.eq) goto loc_82C8D1F4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d1e0
	if (!ctx.cr6.lt) goto loc_82C8D1E0;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
loc_82C8D1E0:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r31,13
	ctx.r31.s64 = 13;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D1F4:
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d1b8
	if (!ctx.cr6.lt) goto loc_82C8D1B8;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D220:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82c8d238
	if (!ctx.cr6.eq) goto loc_82C8D238;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D238:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d2dc
	if (!ctx.cr6.lt) goto loc_82C8D2DC;
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c8d2dc
	if (ctx.cr6.eq) goto loc_82C8D2DC;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c8d28c
	if (ctx.cr6.eq) goto loc_82C8D28C;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82c8d28c
	if (!ctx.cr6.eq) goto loc_82C8D28C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82c8d28c
	if (ctx.cr6.eq) goto loc_82C8D28C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
loc_82C8D28C:
	// stb r29,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r29.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D29C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82c8d2b4
	if (!ctx.cr6.eq) goto loc_82C8D2B4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D2B4:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82c8d2dc
	if (!ctx.cr6.eq) goto loc_82C8D2DC;
loc_82C8D2BC:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82c8d2dc
	if (!ctx.cr6.lt) goto loc_82C8D2DC;
	// stb r29,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r29.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D2D4:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82c8d2e8
	if (!ctx.cr6.eq) goto loc_82C8D2E8;
loc_82C8D2DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c8d024
	goto loc_82C8D024;
loc_82C8D2E8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C8D2F0"))) PPC_WEAK_FUNC(sub_82C8D2F0);
PPC_FUNC_IMPL(__imp__sub_82C8D2F0) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82c8d3b0
	if (ctx.cr6.eq) goto loc_82C8D3B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c8d384
	if (ctx.cr6.eq) goto loc_82C8D384;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82c8d354
	if (ctx.cr6.eq) goto loc_82C8D354;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
loc_82C8D354:
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_82C8D384:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// li r3,38
	ctx.r3.s64 = 38;
	// blr 
	return;
loc_82C8D3B0:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82c8d3dc
	if (ctx.cr6.eq) goto loc_82C8D3DC;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x82c8d3e4
	if (!ctx.cr6.eq) goto loc_82C8D3E4;
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
loc_82C8D3DC:
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
loc_82C8D3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D3EC"))) PPC_WEAK_FUNC(sub_82C8D3EC);
PPC_FUNC_IMPL(__imp__sub_82C8D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8D3F0"))) PPC_WEAK_FUNC(sub_82C8D3F0);
PPC_FUNC_IMPL(__imp__sub_82C8D3F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bgt cr6,0x82c8d51c
	if (ctx.cr6.gt) {
		// ERROR 82C8D51C
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-11232
	ctx.r12.s64 = ctx.r12.s64 + -11232;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82C8D4B8
		return;
	case 1:
		// ERROR: 0x82C8D4A0
		return;
	case 2:
		// ERROR: 0x82C8D484
		return;
	case 3:
		// ERROR: 0x82C8D51C
		return;
	case 4:
		// ERROR: 0x82C8D51C
		return;
	case 5:
		// ERROR: 0x82C8D51C
		return;
	case 6:
		// ERROR: 0x82C8D51C
		return;
	case 7:
		// ERROR: 0x82C8D51C
		return;
	case 8:
		// ERROR: 0x82C8D51C
		return;
	case 9:
		// ERROR: 0x82C8D51C
		return;
	case 10:
		// ERROR: 0x82C8D51C
		return;
	case 11:
		// ERROR: 0x82C8D51C
		return;
	case 12:
		// ERROR: 0x82C8D51C
		return;
	case 13:
		// ERROR: 0x82C8D51C
		return;
	case 14:
		// ERROR: 0x82C8D51C
		return;
	case 15:
		// ERROR: 0x82C8D51C
		return;
	case 16:
		// ERROR: 0x82C8D51C
		return;
	case 17:
		// ERROR: 0x82C8D4E8
		return;
	case 18:
		// ERROR: 0x82C8D4E8
		return;
	case 19:
		// ERROR: 0x82C8D4E8
		return;
	case 20:
		// ERROR: 0x82C8D4E8
		return;
	case 21:
		// ERROR: 0x82C8D4E8
		return;
	case 22:
		// ERROR: 0x82C8D4E8
		return;
	case 23:
		// ERROR: 0x82C8D51C
		return;
	case 24:
		// ERROR: 0x82C8D4E8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8D420"))) PPC_WEAK_FUNC(sub_82C8D420);
PPC_FUNC_IMPL(__imp__sub_82C8D420) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-11080(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11080);
	// lwz r22,-11104(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11104);
	// lwz r22,-11132(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11132);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lwz r22,-10980(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10980);
	// lwz r22,-11032(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11032);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82c8d5c8
	if (!ctx.cr6.eq) {
		// ERROR 82C8D5C8
		return;
	}
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c8d5c8
	if (!ctx.cr6.eq) {
		// ERROR 82C8D5C8
		return;
	}
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c8d5c8
	if (!ctx.cr6.eq) {
		// ERROR 82C8D5C8
		return;
	}
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// b 0x82c8d500
	// ERROR 82C8D500
	return;
}

__attribute__((alias("__imp__sub_82C8D4E8"))) PPC_WEAK_FUNC(sub_82C8D4E8);
PPC_FUNC_IMPL(__imp__sub_82C8D4E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c8d5c8
	if (!ctx.cr6.eq) {
		// ERROR 82C8D5C8
		return;
	}
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x82c8d408
	if (!ctx.cr6.gt) {
		// ERROR 82C8D408
		return;
	}
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82c8d5d0
	if (ctx.cr6.eq) {
		sub_82C8D5D0(ctx, base);
		return;
	}
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8d5d0
	if (ctx.cr6.gt) {
		sub_82C8D5D0(ctx, base);
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-10908
	ctx.r12.s64 = ctx.r12.s64 + -10908;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C8D5C8
		return;
	case 1:
		// ERROR: 0x82C8D5C8
		return;
	case 2:
		// ERROR: 0x82C8D5C8
		return;
	case 3:
		// ERROR: 0x82C8D5D0
		return;
	case 4:
		// ERROR: 0x82C8D5D0
		return;
	case 5:
		// ERROR: 0x82C8D5D0
		return;
	case 6:
		// ERROR: 0x82C8D5D0
		return;
	case 7:
		// ERROR: 0x82C8D5D0
		return;
	case 8:
		// ERROR: 0x82C8D5D0
		return;
	case 9:
		// ERROR: 0x82C8D5D0
		return;
	case 10:
		// ERROR: 0x82C8D5D0
		return;
	case 11:
		// ERROR: 0x82C8D5D0
		return;
	case 12:
		// ERROR: 0x82C8D5D0
		return;
	case 13:
		// ERROR: 0x82C8D5D0
		return;
	case 14:
		// ERROR: 0x82C8D5D0
		return;
	case 15:
		// ERROR: 0x82C8D5D0
		return;
	case 16:
		// ERROR: 0x82C8D5D0
		return;
	case 17:
		// ERROR: 0x82C8D5C8
		return;
	case 18:
		// ERROR: 0x82C8D5C8
		return;
	case 19:
		// ERROR: 0x82C8D5C8
		return;
	case 20:
		// ERROR: 0x82C8D5C8
		return;
	case 21:
		// ERROR: 0x82C8D5C8
		return;
	case 22:
		// ERROR: 0x82C8D5C8
		return;
	case 23:
		// ERROR: 0x82C8D5D0
		return;
	case 24:
		// ERROR: 0x82C8D5C8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8D564"))) PPC_WEAK_FUNC(sub_82C8D564);
PPC_FUNC_IMPL(__imp__sub_82C8D564) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// lwz r22,-10800(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10800);
	// lwz r22,-10808(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10808);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D5D0"))) PPC_WEAK_FUNC(sub_82C8D5D0);
PPC_FUNC_IMPL(__imp__sub_82C8D5D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D5D8"))) PPC_WEAK_FUNC(sub_82C8D5D8);
PPC_FUNC_IMPL(__imp__sub_82C8D5D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c8d618
	if (ctx.cr6.eq) goto loc_82C8D618;
loc_82C8D5E8:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8d628
	if (ctx.cr6.eq) goto loc_82C8D628;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c8d628
	if (!ctx.cr6.eq) goto loc_82C8D628;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c8d5e8
	if (!ctx.cr6.eq) goto loc_82C8D5E8;
loc_82C8D618:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82C8D628:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D630"))) PPC_WEAK_FUNC(sub_82C8D630);
PPC_FUNC_IMPL(__imp__sub_82C8D630) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82c8d6fc
	if (ctx.cr6.gt) {
		// ERROR 82C8D6FC
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-10652
	ctx.r12.s64 = ctx.r12.s64 + -10652;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C8D6C8
		return;
	case 1:
		// ERROR: 0x82C8D6D0
		return;
	case 2:
		// ERROR: 0x82C8D6D8
		return;
	case 3:
		// ERROR: 0x82C8D6FC
		return;
	case 4:
		// ERROR: 0x82C8D6FC
		return;
	case 5:
		// ERROR: 0x82C8D6FC
		return;
	case 6:
		// ERROR: 0x82C8D6FC
		return;
	case 7:
		// ERROR: 0x82C8D6FC
		return;
	case 8:
		// ERROR: 0x82C8D6FC
		return;
	case 9:
		// ERROR: 0x82C8D6FC
		return;
	case 10:
		// ERROR: 0x82C8D6FC
		return;
	case 11:
		// ERROR: 0x82C8D6FC
		return;
	case 12:
		// ERROR: 0x82C8D6FC
		return;
	case 13:
		// ERROR: 0x82C8D6FC
		return;
	case 14:
		// ERROR: 0x82C8D6FC
		return;
	case 15:
		// ERROR: 0x82C8D6FC
		return;
	case 16:
		// ERROR: 0x82C8D6FC
		return;
	case 17:
		// ERROR: 0x82C8D6E0
		return;
	case 18:
		// ERROR: 0x82C8D6E0
		return;
	case 19:
		// ERROR: 0x82C8D6E0
		return;
	case 20:
		// ERROR: 0x82C8D6E0
		return;
	case 21:
		// ERROR: 0x82C8D6E0
		return;
	case 22:
		// ERROR: 0x82C8D6E0
		return;
	case 23:
		// ERROR: 0x82C8D6FC
		return;
	case 24:
		// ERROR: 0x82C8D6E0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8D664"))) PPC_WEAK_FUNC(sub_82C8D664);
PPC_FUNC_IMPL(__imp__sub_82C8D664) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-10552(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10552);
	// lwz r22,-10544(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10544);
	// lwz r22,-10536(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10536);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// lwz r22,-10500(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10500);
	// lwz r22,-10528(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10528);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// b 0x82c8d6e4
	// ERROR 82C8D6E4
	return;
}

__attribute__((alias("__imp__sub_82C8D6D0"))) PPC_WEAK_FUNC(sub_82C8D6D0);
PPC_FUNC_IMPL(__imp__sub_82C8D6D0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// b 0x82c8d6e4
	// ERROR 82C8D6E4
	return;
}

__attribute__((alias("__imp__sub_82C8D6D8"))) PPC_WEAK_FUNC(sub_82C8D6D8);
PPC_FUNC_IMPL(__imp__sub_82C8D6D8) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82c8d6e4
	// ERROR 82C8D6E4
	return;
}

__attribute__((alias("__imp__sub_82C8D6E0"))) PPC_WEAK_FUNC(sub_82C8D6E0);
PPC_FUNC_IMPL(__imp__sub_82C8D6E0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x82c8d64c
	if (!ctx.cr6.gt) {
		// ERROR 82C8D64C
		return;
	}
	// subf r3,r10,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D704"))) PPC_WEAK_FUNC(sub_82C8D704);
PPC_FUNC_IMPL(__imp__sub_82C8D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8D708"))) PPC_WEAK_FUNC(sub_82C8D708);
PPC_FUNC_IMPL(__imp__sub_82C8D708) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82C8D724:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x82c8d734
	if (!ctx.cr6.gt) goto loc_82C8D734;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C8D734:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x82c8d724
	if (!ctx.cr6.lt) goto loc_82C8D724;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D750"))) PPC_WEAK_FUNC(sub_82C8D750);
PPC_FUNC_IMPL(__imp__sub_82C8D750) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82c8d7cc
	if (ctx.cr6.gt) {
		// ERROR 82C8D7CC
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-10356
	ctx.r12.s64 = ctx.r12.s64 + -10356;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C8D7A4
		return;
	case 1:
		// ERROR: 0x82C8D7AC
		return;
	case 2:
		// ERROR: 0x82C8D7B4
		return;
	case 3:
		// ERROR: 0x82C8D7CC
		return;
	case 4:
		// ERROR: 0x82C8D7E8
		return;
	case 5:
		// ERROR: 0x82C8D7BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8D78C"))) PPC_WEAK_FUNC(sub_82C8D78C);
PPC_FUNC_IMPL(__imp__sub_82C8D78C) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-10332(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10332);
	// lwz r22,-10324(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10324);
	// lwz r22,-10316(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10316);
	// lwz r22,-10292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10292);
	// lwz r22,-10264(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10264);
	// lwz r22,-10308(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10308);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// b 0x82c8d7d0
	// ERROR 82C8D7D0
	return;
}

__attribute__((alias("__imp__sub_82C8D7AC"))) PPC_WEAK_FUNC(sub_82C8D7AC);
PPC_FUNC_IMPL(__imp__sub_82C8D7AC) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// b 0x82c8d7d0
	// ERROR 82C8D7D0
	return;
}

__attribute__((alias("__imp__sub_82C8D7B4"))) PPC_WEAK_FUNC(sub_82C8D7B4);
PPC_FUNC_IMPL(__imp__sub_82C8D7B4) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82c8d7d0
	// ERROR 82C8D7D0
	return;
}

__attribute__((alias("__imp__sub_82C8D7BC"))) PPC_WEAK_FUNC(sub_82C8D7BC);
PPC_FUNC_IMPL(__imp__sub_82C8D7BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82c8d75c
	if (!ctx.cr6.eq) {
		// ERROR 82C8D75C
		return;
	}
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D7E8"))) PPC_WEAK_FUNC(sub_82C8D7E8);
PPC_FUNC_IMPL(__imp__sub_82C8D7E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82c8d818
	if (ctx.cr6.eq) goto loc_82C8D818;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82c8d818
	if (!ctx.cr6.eq) goto loc_82C8D818;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82C8D818:
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// b 0x82c8d7d0
	// ERROR 82C8D7D0
	return;
}

__attribute__((alias("__imp__sub_82C8D820"))) PPC_WEAK_FUNC(sub_82C8D820);
PPC_FUNC_IMPL(__imp__sub_82C8D820) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82c8d86c
	if (!ctx.cr6.gt) goto loc_82C8D86C;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c8d870
	if (!ctx.cr6.lt) goto loc_82C8D870;
loc_82C8D848:
	// lbz r8,-1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + -1);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// rlwinm r7,r8,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82c8d86c
	if (!ctx.cr6.eq) goto loc_82C8D86C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82c8d848
	if (ctx.cr6.gt) goto loc_82C8D848;
loc_82C8D86C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
loc_82C8D870:
	// beq cr6,0x82c8d88c
	if (ctx.cr6.eq) goto loc_82C8D88C;
loc_82C8D874:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82c8d874
	if (!ctx.cr6.eq) goto loc_82C8D874;
loc_82C8D88C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8D898"))) PPC_WEAK_FUNC(sub_82C8D898);
PPC_FUNC_IMPL(__imp__sub_82C8D898) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C8D8A0;
	sub_82CA2BEC(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8d98c
	if (ctx.cr6.eq) goto loc_82C8D98C;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lis r30,1
	ctx.r30.s64 = 65536;
loc_82C8D8B8:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82c8d98c
	if (ctx.cr6.eq) goto loc_82C8D98C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x82c8d964
	if (ctx.cr6.eq) goto loc_82C8D964;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// beq cr6,0x82c8d944
	if (ctx.cr6.eq) goto loc_82C8D944;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x82c8d8f0
	if (ctx.cr6.eq) goto loc_82C8D8F0;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82c8d978
	goto loc_82C8D978;
loc_82C8D8F0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82c8d98c
	if (ctx.cr6.eq) goto loc_82C8D98C;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r31,r8,6,23,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0x1C0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFE3F);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r31,23
	ctx.r31.u64 = ctx.r31.u32 & 0x1FF;
	// rlwimi r29,r31,6,0,25
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r31.u32, 6) & 0xFFFFFFC0) | (ctx.r29.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r8,r29,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// rlwinm r31,r8,22,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0xFFFF;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// ori r31,r31,55296
	ctx.r31.u64 = ctx.r31.u64 | 55296;
	// ori r8,r8,56320
	ctx.r8.u64 = ctx.r8.u64 | 56320;
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82c8d984
	goto loc_82C8D984;
loc_82C8D944:
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwimi r31,r8,6,0,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r31.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r29,r31,6,0,25
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r31.u32, 6) & 0xFFFFFFC0) | (ctx.r29.u64 & 0xFFFFFFFF0000003F);
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// b 0x82c8d97c
	goto loc_82C8D97C;
loc_82C8D964:
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwimi r31,r8,6,21,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0x7C0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r8,r31,21
	ctx.r8.u64 = ctx.r31.u32 & 0x7FF;
loc_82C8D978:
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
loc_82C8D97C:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82C8D984:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8d8b8
	if (!ctx.cr6.eq) goto loc_82C8D8B8;
loc_82C8D98C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C8D998"))) PPC_WEAK_FUNC(sub_82C8D998);
PPC_FUNC_IMPL(__imp__sub_82C8D998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_82C8D9AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// beq cr6,0x82c8da10
	if (ctx.cr6.eq) goto loc_82C8DA10;
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r8,-64
	ctx.r8.s64 = -64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r8,r11,26,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r3,r9,7,0,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// b 0x82c8da34
	goto loc_82C8DA34;
loc_82C8DA10:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82C8DA34:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8d9ac
	if (!ctx.cr6.eq) goto loc_82C8D9AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DA44"))) PPC_WEAK_FUNC(sub_82C8DA44);
PPC_FUNC_IMPL(__imp__sub_82C8DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8DA48"))) PPC_WEAK_FUNC(sub_82C8DA48);
PPC_FUNC_IMPL(__imp__sub_82C8DA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C8DA54:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8da54
	if (!ctx.cr6.eq) goto loc_82C8DA54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DA94"))) PPC_WEAK_FUNC(sub_82C8DA94);
PPC_FUNC_IMPL(__imp__sub_82C8DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8DA98"))) PPC_WEAK_FUNC(sub_82C8DA98);
PPC_FUNC_IMPL(__imp__sub_82C8DA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C8DAA4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8daa4
	if (!ctx.cr6.eq) goto loc_82C8DAA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DAE4"))) PPC_WEAK_FUNC(sub_82C8DAE4);
PPC_FUNC_IMPL(__imp__sub_82C8DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C8DAE8"))) PPC_WEAK_FUNC(sub_82C8DAE8);
PPC_FUNC_IMPL(__imp__sub_82C8DAE8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgt cr6,0x82c8dbd8
	if (ctx.cr6.gt) {
		// ERROR 82C8DBD8
		return;
	}
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-9456
	ctx.r12.s64 = ctx.r12.s64 + -9456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C8DBB0
		return;
	case 1:
		// ERROR: 0x82C8DBB0
		return;
	case 2:
		// ERROR: 0x82C8DBB0
		return;
	case 3:
		// ERROR: 0x82C8DBB0
		return;
	case 4:
		// ERROR: 0x82C8DBB8
		return;
	case 5:
		// ERROR: 0x82C8DBB8
		return;
	case 6:
		// ERROR: 0x82C8DBB8
		return;
	case 7:
		// ERROR: 0x82C8DBB8
		return;
	case 8:
		// ERROR: 0x82C8DBD8
		return;
	case 9:
		// ERROR: 0x82C8DBD8
		return;
	case 10:
		// ERROR: 0x82C8DBD8
		return;
	case 11:
		// ERROR: 0x82C8DBD8
		return;
	case 12:
		// ERROR: 0x82C8DBD8
		return;
	case 13:
		// ERROR: 0x82C8DBD8
		return;
	case 14:
		// ERROR: 0x82C8DBD8
		return;
	case 15:
		// ERROR: 0x82C8DBD8
		return;
	case 16:
		// ERROR: 0x82C8DBD8
		return;
	case 17:
		// ERROR: 0x82C8DBD8
		return;
	case 18:
		// ERROR: 0x82C8DBD8
		return;
	case 19:
		// ERROR: 0x82C8DBD8
		return;
	case 20:
		// ERROR: 0x82C8DBD8
		return;
	case 21:
		// ERROR: 0x82C8DBD8
		return;
	case 22:
		// ERROR: 0x82C8DBD8
		return;
	case 23:
		// ERROR: 0x82C8DBD8
		return;
	case 24:
		// ERROR: 0x82C8DBD8
		return;
	case 25:
		// ERROR: 0x82C8DBD8
		return;
	case 26:
		// ERROR: 0x82C8DBD8
		return;
	case 27:
		// ERROR: 0x82C8DBD8
		return;
	case 28:
		// ERROR: 0x82C8DBD8
		return;
	case 29:
		// ERROR: 0x82C8DBD8
		return;
	case 30:
		// ERROR: 0x82C8DBD8
		return;
	case 31:
		// ERROR: 0x82C8DBD8
		return;
	case 32:
		// ERROR: 0x82C8DBD8
		return;
	case 33:
		// ERROR: 0x82C8DBD8
		return;
	case 34:
		// ERROR: 0x82C8DBD8
		return;
	case 35:
		// ERROR: 0x82C8DBD8
		return;
	case 36:
		// ERROR: 0x82C8DBD8
		return;
	case 37:
		// ERROR: 0x82C8DBD8
		return;
	case 38:
		// ERROR: 0x82C8DBD8
		return;
	case 39:
		// ERROR: 0x82C8DBC0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C8DB10"))) PPC_WEAK_FUNC(sub_82C8DB10);
PPC_FUNC_IMPL(__imp__sub_82C8DB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-9296(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9296);
	// lwz r22,-9296(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9296);
	// lwz r22,-9296(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9296);
	// lwz r22,-9296(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9296);
	// lwz r22,-9288(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9288);
	// lwz r22,-9288(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9288);
	// lwz r22,-9288(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9288);
	// lwz r22,-9288(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9288);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9256(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9256);
	// lwz r22,-9280(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9280);
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DBB8"))) PPC_WEAK_FUNC(sub_82C8DBB8);
PPC_FUNC_IMPL(__imp__sub_82C8DBB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DBC0"))) PPC_WEAK_FUNC(sub_82C8DBC0);
PPC_FUNC_IMPL(__imp__sub_82C8DBC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// blt cr6,0x82c8dbd8
	if (ctx.cr6.lt) goto loc_82C8DBD8;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82C8DBD8:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C8DBE0"))) PPC_WEAK_FUNC(sub_82C8DBE0);
PPC_FUNC_IMPL(__imp__sub_82C8DBE0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C8DBE8;
	sub_82CA2BE4(ctx, base);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c8e130
	if (ctx.cr6.eq) goto loc_82C8E130;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// li r30,-16
	ctx.r30.s64 = -16;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
loc_82C8DC00:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,219
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 219, ctx.xer);
	// bgt cr6,0x82c8e0c0
	if (ctx.cr6.gt) goto loc_82C8E0C0;
	// lis r12,-32055
	ctx.r12.s64 = -2100756480;
	// addi r12,r12,-9172
	ctx.r12.s64 = ctx.r12.s64 + -9172;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82C8DF9C;
	case 1:
		goto loc_82C8DFBC;
	case 2:
		goto loc_82C8DFBC;
	case 3:
		goto loc_82C8DFBC;
	case 4:
		goto loc_82C8DFBC;
	case 5:
		goto loc_82C8DFBC;
	case 6:
		goto loc_82C8DFBC;
	case 7:
		goto loc_82C8DFBC;
	case 8:
		goto loc_82C8E0C0;
	case 9:
		goto loc_82C8E0C0;
	case 10:
		goto loc_82C8E0C0;
	case 11:
		goto loc_82C8E0C0;
	case 12:
		goto loc_82C8E0C0;
	case 13:
		goto loc_82C8E0C0;
	case 14:
		goto loc_82C8E0C0;
	case 15:
		goto loc_82C8E0C0;
	case 16:
		goto loc_82C8E0C0;
	case 17:
		goto loc_82C8E0C0;
	case 18:
		goto loc_82C8E0C0;
	case 19:
		goto loc_82C8E0C0;
	case 20:
		goto loc_82C8E0C0;
	case 21:
		goto loc_82C8E0C0;
	case 22:
		goto loc_82C8E0C0;
	case 23:
		goto loc_82C8E0C0;
	case 24:
		goto loc_82C8E0C0;
	case 25:
		goto loc_82C8E0C0;
	case 26:
		goto loc_82C8E0C0;
	case 27:
		goto loc_82C8E0C0;
	case 28:
		goto loc_82C8E0C0;
	case 29:
		goto loc_82C8E0C0;
	case 30:
		goto loc_82C8E0C0;
	case 31:
		goto loc_82C8E0C0;
	case 32:
		goto loc_82C8E0C0;
	case 33:
		goto loc_82C8E0C0;
	case 34:
		goto loc_82C8E0C0;
	case 35:
		goto loc_82C8E0C0;
	case 36:
		goto loc_82C8E0C0;
	case 37:
		goto loc_82C8E0C0;
	case 38:
		goto loc_82C8E0C0;
	case 39:
		goto loc_82C8E0C0;
	case 40:
		goto loc_82C8E0C0;
	case 41:
		goto loc_82C8E0C0;
	case 42:
		goto loc_82C8E0C0;
	case 43:
		goto loc_82C8E0C0;
	case 44:
		goto loc_82C8E0C0;
	case 45:
		goto loc_82C8E0C0;
	case 46:
		goto loc_82C8E0C0;
	case 47:
		goto loc_82C8E0C0;
	case 48:
		goto loc_82C8E0C0;
	case 49:
		goto loc_82C8E0C0;
	case 50:
		goto loc_82C8E0C0;
	case 51:
		goto loc_82C8E0C0;
	case 52:
		goto loc_82C8E0C0;
	case 53:
		goto loc_82C8E0C0;
	case 54:
		goto loc_82C8E0C0;
	case 55:
		goto loc_82C8E0C0;
	case 56:
		goto loc_82C8E0C0;
	case 57:
		goto loc_82C8E0C0;
	case 58:
		goto loc_82C8E0C0;
	case 59:
		goto loc_82C8E0C0;
	case 60:
		goto loc_82C8E0C0;
	case 61:
		goto loc_82C8E0C0;
	case 62:
		goto loc_82C8E0C0;
	case 63:
		goto loc_82C8E0C0;
	case 64:
		goto loc_82C8E0C0;
	case 65:
		goto loc_82C8E0C0;
	case 66:
		goto loc_82C8E0C0;
	case 67:
		goto loc_82C8E0C0;
	case 68:
		goto loc_82C8E0C0;
	case 69:
		goto loc_82C8E0C0;
	case 70:
		goto loc_82C8E0C0;
	case 71:
		goto loc_82C8E0C0;
	case 72:
		goto loc_82C8E0C0;
	case 73:
		goto loc_82C8E0C0;
	case 74:
		goto loc_82C8E0C0;
	case 75:
		goto loc_82C8E0C0;
	case 76:
		goto loc_82C8E0C0;
	case 77:
		goto loc_82C8E0C0;
	case 78:
		goto loc_82C8E0C0;
	case 79:
		goto loc_82C8E0C0;
	case 80:
		goto loc_82C8E0C0;
	case 81:
		goto loc_82C8E0C0;
	case 82:
		goto loc_82C8E0C0;
	case 83:
		goto loc_82C8E0C0;
	case 84:
		goto loc_82C8E0C0;
	case 85:
		goto loc_82C8E0C0;
	case 86:
		goto loc_82C8E0C0;
	case 87:
		goto loc_82C8E0C0;
	case 88:
		goto loc_82C8E0C0;
	case 89:
		goto loc_82C8E0C0;
	case 90:
		goto loc_82C8E0C0;
	case 91:
		goto loc_82C8E0C0;
	case 92:
		goto loc_82C8E0C0;
	case 93:
		goto loc_82C8E0C0;
	case 94:
		goto loc_82C8E0C0;
	case 95:
		goto loc_82C8E0C0;
	case 96:
		goto loc_82C8E0C0;
	case 97:
		goto loc_82C8E0C0;
	case 98:
		goto loc_82C8E0C0;
	case 99:
		goto loc_82C8E0C0;
	case 100:
		goto loc_82C8E0C0;
	case 101:
		goto loc_82C8E0C0;
	case 102:
		goto loc_82C8E0C0;
	case 103:
		goto loc_82C8E0C0;
	case 104:
		goto loc_82C8E0C0;
	case 105:
		goto loc_82C8E0C0;
	case 106:
		goto loc_82C8E0C0;
	case 107:
		goto loc_82C8E0C0;
	case 108:
		goto loc_82C8E0C0;
	case 109:
		goto loc_82C8E0C0;
	case 110:
		goto loc_82C8E0C0;
	case 111:
		goto loc_82C8E0C0;
	case 112:
		goto loc_82C8E0C0;
	case 113:
		goto loc_82C8E0C0;
	case 114:
		goto loc_82C8E0C0;
	case 115:
		goto loc_82C8E0C0;
	case 116:
		goto loc_82C8E0C0;
	case 117:
		goto loc_82C8E0C0;
	case 118:
		goto loc_82C8E0C0;
	case 119:
		goto loc_82C8E0C0;
	case 120:
		goto loc_82C8E0C0;
	case 121:
		goto loc_82C8E0C0;
	case 122:
		goto loc_82C8E0C0;
	case 123:
		goto loc_82C8E0C0;
	case 124:
		goto loc_82C8E0C0;
	case 125:
		goto loc_82C8E0C0;
	case 126:
		goto loc_82C8E0C0;
	case 127:
		goto loc_82C8E0C0;
	case 128:
		goto loc_82C8E0C0;
	case 129:
		goto loc_82C8E0C0;
	case 130:
		goto loc_82C8E0C0;
	case 131:
		goto loc_82C8E0C0;
	case 132:
		goto loc_82C8E0C0;
	case 133:
		goto loc_82C8E0C0;
	case 134:
		goto loc_82C8E0C0;
	case 135:
		goto loc_82C8E0C0;
	case 136:
		goto loc_82C8E0C0;
	case 137:
		goto loc_82C8E0C0;
	case 138:
		goto loc_82C8E0C0;
	case 139:
		goto loc_82C8E0C0;
	case 140:
		goto loc_82C8E0C0;
	case 141:
		goto loc_82C8E0C0;
	case 142:
		goto loc_82C8E0C0;
	case 143:
		goto loc_82C8E0C0;
	case 144:
		goto loc_82C8E0C0;
	case 145:
		goto loc_82C8E0C0;
	case 146:
		goto loc_82C8E0C0;
	case 147:
		goto loc_82C8E0C0;
	case 148:
		goto loc_82C8E0C0;
	case 149:
		goto loc_82C8E0C0;
	case 150:
		goto loc_82C8E0C0;
	case 151:
		goto loc_82C8E0C0;
	case 152:
		goto loc_82C8E0C0;
	case 153:
		goto loc_82C8E0C0;
	case 154:
		goto loc_82C8E0C0;
	case 155:
		goto loc_82C8E0C0;
	case 156:
		goto loc_82C8E0C0;
	case 157:
		goto loc_82C8E0C0;
	case 158:
		goto loc_82C8E0C0;
	case 159:
		goto loc_82C8E0C0;
	case 160:
		goto loc_82C8E0C0;
	case 161:
		goto loc_82C8E0C0;
	case 162:
		goto loc_82C8E0C0;
	case 163:
		goto loc_82C8E0C0;
	case 164:
		goto loc_82C8E0C0;
	case 165:
		goto loc_82C8E0C0;
	case 166:
		goto loc_82C8E0C0;
	case 167:
		goto loc_82C8E0C0;
	case 168:
		goto loc_82C8E0C0;
	case 169:
		goto loc_82C8E0C0;
	case 170:
		goto loc_82C8E0C0;
	case 171:
		goto loc_82C8E0C0;
	case 172:
		goto loc_82C8E0C0;
	case 173:
		goto loc_82C8E0C0;
	case 174:
		goto loc_82C8E0C0;
	case 175:
		goto loc_82C8E0C0;
	case 176:
		goto loc_82C8E0C0;
	case 177:
		goto loc_82C8E0C0;
	case 178:
		goto loc_82C8E0C0;
	case 179:
		goto loc_82C8E0C0;
	case 180:
		goto loc_82C8E0C0;
	case 181:
		goto loc_82C8E0C0;
	case 182:
		goto loc_82C8E0C0;
	case 183:
		goto loc_82C8E0C0;
	case 184:
		goto loc_82C8E0C0;
	case 185:
		goto loc_82C8E0C0;
	case 186:
		goto loc_82C8E0C0;
	case 187:
		goto loc_82C8E0C0;
	case 188:
		goto loc_82C8E0C0;
	case 189:
		goto loc_82C8E0C0;
	case 190:
		goto loc_82C8E0C0;
	case 191:
		goto loc_82C8E0C0;
	case 192:
		goto loc_82C8E0C0;
	case 193:
		goto loc_82C8E0C0;
	case 194:
		goto loc_82C8E0C0;
	case 195:
		goto loc_82C8E0C0;
	case 196:
		goto loc_82C8E0C0;
	case 197:
		goto loc_82C8E0C0;
	case 198:
		goto loc_82C8E0C0;
	case 199:
		goto loc_82C8E0C0;
	case 200:
		goto loc_82C8E0C0;
	case 201:
		goto loc_82C8E0C0;
	case 202:
		goto loc_82C8E0C0;
	case 203:
		goto loc_82C8E0C0;
	case 204:
		goto loc_82C8E0C0;
	case 205:
		goto loc_82C8E0C0;
	case 206:
		goto loc_82C8E0C0;
	case 207:
		goto loc_82C8E0C0;
	case 208:
		goto loc_82C8E0C0;
	case 209:
		goto loc_82C8E0C0;
	case 210:
		goto loc_82C8E0C0;
	case 211:
		goto loc_82C8E0C0;
	case 212:
		goto loc_82C8E0C0;
	case 213:
		goto loc_82C8E0C0;
	case 214:
		goto loc_82C8E0C0;
	case 215:
		goto loc_82C8E0C0;
	case 216:
		goto loc_82C8E010;
	case 217:
		goto loc_82C8E010;
	case 218:
		goto loc_82C8E010;
	case 219:
		goto loc_82C8E010;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-8292(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8292);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8260(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8260);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8000(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// lwz r22,-8176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8176);
	// lwz r22,-8176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8176);
	// lwz r22,-8176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8176);
	// lwz r22,-8176(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8176);
loc_82C8DF9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// bge cr6,0x82c8dfbc
	if (!ctx.cr6.lt) goto loc_82C8DFBC;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82c8e130
	if (ctx.cr6.eq) goto loc_82C8E130;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// b 0x82c8e118
	goto loc_82C8E118;
loc_82C8DFBC:
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r31,r3,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82c8e130
	if (ctx.cr6.lt) goto loc_82C8E130;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// li r31,-64
	ctx.r31.s64 = -64;
	// rlwinm r29,r11,26,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// rlwimi r31,r9,2,26,29
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x3C) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwimi r11,r8,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// extsb r9,r31
	ctx.r9.s64 = ctx.r31.s8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x82c8e124
	goto loc_82C8E124;
loc_82C8E010:
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r3,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82c8e130
	if (ctx.cr6.lt) goto loc_82C8E130;
	// rlwinm r9,r11,26,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// rlwinm r31,r31,2,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xC;
	// li r29,-128
	ctx.r29.s64 = -128;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r31,r11,30,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r28,-32
	ctx.r28.s64 = -32;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// rlwimi r29,r9,4,26,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x30) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r9,r27,r30
	ctx.r9.u64 = ctx.r27.u64 | ctx.r30.u64;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// rlwimi r28,r11,2,28,29
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 | ctx.r29.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// or r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 | ctx.r3.u64;
	// rlwinm r31,r9,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r8,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | ctx.r31.u64;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x82c8e124
	goto loc_82C8E124;
loc_82C8E0C0:
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r31,r3,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82c8e130
	if (ctx.cr6.lt) goto loc_82C8E130;
	// li r31,-32
	ctx.r31.s64 = -32;
	// li r29,-128
	ctx.r29.s64 = -128;
	// rlwimi r31,r9,28,28,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r29,r9,2,26,29
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x3C) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFC3);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// rlwimi r31,r8,7,0,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r31.u64 & 0xFFFFFFFF0000003F);
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stb r3,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
loc_82C8E118:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82C8E124:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8dc00
	if (!ctx.cr6.eq) goto loc_82C8DC00;
loc_82C8E130:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C8E138"))) PPC_WEAK_FUNC(sub_82C8E138);
PPC_FUNC_IMPL(__imp__sub_82C8E138) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r3,r9,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82c8e168
	if (!ctx.cr6.gt) goto loc_82C8E168;
	// lbz r10,-1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -1);
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r9,216
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 216, ctx.xer);
	// bne cr6,0x82c8e168
	if (!ctx.cr6.eq) goto loc_82C8E168;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_82C8E168:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C8E170:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r9,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 | ctx.r8.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c8e170
	if (!ctx.cr6.eq) goto loc_82C8E170;
	// blr 
	return;
}

