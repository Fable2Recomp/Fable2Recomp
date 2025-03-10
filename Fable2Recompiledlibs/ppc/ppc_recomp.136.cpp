#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A28370"))) PPC_WEAK_FUNC(sub_82A28370);
PPC_FUNC_IMPL(__imp__sub_82A28370) {
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
	// bl 0x82a281b0
	ctx.lr = 0x82A2838C;
	sub_82A281B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,10368
	ctx.r4.s64 = ctx.r11.s64 + 10368;
	// bne cr6,0x82a283c0
	if (!ctx.cr6.eq) goto loc_82A283C0;
	// bl 0x82a1ea18
	ctx.lr = 0x82A283B0;
	sub_82A1EA18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82a283c8
	goto loc_82A283C8;
loc_82A283C0:
	// bl 0x82a1ea18
	ctx.lr = 0x82A283C4;
	sub_82A1EA18(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A283C8:
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

__attribute__((alias("__imp__sub_82A283E0"))) PPC_WEAK_FUNC(sub_82A283E0);
PPC_FUNC_IMPL(__imp__sub_82A283E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A283E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2840c
	if (ctx.cr6.lt) goto loc_82A2840C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A2840C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r28,r11,-26848
	ctx.r28.s64 = ctx.r11.s64 + -26848;
	// beq cr6,0x82a28468
	if (ctx.cr6.eq) goto loc_82A28468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28428;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28438
	if (!ctx.cr6.eq) goto loc_82A28438;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a28474
	goto loc_82A28474;
loc_82A28438:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28454
	if (ctx.cr6.lt) goto loc_82A28454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28454;
	sub_82179350(ctx, base);
loc_82A28454:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28468
	if (ctx.cr6.lt) goto loc_82A28468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28468:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a28484
	if (!ctx.cr0.eq) goto loc_82A28484;
loc_82A28474:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28484;
	sub_82A1F2D0(ctx, base);
loc_82A28484:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2849c
	if (ctx.cr6.lt) goto loc_82A2849C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A2849C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a284f4
	if (ctx.cr6.eq) goto loc_82A284F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A284B0;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a284c0
	if (!ctx.cr6.eq) goto loc_82A284C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a28500
	goto loc_82A28500;
loc_82A284C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a284dc
	if (ctx.cr6.lt) goto loc_82A284DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A284DC;
	sub_82179350(ctx, base);
loc_82A284DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a284f4
	if (ctx.cr6.lt) goto loc_82A284F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A284F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a28510
	if (!ctx.cr0.eq) goto loc_82A28510;
loc_82A28500:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28510;
	sub_82A1F2D0(ctx, base);
loc_82A28510:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28370
	ctx.lr = 0x82A28520;
	sub_82A28370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a28538
	if (!ctx.cr6.eq) goto loc_82A28538;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A28538:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x821e5168
	ctx.lr = 0x82A2855C;
	sub_821E5168(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82a28570
	if (!ctx.cr6.eq) goto loc_82A28570;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,10460
	ctx.r4.s64 = ctx.r11.s64 + 10460;
	// b 0x82a28578
	goto loc_82A28578;
loc_82A28570:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,10468
	ctx.r4.s64 = ctx.r11.s64 + 10468;
loc_82A28578:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A2857C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2857c
	if (!ctx.cr6.eq) goto loc_82A2857C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A285A0;
	sub_82A1EA18(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A285AC"))) PPC_WEAK_FUNC(sub_82A285AC);
PPC_FUNC_IMPL(__imp__sub_82A285AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A285B0"))) PPC_WEAK_FUNC(sub_82A285B0);
PPC_FUNC_IMPL(__imp__sub_82A285B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82A285B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r6,r11,3060
	ctx.r6.s64 = ctx.r11.s64 + 3060;
	// addi r5,r10,-6348
	ctx.r5.s64 = ctx.r10.s64 + -6348;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a1f8a0
	ctx.lr = 0x82A285D8;
	sub_82A1F8A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A285EC;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82a2863c
	if (ctx.cr6.eq) goto loc_82A2863C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28608;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28618
	if (!ctx.cr6.eq) goto loc_82A28618;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a28648
	goto loc_82A28648;
loc_82A28618:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28634
	if (ctx.cr6.lt) goto loc_82A28634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28634;
	sub_82179350(ctx, base);
loc_82A28634:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A2863C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a2865c
	if (!ctx.cr0.eq) goto loc_82A2865C;
loc_82A28648:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10476
	ctx.r4.s64 = ctx.r11.s64 + 10476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A2865C;
	sub_82A1F3F8(ctx, base);
loc_82A2865C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A28670;
	sub_82A1EA18(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r27,-31946
	ctx.r27.s64 = -2093613056;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r25,r11,10508
	ctx.r25.s64 = ctx.r11.s64 + 10508;
	// addi r28,r10,7948
	ctx.r28.s64 = ctx.r10.s64 + 7948;
loc_82A28688:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x82a286a4
	if (!ctx.cr6.eq) goto loc_82A286A4;
loc_82A28694:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// beq cr6,0x82a28694
	if (ctx.cr6.eq) goto loc_82A28694;
loc_82A286A4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2883c
	if (ctx.cr6.eq) goto loc_82A2883C;
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A286BC;
	sub_82CA3980(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a286ec
	if (!ctx.cr6.eq) goto loc_82A286EC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A286CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a286cc
	if (!ctx.cr6.eq) goto loc_82A286CC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A286EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28708
	if (ctx.cr6.lt) goto loc_82A28708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28708;
	sub_82179350(ctx, base);
loc_82A28708:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r23,8(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2871C;
	sub_82227EA0(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a2883c
	if (ctx.cr6.eq) goto loc_82A2883C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82a28788
	if (ctx.cr6.eq) goto loc_82A28788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28754;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28764
	if (!ctx.cr6.eq) goto loc_82A28764;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a28790
	goto loc_82A28790;
loc_82A28764:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28780
	if (ctx.cr6.lt) goto loc_82A28780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28780;
	sub_82179350(ctx, base);
loc_82A28780:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A28788:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82A28790:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f8a0
	ctx.lr = 0x82A287A0;
	sub_82A1F8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dff48
	ctx.lr = 0x82A287B0;
	sub_821DFF48(ctx, base);
	// lwz r11,-2560(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -2560);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A287C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28830
	if (!ctx.cr6.eq) goto loc_82A28830;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A287D8;
	sub_82A1EA80(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dff48
	ctx.lr = 0x82A287E4;
	sub_821DFF48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28800
	if (ctx.cr6.lt) goto loc_82A28800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28800;
	sub_82179350(ctx, base);
loc_82A28800:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x821cc868
	ctx.lr = 0x82A28820;
	sub_821CC868(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82a28688
	goto loc_82A28688;
loc_82A28830:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_82A2883C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28848"))) PPC_WEAK_FUNC(sub_82A28848);
PPC_FUNC_IMPL(__imp__sub_82A28848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A28850;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a288a8
	if (ctx.cr6.eq) goto loc_82A288A8;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28874;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28884
	if (!ctx.cr6.eq) goto loc_82A28884;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a288b0
	goto loc_82A288B0;
loc_82A28884:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a288a0
	if (ctx.cr6.lt) goto loc_82A288A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A288A0;
	sub_82179350(ctx, base);
loc_82A288A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A288A8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_82A288B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a288cc
	if (ctx.cr6.lt) goto loc_82A288CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A288CC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28920
	if (ctx.cr6.eq) goto loc_82A28920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A288E0;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a288f0
	if (!ctx.cr6.eq) goto loc_82A288F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a28928
	goto loc_82A28928;
loc_82A288F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2890c
	if (ctx.cr6.lt) goto loc_82A2890C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2890C;
	sub_82179350(ctx, base);
loc_82A2890C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28920
	if (ctx.cr6.lt) goto loc_82A28920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28920:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_82A28928:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,10524
	ctx.r4.s64 = ctx.r11.s64 + 10524;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A28940;
	sub_82A1F3F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28948"))) PPC_WEAK_FUNC(sub_82A28948);
PPC_FUNC_IMPL(__imp__sub_82A28948) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2897c
	if (ctx.cr6.lt) goto loc_82A2897C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A2897C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a289d0
	if (ctx.cr6.eq) goto loc_82A289D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28990;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a289a0
	if (!ctx.cr6.eq) goto loc_82A289A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a289dc
	goto loc_82A289DC;
loc_82A289A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a289bc
	if (ctx.cr6.lt) goto loc_82A289BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A289BC;
	sub_82179350(ctx, base);
loc_82A289BC:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a289d0
	if (ctx.cr6.lt) goto loc_82A289D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A289D0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a289f4
	if (!ctx.cr0.eq) goto loc_82A289F4;
loc_82A289DC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A289F4;
	sub_82A1F2D0(ctx, base);
loc_82A289F4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,10572
	ctx.r5.s64 = ctx.r11.s64 + 10572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a285b0
	ctx.lr = 0x82A28A08;
	sub_82A285B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a28a34
	if (ctx.cr6.eq) goto loc_82A28A34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1fed0
	ctx.lr = 0x82A28A20;
	sub_82A1FED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a28a34
	if (ctx.cr6.eq) goto loc_82A28A34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28848
	ctx.lr = 0x82A28A34;
	sub_82A28848(ctx, base);
loc_82A28A34:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82A28A50"))) PPC_WEAK_FUNC(sub_82A28A50);
PPC_FUNC_IMPL(__imp__sub_82A28A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A28A78;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28a84
	if (ctx.cr6.eq) goto loc_82A28A84;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_82A28A84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r11,2924
	ctx.r6.s64 = ctx.r11.s64 + 2924;
	// addi r5,r10,-6348
	ctx.r5.s64 = ctx.r10.s64 + -6348;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f8a0
	ctx.lr = 0x82A28AA0;
	sub_82A1F8A0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,10580
	ctx.r4.s64 = ctx.r9.s64 + 10580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A28AB4;
	sub_82A1EA80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821dff48
	ctx.lr = 0x82A28AC4;
	sub_821DFF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A28AE0"))) PPC_WEAK_FUNC(sub_82A28AE0);
PPC_FUNC_IMPL(__imp__sub_82A28AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A28AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a28b0c
	if (ctx.cr6.lt) goto loc_82A28B0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28B0C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28b60
	if (ctx.cr6.eq) goto loc_82A28B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28B20;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28b30
	if (!ctx.cr6.eq) goto loc_82A28B30;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a28b6c
	goto loc_82A28B6C;
loc_82A28B30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28b4c
	if (ctx.cr6.lt) goto loc_82A28B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28B4C;
	sub_82179350(ctx, base);
loc_82A28B4C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28b60
	if (ctx.cr6.lt) goto loc_82A28B60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28B60:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a28b84
	if (!ctx.cr0.eq) goto loc_82A28B84;
loc_82A28B6C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28B84;
	sub_82A1F2D0(ctx, base);
loc_82A28B84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,10592
	ctx.r5.s64 = ctx.r11.s64 + 10592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a285b0
	ctx.lr = 0x82A28B98;
	sub_82A285B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a28bd4
	if (ctx.cr6.eq) goto loc_82A28BD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28a50
	ctx.lr = 0x82A28BB0;
	sub_82A28A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28370
	ctx.lr = 0x82A28BC0;
	sub_82A28370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a28bd4
	if (ctx.cr6.eq) goto loc_82A28BD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28848
	ctx.lr = 0x82A28BD4;
	sub_82A28848(ctx, base);
loc_82A28BD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28BE0"))) PPC_WEAK_FUNC(sub_82A28BE0);
PPC_FUNC_IMPL(__imp__sub_82A28BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A28BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a28c0c
	if (ctx.cr6.lt) goto loc_82A28C0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28C0C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28c60
	if (ctx.cr6.eq) goto loc_82A28C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28C20;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28c30
	if (!ctx.cr6.eq) goto loc_82A28C30;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a28c6c
	goto loc_82A28C6C;
loc_82A28C30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28c4c
	if (ctx.cr6.lt) goto loc_82A28C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28C4C;
	sub_82179350(ctx, base);
loc_82A28C4C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28c60
	if (ctx.cr6.lt) goto loc_82A28C60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A28C60:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a28c84
	if (!ctx.cr0.eq) goto loc_82A28C84;
loc_82A28C6C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28C84;
	sub_82A1F2D0(ctx, base);
loc_82A28C84:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A28C90;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a28ca0
	if (!ctx.cr6.eq) goto loc_82A28CA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A28CA0:
	// subf r5,r29,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A28CB0;
	sub_82A1EA18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28d00
	if (ctx.cr6.eq) goto loc_82A28D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28CCC;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28cdc
	if (!ctx.cr6.eq) goto loc_82A28CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a28d08
	goto loc_82A28D08;
loc_82A28CDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28cf8
	if (ctx.cr6.lt) goto loc_82A28CF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28CF8;
	sub_82179350(ctx, base);
loc_82A28CF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A28D00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82A28D08:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10592
	ctx.r5.s64 = ctx.r11.s64 + 10592;
	// bl 0x82a285b0
	ctx.lr = 0x82A28D18;
	sub_82A285B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a28d74
	if (ctx.cr6.eq) goto loc_82A28D74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28a50
	ctx.lr = 0x82A28D30;
	sub_82A28A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28370
	ctx.lr = 0x82A28D40;
	sub_82A28370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a28d74
	if (ctx.cr6.eq) goto loc_82A28D74;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a28d5c
	if (ctx.cr6.eq) goto loc_82A28D5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28848
	ctx.lr = 0x82A28D5C;
	sub_82A28848(ctx, base);
loc_82A28D5C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A28D74;
	sub_82A1EA80(ctx, base);
loc_82A28D74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28D80"))) PPC_WEAK_FUNC(sub_82A28D80);
PPC_FUNC_IMPL(__imp__sub_82A28D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A28D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-26784
	ctx.r29.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a28dac
	if (ctx.cr6.lt) goto loc_82A28DAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82A28DAC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28e00
	if (ctx.cr6.eq) goto loc_82A28E00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28DC0;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28dd0
	if (!ctx.cr6.eq) goto loc_82A28DD0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a28e0c
	goto loc_82A28E0C;
loc_82A28DD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28dec
	if (ctx.cr6.lt) goto loc_82A28DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28DEC;
	sub_82179350(ctx, base);
loc_82A28DEC:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28e00
	if (ctx.cr6.lt) goto loc_82A28E00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82A28E00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a28e24
	if (!ctx.cr0.eq) goto loc_82A28E24;
loc_82A28E0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28E24;
	sub_82A1F2D0(ctx, base);
loc_82A28E24:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// addi r5,r11,10632
	ctx.r5.s64 = ctx.r11.s64 + 10632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A28E38;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a28e54
	if (ctx.cr6.eq) goto loc_82A28E54;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a28e64
	if (ctx.cr6.eq) goto loc_82A28E64;
loc_82A28E54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10640
	ctx.r4.s64 = ctx.r11.s64 + 10640;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A28E64;
	sub_82A1F3F8(ctx, base);
loc_82A28E64:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A28E74;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a28ea4
	if (ctx.cr6.eq) goto loc_82A28EA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a28ea4
	if (!ctx.cr6.eq) goto loc_82A28EA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10676
	ctx.r4.s64 = ctx.r11.s64 + 10676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A28EA4;
	sub_82A1EA80(ctx, base);
loc_82A28EA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28EB0"))) PPC_WEAK_FUNC(sub_82A28EB0);
PPC_FUNC_IMPL(__imp__sub_82A28EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82A28EB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-26784
	ctx.r25.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a28edc
	if (ctx.cr6.lt) goto loc_82A28EDC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A28EDC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a28f34
	if (ctx.cr6.eq) goto loc_82A28F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A28EF4;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a28f04
	if (!ctx.cr6.eq) goto loc_82A28F04;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82a28f40
	goto loc_82A28F40;
loc_82A28F04:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a28f20
	if (ctx.cr6.lt) goto loc_82A28F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A28F20;
	sub_82179350(ctx, base);
loc_82A28F20:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a28f34
	if (ctx.cr6.lt) goto loc_82A28F34;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A28F34:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a28f58
	if (!ctx.cr0.eq) goto loc_82A28F58;
loc_82A28F40:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A28F58;
	sub_82A1F2D0(ctx, base);
loc_82A28F58:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a28f94
	if (!ctx.cr6.lt) goto loc_82A28F94;
loc_82A28F6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82a28f6c
	if (ctx.cr6.lt) goto loc_82A28F6C;
loc_82A28F94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r5,r10,8136
	ctx.r5.s64 = ctx.r10.s64 + 8136;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A28FB4;
	sub_82228488(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A28FC4;
	sub_82228488(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a29024
	if (ctx.cr6.eq) goto loc_82A29024;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a28fe8
	if (!ctx.cr6.eq) goto loc_82A28FE8;
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a29024
	if (ctx.cr6.eq) goto loc_82A29024;
loc_82A28FE8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x82A28FF4;
	sub_822281F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-26656
	ctx.r10.s64 = ctx.r11.s64 + -26656;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2939c
	if (!ctx.cr6.eq) goto loc_82A2939C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10712
	ctx.r4.s64 = ctx.r11.s64 + 10712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A29018;
	sub_82A1F3F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_82A29024:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// addi r5,r11,10756
	ctx.r5.s64 = ctx.r11.s64 + 10756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A29038;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a29054
	if (ctx.cr6.eq) goto loc_82A29054;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a29064
	if (ctx.cr6.eq) goto loc_82A29064;
loc_82A29054:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10764
	ctx.r4.s64 = ctx.r11.s64 + 10764;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A29064;
	sub_82A1F3F8(ctx, base);
loc_82A29064:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A29078;
	sub_82A1EA18(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r26,r11,10800
	ctx.r26.s64 = ctx.r11.s64 + 10800;
loc_82A2908C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x82229260
	ctx.lr = 0x82A2909C;
	sub_82229260(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a29138
	if (ctx.cr6.eq) goto loc_82A29138;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a29138
	if (!ctx.cr6.eq) goto loc_82A29138;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82a29120
	if (ctx.cr6.eq) goto loc_82A29120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A290EC;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a290fc
	if (!ctx.cr6.eq) goto loc_82A290FC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x82a29128
	goto loc_82A29128;
loc_82A290FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a29118
	if (ctx.cr6.lt) goto loc_82A29118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A29118;
	sub_82179350(ctx, base);
loc_82A29118:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
loc_82A29120:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_82A29128:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A29138;
	sub_82A1F3F8(ctx, base);
loc_82A29138:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a2914c
	if (!ctx.cr6.eq) goto loc_82A2914C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// b 0x82a291a4
	goto loc_82A291A4;
loc_82A2914C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A29150:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a29150
	if (!ctx.cr6.eq) goto loc_82A29150;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r9,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a29188
	if (ctx.cr6.lt) goto loc_82A29188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A29188;
	sub_82179350(ctx, base);
loc_82A29188:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2919C;
	sub_82227EA0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82A291A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82228c70
	ctx.lr = 0x82A291C0;
	sub_82228C70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a29248
	if (ctx.cr6.eq) goto loc_82A29248;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82a29254
	if (ctx.cr6.eq) goto loc_82A29254;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a29248
	if (ctx.cr6.eq) goto loc_82A29248;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82a291f8
	if (ctx.cr6.eq) goto loc_82A291F8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82a29248
	if (!ctx.cr6.eq) goto loc_82A29248;
loc_82A291F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a29214
	if (ctx.cr6.lt) goto loc_82A29214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A29214;
	sub_82179350(ctx, base);
loc_82A29214:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x821cc868
	ctx.lr = 0x82A29234;
	sub_821CC868(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82a2908c
	goto loc_82A2908C;
loc_82A29248:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82a2908c
	goto loc_82A2908C;
loc_82A29254:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r30,r11,-26656
	ctx.r30.s64 = ctx.r11.s64 + -26656;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A29288;
	sub_82A1EC08(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a292a8
	if (!ctx.cr6.eq) goto loc_82A292A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82a292d4
	goto loc_82A292D4;
loc_82A292A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A292AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a292ac
	if (!ctx.cr6.eq) goto loc_82A292AC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A292D4;
	sub_82A1EA18(ctx, base);
loc_82A292D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82228c70
	ctx.lr = 0x82A292E8;
	sub_82228C70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a29304
	if (ctx.cr6.eq) goto loc_82A29304;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a29314
	if (ctx.cr6.eq) goto loc_82A29314;
loc_82A29304:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29314;
	sub_82A1EC08(ctx, base);
loc_82A29314:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A29324;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a29350
	if (ctx.cr6.eq) goto loc_82A29350;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82a29344
	if (ctx.cr6.eq) goto loc_82A29344;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82a29354
	goto loc_82A29354;
loc_82A29344:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// b 0x82a29354
	goto loc_82A29354;
loc_82A29350:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
loc_82A29354:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a2939c
	if (!ctx.cr6.eq) goto loc_82A2939C;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A2939C;
	sub_82A1EC08(ctx, base);
loc_82A2939C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A293A8"))) PPC_WEAK_FUNC(sub_82A293A8);
PPC_FUNC_IMPL(__imp__sub_82A293A8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r10,6552
	ctx.r5.s64 = ctx.r10.s64 + 6552;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A293F4;
	sub_82A1EC08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a29418
	if (!ctx.cr6.eq) goto loc_82A29418;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82a29444
	goto loc_82A29444;
loc_82A29418:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A2941C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2941c
	if (!ctx.cr6.eq) goto loc_82A2941C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A29444;
	sub_82A1EA18(ctx, base);
loc_82A29444:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r11,10828
	ctx.r5.s64 = ctx.r11.s64 + 10828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29458;
	sub_82A1EC08(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca70c0
	ctx.lr = 0x82A29464;
	sub_82CA70C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82a29474
	if (ctx.cr6.eq) goto loc_82A29474;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_82A29474:
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A29484;
	sub_82A1EA18(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r11,10836
	ctx.r5.s64 = ctx.r11.s64 + 10836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29498;
	sub_82A1EC08(ctx, base);
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

__attribute__((alias("__imp__sub_82A294B0"))) PPC_WEAK_FUNC(sub_82A294B0);
PPC_FUNC_IMPL(__imp__sub_82A294B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A294B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-26784
	ctx.r28.s64 = ctx.r11.s64 + -26784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a294dc
	if (ctx.cr6.lt) goto loc_82A294DC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82A294DC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a29530
	if (ctx.cr6.eq) goto loc_82A29530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A294F0;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a29500
	if (!ctx.cr6.eq) goto loc_82A29500;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a2953c
	goto loc_82A2953C;
loc_82A29500:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2951c
	if (ctx.cr6.lt) goto loc_82A2951C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2951C;
	sub_82179350(ctx, base);
loc_82A2951C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a29530
	if (ctx.cr6.lt) goto loc_82A29530;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82A29530:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a29554
	if (!ctx.cr0.eq) goto loc_82A29554;
loc_82A2953C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A29554;
	sub_82A1F2D0(ctx, base);
loc_82A29554:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r5,r10,8136
	ctx.r5.s64 = ctx.r10.s64 + 8136;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82228488
	ctx.lr = 0x82A2957C;
	sub_82228488(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A2958C;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a295a8
	if (ctx.cr6.eq) goto loc_82A295A8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82a2960c
	if (ctx.cr6.eq) goto loc_82A2960C;
loc_82A295A8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1fa08
	ctx.lr = 0x82A295C0;
	sub_82A1FA08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a295e4
	if (ctx.cr6.eq) goto loc_82A295E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,8144
	ctx.r4.s64 = ctx.r11.s64 + 8144;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A295DC;
	sub_82A1F3F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A295E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A2960C;
	sub_82A1EC08(ctx, base);
loc_82A2960C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r11,10828
	ctx.r5.s64 = ctx.r11.s64 + 10828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228488
	ctx.lr = 0x82A29620;
	sub_82228488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a2963c
	if (ctx.cr6.eq) goto loc_82A2963C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a29644
	if (ctx.cr6.eq) goto loc_82A29644;
loc_82A2963C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a29654
	goto loc_82A29654;
loc_82A29644:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a293a8
	ctx.lr = 0x82A29654;
	sub_82A293A8(ctx, base);
loc_82A29654:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82a2b3c0
	ctx.lr = 0x82A29684;
	sub_82A2B3C0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r7,8680
	ctx.r4.s64 = ctx.r7.s64 + 8680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b908
	ctx.lr = 0x82A29698;
	sub_82A2B908(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r11,-12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82195e30
	ctx.lr = 0x82A296C4;
	sub_82195E30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x82a29748
	if (ctx.cr6.lt) goto loc_82A29748;
loc_82A296E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A296EC;
	sub_82A1E620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82228c70
	ctx.lr = 0x82A2973C;
	sub_82228C70(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82a296e0
	if (!ctx.cr6.gt) goto loc_82A296E0;
loc_82A29748:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29754"))) PPC_WEAK_FUNC(sub_82A29754);
PPC_FUNC_IMPL(__imp__sub_82A29754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29758"))) PPC_WEAK_FUNC(sub_82A29758);
PPC_FUNC_IMPL(__imp__sub_82A29758) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a29798
	if (!ctx.cr6.lt) goto loc_82A29798;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a29798
	if (ctx.cr6.eq) goto loc_82A29798;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a297b0
	if (ctx.cr6.eq) goto loc_82A297B0;
loc_82A29798:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A297B0;
	sub_82A1F2D0(ctx, base);
loc_82A297B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228028
	ctx.lr = 0x82A297BC;
	sub_82228028(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a29800
	if (!ctx.cr6.eq) goto loc_82A29800;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1768
	ctx.lr = 0x82A297D4;
	sub_821E1768(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82227ba0
	ctx.lr = 0x82A29800;
	sub_82227BA0(ctx, base);
loc_82A29800:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r10,-9496
	ctx.r5.s64 = ctx.r10.s64 + -9496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A29834;
	sub_82A1EC08(ctx, base);
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

__attribute__((alias("__imp__sub_82A2984C"))) PPC_WEAK_FUNC(sub_82A2984C);
PPC_FUNC_IMPL(__imp__sub_82A2984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29850"))) PPC_WEAK_FUNC(sub_82A29850);
PPC_FUNC_IMPL(__imp__sub_82A29850) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a29890
	if (!ctx.cr6.eq) goto loc_82A29890;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82a298bc
	goto loc_82A298BC;
loc_82A29890:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A29894:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a29894
	if (!ctx.cr6.eq) goto loc_82A29894;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A298BC;
	sub_82A1EA18(ctx, base);
loc_82A298BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A298CC;
	sub_82A1EC08(ctx, base);
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

__attribute__((alias("__imp__sub_82A298E4"))) PPC_WEAK_FUNC(sub_82A298E4);
PPC_FUNC_IMPL(__imp__sub_82A298E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A298E8"))) PPC_WEAK_FUNC(sub_82A298E8);
PPC_FUNC_IMPL(__imp__sub_82A298E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A298F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,10448
	ctx.r4.s64 = ctx.r11.s64 + 10448;
	// bl 0x82a1f5b0
	ctx.lr = 0x82A29904;
	sub_82A1F5B0(ctx, base);
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-32064
	ctx.r4.s64 = ctx.r10.s64 + -32064;
	// bl 0x8219ab28
	ctx.lr = 0x82A29918;
	sub_8219AB28(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,-9316
	ctx.r5.s64 = ctx.r9.s64 + -9316;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82a1ec08
	ctx.lr = 0x82A2992C;
	sub_82A1EC08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r29,r11,-26628
	ctx.r29.s64 = ctx.r11.s64 + -26628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// addi r4,r8,10848
	ctx.r4.s64 = ctx.r8.s64 + 10848;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82a1f740
	ctx.lr = 0x82A2994C;
	sub_82A1F740(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// lwz r6,-8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a1e778
	ctx.lr = 0x82A29978;
	sub_82A1E778(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1768
	ctx.lr = 0x82A29988;
	sub_821E1768(ctx, base);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a299cc
	if (ctx.cr6.eq) goto loc_82A299CC;
loc_82A29998:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219ab28
	ctx.lr = 0x82A299A4;
	sub_8219AB28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241898
	ctx.lr = 0x82A299B8;
	sub_82241898(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a29998
	if (!ctx.cr6.eq) goto loc_82A29998;
loc_82A299CC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r11,10756
	ctx.r5.s64 = ctx.r11.s64 + 10756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A299E0;
	sub_82A1EC08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r6,r10,10856
	ctx.r6.s64 = ctx.r10.s64 + 10856;
	// addi r5,r9,10916
	ctx.r5.s64 = ctx.r9.s64 + 10916;
	// addi r4,r8,10572
	ctx.r4.s64 = ctx.r8.s64 + 10572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29850
	ctx.lr = 0x82A29A00;
	sub_82A29850(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// addi r6,r7,10928
	ctx.r6.s64 = ctx.r7.s64 + 10928;
	// addi r5,r5,10960
	ctx.r5.s64 = ctx.r5.s64 + 10960;
	// addi r4,r4,10592
	ctx.r4.s64 = ctx.r4.s64 + 10592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29850
	ctx.lr = 0x82A29A20;
	sub_82A29850(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a29a3c
	if (ctx.cr6.lt) goto loc_82A29A3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A29A3C;
	sub_82179350(ctx, base);
loc_82A29A3C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,10972
	ctx.r4.s64 = ctx.r11.s64 + 10972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A29A54;
	sub_82227EA0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r5,r9,10984
	ctx.r5.s64 = ctx.r9.s64 + 10984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29A80;
	sub_82A1EC08(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r7,8136
	ctx.r5.s64 = ctx.r7.s64 + 8136;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1fa08
	ctx.lr = 0x82A29A98;
	sub_82A1FA08(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r6,10992
	ctx.r5.s64 = ctx.r6.s64 + 10992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29AAC;
	sub_82A1EC08(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,68(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r3,64(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82a29ac8
	if (ctx.cr6.lt) goto loc_82A29AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A29AC8;
	sub_82179350(ctx, base);
loc_82A29AC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822277c0
	ctx.lr = 0x82A29ADC;
	sub_822277C0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,10632
	ctx.r5.s64 = ctx.r10.s64 + 10632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29B08;
	sub_82A1EC08(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a29b68
	if (ctx.cr6.eq) goto loc_82A29B68;
loc_82A29B38:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219ab28
	ctx.lr = 0x82A29B48;
	sub_8219AB28(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a1ec08
	ctx.lr = 0x82A29B58;
	sub_82A1EC08(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a29b38
	if (!ctx.cr6.eq) goto loc_82A29B38;
loc_82A29B68:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82A29B74;
	sub_82BC55B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29B8C"))) PPC_WEAK_FUNC(sub_82A29B8C);
PPC_FUNC_IMPL(__imp__sub_82A29B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29B90"))) PPC_WEAK_FUNC(sub_82A29B90);
PPC_FUNC_IMPL(__imp__sub_82A29B90) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a29bd0
	if (!ctx.cr6.lt) goto loc_82A29BD0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a29bd0
	if (ctx.cr6.eq) goto loc_82A29BD0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a29be4
	if (!ctx.cr6.eq) goto loc_82A29BE4;
loc_82A29BD0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A29BE4;
	sub_82A1F1D0(ctx, base);
loc_82A29BE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228028
	ctx.lr = 0x82A29BF0;
	sub_82228028(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82a29c14
	if (!ctx.cr6.eq) goto loc_82A29C14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82A29C14:
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

__attribute__((alias("__imp__sub_82A29C28"))) PPC_WEAK_FUNC(sub_82A29C28);
PPC_FUNC_IMPL(__imp__sub_82A29C28) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a29c74
	if (!ctx.cr6.lt) goto loc_82A29C74;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a29c74
	if (ctx.cr6.eq) goto loc_82A29C74;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a29c88
	if (ctx.cr6.eq) goto loc_82A29C88;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a29c88
	if (ctx.cr6.eq) goto loc_82A29C88;
loc_82A29C74:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A29C88;
	sub_82A1F1D0(ctx, base);
loc_82A29C88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a29cc8
	if (!ctx.cr6.lt) goto loc_82A29CC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A29CA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a29ca0
	if (ctx.cr6.lt) goto loc_82A29CA0;
loc_82A29CC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82227ba0
	ctx.lr = 0x82A29CE0;
	sub_82227BA0(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82A29D20"))) PPC_WEAK_FUNC(sub_82A29D20);
PPC_FUNC_IMPL(__imp__sub_82A29D20) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a1eb78
	ctx.lr = 0x82A29D34;
	sub_82A1EB78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29D48"))) PPC_WEAK_FUNC(sub_82A29D48);
PPC_FUNC_IMPL(__imp__sub_82A29D48) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a29d8c
	if (!ctx.cr6.lt) goto loc_82A29D8C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a29d8c
	if (ctx.cr6.eq) goto loc_82A29D8C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a29da4
	if (ctx.cr6.eq) goto loc_82A29DA4;
loc_82A29D8C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A29DA4;
	sub_82A1F2D0(ctx, base);
loc_82A29DA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a29de4
	if (!ctx.cr6.lt) goto loc_82A29DE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A29DBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a29dbc
	if (ctx.cr6.lt) goto loc_82A29DBC;
loc_82A29DE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82195e30
	ctx.lr = 0x82A29DFC;
	sub_82195E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a29e14
	if (!ctx.cr6.eq) goto loc_82A29E14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = ctx.r11.s64 + 8736;
	// bl 0x82a1f3f8
	ctx.lr = 0x82A29E14;
	sub_82A1F3F8(ctx, base);
loc_82A29E14:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82A29E2C"))) PPC_WEAK_FUNC(sub_82A29E2C);
PPC_FUNC_IMPL(__imp__sub_82A29E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29E30"))) PPC_WEAK_FUNC(sub_82A29E30);
PPC_FUNC_IMPL(__imp__sub_82A29E30) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a29e70
	if (!ctx.cr6.eq) goto loc_82A29E70;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82a29e9c
	goto loc_82A29E9C;
loc_82A29E70:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82A29E74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a29e74
	if (!ctx.cr6.eq) goto loc_82A29E74;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A29E9C;
	sub_82A1EA18(ctx, base);
loc_82A29E9C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A29EAC;
	sub_82A1EC08(ctx, base);
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

__attribute__((alias("__imp__sub_82A29EC4"))) PPC_WEAK_FUNC(sub_82A29EC4);
PPC_FUNC_IMPL(__imp__sub_82A29EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29EC8"))) PPC_WEAK_FUNC(sub_82A29EC8);
PPC_FUNC_IMPL(__imp__sub_82A29EC8) {
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
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x82a1ec08
	ctx.lr = 0x82A29F10;
	sub_82A1EC08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29F20"))) PPC_WEAK_FUNC(sub_82A29F20);
PPC_FUNC_IMPL(__imp__sub_82A29F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a29f78
	if (!ctx.cr6.lt) goto loc_82A29F78;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r9,r9,-26784
	ctx.r9.s64 = ctx.r9.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a29f78
	if (ctx.cr6.eq) goto loc_82A29F78;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82a29f78
	if (!ctx.cr6.eq) goto loc_82A29F78;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82a29f60
	if (ctx.cr6.lt) goto loc_82A29F60;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A29F60:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82A29F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29F84"))) PPC_WEAK_FUNC(sub_82A29F84);
PPC_FUNC_IMPL(__imp__sub_82A29F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29F88"))) PPC_WEAK_FUNC(sub_82A29F88);
PPC_FUNC_IMPL(__imp__sub_82A29F88) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82a29fd8
	if (!ctx.cr6.eq) goto loc_82A29FD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x821dff48
	ctx.lr = 0x82A29FD4;
	sub_821DFF48(ctx, base);
	// b 0x82a2a000
	goto loc_82A2A000;
loc_82A29FD8:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82A2A000:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82A2A010;
	sub_82A1EC08(ctx, base);
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

__attribute__((alias("__imp__sub_82A2A028"))) PPC_WEAK_FUNC(sub_82A2A028);
PPC_FUNC_IMPL(__imp__sub_82A2A028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2A030;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29f20
	ctx.lr = 0x82A2A040;
	sub_82A29F20(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11124
	ctx.r5.s64 = ctx.r11.s64 + 11124;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a1f668
	ctx.lr = 0x82A2A064;
	sub_82A1F668(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2A078;
	sub_82A1E620(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82a2a094
	if (ctx.cr6.eq) goto loc_82A2A094;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8222d580
	ctx.lr = 0x82A2A08C;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a0e0
	if (ctx.cr6.eq) goto loc_82A2A0E0;
loc_82A2A094:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// bl 0x8222a608
	ctx.lr = 0x82A2A0A4;
	sub_8222A608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2A0B4;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2a1cc
	if (!ctx.cr6.eq) goto loc_82A2A1CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A0E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2A0EC;
	sub_82A1E620(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-26784
	ctx.r10.s64 = ctx.r11.s64 + -26784;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2a36c
	if (ctx.cr6.eq) goto loc_82A2A36C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82a2a36c
	if (!ctx.cr6.eq) goto loc_82A2A36C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,11132
	ctx.r4.s64 = ctx.r11.s64 + 11132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2A11C;
	sub_82A1EA80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82a2a16c
	if (ctx.cr6.eq) goto loc_82A2A16C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A2A138;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2a148
	if (!ctx.cr6.eq) goto loc_82A2A148;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a2a174
	goto loc_82A2A174;
loc_82A2A148:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2a164
	if (ctx.cr6.lt) goto loc_82A2A164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2A164;
	sub_82179350(ctx, base);
loc_82A2A164:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A2A16C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
loc_82A2A174:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2A180;
	sub_82A1E620(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a2a1cc
	if (ctx.cr6.eq) goto loc_82A2A1CC;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82A2A1CC:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b908
	ctx.lr = 0x82A2A1DC;
	sub_82A2B908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82a2a200
	if (!ctx.cr6.eq) goto loc_82A2A200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,11164
	ctx.r5.s64 = ctx.r11.s64 + 11164;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A2A1F8;
	sub_82A1F1D0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A200:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e1768
	ctx.lr = 0x82A2A20C;
	sub_821E1768(ctx, base);
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A218;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a284
	if (ctx.cr6.eq) goto loc_82A2A284;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11180
	ctx.r4.s64 = ctx.r11.s64 + 11180;
	// bl 0x82a29e30
	ctx.lr = 0x82A2A234;
	sub_82A29E30(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r10,11188
	ctx.r4.s64 = ctx.r10.s64 + 11188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29e30
	ctx.lr = 0x82A2A248;
	sub_82A29E30(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r9,11200
	ctx.r4.s64 = ctx.r9.s64 + 11200;
	// bl 0x82a29ec8
	ctx.lr = 0x82A2A25C;
	sub_82A29EC8(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r8,11212
	ctx.r4.s64 = ctx.r8.s64 + 11212;
	// bl 0x82a29ec8
	ctx.lr = 0x82A2A270;
	sub_82A29EC8(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r7,11228
	ctx.r4.s64 = ctx.r7.s64 + 11228;
	// bl 0x82a29e30
	ctx.lr = 0x82A2A284;
	sub_82A29E30(ctx, base);
loc_82A2A284:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A290;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a2ac
	if (ctx.cr6.eq) goto loc_82A2A2AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11236
	ctx.r4.s64 = ctx.r11.s64 + 11236;
	// bl 0x82a29ec8
	ctx.lr = 0x82A2A2AC;
	sub_82A29EC8(ctx, base);
loc_82A2A2AC:
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A2B8;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a2d4
	if (ctx.cr6.eq) goto loc_82A2A2D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11248
	ctx.r4.s64 = ctx.r11.s64 + 11248;
	// bl 0x82a29ec8
	ctx.lr = 0x82A2A2D4;
	sub_82A29EC8(ctx, base);
loc_82A2A2D4:
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A2E0;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a310
	if (ctx.cr6.eq) goto loc_82A2A310;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x82a29e30
	ctx.lr = 0x82A2A2FC;
	sub_82A29E30(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r10,11256
	ctx.r4.s64 = ctx.r10.s64 + 11256;
	// bl 0x82a29e30
	ctx.lr = 0x82A2A310;
	sub_82A29E30(ctx, base);
loc_82A2A310:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A31C;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a338
	if (ctx.cr6.eq) goto loc_82A2A338;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11268
	ctx.r5.s64 = ctx.r11.s64 + 11268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29f88
	ctx.lr = 0x82A2A338;
	sub_82A29F88(ctx, base);
loc_82A2A338:
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2A344;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a360
	if (ctx.cr6.eq) goto loc_82A2A360;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11280
	ctx.r5.s64 = ctx.r11.s64 + 11280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29f88
	ctx.lr = 0x82A2A360;
	sub_82A29F88(ctx, base);
loc_82A2A360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A36C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,11136
	ctx.r5.s64 = ctx.r11.s64 + 11136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A2A380;
	sub_82A1F1D0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A388"))) PPC_WEAK_FUNC(sub_82A2A388);
PPC_FUNC_IMPL(__imp__sub_82A2A388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2A390;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29f20
	ctx.lr = 0x82A2A3A0;
	sub_82A29F20(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x8222a668
	ctx.lr = 0x82A2A3BC;
	sub_8222A668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2A3CC;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82a2a3f0
	if (!ctx.cr6.eq) goto loc_82A2A3F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11288
	ctx.r5.s64 = ctx.r11.s64 + 11288;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A2A3E8;
	sub_82A1F1D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A3F0:
	// addi r4,r28,2
	ctx.r4.s64 = ctx.r28.s64 + 2;
	// bl 0x8222a668
	ctx.lr = 0x82A2A3F8;
	sub_8222A668(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2b500
	ctx.lr = 0x82A2A408;
	sub_82A2B500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2a498
	if (ctx.cr6.eq) goto loc_82A2A498;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82a2a444
	if (ctx.cr6.eq) goto loc_82A2A444;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82A2A444:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A2A448:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2a448
	if (!ctx.cr6.eq) goto loc_82A2A448;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A2A46C;
	sub_82A1EA18(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,-12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A498:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A4BC"))) PPC_WEAK_FUNC(sub_82A2A4BC);
PPC_FUNC_IMPL(__imp__sub_82A2A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A4C0"))) PPC_WEAK_FUNC(sub_82A2A4C0);
PPC_FUNC_IMPL(__imp__sub_82A2A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2A4C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a29f20
	ctx.lr = 0x82A2A4D8;
	sub_82A29F20(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x8222a668
	ctx.lr = 0x82A2A4F4;
	sub_8222A668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2A504;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82a2a528
	if (!ctx.cr6.eq) goto loc_82A2A528;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,11288
	ctx.r5.s64 = ctx.r11.s64 + 11288;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A2A520;
	sub_82A1F1D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A528:
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82229360
	ctx.lr = 0x82A2A534;
	sub_82229360(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82A2A540;
	sub_82BC55B8(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82a2a570
	if (ctx.cr6.eq) goto loc_82A2A570;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82A2A570:
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222a668
	ctx.lr = 0x82A2A57C;
	sub_8222A668(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a2b450
	ctx.lr = 0x82A2A5A8;
	sub_82A2B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2a5d8
	if (ctx.cr6.eq) goto loc_82A2A5D8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
loc_82A2A5D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82a2a610
	if (!ctx.cr6.eq) goto loc_82A2A610;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2A610:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A2A614:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2a614
	if (!ctx.cr6.eq) goto loc_82A2A614;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A2A638;
	sub_82A1EA18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A644"))) PPC_WEAK_FUNC(sub_82A2A644);
PPC_FUNC_IMPL(__imp__sub_82A2A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A648"))) PPC_WEAK_FUNC(sub_82A2A648);
PPC_FUNC_IMPL(__imp__sub_82A2A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2A650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222a668
	ctx.lr = 0x82A2A664;
	sub_8222A668(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-26784
	ctx.r30.s64 = ctx.r11.s64 + -26784;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a2a694
	if (!ctx.cr6.lt) goto loc_82A2A694;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a2a694
	if (ctx.cr6.eq) goto loc_82A2A694;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a2a6ac
	if (ctx.cr6.eq) goto loc_82A2A6AC;
loc_82A2A694:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-26848
	ctx.r10.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82a1f2d0
	ctx.lr = 0x82A2A6AC;
	sub_82A1F2D0(ctx, base);
loc_82A2A6AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2a6c0
	if (ctx.cr6.lt) goto loc_82A2A6C0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A2A6C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2a6e8
	if (!ctx.cr6.eq) goto loc_82A2A6E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2a6e8
	if (ctx.cr6.eq) goto loc_82A2A6E8;
loc_82A2A6DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A2A6E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a2a704
	if (ctx.cr6.eq) goto loc_82A2A704;
	// bl 0x82a1f088
	ctx.lr = 0x82A2A700;
	sub_82A1F088(ctx, base);
	// b 0x82a2a708
	goto loc_82A2A708;
loc_82A2A704:
	// bl 0x82a1f0f8
	ctx.lr = 0x82A2A708;
	sub_82A1F0F8(ctx, base);
loc_82A2A708:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2a6dc
	if (ctx.cr6.eq) goto loc_82A2A6DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A2A714:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2a714
	if (!ctx.cr6.eq) goto loc_82A2A714;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A2A73C;
	sub_82A1EA18(ctx, base);
	// subfic r4,r28,-1
	ctx.xer.ca = ctx.r28.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r28.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5168
	ctx.lr = 0x82A2A748;
	sub_821E5168(ctx, base);
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A754"))) PPC_WEAK_FUNC(sub_82A2A754);
PPC_FUNC_IMPL(__imp__sub_82A2A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A758"))) PPC_WEAK_FUNC(sub_82A2A758);
PPC_FUNC_IMPL(__imp__sub_82A2A758) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a2a648
	sub_82A2A648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A760"))) PPC_WEAK_FUNC(sub_82A2A760);
PPC_FUNC_IMPL(__imp__sub_82A2A760) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a2a7a4
	if (!ctx.cr6.lt) goto loc_82A2A7A4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a2a7a4
	if (ctx.cr6.eq) goto loc_82A2A7A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a2a7b8
	if (!ctx.cr6.eq) goto loc_82A2A7B8;
loc_82A2A7A4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f1d0
	ctx.lr = 0x82A2A7B8;
	sub_82A1F1D0(ctx, base);
loc_82A2A7B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a648
	ctx.lr = 0x82A2A7C4;
	sub_82A2A648(ctx, base);
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

__attribute__((alias("__imp__sub_82A2A7D8"))) PPC_WEAK_FUNC(sub_82A2A7D8);
PPC_FUNC_IMPL(__imp__sub_82A2A7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2A7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r9,r10,258
	ctx.r9.s64 = ctx.r10.s64 + 258;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x822285d8
	ctx.lr = 0x82A2A820;
	sub_822285D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r30,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x822285d8
	ctx.lr = 0x82A2A858;
	sub_822285D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r9,r5,-26784
	ctx.r9.s64 = ctx.r5.s64 + -26784;
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a2a944
	if (ctx.cr6.eq) goto loc_82A2A944;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82a2a944
	if (!ctx.cr6.eq) goto loc_82A2A944;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,11308
	ctx.r8.s64 = ctx.r9.s64 + 11308;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2a8c4
	if (!ctx.cr6.eq) goto loc_82A2A8C4;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2a8ec
	goto loc_82A2A8EC;
loc_82A2A8C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A2A8C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2a8c8
	if (!ctx.cr6.eq) goto loc_82A2A8C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A2A8EC;
	sub_82A1EA18(ctx, base);
loc_82A2A8EC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a2a920
	if (ctx.cr6.lt) goto loc_82A2A920;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82a2a928
	goto loc_82A2A928;
loc_82A2A920:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82A2A928:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82228c70
	ctx.lr = 0x82A2A944;
	sub_82228C70(ctx, base);
loc_82A2A944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A94C"))) PPC_WEAK_FUNC(sub_82A2A94C);
PPC_FUNC_IMPL(__imp__sub_82A2A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A950"))) PPC_WEAK_FUNC(sub_82A2A950);
PPC_FUNC_IMPL(__imp__sub_82A2A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2A958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,258
	ctx.r30.s64 = ctx.r11.s64 + 258;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x822285d8
	ctx.lr = 0x82A2A994;
	sub_822285D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r7,r9,-26784
	ctx.r7.s64 = ctx.r9.s64 + -26784;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a2a9cc
	if (ctx.cr6.eq) goto loc_82A2A9CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82a2aa20
	if (ctx.cr6.eq) goto loc_82A2AA20;
loc_82A2A9CC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1768
	ctx.lr = 0x82A2A9E0;
	sub_821E1768(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82a1eca0
	ctx.lr = 0x82A2AA20;
	sub_82A1ECA0(ctx, base);
loc_82A2AA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AA28"))) PPC_WEAK_FUNC(sub_82A2AA28);
PPC_FUNC_IMPL(__imp__sub_82A2AA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82A2AA30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29f20
	ctx.lr = 0x82A2AA40;
	sub_82A29F20(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2AA58;
	sub_82A1E620(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-26784
	ctx.r28.s64 = ctx.r11.s64 + -26784;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a2aa74
	if (ctx.cr6.eq) goto loc_82A2AA74;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82a2aa90
	if (ctx.cr6.gt) goto loc_82A2AA90;
loc_82A2AA74:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82A2AA80;
	sub_82BC55B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a2abd8
	goto loc_82A2ABD8;
loc_82A2AA90:
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2AAA0;
	sub_82A1E620(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-26848
	ctx.r29.s64 = ctx.r11.s64 + -26848;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a2aaf8
	if (ctx.cr6.eq) goto loc_82A2AAF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A2AAC0;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2aad0
	if (!ctx.cr6.eq) goto loc_82A2AAD0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82a2ab04
	goto loc_82A2AB04;
loc_82A2AAD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2aaec
	if (ctx.cr6.lt) goto loc_82A2AAEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2AAEC;
	sub_82179350(ctx, base);
loc_82A2AAEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2AAF8;
	sub_82A1E620(ctx, base);
loc_82A2AAF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r25,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r25.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82a2ab14
	if (!ctx.cr0.eq) goto loc_82A2AB14;
loc_82A2AB04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f2d0
	ctx.lr = 0x82A2AB14;
	sub_82A1F2D0(ctx, base);
loc_82A2AB14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2AB20;
	sub_82A1E620(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a2ab34
	if (ctx.cr6.eq) goto loc_82A2AB34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a2ab44
	if (ctx.cr6.eq) goto loc_82A2AB44;
loc_82A2AB34:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f2d0
	ctx.lr = 0x82A2AB44;
	sub_82A1F2D0(ctx, base);
loc_82A2AB44:
	// addi r4,r27,3
	ctx.r4.s64 = ctx.r27.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2AB50;
	sub_82A1E620(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a2ab64
	if (ctx.cr6.eq) goto loc_82A2AB64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82a2ab6c
	if (ctx.cr6.gt) goto loc_82A2AB6C;
loc_82A2AB64:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a2ab78
	goto loc_82A2AB78;
loc_82A2AB6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a668
	ctx.lr = 0x82A2AB74;
	sub_8222A668(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82A2AB78:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r11,-22568
	ctx.r30.s64 = ctx.r11.s64 + -22568;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82ca3980
	ctx.lr = 0x82A2AB90;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2ab9c
	if (ctx.cr6.eq) goto loc_82A2AB9C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A2AB9C:
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2ABA8;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2abb4
	if (ctx.cr6.eq) goto loc_82A2ABB4;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_82A2ABB4:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2ABC0;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2abcc
	if (ctx.cr6.eq) goto loc_82A2ABCC;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
loc_82A2ABCC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82a2abd8
	if (!ctx.cr6.gt) goto loc_82A2ABD8;
	// ori r29,r29,8
	ctx.r29.u64 = ctx.r29.u64 | 8;
loc_82A2ABD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a950
	ctx.lr = 0x82A2ABE0;
	sub_82A2A950(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82a1e620
	ctx.lr = 0x82A2AC08;
	sub_82A1E620(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a1eca0
	ctx.lr = 0x82A2AC38;
	sub_82A1ECA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x82a2ac5c
	if (ctx.cr6.eq) goto loc_82A2AC5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a2ac64
	if (!ctx.cr6.eq) goto loc_82A2AC64;
loc_82A2AC5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A2AC64:
	// stw r9,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r28.u32);
	// stw r28,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r28.u32);
	// stb r10,56(r24)
	PPC_STORE_U8(ctx.r24.u32 + 56, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AC80"))) PPC_WEAK_FUNC(sub_82A2AC80);
PPC_FUNC_IMPL(__imp__sub_82A2AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2AC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29f20
	ctx.lr = 0x82A2AC98;
	sub_82A29F20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2acd4
	if (ctx.cr6.eq) goto loc_82A2ACD4;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r9,r10,-22568
	ctx.r9.s64 = ctx.r10.s64 + -22568;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a2acd4
	if (ctx.cr6.eq) goto loc_82A2ACD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,11328
	ctx.r4.s64 = ctx.r11.s64 + 11328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A2ACD0;
	sub_82A1EA18(ctx, base);
	// b 0x82a2ad28
	goto loc_82A2AD28;
loc_82A2ACD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a950
	ctx.lr = 0x82A2ACDC;
	sub_82A2A950(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x822285d8
	ctx.lr = 0x82A2AD04;
	sub_822285D8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// bl 0x821dff48
	ctx.lr = 0x82A2AD28;
	sub_821DFF48(ctx, base);
loc_82A2AD28:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2ad44
	if (ctx.cr6.eq) goto loc_82A2AD44;
	// li r11,99
	ctx.r11.s64 = 99;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82A2AD44:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2ad60
	if (ctx.cr6.eq) goto loc_82A2AD60;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,114
	ctx.r9.s64 = 114;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82A2AD60:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2ad7c
	if (ctx.cr6.eq) goto loc_82A2AD7C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,108
	ctx.r9.s64 = 108;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82A2AD7C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
loc_82A2AD90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2ad90
	if (!ctx.cr6.eq) goto loc_82A2AD90;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82a1ea18
	ctx.lr = 0x82A2ADB8;
	sub_82A1EA18(ctx, base);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// li r3,3
	ctx.r3.s64 = 3;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2ADF8"))) PPC_WEAK_FUNC(sub_82A2ADF8);
PPC_FUNC_IMPL(__imp__sub_82A2ADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A2AE00;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82240578
	ctx.lr = 0x82A2AE0C;
	sub_82240578(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r25,r11,11344
	ctx.r25.s64 = ctx.r11.s64 + 11344;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82A2AE20;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82A2AE24;
	sub_82240578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca8fb8
	ctx.lr = 0x82A2AE34;
	sub_82CA8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2aff0
	if (ctx.cr6.eq) goto loc_82A2AFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,3200
	ctx.r26.s64 = ctx.r11.s64 + 3200;
	// addi r28,r10,11364
	ctx.r28.s64 = ctx.r10.s64 + 11364;
	// addi r27,r9,11356
	ctx.r27.s64 = ctx.r9.s64 + 11356;
loc_82A2AE58:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82A2AE60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82a2ae84
	if (ctx.cr6.eq) goto loc_82A2AE84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a2ae60
	if (ctx.cr6.eq) goto loc_82A2AE60;
loc_82A2AE84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a2aff0
	if (ctx.cr6.eq) goto loc_82A2AFF0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A2AE94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a2ae94
	if (!ctx.cr6.eq) goto loc_82A2AE94;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r8,-152
	ctx.r4.s64 = ctx.r8.s64 + -152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ee10
	ctx.lr = 0x82A2AED0;
	sub_82A1EE10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2af10
	if (!ctx.cr6.eq) goto loc_82A2AF10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r10,-4792
	ctx.r4.s64 = ctx.r10.s64 + -4792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8219a8e8
	ctx.lr = 0x82A2AF08;
	sub_8219A8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2af88
	if (ctx.cr6.eq) goto loc_82A2AF88;
loc_82A2AF10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a2af60
	if (ctx.cr6.eq) goto loc_82A2AF60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e9e8
	ctx.lr = 0x82A2AF2C;
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2af3c
	if (!ctx.cr6.eq) goto loc_82A2AF3C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82a2af68
	goto loc_82A2AF68;
loc_82A2AF3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2af58
	if (ctx.cr6.lt) goto loc_82A2AF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2AF58;
	sub_82179350(ctx, base);
loc_82A2AF58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82A2AF60:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_82A2AF68:
	// bl 0x82240578
	ctx.lr = 0x82A2AF6C;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82A2AF78;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82A2AF7C;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82A2AF88;
	sub_82CA89A0(ctx, base);
loc_82A2AF88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a2afbc
	if (!ctx.cr6.lt) goto loc_82A2AFBC;
loc_82A2AF98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82a2af98
	if (ctx.cr6.lt) goto loc_82A2AF98;
loc_82A2AFBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82240578
	ctx.lr = 0x82A2AFC8;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82A2AFD4;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82A2AFD8;
	sub_82240578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca8fb8
	ctx.lr = 0x82A2AFE8;
	sub_82CA8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2ae58
	if (!ctx.cr6.eq) goto loc_82A2AE58;
loc_82A2AFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AFFC"))) PPC_WEAK_FUNC(sub_82A2AFFC);
PPC_FUNC_IMPL(__imp__sub_82A2AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B000"))) PPC_WEAK_FUNC(sub_82A2B000);
PPC_FUNC_IMPL(__imp__sub_82A2B000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82A2B008;
	__savegprlr_16(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x82a29f20
	ctx.lr = 0x82A2B01C;
	sub_82A29F20(ctx, base);
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r16,2
	ctx.r30.s64 = ctx.r16.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a1e620
	ctx.lr = 0x82A2B034;
	sub_82A1E620(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a2b050
	if (ctx.cr6.eq) goto loc_82A2B050;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8222d580
	ctx.lr = 0x82A2B048;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2b070
	if (ctx.cr6.eq) goto loc_82A2B070;
loc_82A2B050:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82A2B05C;
	sub_8222A608(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2b07c
	goto loc_82A2B07C;
loc_82A2B070:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82A2B07C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bne cr6,0x82a2b0a8
	if (!ctx.cr6.eq) goto loc_82A2B0A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x82a2b0c8
	goto loc_82A2B0C8;
loc_82A2B0A8:
	// addi r4,r16,1
	ctx.r4.s64 = ctx.r16.s64 + 1;
	// bl 0x82a1e8f0
	ctx.lr = 0x82A2B0B0;
	sub_82A1E8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2b318
	if (ctx.cr6.eq) goto loc_82A2B318;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A2B0C8:
	// bl 0x82a1ea18
	ctx.lr = 0x82A2B0CC;
	sub_82A1EA18(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,11384
	ctx.r4.s64 = ctx.r11.s64 + 11384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A2B0E0;
	sub_82A1EA18(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2B0F0;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2b2fc
	if (ctx.cr6.eq) goto loc_82A2B2FC;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r22,4
	ctx.r22.s64 = 4;
	// addi r21,r6,11468
	ctx.r21.s64 = ctx.r6.s64 + 11468;
	// addi r20,r5,11464
	ctx.r20.s64 = ctx.r5.s64 + 11464;
	// addi r19,r4,11448
	ctx.r19.s64 = ctx.r4.s64 + 11448;
	// addi r18,r3,11428
	ctx.r18.s64 = ctx.r3.s64 + 11428;
	// addi r23,r7,11424
	ctx.r23.s64 = ctx.r7.s64 + 11424;
	// addi r28,r8,11420
	ctx.r28.s64 = ctx.r8.s64 + 11420;
	// addi r27,r9,11416
	ctx.r27.s64 = ctx.r9.s64 + 11416;
	// addi r26,r10,11412
	ctx.r26.s64 = ctx.r10.s64 + 11412;
	// addi r24,r11,11404
	ctx.r24.s64 = ctx.r11.s64 + 11404;
loc_82A2B144:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// ble cr6,0x82a2b1cc
	if (!ctx.cr6.gt) goto loc_82A2B1CC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82a2b1cc
	if (ctx.cr6.eq) goto loc_82A2B1CC;
	// addi r30,r25,10
	ctx.r30.s64 = ctx.r25.s64 + 10;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2B16C;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2b180
	if (!ctx.cr6.eq) goto loc_82A2B180;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82a2b2e4
	goto loc_82A2B2E4;
loc_82A2B180:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A2B190;
	sub_82A1EA18(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2B1A0;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2b1c4
	if (ctx.cr6.eq) goto loc_82A2B1C4;
loc_82A2B1A8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r25,10
	ctx.r4.s64 = ctx.r25.s64 + 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2B1BC;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2b1a8
	if (!ctx.cr6.eq) goto loc_82A2B1A8;
loc_82A2B1C4:
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82a2b2e4
	goto loc_82A2B2E4;
loc_82A2B1CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2b1e8
	if (ctx.cr6.lt) goto loc_82A2B1E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2B1E8;
	sub_82179350(ctx, base);
loc_82A2B1E8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2B1FC;
	sub_82227EA0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b908
	ctx.lr = 0x82A2B220;
	sub_82A2B908(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2B230;
	sub_82A1EA80(ctx, base);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a2b248
	if (!ctx.cr6.gt) goto loc_82A2B248;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2B248;
	sub_82A1EA80(ctx, base);
loc_82A2B248:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2b26c
	if (ctx.cr6.eq) goto loc_82A2B26C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2B268;
	sub_82A1EA80(ctx, base);
	// b 0x82a2b2c8
	goto loc_82A2B2C8;
loc_82A2B26C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bne cr6,0x82a2b290
	if (!ctx.cr6.eq) goto loc_82A2B290;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2B28C;
	sub_82A1EA80(ctx, base);
	// b 0x82a2b2c8
	goto loc_82A2B2C8;
loc_82A2B290:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82a2b2b8
	if (ctx.cr6.eq) goto loc_82A2B2B8;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82a2b2b8
	if (ctx.cr6.eq) goto loc_82A2B2B8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea80
	ctx.lr = 0x82A2B2B4;
	sub_82A1EA80(ctx, base);
	// b 0x82a2b2c8
	goto loc_82A2B2C8;
loc_82A2B2B8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ea18
	ctx.lr = 0x82A2B2C8;
	sub_82A1EA18(ctx, base);
loc_82A2B2C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r4,r16,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r16.s64;
	// bl 0x82a1efc0
	ctx.lr = 0x82A2B2E4;
	sub_82A1EFC0(ctx, base);
loc_82A2B2E4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82A2B2F4;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2b144
	if (!ctx.cr6.eq) goto loc_82A2B144;
loc_82A2B2FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r4,r16,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r16.s64;
	// bl 0x82a1efc0
	ctx.lr = 0x82A2B318;
	sub_82A1EFC0(ctx, base);
loc_82A2B318:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B324"))) PPC_WEAK_FUNC(sub_82A2B324);
PPC_FUNC_IMPL(__imp__sub_82A2B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B328"))) PPC_WEAK_FUNC(sub_82A2B328);
PPC_FUNC_IMPL(__imp__sub_82A2B328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2b37c
	if (!ctx.cr6.eq) goto loc_82A2B37C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a2b37c
	if (!ctx.cr6.eq) goto loc_82A2B37C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2b35c
	if (!ctx.cr6.eq) goto loc_82A2B35C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_82A2B35C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_82A2B37C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B384"))) PPC_WEAK_FUNC(sub_82A2B384);
PPC_FUNC_IMPL(__imp__sub_82A2B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B388"))) PPC_WEAK_FUNC(sub_82A2B388);
PPC_FUNC_IMPL(__imp__sub_82A2B388) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2b39c
	if (ctx.cr6.eq) goto loc_82A2B39C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82a2b3a4
	if (!ctx.cr6.eq) goto loc_82A2B3A4;
loc_82A2B39C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A2B3A4:
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stb r5,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B3BC"))) PPC_WEAK_FUNC(sub_82A2B3BC);
PPC_FUNC_IMPL(__imp__sub_82A2B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B3C0"))) PPC_WEAK_FUNC(sub_82A2B3C0);
PPC_FUNC_IMPL(__imp__sub_82A2B3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a2b408
	if (!ctx.cr6.gt) goto loc_82A2B408;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_82A2B3D0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2b404
	if (!ctx.cr6.gt) goto loc_82A2B404;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a2b3f8
	if (!ctx.cr6.eq) goto loc_82A2B3F8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82A2B3F8:
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82a2b3d0
	if (ctx.cr6.gt) goto loc_82A2B3D0;
loc_82A2B404:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
loc_82A2B408:
	// bne cr6,0x82a2b430
	if (!ctx.cr6.eq) goto loc_82A2B430;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2b448
	if (!ctx.cr6.gt) goto loc_82A2B448;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r9,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r9.u32);
	// blr 
	return;
loc_82A2B430:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82a2b448
	if (!ctx.cr6.lt) goto loc_82A2B448;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_82A2B448:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B450"))) PPC_WEAK_FUNC(sub_82A2B450);
PPC_FUNC_IMPL(__imp__sub_82A2B450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2B458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2b4b0
	if (!ctx.cr6.eq) goto loc_82A2B4B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2b4b0
	if (!ctx.cr6.eq) goto loc_82A2B4B0;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2b4b0
	if (ctx.cr6.eq) goto loc_82A2B4B0;
	// bl 0x82a2b328
	ctx.lr = 0x82A2B498;
	sub_82A2B328(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcca50
	ctx.lr = 0x82A2B4A8;
	sub_82BCCA50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2b4f8
	if (!ctx.cr6.eq) goto loc_82A2B4F8;
loc_82A2B4B0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a2b4c4
	if (!ctx.cr6.eq) goto loc_82A2B4C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82a2b4c8
	goto loc_82A2B4C8;
loc_82A2B4C4:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
loc_82A2B4C8:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82a2b4f4
	if (ctx.cr6.lt) goto loc_82A2B4F4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2b4f4
	if (!ctx.cr6.gt) goto loc_82A2B4F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,11492
	ctx.r3.s64 = ctx.r11.s64 + 11492;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2B4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2B4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B500"))) PPC_WEAK_FUNC(sub_82A2B500);
PPC_FUNC_IMPL(__imp__sub_82A2B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2B508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a2b450
	ctx.lr = 0x82A2B534;
	sub_82A2B450(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2b56c
	if (ctx.cr6.eq) goto loc_82A2B56C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_82A2B56C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B574"))) PPC_WEAK_FUNC(sub_82A2B574);
PPC_FUNC_IMPL(__imp__sub_82A2B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B578"))) PPC_WEAK_FUNC(sub_82A2B578);
PPC_FUNC_IMPL(__imp__sub_82A2B578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A2B580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a2b60c
	if (ctx.cr6.eq) goto loc_82A2B60C;
	// lbz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2b60c
	if (!ctx.cr6.eq) goto loc_82A2B60C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822277c0
	ctx.lr = 0x82A2B5AC;
	sub_822277C0(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a2b5fc
	if (!ctx.cr6.gt) goto loc_82A2B5FC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A2B5CC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223b810
	ctx.lr = 0x82A2B5DC;
	sub_8223B810(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2b5cc
	if (ctx.cr6.lt) goto loc_82A2B5CC;
loc_82A2B5FC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x82a2b614
	goto loc_82A2B614;
loc_82A2B60C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2B614:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x82a2b648
	if (ctx.cr6.gt) goto loc_82A2B648;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2b644
	if (!ctx.cr6.lt) goto loc_82A2B644;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2B644:
	// bl 0x82a2e140
	ctx.lr = 0x82A2B648;
	sub_82A2E140(ctx, base);
loc_82A2B648:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B65C"))) PPC_WEAK_FUNC(sub_82A2B65C);
PPC_FUNC_IMPL(__imp__sub_82A2B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B660"))) PPC_WEAK_FUNC(sub_82A2B660);
PPC_FUNC_IMPL(__imp__sub_82A2B660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82A2B668;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a2b6e8
	if (!ctx.cr6.eq) goto loc_82A2B6E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r8,r11,3224
	ctx.r8.s64 = ctx.r11.s64 + 3224;
	// addi r7,r9,11532
	ctx.r7.s64 = ctx.r9.s64 + 11532;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r6,r10,11524
	ctx.r6.s64 = ctx.r10.s64 + 11524;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x82a2ed70
	ctx.lr = 0x82A2B6D4;
	sub_82A2ED70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
loc_82A2B6E8:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82a2b8fc
	if (ctx.cr6.eq) goto loc_82A2B8FC;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r9,-6812
	ctx.r24.s64 = ctx.r9.s64 + -6812;
	// addi r23,r8,11516
	ctx.r23.s64 = ctx.r8.s64 + 11516;
	// addi r28,r7,-12432
	ctx.r28.s64 = ctx.r7.s64 + -12432;
	// addi r27,r10,11508
	ctx.r27.s64 = ctx.r10.s64 + 11508;
	// addi r25,r11,3224
	ctx.r25.s64 = ctx.r11.s64 + 3224;
loc_82A2B728:
	// addi r11,r6,-76
	ctx.r11.s64 = ctx.r6.s64 + -76;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x82a2b8e4
	if (ctx.cr6.gt) goto loc_82A2B8E4;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-18612
	ctx.r12.s64 = ctx.r12.s64 + -18612;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2B8E8;
	case 1:
		goto loc_82A2B8E4;
	case 2:
		goto loc_82A2B8E4;
	case 3:
		goto loc_82A2B8E4;
	case 4:
		goto loc_82A2B8E4;
	case 5:
		goto loc_82A2B8E4;
	case 6:
		goto loc_82A2B8E4;
	case 7:
		goto loc_82A2B7F4;
	case 8:
		goto loc_82A2B8E4;
	case 9:
		goto loc_82A2B8E4;
	case 10:
		goto loc_82A2B8E4;
	case 11:
		goto loc_82A2B8E4;
	case 12:
		goto loc_82A2B8E4;
	case 13:
		goto loc_82A2B8E4;
	case 14:
		goto loc_82A2B8E4;
	case 15:
		goto loc_82A2B8E4;
	case 16:
		goto loc_82A2B8E4;
	case 17:
		goto loc_82A2B8E4;
	case 18:
		goto loc_82A2B8E4;
	case 19:
		goto loc_82A2B8E4;
	case 20:
		goto loc_82A2B8E4;
	case 21:
		goto loc_82A2B8E4;
	case 22:
		goto loc_82A2B8E4;
	case 23:
		goto loc_82A2B8E4;
	case 24:
		goto loc_82A2B8E4;
	case 25:
		goto loc_82A2B8E4;
	case 26:
		goto loc_82A2B8E8;
	case 27:
		goto loc_82A2B8E4;
	case 28:
		goto loc_82A2B8E4;
	case 29:
		goto loc_82A2B8E4;
	case 30:
		goto loc_82A2B8E4;
	case 31:
		goto loc_82A2B8E4;
	case 32:
		goto loc_82A2B878;
	case 33:
		goto loc_82A2B8E4;
	case 34:
		goto loc_82A2B8AC;
	case 35:
		goto loc_82A2B8E4;
	case 36:
		goto loc_82A2B8E4;
	case 37:
		goto loc_82A2B8E4;
	case 38:
		goto loc_82A2B8E4;
	case 39:
		goto loc_82A2B8E4;
	case 40:
		goto loc_82A2B8E4;
	case 41:
		goto loc_82A2B8A0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-18200(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18200);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18444(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18444);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18200(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18200);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18312(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18312);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18260(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18260);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18204(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r21,-18272(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18272);
loc_82A2B7F4:
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2b824
	if (ctx.cr6.eq) goto loc_82A2B824;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// rotlwi r4,r27,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bl 0x82a2ed70
	ctx.lr = 0x82A2B820;
	sub_82A2ED70(ctx, base);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B824:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,64(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// beq cr6,0x82a2b860
	if (ctx.cr6.eq) goto loc_82A2B860;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A2B860:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a2ed70
	ctx.lr = 0x82A2B874;
	sub_82A2ED70(ctx, base);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B878:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a2b894
	if (ctx.cr6.eq) goto loc_82A2B894;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82A2B88C;
	sub_82BC88B8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B8A0:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B8AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a2b8c8
	if (ctx.cr6.eq) goto loc_82A2B8C8;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a2c220
	ctx.lr = 0x82A2B8C4;
	sub_82A2C220(ctx, base);
	// b 0x82a2b8cc
	goto loc_82A2B8CC;
loc_82A2B8C8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82A2B8CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82a2b8e8
	if (!ctx.cr6.eq) goto loc_82A2B8E8;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// b 0x82a2b8e8
	goto loc_82A2B8E8;
loc_82A2B8E4:
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_82A2B8E8:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a2b728
	if (!ctx.cr6.eq) goto loc_82A2B728;
loc_82A2B8FC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B908"))) PPC_WEAK_FUNC(sub_82A2B908);
PPC_FUNC_IMPL(__imp__sub_82A2B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2B910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82a2b948
	if (!ctx.cr6.eq) goto loc_82A2B948;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2b970
	goto loc_82A2B970;
loc_82A2B948:
	// lwz r11,96(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2b970
	if (ctx.cr6.eq) goto loc_82A2B970;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82A2B970:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b660
	ctx.lr = 0x82A2B980;
	sub_82A2B660(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2B990;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2b9f4
	if (ctx.cr6.eq) goto loc_82A2B9F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a2b9ac
	if (!ctx.cr6.eq) goto loc_82A2B9AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a2b9b4
	goto loc_82A2B9B4;
loc_82A2B9AC:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82A2B9B4:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x82a2b9e8
	if (ctx.cr6.gt) goto loc_82A2B9E8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2b9e4
	if (!ctx.cr6.lt) goto loc_82A2B9E4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2B9E4:
	// bl 0x82a2e140
	ctx.lr = 0x82A2B9E8;
	sub_82A2E140(ctx, base);
loc_82A2B9E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A2B9F4:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2BA00;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2ba14
	if (ctx.cr6.eq) goto loc_82A2BA14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b578
	ctx.lr = 0x82A2BA14;
	sub_82A2B578(ctx, base);
loc_82A2BA14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2BA20"))) PPC_WEAK_FUNC(sub_82A2BA20);
PPC_FUNC_IMPL(__imp__sub_82A2BA20) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82A2BA28;
	__savegprlr_16(ctx, base);
	// lwz r24,44(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r26,75(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// addi r18,r24,-1
	ctx.r18.s64 = ctx.r24.s64 + -1;
	// cmplwi cr6,r26,250
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 250, ctx.xer);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// bgt cr6,0x82a2bab4
	if (ctx.cr6.gt) goto loc_82A2BAB4;
	// lbz r20,74(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// lbz r11,73(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// clrlwi r10,r20,31
	ctx.r10.u64 = ctx.r20.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82a2bab4
	if (ctx.cr6.gt) goto loc_82A2BAB4;
	// rlwinm r17,r20,0,29,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82a2ba6c
	if (ctx.cr6.eq) goto loc_82A2BA6C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2bab4
	if (ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BA6C:
	// lbz r19,72(r3)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82a2bab4
	if (ctx.cr6.gt) goto loc_82A2BAB4;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82a2ba90
	if (ctx.cr6.eq) goto loc_82A2BA90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BA90:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82a2bab4
	if (!ctx.cr6.gt) goto loc_82A2BAB4;
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r9,30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 30, ctx.xer);
	// beq cr6,0x82a2babc
	if (ctx.cr6.eq) goto loc_82A2BABC;
loc_82A2BAB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca2c08
	__restgprlr_16(ctx, base);
	return;
loc_82A2BABC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a2bfd4
	if (!ctx.cr6.gt) goto loc_82A2BFD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r21,r11,-27020
	ctx.r21.s64 = ctx.r11.s64 + -27020;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
loc_82A2BAD8:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r29,r11,26,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// lbzx r6,r30,r21
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82a2bbb8
	if (ctx.cr6.lt) goto loc_82A2BBB8;
	// beq cr6,0x82a2bb98
	if (ctx.cr6.eq) goto loc_82A2BB98;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82a2bc60
	if (!ctx.cr6.lt) goto loc_82A2BC60;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r10,r6,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// subf r7,r23,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r23.s64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82a2bc60
	if (!ctx.cr6.eq) goto loc_82A2BC60;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82a2bab4
	if (ctx.cr0.lt) goto loc_82A2BAB4;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a2bc60
	if (!ctx.cr6.gt) goto loc_82A2BC60;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82A2BB60:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r16,r8,26
	ctx.r16.u64 = ctx.r8.u32 & 0x3F;
	// cmpwi cr6,r16,34
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 34, ctx.xer);
	// bne cr6,0x82a2bb8c
	if (!ctx.cr6.eq) goto loc_82A2BB8C;
	// rlwinm r8,r8,0,9,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FC000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a2bb8c
	if (!ctx.cr6.eq) goto loc_82A2BB8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2bb60
	if (ctx.cr6.lt) goto loc_82A2BB60;
loc_82A2BB8C:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82a2bc5c
	goto loc_82A2BC5C;
loc_82A2BB98:
	// rlwinm r10,r6,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// rlwinm r7,r11,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82a2bc60
	if (!ctx.cr6.eq) goto loc_82A2BC60;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// b 0x82a2bc60
	goto loc_82A2BC60;
loc_82A2BBB8:
	// rlwinm r10,r6,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x3;
	// rlwinm r7,r11,9,23,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// rlwinm r31,r11,18,23,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2bc08
	if (ctx.cr6.eq) goto loc_82A2BC08;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a2bbfc
	if (ctx.cr6.eq) goto loc_82A2BBFC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82a2bc10
	if (!ctx.cr6.eq) goto loc_82A2BC10;
	// rlwinm r11,r7,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2bbfc
	if (ctx.cr6.eq) goto loc_82A2BBFC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r7,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// b 0x82a2bc10
	goto loc_82A2BC10;
loc_82A2BBFC:
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// b 0x82a2bc10
	goto loc_82A2BC10;
loc_82A2BC08:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BC10:
	// rlwinm r11,r6,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2bc58
	if (ctx.cr6.eq) goto loc_82A2BC58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a2bc4c
	if (ctx.cr6.eq) goto loc_82A2BC4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a2bc60
	if (!ctx.cr6.eq) goto loc_82A2BC60;
	// rlwinm r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2bc4c
	if (ctx.cr6.eq) goto loc_82A2BC4C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r31,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// b 0x82a2bc60
	goto loc_82A2BC60;
loc_82A2BC4C:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// b 0x82a2bc60
	goto loc_82A2BC60;
loc_82A2BC58:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82A2BC5C:
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BC60:
	// rlwinm r11,r6,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2bc78
	if (ctx.cr6.eq) goto loc_82A2BC78;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82a2bc78
	if (!ctx.cr6.eq) goto loc_82A2BC78;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_82A2BC78:
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2bca0
	if (ctx.cr6.eq) goto loc_82A2BCA0;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BCA0:
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bgt cr6,0x82a2bfc8
	if (ctx.cr6.gt) goto loc_82A2BFC8;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-17212
	ctx.r12.s64 = ctx.r12.s64 + -17212;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2BD54;
	case 1:
		goto loc_82A2BD88;
	case 2:
		goto loc_82A2BDA0;
	case 3:
		goto loc_82A2BDA8;
	case 4:
		goto loc_82A2BFC8;
	case 5:
		goto loc_82A2BDA8;
	case 6:
		goto loc_82A2BDA0;
	case 7:
		goto loc_82A2BFC8;
	case 8:
		goto loc_82A2BFC8;
	case 9:
		goto loc_82A2BDC4;
	case 10:
		goto loc_82A2BFC8;
	case 11:
		goto loc_82A2BFC8;
	case 12:
		goto loc_82A2BFC8;
	case 13:
		goto loc_82A2BFC8;
	case 14:
		goto loc_82A2BFC8;
	case 15:
		goto loc_82A2BFC8;
	case 16:
		goto loc_82A2BFC8;
	case 17:
		goto loc_82A2BFC8;
	case 18:
		goto loc_82A2BFC8;
	case 19:
		goto loc_82A2BDE0;
	case 20:
		goto loc_82A2BE20;
	case 21:
		goto loc_82A2BFC8;
	case 22:
		goto loc_82A2BFC8;
	case 23:
		goto loc_82A2BFC8;
	case 24:
		goto loc_82A2BFC8;
	case 25:
		goto loc_82A2BFC8;
	case 26:
		goto loc_82A2BE48;
	case 27:
		goto loc_82A2BE48;
	case 28:
		goto loc_82A2BEC4;
	case 29:
		goto loc_82A2BE14;
	case 30:
		goto loc_82A2BE14;
	case 31:
		goto loc_82A2BDE8;
	case 32:
		goto loc_82A2BED4;
	case 33:
		goto loc_82A2BFC8;
	case 34:
		goto loc_82A2BEFC;
	case 35:
		goto loc_82A2BF6C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-17068(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17068);
	// lwz r21,-17016(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17016);
	// lwz r21,-16992(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16992);
	// lwz r21,-16984(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16984);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16984(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16984);
	// lwz r21,-16992(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16992);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16956(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16956);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16928(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16928);
	// lwz r21,-16864(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16864);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16824(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16824);
	// lwz r21,-16824(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16824);
	// lwz r21,-16700(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16700);
	// lwz r21,-16876(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16876);
	// lwz r21,-16876(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16876);
	// lwz r21,-16920(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16920);
	// lwz r21,-16684(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16684);
	// lwz r21,-16440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16440);
	// lwz r21,-16644(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16644);
	// lwz r21,-16532(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16532);
loc_82A2BD54:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82a2bfc8
	if (!ctx.cr6.eq) goto loc_82A2BFC8;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,34
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 34, ctx.xer);
	// bne cr6,0x82a2bfc8
	if (!ctx.cr6.eq) goto loc_82A2BFC8;
	// rlwinm r11,r11,0,9,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2bab4
	if (ctx.cr6.eq) goto loc_82A2BAB4;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BD88:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82a2bfc8
	if (ctx.cr6.gt) goto loc_82A2BFC8;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a2bfc8
	if (ctx.cr6.gt) goto loc_82A2BFC8;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BDA0:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// b 0x82a2bfc4
	goto loc_82A2BFC4;
loc_82A2BDA8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BDC4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a2bfc8
	if (!ctx.cr6.eq) goto loc_82A2BFC8;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BDE0:
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// b 0x82a2bfc4
	goto loc_82A2BFC4;
loc_82A2BDE8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// blt cr6,0x82a2bab4
	if (ctx.cr6.lt) goto loc_82A2BAB4;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2bfc8
	if (ctx.cr6.lt) goto loc_82A2BFC8;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BE14:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
loc_82A2BE20:
	// add r10,r7,r27
	ctx.r10.u64 = ctx.r7.u64 + ctx.r27.u64;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82a2bfc8
	if (ctx.cr6.eq) goto loc_82A2BFC8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2bfc8
	if (!ctx.cr6.lt) goto loc_82A2BFC8;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82a2bfc8
	if (ctx.cr6.gt) goto loc_82A2BFC8;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BE48:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a2be60
	if (ctx.cr6.eq) goto loc_82A2BE60;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
loc_82A2BE60:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a2be9c
	if (!ctx.cr6.eq) goto loc_82A2BE9C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x82a2bab4
	if (ctx.cr6.lt) goto loc_82A2BAB4;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x82a2be8c
	if (!ctx.cr6.gt) goto loc_82A2BE8C;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BE8C:
	// rlwinm r11,r10,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
	// b 0x82a2beb4
	goto loc_82A2BEB4;
loc_82A2BE9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2beb4
	if (ctx.cr6.eq) goto loc_82A2BEB4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
loc_82A2BEB4:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82a2bfc8
	if (ctx.cr6.lt) goto loc_82A2BFC8;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BEC4:
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82a2bfc8
	if (!ctx.cr0.gt) goto loc_82A2BFC8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82a2bfbc
	goto loc_82A2BFBC;
loc_82A2BED4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a2bee8
	if (!ctx.cr6.gt) goto loc_82A2BEE8;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
loc_82A2BEE8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a2bfc8
	if (!ctx.cr6.eq) goto loc_82A2BFC8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r18.s32, ctx.xer);
	// b 0x82a2bfc4
	goto loc_82A2BFC4;
loc_82A2BEFC:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + ctx.r27.u64;
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82a2bf5c
	if (ctx.cr6.lt) goto loc_82A2BF5C;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82A2BF34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82a2bf4c
	if (ctx.cr6.eq) goto loc_82A2BF4C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BF4C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a2bf34
	if (!ctx.cr6.gt) goto loc_82A2BF34;
loc_82A2BF5C:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// beq cr6,0x82a2bfc8
	if (ctx.cr6.eq) goto loc_82A2BFC8;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// b 0x82a2bfc8
	goto loc_82A2BFC8;
loc_82A2BF6C:
	// rlwinm r11,r20,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2bab4
	if (ctx.cr6.eq) goto loc_82A2BAB4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82a2bfb8
	if (!ctx.cr6.eq) goto loc_82A2BFB8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x82a2bab4
	if (ctx.cr6.lt) goto loc_82A2BAB4;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x82a2bfac
	if (!ctx.cr6.gt) goto loc_82A2BFAC;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BFAC:
	// rlwinm r11,r10,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2bab4
	if (!ctx.cr6.eq) goto loc_82A2BAB4;
loc_82A2BFB8:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_82A2BFBC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
loc_82A2BFC4:
	// bge cr6,0x82a2bab4
	if (!ctx.cr6.lt) goto loc_82A2BAB4;
loc_82A2BFC8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82a2bad8
	if (ctx.cr6.lt) goto loc_82A2BAD8;
loc_82A2BFD4:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// b 0x82ca2c08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2BFE0"))) PPC_WEAK_FUNC(sub_82A2BFE0);
PPC_FUNC_IMPL(__imp__sub_82A2BFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2BFE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2c0d0
	if (!ctx.cr6.eq) goto loc_82A2C0D0;
loc_82A2C00C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c0d0
	if (!ctx.cr6.eq) goto loc_82A2C0D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2b328
	ctx.lr = 0x82A2C02C;
	sub_82A2B328(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcca50
	ctx.lr = 0x82A2C040;
	sub_82BCCA50(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2c0dc
	if (!ctx.cr6.eq) goto loc_82A2C0DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ba20
	ctx.lr = 0x82A2C05C;
	sub_82A2BA20(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82a2c0d0
	if (ctx.cr6.gt) goto loc_82A2C0D0;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-16256
	ctx.r12.s64 = ctx.r12.s64 + -16256;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2C0B0;
	case 1:
		goto loc_82A2C0D0;
	case 2:
		goto loc_82A2C0D0;
	case 3:
		goto loc_82A2C0D0;
	case 4:
		goto loc_82A2C174;
	case 5:
		goto loc_82A2C0EC;
	case 6:
		goto loc_82A2C110;
	case 7:
		goto loc_82A2C0D0;
	case 8:
		goto loc_82A2C0D0;
	case 9:
		goto loc_82A2C0D0;
	case 10:
		goto loc_82A2C0D0;
	case 11:
		goto loc_82A2C1BC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-16208(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16208);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16012(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16012);
	// lwz r21,-16148(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16148);
	// lwz r21,-16112(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16112);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-16176(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16176);
	// lwz r21,-15940(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15940);
loc_82A2C0B0:
	// rlwinm r30,r3,9,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0x1FF;
	// rlwinm r11,r3,26,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2c0d0
	if (!ctx.cr6.lt) goto loc_82A2C0D0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82a2c00c
	if (ctx.cr6.eq) goto loc_82A2C00C;
loc_82A2C0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C0DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,11548
	ctx.r3.s64 = ctx.r11.s64 + 11548;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C0EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r3,21,11,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1FFFF8;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r9,11556
	ctx.r3.s64 = ctx.r9.s64 + 11556;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C110:
	// rlwinm r11,r3,18,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x100;
	// rlwinm r10,r3,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2c158
	if (ctx.cr6.eq) goto loc_82A2C158;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82a2c158
	if (!ctx.cr6.eq) goto loc_82A2C158;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,11564
	ctx.r3.s64 = ctx.r10.s64 + 11564;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C158:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,7948
	ctx.r11.s64 = ctx.r11.s64 + 7948;
	// addi r3,r10,11564
	ctx.r3.s64 = ctx.r10.s64 + 11564;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C174:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2c1a0
	if (ctx.cr6.eq) goto loc_82A2C1A0;
	// rlwinm r10,r3,11,21,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,11572
	ctx.r3.s64 = ctx.r10.s64 + 11572;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C1A0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,7948
	ctx.r11.s64 = ctx.r11.s64 + 7948;
	// addi r3,r10,11572
	ctx.r3.s64 = ctx.r10.s64 + 11572;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C1BC:
	// rlwinm r11,r3,18,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x100;
	// rlwinm r10,r3,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2c204
	if (ctx.cr6.eq) goto loc_82A2C204;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82a2c204
	if (!ctx.cr6.eq) goto loc_82A2C204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,7980
	ctx.r3.s64 = ctx.r10.s64 + 7980;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C204:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,7948
	ctx.r11.s64 = ctx.r11.s64 + 7948;
	// addi r3,r10,7980
	ctx.r3.s64 = ctx.r10.s64 + 7980;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C220"))) PPC_WEAK_FUNC(sub_82A2C220);
PPC_FUNC_IMPL(__imp__sub_82A2C220) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2c264
	if (!ctx.cr6.eq) goto loc_82A2C264;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c264
	if (!ctx.cr6.eq) goto loc_82A2C264;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82a2c2e4
	if (ctx.cr6.gt) goto loc_82A2C2E4;
loc_82A2C264:
	// lwz r11,-20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2c2e4
	if (!ctx.cr6.eq) goto loc_82A2C2E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c2e4
	if (!ctx.cr6.eq) goto loc_82A2C2E4;
	// addi r4,r4,-24
	ctx.r4.s64 = ctx.r4.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b328
	ctx.lr = 0x82A2C290;
	sub_82A2B328(ctx, base);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// beq cr6,0x82a2c2c4
	if (ctx.cr6.eq) goto loc_82A2C2C4;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// beq cr6,0x82a2c2c4
	if (ctx.cr6.eq) goto loc_82A2C2C4;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x82a2c2e4
	if (!ctx.cr6.eq) goto loc_82A2C2E4;
loc_82A2C2C4:
	// rlwinm r5,r11,26,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2bfe0
	ctx.lr = 0x82A2C2D0;
	sub_82A2BFE0(ctx, base);
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
loc_82A2C2E4:
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

__attribute__((alias("__imp__sub_82A2C2FC"))) PPC_WEAK_FUNC(sub_82A2C2FC);
PPC_FUNC_IMPL(__imp__sub_82A2C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C300"))) PPC_WEAK_FUNC(sub_82A2C300);
PPC_FUNC_IMPL(__imp__sub_82A2C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2C308;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-26848
	ctx.r7.s64 = ctx.r9.s64 + -26848;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r6,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bge cr6,0x82a2c35c
	if (!ctx.cr6.lt) goto loc_82A2C35C;
loc_82A2C348:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a2c37c
	if (ctx.cr6.eq) goto loc_82A2C37C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2c348
	if (ctx.cr6.lt) goto loc_82A2C348;
loc_82A2C35C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,11616
	ctx.r4.s64 = ctx.r11.s64 + 11616;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C374;
	sub_82A2C520(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2C37C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// bl 0x82a2bfe0
	ctx.lr = 0x82A2C394;
	sub_82A2BFE0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2c35c
	if (ctx.cr6.eq) goto loc_82A2C35C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r4,r11,11580
	ctx.r4.s64 = ctx.r11.s64 + 11580;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C3BC;
	sub_82A2C520(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C3C4"))) PPC_WEAK_FUNC(sub_82A2C3C4);
PPC_FUNC_IMPL(__imp__sub_82A2C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C3C8"))) PPC_WEAK_FUNC(sub_82A2C3C8);
PPC_FUNC_IMPL(__imp__sub_82A2C3C8) {
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
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,-26848
	ctx.r8.s64 = ctx.r10.s64 + -26848;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lbz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a2c424
	if (!ctx.cr6.eq) goto loc_82A2C424;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11680
	ctx.r4.s64 = ctx.r11.s64 + 11680;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C410;
	sub_82A2C520(ctx, base);
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
loc_82A2C424:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11716
	ctx.r4.s64 = ctx.r11.s64 + 11716;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C430;
	sub_82A2C520(ctx, base);
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
}

__attribute__((alias("__imp__sub_82A2C444"))) PPC_WEAK_FUNC(sub_82A2C444);
PPC_FUNC_IMPL(__imp__sub_82A2C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C448"))) PPC_WEAK_FUNC(sub_82A2C448);
PPC_FUNC_IMPL(__imp__sub_82A2C448) {
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
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2c4fc
	if (ctx.cr6.eq) goto loc_82A2C4FC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a2c488
	if (ctx.cr6.eq) goto loc_82A2C488;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821e51d0
	ctx.lr = 0x82A2C488;
	sub_821E51D0(ctx, base);
loc_82A2C488:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x82a2c4e0
	if (ctx.cr6.gt) goto loc_82A2C4E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2c4dc
	if (!ctx.cr6.lt) goto loc_82A2C4DC;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2C4DC:
	// bl 0x82a2e140
	ctx.lr = 0x82A2C4E0;
	sub_82A2E140(ctx, base);
loc_82A2C4E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82228c70
	ctx.lr = 0x82A2C4FC;
	sub_82228C70(ctx, base);
loc_82A2C4FC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e51d0
	ctx.lr = 0x82A2C508;
	sub_821E51D0(ctx, base);
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

__attribute__((alias("__imp__sub_82A2C520"))) PPC_WEAK_FUNC(sub_82A2C520);
PPC_FUNC_IMPL(__imp__sub_82A2C520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2C528;
	__savegprlr_29(ctx, base);
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82a2e948
	ctx.lr = 0x82A2C55C;
	sub_82A2E948(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82a2c5ec
	if (!ctx.cr6.eq) goto loc_82A2C5EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c5ec
	if (!ctx.cr6.eq) goto loc_82A2C5EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82A2C58C;
	sub_82BC88B8(ctx, base);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a2c5b8
	if (!ctx.cr6.eq) goto loc_82A2C5B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c5b8
	if (!ctx.cr6.eq) goto loc_82A2C5B8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82a2c5bc
	goto loc_82A2C5BC;
loc_82A2C5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2C5BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A2C5D0;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ed28
	ctx.lr = 0x82A2C5EC;
	sub_82A2ED28(ctx, base);
loc_82A2C5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c448
	ctx.lr = 0x82A2C5F4;
	sub_82A2C448(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C5FC"))) PPC_WEAK_FUNC(sub_82A2C5FC);
PPC_FUNC_IMPL(__imp__sub_82A2C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C600"))) PPC_WEAK_FUNC(sub_82A2C600);
PPC_FUNC_IMPL(__imp__sub_82A2C600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2C608;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a2c648
	if (ctx.cr6.lt) goto loc_82A2C648;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82a2c658
	if (ctx.cr6.lt) goto loc_82A2C658;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C644;
	sub_82A2C520(ctx, base);
	// b 0x82a2c658
	goto loc_82A2C658;
loc_82A2C648:
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82a2c658
	if (!ctx.cr6.lt) goto loc_82A2C658;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82A2C658:
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// divwu r9,r11,r29
	ctx.r9.u32 = ctx.r11.u32 / ctx.r29.u32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2c690
	if (ctx.cr6.gt) goto loc_82A2C690;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82227940
	ctx.lr = 0x82A2C684;
	sub_82227940(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2C690:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C69C;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C6AC"))) PPC_WEAK_FUNC(sub_82A2C6AC);
PPC_FUNC_IMPL(__imp__sub_82A2C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C6B0"))) PPC_WEAK_FUNC(sub_82A2C6B0);
PPC_FUNC_IMPL(__imp__sub_82A2C6B0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2C6C8;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2C6DC"))) PPC_WEAK_FUNC(sub_82A2C6DC);
PPC_FUNC_IMPL(__imp__sub_82A2C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C6E0"))) PPC_WEAK_FUNC(sub_82A2C6E0);
PPC_FUNC_IMPL(__imp__sub_82A2C6E0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2c738
	if (!ctx.cr6.eq) goto loc_82A2C738;
	// bl 0x82bcd8a8
	ctx.lr = 0x82A2C704;
	sub_82BCD8A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a2c720
	if (!ctx.cr6.eq) goto loc_82A2C720;
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
loc_82A2C720:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82A2C738:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82A2C754"))) PPC_WEAK_FUNC(sub_82A2C754);
PPC_FUNC_IMPL(__imp__sub_82A2C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C758"))) PPC_WEAK_FUNC(sub_82A2C758);
PPC_FUNC_IMPL(__imp__sub_82A2C758) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2C774"))) PPC_WEAK_FUNC(sub_82A2C774);
PPC_FUNC_IMPL(__imp__sub_82A2C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C778"))) PPC_WEAK_FUNC(sub_82A2C778);
PPC_FUNC_IMPL(__imp__sub_82A2C778) {
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
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82a2c8cc
	if (ctx.cr6.gt) goto loc_82A2C8CC;
loc_82A2C7B4:
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-14388
	ctx.r12.s64 = ctx.r12.s64 + -14388;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82A2C8CC;
	case 1:
		goto loc_82A2C8A8;
	case 2:
		goto loc_82A2C89C;
	case 3:
		goto loc_82A2C7E8;
	case 4:
		goto loc_82A2C8B4;
	case 5:
		goto loc_82A2C8C0;
	case 6:
		goto loc_82A2C850;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-14132(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14132);
	// lwz r21,-14168(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14168);
	// lwz r21,-14180(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14180);
	// lwz r21,-14360(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14360);
	// lwz r21,-14156(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14156);
	// lwz r21,-14144(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14144);
	// lwz r21,-14256(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14256);
loc_82A2C7E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// beq cr6,0x82a2c818
	if (ctx.cr6.eq) goto loc_82A2C818;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2c818
	if (ctx.cr6.eq) goto loc_82A2C818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2C818;
	sub_82A2C778(ctx, base);
loc_82A2C818:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2c8cc
	if (ctx.cr6.eq) goto loc_82A2C8CC;
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// ble cr6,0x82a2c7b4
	if (!ctx.cr6.gt) goto loc_82A2C7B4;
	// b 0x82a2c8cc
	goto loc_82A2C8CC;
loc_82A2C850:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2c87c
	if (ctx.cr6.lt) goto loc_82A2C87C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2c87c
	if (ctx.cr6.eq) goto loc_82A2C87C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2C87C;
	sub_82A2C778(ctx, base);
loc_82A2C87C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2c8cc
	if (!ctx.cr6.eq) goto loc_82A2C8CC;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// b 0x82a2c8cc
	goto loc_82A2C8CC;
loc_82A2C89C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2c8c8
	goto loc_82A2C8C8;
loc_82A2C8A8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82a2c8c8
	goto loc_82A2C8C8;
loc_82A2C8B4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82a2c8c8
	goto loc_82A2C8C8;
loc_82A2C8C0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82A2C8C8:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82A2C8CC:
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

__attribute__((alias("__imp__sub_82A2C8E4"))) PPC_WEAK_FUNC(sub_82A2C8E4);
PPC_FUNC_IMPL(__imp__sub_82A2C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C8E8"))) PPC_WEAK_FUNC(sub_82A2C8E8);
PPC_FUNC_IMPL(__imp__sub_82A2C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2C8F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2c9ec
	if (ctx.cr6.eq) goto loc_82A2C9EC;
loc_82A2C914:
	// lbz r11,5(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c92c
	if (!ctx.cr6.eq) goto loc_82A2C92C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a2c938
	if (ctx.cr6.eq) goto loc_82A2C938;
loc_82A2C92C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2c940
	if (ctx.cr6.eq) goto loc_82A2C940;
loc_82A2C938:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// b 0x82a2c9e0
	goto loc_82A2C9E0;
loc_82A2C940:
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2c984
	if (ctx.cr6.eq) goto loc_82A2C984;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2c984
	if (!ctx.cr6.eq) goto loc_82A2C984;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82228570
	ctx.lr = 0x82A2C96C;
	sub_82228570(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a2c998
	if (!ctx.cr6.eq) goto loc_82A2C998;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
loc_82A2C984:
	// lbz r11,5(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r10.u8);
	// b 0x82a2c9e0
	goto loc_82A2C9E0;
loc_82A2C998:
	// lbz r10,5(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r8,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r8.u8);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2c9cc
	if (!ctx.cr6.eq) goto loc_82A2C9CC;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// b 0x82a2c9dc
	goto loc_82A2C9DC;
loc_82A2C9CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82A2C9DC:
	// stw r6,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r6.u32);
loc_82A2C9E0:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a2c914
	if (!ctx.cr6.eq) goto loc_82A2C914;
loc_82A2C9EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C9F8"))) PPC_WEAK_FUNC(sub_82A2C9F8);
PPC_FUNC_IMPL(__imp__sub_82A2C9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2CA00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2ca34
	if (ctx.cr6.eq) goto loc_82A2CA34;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2ca34
	if (ctx.cr6.eq) goto loc_82A2CA34;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CA34;
	sub_82A2C778(ctx, base);
loc_82A2CA34:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2cb0c
	if (ctx.cr6.eq) goto loc_82A2CB0C;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2cb0c
	if (!ctx.cr6.eq) goto loc_82A2CB0C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82228518
	ctx.lr = 0x82A2CA5C;
	sub_82228518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2cb0c
	if (ctx.cr6.eq) goto loc_82A2CB0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a2cb0c
	if (!ctx.cr6.eq) goto loc_82A2CB0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,107
	ctx.r4.s64 = 107;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82ca3980
	ctx.lr = 0x82A2CA84;
	sub_82CA3980(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,118
	ctx.r4.s64 = 118;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// xori r28,r9,1
	ctx.r28.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82ca3980
	ctx.lr = 0x82A2CAA0;
	sub_82CA3980(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r27,r7,1
	ctx.r27.u64 = ctx.r7.u64 ^ 1;
	// bne cr6,0x82a2cabc
	if (!ctx.cr6.eq) goto loc_82A2CABC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a2cae8
	if (ctx.cr6.eq) goto loc_82A2CAE8;
loc_82A2CABC:
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,29,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r6.u8);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
loc_82A2CAE8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a2cb04
	if (ctx.cr6.eq) goto loc_82A2CB04;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a2cb0c
	if (ctx.cr6.eq) goto loc_82A2CB0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2CB04:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a2cb5c
	if (!ctx.cr6.eq) goto loc_82A2CB5C;
loc_82A2CB0C:
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82a2cb5c
	if (ctx.cr6.eq) goto loc_82A2CB5C;
	// rlwinm r7,r6,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A2CB1C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2cb54
	if (ctx.cr6.lt) goto loc_82A2CB54;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cb54
	if (ctx.cr6.eq) goto loc_82A2CB54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CB54;
	sub_82A2C778(ctx, base);
loc_82A2CB54:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a2cb1c
	if (!ctx.cr6.eq) goto loc_82A2CB1C;
loc_82A2CB5C:
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82a2cc10
	if (ctx.cr6.eq) goto loc_82A2CC10;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,11
	ctx.r31.s64 = 11;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A2CB78:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r5,-20
	ctx.r5.s64 = ctx.r5.s64 + -20;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2cba8
	if (!ctx.cr6.eq) goto loc_82A2CBA8;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2cc08
	if (ctx.cr6.lt) goto loc_82A2CC08;
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// b 0x82a2cc08
	goto loc_82A2CC08;
loc_82A2CBA8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a2cbd8
	if (!ctx.cr6.eq) goto loc_82A2CBD8;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2cbd8
	if (ctx.cr6.lt) goto loc_82A2CBD8;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cbd8
	if (ctx.cr6.eq) goto loc_82A2CBD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CBD8;
	sub_82A2C778(ctx, base);
loc_82A2CBD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a2cc08
	if (!ctx.cr6.eq) goto loc_82A2CC08;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2cc08
	if (ctx.cr6.lt) goto loc_82A2CC08;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cc08
	if (ctx.cr6.eq) goto loc_82A2CC08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CC08;
	sub_82A2C778(ctx, base);
loc_82A2CC08:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a2cb78
	if (!ctx.cr6.eq) goto loc_82A2CB78;
loc_82A2CC10:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a2cc24
	if (!ctx.cr6.eq) goto loc_82A2CC24;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a2cc28
	if (ctx.cr6.eq) goto loc_82A2CC28;
loc_82A2CC24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2CC28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2CC30"))) PPC_WEAK_FUNC(sub_82A2CC30);
PPC_FUNC_IMPL(__imp__sub_82A2CC30) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2cc64
	if (ctx.cr6.eq) goto loc_82A2CC64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
loc_82A2CC64:
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2ccbc
	if (!ctx.cr6.gt) goto loc_82A2CCBC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A2CC78:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2cca8
	if (ctx.cr6.lt) goto loc_82A2CCA8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cca8
	if (ctx.cr6.eq) goto loc_82A2CCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CCA8;
	sub_82A2C778(ctx, base);
loc_82A2CCA8:
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2cc78
	if (ctx.cr6.lt) goto loc_82A2CC78;
loc_82A2CCBC:
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2cd08
	if (!ctx.cr6.gt) goto loc_82A2CD08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2CCD0:
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a2ccf4
	if (ctx.cr6.eq) goto loc_82A2CCF4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
loc_82A2CCF4:
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2ccd0
	if (ctx.cr6.lt) goto loc_82A2CCD0;
loc_82A2CD08:
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2cd5c
	if (!ctx.cr6.gt) goto loc_82A2CD5C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A2CD1C:
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cd48
	if (ctx.cr6.eq) goto loc_82A2CD48;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cd48
	if (ctx.cr6.eq) goto loc_82A2CD48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CD48;
	sub_82A2C778(ctx, base);
loc_82A2CD48:
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2cd1c
	if (ctx.cr6.lt) goto loc_82A2CD1C;
loc_82A2CD5C:
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2cdac
	if (!ctx.cr6.gt) goto loc_82A2CDAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2CD70:
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a2cd98
	if (ctx.cr6.eq) goto loc_82A2CD98;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lbz r5,5(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// rlwinm r4,r5,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r4,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r4.u8);
loc_82A2CD98:
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2cd70
	if (ctx.cr6.lt) goto loc_82A2CD70;
loc_82A2CDAC:
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

__attribute__((alias("__imp__sub_82A2CDC0"))) PPC_WEAK_FUNC(sub_82A2CDC0);
PPC_FUNC_IMPL(__imp__sub_82A2CDC0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cdf0
	if (ctx.cr6.eq) goto loc_82A2CDF0;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CDF0;
	sub_82A2C778(ctx, base);
loc_82A2CDF0:
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ce60
	if (ctx.cr6.eq) goto loc_82A2CE60;
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2cec0
	if (ctx.cr6.eq) goto loc_82A2CEC0;
	// addi r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 + 20;
loc_82A2CE10:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2ce38
	if (ctx.cr6.lt) goto loc_82A2CE38;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2ce38
	if (ctx.cr6.eq) goto loc_82A2CE38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CE38;
	sub_82A2C778(ctx, base);
loc_82A2CE38:
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2ce10
	if (ctx.cr6.lt) goto loc_82A2CE10;
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
loc_82A2CE60:
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2ce7c
	if (ctx.cr6.eq) goto loc_82A2CE7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CE7C;
	sub_82A2C778(ctx, base);
loc_82A2CE7C:
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2cec0
	if (ctx.cr6.eq) goto loc_82A2CEC0;
	// addi r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 + 20;
loc_82A2CE90:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2ceac
	if (ctx.cr6.eq) goto loc_82A2CEAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CEAC;
	sub_82A2C778(ctx, base);
loc_82A2CEAC:
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2ce90
	if (ctx.cr6.lt) goto loc_82A2CE90;
loc_82A2CEC0:
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

__attribute__((alias("__imp__sub_82A2CED4"))) PPC_WEAK_FUNC(sub_82A2CED4);
PPC_FUNC_IMPL(__imp__sub_82A2CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2CED8"))) PPC_WEAK_FUNC(sub_82A2CED8);
PPC_FUNC_IMPL(__imp__sub_82A2CED8) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2cf18
	if (ctx.cr6.lt) goto loc_82A2CF18;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cf18
	if (ctx.cr6.eq) goto loc_82A2CF18;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CF18;
	sub_82A2C778(ctx, base);
loc_82A2CF18:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2cf4c
	if (ctx.cr6.gt) goto loc_82A2CF4C;
loc_82A2CF30:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a2cf40
	if (!ctx.cr6.lt) goto loc_82A2CF40;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82A2CF40:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a2cf30
	if (!ctx.cr6.gt) goto loc_82A2CF30;
loc_82A2CF4C:
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a2cf90
	if (!ctx.cr6.lt) goto loc_82A2CF90;
loc_82A2CF58:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2cf80
	if (ctx.cr6.lt) goto loc_82A2CF80;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2cf80
	if (ctx.cr6.eq) goto loc_82A2CF80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2CF80;
	sub_82A2C778(ctx, base);
loc_82A2CF80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a2cf58
	if (ctx.cr6.lt) goto loc_82A2CF58;
loc_82A2CF90:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82a2cfac
	if (ctx.cr6.gt) goto loc_82A2CFAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2CF9C:
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a2cf9c
	if (!ctx.cr6.gt) goto loc_82A2CF9C;
loc_82A2CFAC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,20000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20000, ctx.xer);
	// srawi r30,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	// bgt cr6,0x82a2d024
	if (ctx.cr6.gt) goto loc_82A2D024;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2cffc
	if (!ctx.cr6.lt) goto loc_82A2CFFC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82a2cffc
	if (!ctx.cr6.gt) goto loc_82A2CFFC;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82a2e1c8
	ctx.lr = 0x82A2CFFC;
	sub_82A2E1C8(ctx, base);
loc_82A2CFFC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2d024
	if (!ctx.cr6.lt) goto loc_82A2D024;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x82a2d024
	if (!ctx.cr6.gt) goto loc_82A2D024;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82a2e140
	ctx.lr = 0x82A2D024;
	sub_82A2E140(ctx, base);
loc_82A2D024:
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

__attribute__((alias("__imp__sub_82A2D03C"))) PPC_WEAK_FUNC(sub_82A2D03C);
PPC_FUNC_IMPL(__imp__sub_82A2D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D040"))) PPC_WEAK_FUNC(sub_82A2D040);
PPC_FUNC_IMPL(__imp__sub_82A2D040) {
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
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82a2d214
	if (ctx.cr6.gt) goto loc_82A2D214;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-12152
	ctx.r12.s64 = ctx.r12.s64 + -12152;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2D09C;
	case 1:
		goto loc_82A2D0F8;
	case 2:
		goto loc_82A2D214;
	case 3:
		goto loc_82A2D154;
	case 4:
		goto loc_82A2D1B0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-12132(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12132);
	// lwz r21,-12040(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12040);
	// lwz r21,-11756(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11756);
	// lwz r21,-11948(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11948);
	// lwz r21,-11856(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11856);
loc_82A2D09C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bl 0x82a2c9f8
	ctx.lr = 0x82A2D0AC;
	sub_82A2C9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2d0c4
	if (ctx.cr6.eq) goto loc_82A2D0C4;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
loc_82A2D0C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
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
loc_82A2D0F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bl 0x82a2cdc0
	ctx.lr = 0x82A2D108;
	sub_82A2CDC0(ctx, base);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d134
	if (ctx.cr6.eq) goto loc_82A2D134;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
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
loc_82A2D134:
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_82A2D154:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// bl 0x82a2ced8
	ctx.lr = 0x82A2D180;
	sub_82A2CED8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
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
loc_82A2D1B0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bl 0x82a2cc30
	ctx.lr = 0x82A2D1C0;
	sub_82A2CC30(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_82A2D214:
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

__attribute__((alias("__imp__sub_82A2D22C"))) PPC_WEAK_FUNC(sub_82A2D22C);
PPC_FUNC_IMPL(__imp__sub_82A2D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D230"))) PPC_WEAK_FUNC(sub_82A2D230);
PPC_FUNC_IMPL(__imp__sub_82A2D230) {
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
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2d270
	if (ctx.cr6.eq) goto loc_82A2D270;
loc_82A2D258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2d040
	ctx.lr = 0x82A2D260;
	sub_82A2D040(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2d258
	if (!ctx.cr6.eq) goto loc_82A2D258;
loc_82A2D270:
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

__attribute__((alias("__imp__sub_82A2D28C"))) PPC_WEAK_FUNC(sub_82A2D28C);
PPC_FUNC_IMPL(__imp__sub_82A2D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D290"))) PPC_WEAK_FUNC(sub_82A2D290);
PPC_FUNC_IMPL(__imp__sub_82A2D290) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82A2D2A0:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d328
	if (ctx.cr6.eq) goto loc_82A2D328;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a2d328
	if (ctx.cr6.eq) goto loc_82A2D328;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A2D2C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d320
	if (ctx.cr6.lt) goto loc_82A2D320;
	// bne cr6,0x82a2d2f4
	if (!ctx.cr6.eq) goto loc_82A2D2F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r7,r10,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// b 0x82a2d320
	goto loc_82A2D320;
loc_82A2D2F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,5(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2d31c
	if (!ctx.cr6.eq) goto loc_82A2D31C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82a2d320
	if (!ctx.cr6.eq) goto loc_82A2D320;
	// rlwinm r10,r7,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d320
	if (ctx.cr6.eq) goto loc_82A2D320;
loc_82A2D31C:
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82A2D320:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a2d2c0
	if (!ctx.cr6.eq) goto loc_82A2D2C0;
loc_82A2D328:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a2d3f4
	if (ctx.cr6.eq) goto loc_82A2D3F4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A2D340:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r7,-20
	ctx.r7.s64 = ctx.r7.s64 + -20;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2d3ec
	if (ctx.cr6.eq) goto loc_82A2D3EC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d38c
	if (ctx.cr6.lt) goto loc_82A2D38C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// bne cr6,0x82a2d380
	if (!ctx.cr6.eq) goto loc_82A2D380;
	// rlwinm r4,r9,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// b 0x82a2d38c
	goto loc_82A2D38C;
loc_82A2D380:
	// clrlwi r4,r9,30
	ctx.r4.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2d3d8
	if (!ctx.cr6.eq) goto loc_82A2D3D8;
loc_82A2D38C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82a2d3ec
	if (ctx.cr6.lt) goto loc_82A2D3EC;
	// bne cr6,0x82a2d3b0
	if (!ctx.cr6.eq) goto loc_82A2D3B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// b 0x82a2d3ec
	goto loc_82A2D3EC;
loc_82A2D3B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// clrlwi r4,r10,30
	ctx.r4.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2d3d8
	if (!ctx.cr6.eq) goto loc_82A2D3D8;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x82a2d3ec
	if (!ctx.cr6.eq) goto loc_82A2D3EC;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d3ec
	if (ctx.cr6.eq) goto loc_82A2D3EC;
loc_82A2D3D8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d3ec
	if (ctx.cr6.lt) goto loc_82A2D3EC;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82A2D3EC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a2d340
	if (!ctx.cr6.eq) goto loc_82A2D340;
loc_82A2D3F4:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2d2a0
	if (!ctx.cr6.eq) goto loc_82A2D2A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D404"))) PPC_WEAK_FUNC(sub_82A2D404);
PPC_FUNC_IMPL(__imp__sub_82A2D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D408"))) PPC_WEAK_FUNC(sub_82A2D408);
PPC_FUNC_IMPL(__imp__sub_82A2D408) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82a2d578
	if (ctx.cr6.gt) goto loc_82A2D578;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-11188
	ctx.r12.s64 = ctx.r12.s64 + -11188;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2D544;
	case 1:
		goto loc_82A2D4D4;
	case 2:
		goto loc_82A2D478;
	case 3:
		goto loc_82A2D560;
	case 4:
		goto loc_82A2D524;
	case 5:
		goto loc_82A2D468;
	case 6:
		goto loc_82A2D4A4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-10940(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10940);
	// lwz r21,-11052(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11052);
	// lwz r21,-11144(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11144);
	// lwz r21,-10912(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10912);
	// lwz r21,-10972(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10972);
	// lwz r21,-11160(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11160);
	// lwz r21,-11100(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11100);
loc_82A2D468:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2dea8
	ctx.lr = 0x82A2D474;
	sub_82A2DEA8(ctx, base);
	// b 0x82a2d578
	goto loc_82A2D578;
loc_82A2D478:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2d494
	if (ctx.cr6.eq) goto loc_82A2D494;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D494:
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D4A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a2d4cc
	if (ctx.cr6.eq) goto loc_82A2D4CC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
loc_82A2D4CC:
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D4D4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,-26804
	ctx.r10.s64 = ctx.r11.s64 + -26804;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2d504
	if (ctx.cr6.eq) goto loc_82A2D504;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2D504;
	sub_82227940(ctx, base);
loc_82A2D504:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2D51C;
	sub_82227940(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D524:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8222b4c0
	ctx.lr = 0x82A2D530;
	sub_8222B4C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a20130
	ctx.lr = 0x82A2D53C;
	sub_82A20130(ctx, base);
	// li r5,104
	ctx.r5.s64 = 104;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D544:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,17
	ctx.r5.s64 = ctx.r11.s64 + 17;
	// b 0x82a2d568
	goto loc_82A2D568;
loc_82A2D560:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
loc_82A2D568:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227940
	ctx.lr = 0x82A2D578;
	sub_82227940(ctx, base);
loc_82A2D578:
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

__attribute__((alias("__imp__sub_82A2D590"))) PPC_WEAK_FUNC(sub_82A2D590);
PPC_FUNC_IMPL(__imp__sub_82A2D590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A2D598;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// xori r27,r11,3
	ctx.r27.u64 = ctx.r11.u64 ^ 3;
	// beq cr6,0x82a2d650
	if (ctx.cr6.eq) goto loc_82A2D650;
	// li r25,-3
	ctx.r25.s64 = -3;
loc_82A2D5C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// beq cr6,0x82a2d650
	if (ctx.cr6.eq) goto loc_82A2D650;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82a2d5ec
	if (!ctx.cr6.eq) goto loc_82A2D5EC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2d590
	ctx.lr = 0x82A2D5EC;
	sub_82A2D590(ctx, base);
loc_82A2D5EC:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// xori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 ^ 3;
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a2d61c
	if (ctx.cr6.eq) goto loc_82A2D61C;
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// b 0x82a2d644
	goto loc_82A2D644;
loc_82A2D61C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2d638
	if (!ctx.cr6.eq) goto loc_82A2D638;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_82A2D638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2d408
	ctx.lr = 0x82A2D644;
	sub_82A2D408(ctx, base);
loc_82A2D644:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a2d5c4
	if (!ctx.cr6.eq) goto loc_82A2D5C4;
loc_82A2D650:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D65C"))) PPC_WEAK_FUNC(sub_82A2D65C);
PPC_FUNC_IMPL(__imp__sub_82A2D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D660"))) PPC_WEAK_FUNC(sub_82A2D660);
PPC_FUNC_IMPL(__imp__sub_82A2D660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A2D668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a2d690
	if (!ctx.cr6.eq) goto loc_82A2D690;
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// b 0x82a2d698
	goto loc_82A2D698;
loc_82A2D690:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A2D698:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// lbz r7,5(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwimi r8,r7,0,24,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xF8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r6,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r6.u8);
	// beq cr6,0x82a2d75c
	if (ctx.cr6.eq) goto loc_82A2D75C;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2d75c
	if (!ctx.cr6.eq) goto loc_82A2D75C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82228518
	ctx.lr = 0x82A2D6F0;
	sub_82228518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2d75c
	if (ctx.cr6.eq) goto loc_82A2D75C;
	// lwz r27,64(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r10,7
	ctx.r10.s64 = 7;
	// lbz r26,57(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82228c70
	ctx.lr = 0x82A2D754;
	sub_82228C70(ctx, base);
	// stb r26,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r26.u8);
	// stw r27,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r27.u32);
loc_82A2D75C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D764"))) PPC_WEAK_FUNC(sub_82A2D764);
PPC_FUNC_IMPL(__imp__sub_82A2D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D768"))) PPC_WEAK_FUNC(sub_82A2D768);
PPC_FUNC_IMPL(__imp__sub_82A2D768) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r4,100(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r11,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// stw r11,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r11.u32);
	// stw r11,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d7a8
	if (ctx.cr6.eq) goto loc_82A2D7A8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D7A8;
	sub_82A2C778(ctx, base);
loc_82A2D7A8:
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d7d4
	if (ctx.cr6.lt) goto loc_82A2D7D4;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d7d4
	if (ctx.cr6.eq) goto loc_82A2D7D4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D7D4;
	sub_82A2C778(ctx, base);
loc_82A2D7D4:
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d800
	if (ctx.cr6.lt) goto loc_82A2D800;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d800
	if (ctx.cr6.eq) goto loc_82A2D800;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D800;
	sub_82A2C778(ctx, base);
loc_82A2D800:
	// addi r6,r7,124
	ctx.r6.s64 = ctx.r7.s64 + 124;
	// li r5,9
	ctx.r5.s64 = 9;
loc_82A2D808:
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2d82c
	if (ctx.cr6.eq) goto loc_82A2D82C;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d82c
	if (ctx.cr6.eq) goto loc_82A2D82C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D82C;
	sub_82A2C778(ctx, base);
loc_82A2D82C:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82a2d808
	if (!ctx.cr0.eq) goto loc_82A2D808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r7)
	PPC_STORE_U8(ctx.r7.u32 + 21, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D850"))) PPC_WEAK_FUNC(sub_82A2D850);
PPC_FUNC_IMPL(__imp__sub_82A2D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A2D858;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,16(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82a2d8c8
	if (ctx.cr6.eq) goto loc_82A2D8C8;
loc_82A2D874:
	// lbz r11,5(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2d8bc
	if (!ctx.cr6.eq) goto loc_82A2D8BC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2d8bc
	if (!ctx.cr6.eq) goto loc_82A2D8BC;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a2d8bc
	if (ctx.cr6.lt) goto loc_82A2D8BC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d8bc
	if (ctx.cr6.eq) goto loc_82A2D8BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D8BC;
	sub_82A2C778(ctx, base);
loc_82A2D8BC:
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82a2d874
	if (!ctx.cr6.eq) goto loc_82A2D874;
loc_82A2D8C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d230
	ctx.lr = 0x82A2D8D0;
	sub_82A2D230(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lbz r10,5(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a2d8fc
	if (ctx.cr6.eq) goto loc_82A2D8FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D8FC;
	sub_82A2C778(ctx, base);
loc_82A2D8FC:
	// addi r7,r31,124
	ctx.r7.s64 = ctx.r31.s64 + 124;
	// li r6,9
	ctx.r6.s64 = 9;
loc_82A2D904:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2d928
	if (ctx.cr6.eq) goto loc_82A2D928;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d928
	if (ctx.cr6.eq) goto loc_82A2D928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A2D928;
	sub_82A2C778(ctx, base);
loc_82A2D928:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82a2d904
	if (!ctx.cr0.eq) goto loc_82A2D904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d230
	ctx.lr = 0x82A2D93C;
	sub_82A2D230(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82a2d230
	ctx.lr = 0x82A2D950;
	sub_82A2D230(ctx, base);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r30,100(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2da38
	if (ctx.cr6.eq) goto loc_82A2DA38;
loc_82A2D968:
	// lbz r11,5(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d984
	if (ctx.cr6.eq) goto loc_82A2D984;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2d98c
	if (ctx.cr6.eq) goto loc_82A2D98C;
loc_82A2D984:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x82a2da2c
	goto loc_82A2DA2C;
loc_82A2D98C:
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2d9d0
	if (ctx.cr6.eq) goto loc_82A2D9D0;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2d9d0
	if (!ctx.cr6.eq) goto loc_82A2D9D0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82228570
	ctx.lr = 0x82A2D9B8;
	sub_82228570(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a2d9e4
	if (!ctx.cr6.eq) goto loc_82A2D9E4;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
loc_82A2D9D0:
	// lbz r11,5(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r10.u8);
	// b 0x82a2da2c
	goto loc_82A2DA2C;
loc_82A2D9E4:
	// lbz r10,5(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r9,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r9.u8);
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2da18
	if (!ctx.cr6.eq) goto loc_82A2DA18;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// b 0x82a2da28
	goto loc_82A2DA28;
loc_82A2DA18:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82A2DA28:
	// stw r6,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r6.u32);
loc_82A2DA2C:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a2d968
	if (!ctx.cr6.eq) goto loc_82A2D968;
loc_82A2DA38:
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a2da78
	if (ctx.cr6.eq) goto loc_82A2DA78;
loc_82A2DA44:
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lbz r10,5(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// rlwimi r11,r10,0,24,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r9.u8);
	// bl 0x82a2c778
	ctx.lr = 0x82A2DA6C;
	sub_82A2C778(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a2da44
	if (!ctx.cr6.eq) goto loc_82A2DA44;
loc_82A2DA78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d230
	ctx.lr = 0x82A2DA80;
	sub_82A2D230(ctx, base);
	// add r30,r3,r28
	ctx.r30.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82a2d290
	ctx.lr = 0x82A2DA8C;
	sub_82A2D290(ctx, base);
	// lbz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,2
	ctx.r10.s64 = 2;
	// xori r5,r7,3
	ctx.r5.u64 = ctx.r7.u64 ^ 3;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stb r5,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r5.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DAC0"))) PPC_WEAK_FUNC(sub_82A2DAC0);
PPC_FUNC_IMPL(__imp__sub_82A2DAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2DAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82a2dcbc
	if (ctx.cr6.gt) goto loc_82A2DCBC;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-9480
	ctx.r12.s64 = ctx.r12.s64 + -9480;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2DB0C;
	case 1:
		goto loc_82A2DB20;
	case 2:
		goto loc_82A2DB50;
	case 3:
		goto loc_82A2DBB0;
	case 4:
		goto loc_82A2DC7C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-9460(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9460);
	// lwz r21,-9440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9440);
	// lwz r21,-9392(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9392);
	// lwz r21,-9296(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9296);
	// lwz r21,-9092(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9092);
loc_82A2DB0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2d768
	ctx.lr = 0x82A2DB14;
	sub_82A2D768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DB20:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2db3c
	if (ctx.cr6.eq) goto loc_82A2DB3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d040
	ctx.lr = 0x82A2DB34;
	sub_82A2D040(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2d850
	ctx.lr = 0x82A2DB44;
	sub_82A2D850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DB50:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a2d590
	ctx.lr = 0x82A2DB78;
	sub_82A2D590(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a2db90
	if (ctx.cr6.lt) goto loc_82A2DB90;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
loc_82A2DB90:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DBB0:
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,68(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82a2d590
	ctx.lr = 0x82A2DBC4;
	sub_82A2D590(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2dc5c
	if (!ctx.cr6.eq) goto loc_82A2DC5C;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a2dc08
	if (!ctx.cr6.lt) goto loc_82A2DC08;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82a2dc08
	if (!ctx.cr6.gt) goto loc_82A2DC08;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x822a0f58
	ctx.lr = 0x82A2DC08;
	sub_822A0F58(ctx, base);
loc_82A2DC08:
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// ble cr6,0x82a2dc54
	if (!ctx.cr6.gt) goto loc_82A2DC54;
	// rlwinm r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a2dc3c
	if (ctx.cr6.gt) goto loc_82A2DC3C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82227940
	ctx.lr = 0x82A2DC38;
	sub_82227940(ctx, base);
	// b 0x82a2dc4c
	goto loc_82A2DC4C;
loc_82A2DC3C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2DC48;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2DC4C:
	// stw r3,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r3.u32);
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
loc_82A2DC54:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
loc_82A2DC5C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,400
	ctx.r3.s64 = 400;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DC7C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2dcb0
	if (ctx.cr6.eq) goto loc_82A2DCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2d660
	ctx.lr = 0x82A2DC90;
	sub_82A2D660(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x82a2dca4
	if (!ctx.cr6.gt) goto loc_82A2DCA4;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82A2DCA4:
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2DCB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82A2DCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DCC8"))) PPC_WEAK_FUNC(sub_82A2DCC8);
PPC_FUNC_IMPL(__imp__sub_82A2DCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A2DCD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,-19
	ctx.r10.s64 = -19;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2dd00
	if (!ctx.cr6.gt) goto loc_82A2DD00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2DD00;
	sub_82A2C520(ctx, base);
loc_82A2DD00:
	// addi r6,r30,17
	ctx.r6.s64 = ctx.r30.s64 + 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227940
	ctx.lr = 0x82A2DD14;
	sub_82227940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r27,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r27.u8);
	// bl 0x82ca2c60
	ctx.lr = 0x82A2DD50;
	sub_82CA2C60(ctx, base);
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r27,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r27.u8);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// and r3,r4,r28
	ctx.r3.u64 = ctx.r4.u64 & ctx.r28.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2ddb4
	if (!ctx.cr6.gt) goto loc_82A2DDB4;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82a2ddb4
	if (ctx.cr6.gt) goto loc_82A2DDB4;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a0f58
	ctx.lr = 0x82A2DDB4;
	sub_822A0F58(ctx, base);
loc_82A2DDB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DDC0"))) PPC_WEAK_FUNC(sub_82A2DDC0);
PPC_FUNC_IMPL(__imp__sub_82A2DDC0) {
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
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2DDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2de0c
	if (!ctx.cr6.eq) goto loc_82A2DE0C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e51d0
	ctx.lr = 0x82A2DE0C;
	sub_821E51D0(ctx, base);
loc_82A2DE0C:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r6,20(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// stw r3,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r3.u32);
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, ctx.r11.u8);
	// stb r11,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, ctx.r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2DEA4"))) PPC_WEAK_FUNC(sub_82A2DEA4);
PPC_FUNC_IMPL(__imp__sub_82A2DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DEA8"))) PPC_WEAK_FUNC(sub_82A2DEA8);
PPC_FUNC_IMPL(__imp__sub_82A2DEA8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2DED8;
	sub_82227940(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2DEF0;
	sub_82227940(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2DF08;
	sub_82227940(ctx, base);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2DF20;
	sub_82227940(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2DF40;
	sub_82227940(ctx, base);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2DF58;
	sub_82227940(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227940
	ctx.lr = 0x82A2DF6C;
	sub_82227940(ctx, base);
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

__attribute__((alias("__imp__sub_82A2DF84"))) PPC_WEAK_FUNC(sub_82A2DF84);
PPC_FUNC_IMPL(__imp__sub_82A2DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DF88"))) PPC_WEAK_FUNC(sub_82A2DF88);
PPC_FUNC_IMPL(__imp__sub_82A2DF88) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82a2e034
	if (ctx.cr6.gt) goto loc_82A2E034;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-8248
	ctx.r12.s64 = ctx.r12.s64 + -8248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A2E020;
	case 1:
		goto loc_82A2E020;
	case 2:
		goto loc_82A2DFD8;
	case 3:
		goto loc_82A2DFFC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-8160(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8160);
	// lwz r21,-8160(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8160);
	// lwz r21,-8232(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8232);
	// lwz r21,-8196(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8196);
loc_82A2DFD8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,8176
	ctx.r4.s64 = ctx.r11.s64 + 8176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2DFEC;
	sub_82227EA0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82a2e034
	goto loc_82A2E034;
loc_82A2DFFC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r11,11800
	ctx.r4.s64 = ctx.r11.s64 + 11800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2E010;
	sub_82227EA0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82a2e034
	goto loc_82A2E034;
loc_82A2E020:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82A2E034:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2E054"))) PPC_WEAK_FUNC(sub_82A2E054);
PPC_FUNC_IMPL(__imp__sub_82A2E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E058"))) PPC_WEAK_FUNC(sub_82A2E058);
PPC_FUNC_IMPL(__imp__sub_82A2E058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq cr6,0x82a2e0a8
	if (ctx.cr6.eq) goto loc_82A2E0A8;
loc_82A2E080:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2e080
	if (!ctx.cr6.eq) goto loc_82A2E080;
loc_82A2E0A8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a2e11c
	if (ctx.cr6.gt) goto loc_82A2E11C;
loc_82A2E0B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r4,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// srawi r7,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 3;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r4,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// srawi r8,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82a2e0b8
	if (!ctx.cr6.gt) goto loc_82A2E0B8;
loc_82A2E11C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E13C"))) PPC_WEAK_FUNC(sub_82A2E13C);
PPC_FUNC_IMPL(__imp__sub_82A2E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E140"))) PPC_WEAK_FUNC(sub_82A2E140);
PPC_FUNC_IMPL(__imp__sub_82A2E140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2E148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r28,6
	ctx.r30.s64 = ctx.r28.s64 + 6;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2e188
	if (ctx.cr6.gt) goto loc_82A2E188;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r6,r30,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2E184;
	sub_82227940(ctx, base);
	// b 0x82a2e19c
	goto loc_82A2E19C;
loc_82A2E188:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2E198;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2E19C:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a2e058
	ctx.lr = 0x82A2E1BC;
	sub_82A2E058(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E1C4"))) PPC_WEAK_FUNC(sub_82A2E1C4);
PPC_FUNC_IMPL(__imp__sub_82A2E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E1C8"))) PPC_WEAK_FUNC(sub_82A2E1C8);
PPC_FUNC_IMPL(__imp__sub_82A2E1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2E1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2e21c
	if (ctx.cr6.gt) goto loc_82A2E21C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2E218;
	sub_82227940(ctx, base);
	// b 0x82a2e230
	goto loc_82A2E230;
loc_82A2E21C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2E22C;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2E230:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,-24
	ctx.r5.s64 = ctx.r10.s64 + -24;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E27C"))) PPC_WEAK_FUNC(sub_82A2E27C);
PPC_FUNC_IMPL(__imp__sub_82A2E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E280"))) PPC_WEAK_FUNC(sub_82A2E280);
PPC_FUNC_IMPL(__imp__sub_82A2E280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a2e294
	if (ctx.cr6.gt) goto loc_82A2E294;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82a2e140
	sub_82A2E140(ctx, base);
	return;
loc_82A2E294:
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82a2e140
	sub_82A2E140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E29C"))) PPC_WEAK_FUNC(sub_82A2E29C);
PPC_FUNC_IMPL(__imp__sub_82A2E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E2A0"))) PPC_WEAK_FUNC(sub_82A2E2A0);
PPC_FUNC_IMPL(__imp__sub_82A2E2A0) {
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
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,20000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20000, ctx.xer);
	// ble cr6,0x82a2e2cc
	if (!ctx.cr6.gt) goto loc_82A2E2CC;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821e51d0
	ctx.lr = 0x82A2E2C8;
	sub_821E51D0(ctx, base);
	// b 0x82a2e2f0
	goto loc_82A2E2F0;
loc_82A2E2CC:
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82a2e1c8
	ctx.lr = 0x82A2E2D4;
	sub_82A2E1C8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,20000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20000, ctx.xer);
	// ble cr6,0x82a2e2f0
	if (!ctx.cr6.gt) goto loc_82A2E2F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11824
	ctx.r4.s64 = ctx.r11.s64 + 11824;
	// bl 0x82a2c520
	ctx.lr = 0x82A2E2F0;
	sub_82A2C520(ctx, base);
loc_82A2E2F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A2E310"))) PPC_WEAK_FUNC(sub_82A2E310);
PPC_FUNC_IMPL(__imp__sub_82A2E310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2E318;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,68(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a2e3f4
	if (ctx.cr6.eq) goto loc_82A2E3F4;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2e3f4
	if (ctx.cr6.eq) goto loc_82A2E3F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// subf r29,r9,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// bne cr6,0x82a2e36c
	if (!ctx.cr6.eq) goto loc_82A2E36C;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// b 0x82a2e380
	goto loc_82A2E380;
loc_82A2E36C:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,24
	ctx.r8.s64 = 24;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
loc_82A2E380:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// bgt cr6,0x82a2e3ac
	if (ctx.cr6.gt) goto loc_82A2E3AC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e3a8
	if (!ctx.cr6.lt) goto loc_82A2E3A8;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A2E3A8:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E3AC;
	sub_82A2E140(ctx, base);
loc_82A2E3AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stb r28,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r28.u8);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82A2E3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r8,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r8.u8);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
loc_82A2E3F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E3FC"))) PPC_WEAK_FUNC(sub_82A2E3FC);
PPC_FUNC_IMPL(__imp__sub_82A2E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E400"))) PPC_WEAK_FUNC(sub_82A2E400);
PPC_FUNC_IMPL(__imp__sub_82A2E400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2E408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82228d30
	ctx.lr = 0x82A2E41C;
	sub_82228D30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r28,r11,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82a2e448
	if (ctx.cr6.eq) goto loc_82A2E448;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,11116
	ctx.r5.s64 = ctx.r11.s64 + 11116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c300
	ctx.lr = 0x82A2E448;
	sub_82A2C300(ctx, base);
loc_82A2E448:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82a2e474
	if (!ctx.cr6.gt) goto loc_82A2E474;
loc_82A2E454:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bgt cr6,0x82a2e454
	if (ctx.cr6.gt) goto loc_82A2E454;
loc_82A2E474:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x82a2e4a4
	if (ctx.cr6.gt) goto loc_82A2E4A4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e4a0
	if (!ctx.cr6.lt) goto loc_82A2E4A0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2E4A0:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E4A4;
	sub_82A2E140(ctx, base);
loc_82A2E4A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r3,r28,r10
	ctx.r3.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r9,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E4D0"))) PPC_WEAK_FUNC(sub_82A2E4D0);
PPC_FUNC_IMPL(__imp__sub_82A2E4D0) {
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
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2e50c
	if (!ctx.cr6.eq) goto loc_82A2E50C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// bl 0x82228830
	ctx.lr = 0x82A2E500;
	sub_82228830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2e56c
	if (!ctx.cr6.eq) goto loc_82A2E56C;
	// b 0x82a2e550
	goto loc_82A2E550;
loc_82A2E50C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a2e548
	if (ctx.cr6.eq) goto loc_82A2E548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b28
	ctx.lr = 0x82A2E530;
	sub_82228B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2e550
	if (ctx.cr6.eq) goto loc_82A2E550;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82a2e550
	goto loc_82A2E550;
loc_82A2E548:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82A2E550:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r4,r8,r10
	ctx.r4.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x822de008
	ctx.lr = 0x82A2E56C;
	sub_822DE008(ctx, base);
loc_82A2E56C:
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

__attribute__((alias("__imp__sub_82A2E580"))) PPC_WEAK_FUNC(sub_82A2E580);
PPC_FUNC_IMPL(__imp__sub_82A2E580) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82A2E5A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2e5a8
	if (!ctx.cr6.eq) goto loc_82A2E5A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82227ea0
	ctx.lr = 0x82A2E5CC;
	sub_82227EA0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x82a2e608
	if (ctx.cr6.gt) goto loc_82A2E608;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e604
	if (!ctx.cr6.lt) goto loc_82A2E604;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2E604:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E608;
	sub_82A2E140(ctx, base);
loc_82A2E608:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2E630"))) PPC_WEAK_FUNC(sub_82A2E630);
PPC_FUNC_IMPL(__imp__sub_82A2E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82A2E638;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2c6e0
	ctx.lr = 0x82A2E64C;
	sub_82A2C6E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2e66c
	if (ctx.cr6.lt) goto loc_82A2E66C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179350
	ctx.lr = 0x82A2E66C;
	sub_82179350(ctx, base);
loc_82A2E66C:
	// cmpwi cr6,r29,27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 27, ctx.xer);
	// bne cr6,0x82a2e680
	if (!ctx.cr6.eq) goto loc_82A2E680;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// b 0x82a2e688
	goto loc_82A2E688;
loc_82A2E680:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,13064
	ctx.r11.s64 = ctx.r11.s64 + 13064;
loc_82A2E688:
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2E6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,72(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 72);
	// bl 0x822338f0
	ctx.lr = 0x82A2E6B4;
	sub_822338F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r27,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r27.u32);
	// lbz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2e750
	if (ctx.cr6.eq) goto loc_82A2E750;
	// addi r28,r24,20
	ctx.r28.s64 = ctx.r24.s64 + 20;
	// li r26,10
	ctx.r26.s64 = 10;
loc_82A2E6D8:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2E6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2e7a4
	if (ctx.cr6.eq) goto loc_82A2E7A4;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lbz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// clrlwi r6,r7,30
	ctx.r6.u64 = ctx.r7.u32 & 0x3;
	// stw r3,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r3.u32);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// stb r26,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r26.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lbz r5,72(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 72);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82a2e6d8
	if (ctx.cr6.lt) goto loc_82A2E6D8;
loc_82A2E750:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x82a2e790
	if (ctx.cr6.gt) goto loc_82A2E790;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e78c
	if (!ctx.cr6.lt) goto loc_82A2E78C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2E78C:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E790;
	sub_82A2E140(ctx, base);
loc_82A2E790:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82A2E7A4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e51d0
	ctx.lr = 0x82A2E7B0;
	sub_821E51D0(ctx, base);
}

__attribute__((alias("__imp__sub_82A2E7B0"))) PPC_WEAK_FUNC(sub_82A2E7B0);
PPC_FUNC_IMPL(__imp__sub_82A2E7B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca99c0
	ctx.lr = 0x82A2E7D4;
	sub_82CA99C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a2e7f0
	if (!ctx.cr6.eq) goto loc_82A2E7F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2e888
	goto loc_82A2E888;
loc_82A2E7F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 120, ctx.xer);
	// beq cr6,0x82a2e808
	if (ctx.cr6.eq) goto loc_82A2E808;
	// cmpwi cr6,r10,88
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 88, ctx.xer);
	// bne cr6,0x82a2e834
	if (!ctx.cr6.eq) goto loc_82A2E834;
loc_82A2E808:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca6300
	ctx.lr = 0x82A2E818;
	sub_82CA6300(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82A2E834:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2e848
	if (!ctx.cr6.eq) goto loc_82A2E848;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a2e888
	goto loc_82A2E888;
loc_82A2E848:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82ca6b50
	ctx.lr = 0x82A2E850;
	sub_82CA6B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a2e874
	if (ctx.cr6.eq) goto loc_82A2E874;
loc_82A2E858:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82ca6b50
	ctx.lr = 0x82A2E86C;
	sub_82CA6B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2e858
	if (!ctx.cr6.eq) goto loc_82A2E858;
loc_82A2E874:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82A2E888:
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

__attribute__((alias("__imp__sub_82A2E8A0"))) PPC_WEAK_FUNC(sub_82A2E8A0);
PPC_FUNC_IMPL(__imp__sub_82A2E8A0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82A2E8C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2e8c0
	if (!ctx.cr6.eq) goto loc_82A2E8C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82227ea0
	ctx.lr = 0x82A2E8E4;
	sub_82227EA0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x82a2e920
	if (ctx.cr6.gt) goto loc_82A2E920;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e91c
	if (!ctx.cr6.lt) goto loc_82A2E91C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2E91C:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E920;
	sub_82A2E140(ctx, base);
loc_82A2E920:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2E944"))) PPC_WEAK_FUNC(sub_82A2E944);
PPC_FUNC_IMPL(__imp__sub_82A2E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E948"))) PPC_WEAK_FUNC(sub_82A2E948);
PPC_FUNC_IMPL(__imp__sub_82A2E948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82A2E950;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x82a2e8a0
	ctx.lr = 0x82A2E970;
	sub_82A2E8A0(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A2E97C;
	sub_82CA3980(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a2ecd8
	if (ctx.cr6.eq) goto loc_82A2ECD8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r21,37
	ctx.r21.s64 = 37;
	// addi r23,r11,12224
	ctx.r23.s64 = ctx.r11.s64 + 12224;
	// addi r25,r10,-12736
	ctx.r25.s64 = ctx.r10.s64 + -12736;
	// addi r22,r9,12216
	ctx.r22.s64 = ctx.r9.s64 + 12216;
loc_82A2E9B0:
	// subf r5,r30,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r30.s64;
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A2E9C4;
	sub_82227EA0(ctx, base);
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// stw r20,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r20.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x82a2e9fc
	if (ctx.cr6.gt) goto loc_82A2E9FC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2e9f8
	if (!ctx.cr6.lt) goto loc_82A2E9F8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2E9F8:
	// bl 0x82a2e140
	ctx.lr = 0x82A2E9FC;
	sub_82A2E140(ctx, base);
loc_82A2E9FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r9,r9,-37
	ctx.r9.s64 = ctx.r9.s64 + -37;
	// cmplwi cr6,r9,78
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 78, ctx.xer);
	// bgt cr6,0x82a2eca0
	if (ctx.cr6.gt) goto loc_82A2ECA0;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-5580
	ctx.r12.s64 = ctx.r12.s64 + -5580;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82A2EC98;
	case 1:
		goto loc_82A2ECA0;
	case 2:
		goto loc_82A2ECA0;
	case 3:
		goto loc_82A2ECA0;
	case 4:
		goto loc_82A2ECA0;
	case 5:
		goto loc_82A2ECA0;
	case 6:
		goto loc_82A2ECA0;
	case 7:
		goto loc_82A2ECA0;
	case 8:
		goto loc_82A2ECA0;
	case 9:
		goto loc_82A2ECA0;
	case 10:
		goto loc_82A2ECA0;
	case 11:
		goto loc_82A2ECA0;
	case 12:
		goto loc_82A2ECA0;
	case 13:
		goto loc_82A2ECA0;
	case 14:
		goto loc_82A2ECA0;
	case 15:
		goto loc_82A2ECA0;
	case 16:
		goto loc_82A2ECA0;
	case 17:
		goto loc_82A2ECA0;
	case 18:
		goto loc_82A2ECA0;
	case 19:
		goto loc_82A2ECA0;
	case 20:
		goto loc_82A2ECA0;
	case 21:
		goto loc_82A2ECA0;
	case 22:
		goto loc_82A2ECA0;
	case 23:
		goto loc_82A2ECA0;
	case 24:
		goto loc_82A2ECA0;
	case 25:
		goto loc_82A2ECA0;
	case 26:
		goto loc_82A2ECA0;
	case 27:
		goto loc_82A2ECA0;
	case 28:
		goto loc_82A2ECA0;
	case 29:
		goto loc_82A2ECA0;
	case 30:
		goto loc_82A2ECA0;
	case 31:
		goto loc_82A2ECA0;
	case 32:
		goto loc_82A2ECA0;
	case 33:
		goto loc_82A2ECA0;
	case 34:
		goto loc_82A2ECA0;
	case 35:
		goto loc_82A2ECA0;
	case 36:
		goto loc_82A2ECA0;
	case 37:
		goto loc_82A2ECA0;
	case 38:
		goto loc_82A2ECA0;
	case 39:
		goto loc_82A2ECA0;
	case 40:
		goto loc_82A2ECA0;
	case 41:
		goto loc_82A2ECA0;
	case 42:
		goto loc_82A2ECA0;
	case 43:
		goto loc_82A2ECA0;
	case 44:
		goto loc_82A2ECA0;
	case 45:
		goto loc_82A2ECA0;
	case 46:
		goto loc_82A2ECA0;
	case 47:
		goto loc_82A2ECA0;
	case 48:
		goto loc_82A2ECA0;
	case 49:
		goto loc_82A2ECA0;
	case 50:
		goto loc_82A2ECA0;
	case 51:
		goto loc_82A2ECA0;
	case 52:
		goto loc_82A2ECA0;
	case 53:
		goto loc_82A2ECA0;
	case 54:
		goto loc_82A2ECA0;
	case 55:
		goto loc_82A2ECA0;
	case 56:
		goto loc_82A2ECA0;
	case 57:
		goto loc_82A2ECA0;
	case 58:
		goto loc_82A2ECA0;
	case 59:
		goto loc_82A2ECA0;
	case 60:
		goto loc_82A2ECA0;
	case 61:
		goto loc_82A2ECA0;
	case 62:
		goto loc_82A2EB90;
	case 63:
		goto loc_82A2EBB0;
	case 64:
		goto loc_82A2ECA0;
	case 65:
		goto loc_82A2EC1C;
	case 66:
		goto loc_82A2ECA0;
	case 67:
		goto loc_82A2ECA0;
	case 68:
		goto loc_82A2ECA0;
	case 69:
		goto loc_82A2ECA0;
	case 70:
		goto loc_82A2ECA0;
	case 71:
		goto loc_82A2ECA0;
	case 72:
		goto loc_82A2ECA0;
	case 73:
		goto loc_82A2ECA0;
	case 74:
		goto loc_82A2ECA0;
	case 75:
		goto loc_82A2EC74;
	case 76:
		goto loc_82A2ECA0;
	case 77:
		goto loc_82A2ECA0;
	case 78:
		goto loc_82A2EB70;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4968(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4968);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-5232(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5232);
	// lwz r21,-5200(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5200);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-5092(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5092);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-5004(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5004);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-4960(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4960);
	// lwz r21,-5264(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5264);
loc_82A2EB70:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2ecb0
	if (!ctx.cr6.eq) goto loc_82A2ECB0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82a2ecb0
	goto loc_82A2ECB0;
loc_82A2EB90:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// b 0x82a2ecb0
	goto loc_82A2ECB0;
loc_82A2EBB0:
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bgt cr6,0x82a2ec0c
	if (ctx.cr6.gt) goto loc_82A2EC0C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2ec08
	if (!ctx.cr6.lt) goto loc_82A2EC08;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A2EC08:
	// bl 0x82a2e140
	ctx.lr = 0x82A2EC0C;
	sub_82A2E140(ctx, base);
loc_82A2EC0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2ecb8
	goto loc_82A2ECB8;
loc_82A2EC1C:
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x82a2ec0c
	if (ctx.cr6.gt) goto loc_82A2EC0C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2ec08
	if (!ctx.cr6.lt) goto loc_82A2EC08;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82a2e140
	ctx.lr = 0x82A2EC64;
	sub_82A2E140(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a2ecb8
	goto loc_82A2ECB8;
loc_82A2EC74:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8223f888
	ctx.lr = 0x82A2EC90;
	sub_8223F888(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82a2ecb0
	goto loc_82A2ECB0;
loc_82A2EC98:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82a2ecb0
	goto loc_82A2ECB0;
loc_82A2ECA0:
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stb r21,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r21.u8);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
loc_82A2ECB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82A2ECB8;
	sub_82A2E8A0(ctx, base);
loc_82A2ECB8:
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bl 0x82ca3980
	ctx.lr = 0x82A2ECCC;
	sub_82CA3980(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a2e9b0
	if (!ctx.cr6.eq) goto loc_82A2E9B0;
loc_82A2ECD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82A2ECE4;
	sub_82A2E8A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x821cc868
	ctx.lr = 0x82A2ED04;
	sub_821CC868(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r11,-8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2ED24"))) PPC_WEAK_FUNC(sub_82A2ED24);
PPC_FUNC_IMPL(__imp__sub_82A2ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2ED28"))) PPC_WEAK_FUNC(sub_82A2ED28);
PPC_FUNC_IMPL(__imp__sub_82A2ED28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a2e948
	ctx.lr = 0x82A2ED60;
	sub_82A2E948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ED70"))) PPC_WEAK_FUNC(sub_82A2ED70);
PPC_FUNC_IMPL(__imp__sub_82A2ED70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2ED78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x82a2edb4
	if (!ctx.cr6.eq) goto loc_82A2EDB4;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x822cd828
	ctx.lr = 0x82A2EDA0;
	sub_822CD828(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EDB4:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x82a2ee68
	if (!ctx.cr6.eq) goto loc_82A2EE68;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A2EDC8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a2edc8
	if (!ctx.cr6.eq) goto loc_82A2EDC8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stb r8,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a2ee30
	if (!ctx.cr6.gt) goto loc_82A2EE30;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,2220
	ctx.r10.s64 = ctx.r10.s64 + 2220;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82A2EE04:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a2ee04
	if (!ctx.cr6.eq) goto loc_82A2EE04;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82A2EE18:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x82a2ee18
	if (!ctx.cr6.eq) goto loc_82A2EE18;
loc_82A2EE30:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A2EE34:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a2ee34
	if (!ctx.cr6.eq) goto loc_82A2EE34;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82A2EE48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82a2ee48
	if (!ctx.cr6.eq) goto loc_82A2EE48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EE68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12228
	ctx.r4.s64 = ctx.r11.s64 + 12228;
	// bl 0x82ca5e70
	ctx.lr = 0x82A2EE78;
	sub_82CA5E70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r30,-17
	ctx.r11.s64 = ctx.r30.s64 + -17;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a2ee8c
	if (!ctx.cr6.gt) goto loc_82A2EE8C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82A2EE8C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,12232
	ctx.r11.s64 = ctx.r11.s64 + 12232;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A2EEA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a2eea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2EEA0;
	// lbzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ef08
	if (ctx.cr6.eq) goto loc_82A2EF08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca99c8
	ctx.lr = 0x82A2EECC;
	sub_82CA99C8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
loc_82A2EED8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a2eed8
	if (!ctx.cr6.eq) goto loc_82A2EED8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82A2EEEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82a2eeec
	if (!ctx.cr6.eq) goto loc_82A2EEEC;
	// b 0x82a2ef38
	goto loc_82A2EF38;
loc_82A2EF08:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A2EF0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a2ef0c
	if (!ctx.cr6.eq) goto loc_82A2EF0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82A2EF20:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82a2ef20
	if (!ctx.cr6.eq) goto loc_82A2EF20;
loc_82A2EF38:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,25004
	ctx.r10.s64 = ctx.r10.s64 + 25004;
loc_82A2EF44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a2ef44
	if (!ctx.cr6.eq) goto loc_82A2EF44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82A2EF58:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82a2ef58
	if (!ctx.cr6.eq) goto loc_82A2EF58;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2EF78"))) PPC_WEAK_FUNC(sub_82A2EF78);
PPC_FUNC_IMPL(__imp__sub_82A2EF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2EF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2efc0
	if (!ctx.cr6.eq) goto loc_82A2EFC0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2EFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2EFC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2efec
	if (!ctx.cr6.eq) goto loc_82A2EFEC;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2EFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2EFEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2EFF4"))) PPC_WEAK_FUNC(sub_82A2EFF4);
PPC_FUNC_IMPL(__imp__sub_82A2EFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EFF8"))) PPC_WEAK_FUNC(sub_82A2EFF8);
PPC_FUNC_IMPL(__imp__sub_82A2EFF8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2f050
	if (ctx.cr6.eq) goto loc_82A2F050;
	// addic. r30,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r30.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a2f050
	if (ctx.cr0.eq) goto loc_82A2F050;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bc9940
	ctx.lr = 0x82A2F03C;
	sub_82BC9940(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bc9940
	ctx.lr = 0x82A2F04C;
	sub_82BC9940(ctx, base);
	// b 0x82a2f084
	goto loc_82A2F084;
loc_82A2F050:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2f084
	if (!ctx.cr6.eq) goto loc_82A2F084;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F084:
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

__attribute__((alias("__imp__sub_82A2F09C"))) PPC_WEAK_FUNC(sub_82A2F09C);
PPC_FUNC_IMPL(__imp__sub_82A2F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F0A0"))) PPC_WEAK_FUNC(sub_82A2F0A0);
PPC_FUNC_IMPL(__imp__sub_82A2F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2F0A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,40(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bne cr6,0x82a2f0e8
	if (!ctx.cr6.eq) goto loc_82A2F0E8;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F0E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a2f1c0
	if (!ctx.cr6.gt) goto loc_82A2F1C0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82A2F0F8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bne cr6,0x82a2f134
	if (!ctx.cr6.eq) goto loc_82A2F134;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F134:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a2f180
	if (ctx.cr6.eq) goto loc_82A2F180;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a2f160
	if (ctx.cr6.eq) goto loc_82A2F160;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a2f1b4
	if (!ctx.cr6.eq) goto loc_82A2F1B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2eff8
	ctx.lr = 0x82A2F15C;
	sub_82A2EFF8(ctx, base);
	// b 0x82a2f1b4
	goto loc_82A2F1B4;
loc_82A2F160:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2f1b4
	if (!ctx.cr6.eq) goto loc_82A2F1B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x82a2f19c
	goto loc_82A2F19C;
loc_82A2F180:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bne cr6,0x82a2f1b4
	if (!ctx.cr6.eq) goto loc_82A2F1B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
loc_82A2F19C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F1B4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82a2f0f8
	if (!ctx.cr0.eq) goto loc_82A2F0F8;
loc_82A2F1C0:
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bne cr6,0x82a2f1f4
	if (!ctx.cr6.eq) goto loc_82A2F1F4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F1F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a2f220
	if (!ctx.cr6.gt) goto loc_82A2F220;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A2F200:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82a2f228
	ctx.lr = 0x82A2F214;
	sub_82A2F228(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82a2f200
	if (!ctx.cr0.eq) goto loc_82A2F200;
loc_82A2F220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F228"))) PPC_WEAK_FUNC(sub_82A2F228);
PPC_FUNC_IMPL(__imp__sub_82A2F228) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a2f25c
	if (ctx.cr6.eq) goto loc_82A2F25C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2f260
	if (ctx.cr6.eq) goto loc_82A2F260;
loc_82A2F25C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F260:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a2eff8
	ctx.lr = 0x82A2F26C;
	sub_82A2EFF8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82a2f2a0
	if (!ctx.cr6.eq) goto loc_82A2F2A0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F2A0:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82a2f2d4
	if (!ctx.cr6.eq) goto loc_82A2F2D4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F2D4:
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x82a2f308
	if (!ctx.cr6.eq) goto loc_82A2F308;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F308:
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bne cr6,0x82a2f33c
	if (!ctx.cr6.eq) goto loc_82A2F33C;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F33C:
	// lbz r11,74(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bne cr6,0x82a2f370
	if (!ctx.cr6.eq) goto loc_82A2F370;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F370:
	// lbz r11,75(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 75);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bne cr6,0x82a2f3a4
	if (!ctx.cr6.eq) goto loc_82A2F3A4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A2F3A4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a2ef78
	ctx.lr = 0x82A2F3B8;
	sub_82A2EF78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f0a0
	ctx.lr = 0x82A2F3C4;
	sub_82A2F0A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc9998
	ctx.lr = 0x82A2F3D0;
	sub_82BC9998(ctx, base);
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

__attribute__((alias("__imp__sub_82A2F3E8"))) PPC_WEAK_FUNC(sub_82A2F3E8);
PPC_FUNC_IMPL(__imp__sub_82A2F3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82a2f4c8
	if (ctx.cr6.gt) {
		sub_82A2F4C8(ctx, base);
		return;
	}
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,-3056
	ctx.r12.s64 = ctx.r12.s64 + -3056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82A2F4A0
		return;
	case 1:
		// ERROR: 0x82A2F4C8
		return;
	case 2:
		// ERROR: 0x82A2F420
		return;
	case 3:
		// ERROR: 0x82A2F474
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82A2F410"))) PPC_WEAK_FUNC(sub_82A2F410);
PPC_FUNC_IMPL(__imp__sub_82A2F410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r21,-2912(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -2912);
	// lwz r21,-2872(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -2872);
	// lwz r21,-3040(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -3040);
	// lwz r21,-2956(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -2956);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a2f440
	if (!ctx.cr6.eq) goto loc_82A2F440;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_82A2F440:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// divwu r7,r11,r8
	ctx.r7.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F474"))) PPC_WEAK_FUNC(sub_82A2F474);
PPC_FUNC_IMPL(__imp__sub_82A2F474) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// and r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4A0"))) PPC_WEAK_FUNC(sub_82A2F4A0);
PPC_FUNC_IMPL(__imp__sub_82A2F4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4C8"))) PPC_WEAK_FUNC(sub_82A2F4C8);
PPC_FUNC_IMPL(__imp__sub_82A2F4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// divwu r6,r9,r7
	ctx.r6.u32 = ctx.r9.u32 / ctx.r7.u32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4FC"))) PPC_WEAK_FUNC(sub_82A2F4FC);
PPC_FUNC_IMPL(__imp__sub_82A2F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F500"))) PPC_WEAK_FUNC(sub_82A2F500);
PPC_FUNC_IMPL(__imp__sub_82A2F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2F508;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2f530
	if (!ctx.cr6.eq) goto loc_82A2F530;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F530:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a2f584
	if (!ctx.cr6.eq) goto loc_82A2F584;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x82a2f584
	if (!ctx.cr6.eq) goto loc_82A2F584;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2f584
	if (!ctx.cr6.gt) goto loc_82A2F584;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a2f584
	if (ctx.cr6.gt) goto loc_82A2F584;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F584:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f3e8
	ctx.lr = 0x82A2F590;
	sub_82A2F3E8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82A2F594:
	// addi r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bc8260
	ctx.lr = 0x82A2F5A4;
	sub_82BC8260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a2f5fc
	if (!ctx.cr6.eq) goto loc_82A2F5FC;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82a2f5d4
	if (!ctx.cr6.eq) goto loc_82A2F5D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82a2f5d4
	if (ctx.cr6.lt) goto loc_82A2F5D4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2f5fc
	if (ctx.cr6.eq) goto loc_82A2F5FC;
loc_82A2F5D4:
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a2f594
	if (!ctx.cr6.eq) goto loc_82A2F594;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,12244
	ctx.r4.s64 = ctx.r11.s64 + 12244;
	// bl 0x82a2c520
	ctx.lr = 0x82A2F5F0;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F5FC:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F61C"))) PPC_WEAK_FUNC(sub_82A2F61C);
PPC_FUNC_IMPL(__imp__sub_82A2F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F620"))) PPC_WEAK_FUNC(sub_82A2F620);
PPC_FUNC_IMPL(__imp__sub_82A2F620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a2f6b8
	if (!ctx.cr6.eq) goto loc_82A2F6B8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x82a2f6b8
	if (!ctx.cr6.eq) goto loc_82A2F6B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2f6b8
	if (!ctx.cr6.gt) goto loc_82A2F6B8;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a2f6b8
	if (ctx.cr6.gt) goto loc_82A2F6B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82a2f68c
	if (ctx.cr6.lt) goto loc_82A2F68C;
loc_82A2F67C:
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82a2f67c
	if (!ctx.cr6.lt) goto loc_82A2F67C;
loc_82A2F68C:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r9,11960
	ctx.r8.s64 = ctx.r9.s64 + 11960;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// blr 
	return;
loc_82A2F6B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F6C0"))) PPC_WEAK_FUNC(sub_82A2F6C0);
PPC_FUNC_IMPL(__imp__sub_82A2F6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A2F6C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2f704
	if (ctx.cr6.gt) goto loc_82A2F704;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r30,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2F700;
	sub_82227940(ctx, base);
	// b 0x82a2f714
	goto loc_82A2F714;
loc_82A2F704:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2F710;
	sub_82A2C520(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A2F714:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82a2f744
	if (!ctx.cr6.lt) goto loc_82A2F744;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82A2F72C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// bne 0x82a2f72c
	if (!ctx.cr0.eq) goto loc_82A2F72C;
loc_82A2F744:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F750"))) PPC_WEAK_FUNC(sub_82A2F750);
PPC_FUNC_IMPL(__imp__sub_82A2F750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A2F758;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a2f788
	if (!ctx.cr6.eq) goto loc_82A2F788;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-26804
	ctx.r10.s64 = ctx.r11.s64 + -26804;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// b 0x82a2f854
	goto loc_82A2F854;
loc_82A2F788:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82a2f7a8
	if (ctx.cr6.lt) goto loc_82A2F7A8;
loc_82A2F798:
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82a2f798
	if (!ctx.cr6.lt) goto loc_82A2F798;
loc_82A2F7A8:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r9,11960
	ctx.r8.s64 = ctx.r9.s64 + 11960;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 26, ctx.xer);
	// ble cr6,0x82a2f7d4
	if (!ctx.cr6.gt) goto loc_82A2F7D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,12268
	ctx.r4.s64 = ctx.r11.s64 + 12268;
	// bl 0x82a2c520
	ctx.lr = 0x82A2F7D4;
	sub_82A2C520(ctx, base);
loc_82A2F7D4:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// slw r31,r26,r28
	ctx.r31.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x82a2f810
	if (ctx.cr6.gt) goto loc_82A2F810;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A2F80C;
	sub_82227940(ctx, base);
	// b 0x82a2f820
	goto loc_82A2F820;
loc_82A2F810:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2F81C;
	sub_82A2C520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A2F820:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// ble cr6,0x82a2f854
	if (!ctx.cr6.gt) goto loc_82A2F854;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82A2F834:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bne 0x82a2f834
	if (!ctx.cr0.eq) goto loc_82A2F834;
loc_82A2F854:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// slw r9,r26,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F87C"))) PPC_WEAK_FUNC(sub_82A2F87C);
PPC_FUNC_IMPL(__imp__sub_82A2F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F880"))) PPC_WEAK_FUNC(sub_82A2F880);
PPC_FUNC_IMPL(__imp__sub_82A2F880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82A2F888;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r26,32(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r19,8(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r20,20(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82a2f8b4
	if (!ctx.cr6.gt) goto loc_82A2F8B4;
	// bl 0x82a2f6c0
	ctx.lr = 0x82A2F8B4;
	sub_82A2F6C0(ctx, base);
loc_82A2F8B4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2f750
	ctx.lr = 0x82A2F8C4;
	sub_82A2F750(ctx, base);
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82a2f9a0
	if (!ctx.cr6.lt) goto loc_82A2F9A0;
	// addi r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 1;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// rlwinm r22,r31,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// subf r27,r31,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r31.s64;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r23,r11,-26784
	ctx.r23.s64 = ctx.r11.s64 + -26784;
loc_82A2F8F0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2f954
	if (ctx.cr6.eq) goto loc_82A2F954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229260
	ctx.lr = 0x82A2F910;
	sub_82229260(ctx, base);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82a2f944
	if (!ctx.cr6.eq) goto loc_82A2F944;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2fbe0
	ctx.lr = 0x82A2F944;
	sub_82A2FBE0(ctx, base);
loc_82A2F944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82A2F954:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82a2f8f0
	if (!ctx.cr0.eq) goto loc_82A2F8F0;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a2f98c
	if (ctx.cr6.gt) goto loc_82A2F98C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A2F988;
	sub_82227940(ctx, base);
	// b 0x82a2f99c
	goto loc_82A2F99C;
loc_82A2F98C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A2F998;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F99C:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_82A2F9A0:
	// addic. r29,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r29.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2f9f4
	if (ctx.cr0.lt) goto loc_82A2F9F4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82A2F9BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2f9e8
	if (ctx.cr6.eq) goto loc_82A2F9E8;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82228d98
	ctx.lr = 0x82A2F9D8;
	sub_82228D98(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82A2F9E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// bge 0x82a2f9bc
	if (!ctx.cr0.lt) goto loc_82A2F9BC;
loc_82A2F9F4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-26804
	ctx.r10.s64 = ctx.r11.s64 + -26804;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2fa20
	if (ctx.cr6.eq) goto loc_82A2FA20;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82227940
	ctx.lr = 0x82A2FA20;
	sub_82227940(ctx, base);
loc_82A2FA20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FA28"))) PPC_WEAK_FUNC(sub_82A2FA28);
PPC_FUNC_IMPL(__imp__sub_82A2FA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A2FA30;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,27
	ctx.r10.s64 = 27;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2FA4C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a2fa4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2FA4C;
	// lwz r31,32(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82A2FA70:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82a2fa90
	if (!ctx.cr6.gt) goto loc_82A2FA90;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x82a2faf4
	if (ctx.cr6.gt) goto loc_82A2FAF4;
	// b 0x82a2fa98
	goto loc_82A2FA98;
loc_82A2FA90:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a2fad0
	if (ctx.cr6.gt) goto loc_82A2FAD0;
loc_82A2FA98:
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A2FAB4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a2fac4
	if (ctx.cr6.eq) goto loc_82A2FAC4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82A2FAC4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82a2fab4
	if (!ctx.cr0.eq) goto loc_82A2FAB4;
loc_82A2FAD0:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r3,26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 26, ctx.xer);
	// ble cr6,0x82a2fa70
	if (!ctx.cr6.gt) goto loc_82A2FA70;
loc_82A2FAF4:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82a2fb4c
	if (ctx.cr6.eq) goto loc_82A2FB4C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A2FB14:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2fb44
	if (ctx.cr6.eq) goto loc_82A2FB44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a2f620
	ctx.lr = 0x82A2FB3C;
	sub_82A2F620(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82A2FB44:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a2fb14
	if (!ctx.cr6.eq) goto loc_82A2FB14;
loc_82A2FB4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a2f620
	ctx.lr = 0x82A2FB58;
	sub_82A2F620(ctx, base);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ble 0x82a2fbc8
	if (!ctx.cr0.gt) goto loc_82A2FBC8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82A2FB80:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a2fba8
	if (!ctx.cr6.gt) goto loc_82A2FBA8;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a2fba8
	if (!ctx.cr6.gt) goto loc_82A2FBA8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82A2FBA8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82a2fbc8
	if (ctx.cr6.eq) goto loc_82A2FBC8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a2fb80
	if (ctx.cr6.lt) goto loc_82A2FB80;
loc_82A2FBC8:
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2f880
	ctx.lr = 0x82A2FBD8;
	sub_82A2F880(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FBE0"))) PPC_WEAK_FUNC(sub_82A2FBE0);
PPC_FUNC_IMPL(__imp__sub_82A2FBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A2FBE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f3e8
	ctx.lr = 0x82A2FC04;
	sub_82A2F3E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2fc24
	if (!ctx.cr6.eq) goto loc_82A2FC24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-26804
	ctx.r10.s64 = ctx.r11.s64 + -26804;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2fd14
	if (!ctx.cr6.eq) goto loc_82A2FD14;
loc_82A2FC24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2fc58
	if (!ctx.cr6.gt) goto loc_82A2FC58;
loc_82A2FC34:
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2fc68
	if (ctx.cr6.eq) goto loc_82A2FC68;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a2fc34
	if (ctx.cr6.gt) goto loc_82A2FC34;
loc_82A2FC58:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82a2fc74
	goto loc_82A2FC74;
loc_82A2FC68:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a2fc9c
	if (!ctx.cr6.eq) goto loc_82A2FC9C;
loc_82A2FC74:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2fa28
	ctx.lr = 0x82A2FC84;
	sub_82A2FA28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228d98
	ctx.lr = 0x82A2FC94;
	sub_82228D98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82A2FC9C:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f3e8
	ctx.lr = 0x82A2FCA8;
	sub_82A2F3E8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a2fd04
	if (ctx.cr6.eq) goto loc_82A2FD04;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a2fccc
	if (ctx.cr6.eq) goto loc_82A2FCCC;
loc_82A2FCBC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a2fcbc
	if (!ctx.cr6.eq) goto loc_82A2FCBC;
loc_82A2FCCC:
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A2FCE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a2fce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2FCE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82a2fd14
	goto loc_82A2FD14;
loc_82A2FD04:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82A2FD14:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82a2fd70
	if (ctx.cr6.lt) goto loc_82A2FD70;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a2fd70
	if (ctx.cr6.eq) goto loc_82A2FD70;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2fd70
	if (ctx.cr6.eq) goto loc_82A2FD70;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r31,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r31.u32);
loc_82A2FD70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FD7C"))) PPC_WEAK_FUNC(sub_82A2FD7C);
PPC_FUNC_IMPL(__imp__sub_82A2FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FD80"))) PPC_WEAK_FUNC(sub_82A2FD80);
PPC_FUNC_IMPL(__imp__sub_82A2FD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2FD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82229260
	ctx.lr = 0x82A2FDA0;
	sub_82229260(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2fddc
	if (ctx.cr6.eq) goto loc_82A2FDDC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r29,r11,65533
	ctx.r29.u64 = ctx.r11.u64 | 65533;
loc_82A2FDB4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82a2fe0c
	if (ctx.cr6.gt) goto loc_82A2FE0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82229260
	ctx.lr = 0x82A2FDD0;
	sub_82229260(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2fdb4
	if (!ctx.cr6.eq) goto loc_82A2FDB4;
loc_82A2FDDC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a2fe5c
	if (!ctx.cr6.gt) goto loc_82A2FE5C;
loc_82A2FDE8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82229260
	ctx.lr = 0x82A2FDF8;
	sub_82229260(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a2fe4c
	if (!ctx.cr6.eq) goto loc_82A2FE4C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82a2fe50
	goto loc_82A2FE50;
loc_82A2FE0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82229260
	ctx.lr = 0x82A2FE18;
	sub_82229260(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2fe40
	if (ctx.cr6.eq) goto loc_82A2FE40;
loc_82A2FE24:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82229260
	ctx.lr = 0x82A2FE34;
	sub_82229260(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2fe24
	if (!ctx.cr6.eq) goto loc_82A2FE24;
loc_82A2FE40:
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A2FE4C:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82A2FE50:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82a2fde8
	if (ctx.cr6.gt) goto loc_82A2FDE8;
loc_82A2FE5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FE68"))) PPC_WEAK_FUNC(sub_82A2FE68);
PPC_FUNC_IMPL(__imp__sub_82A2FE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A2FE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2feb8
	if (ctx.cr6.eq) goto loc_82A2FEB8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2feb8
	if (!ctx.cr6.eq) goto loc_82A2FEB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82a2e310
	ctx.lr = 0x82A2FEB8;
	sub_82A2E310(ctx, base);
loc_82A2FEB8:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ff48
	if (ctx.cr6.eq) goto loc_82A2FF48;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r7,r9,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82a2fefc
	if (ctx.cr6.eq) goto loc_82A2FEFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82a2ff00
	goto loc_82A2FF00;
loc_82A2FEFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A2FF00:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a2ff3c
	if (ctx.cr6.eq) goto loc_82A2FF3C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82a2ff3c
	if (!ctx.cr6.gt) goto loc_82A2FF3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ff30
	if (ctx.cr6.eq) goto loc_82A2FF30;
	// subf r10,r9,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r9.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x82a2ff34
	goto loc_82A2FF34;
loc_82A2FF30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2FF34:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a2ff48
	if (ctx.cr6.eq) goto loc_82A2FF48;
loc_82A2FF3C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e310
	ctx.lr = 0x82A2FF48;
	sub_82A2E310(ctx, base);
loc_82A2FF48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FF50"))) PPC_WEAK_FUNC(sub_82A2FF50);
PPC_FUNC_IMPL(__imp__sub_82A2FF50) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r30,r9,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// bgt cr6,0x82a2ffdc
	if (ctx.cr6.gt) goto loc_82A2FFDC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a2ffd8
	if (!ctx.cr6.lt) goto loc_82A2FFD8;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
loc_82A2FFD8:
	// bl 0x82a2e140
	ctx.lr = 0x82A2FFDC;
	sub_82A2E140(ctx, base);
loc_82A2FFDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82228c70
	ctx.lr = 0x82A2FFF8;
	sub_82228C70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82A30034"))) PPC_WEAK_FUNC(sub_82A30034);
PPC_FUNC_IMPL(__imp__sub_82A30034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30038"))) PPC_WEAK_FUNC(sub_82A30038);
PPC_FUNC_IMPL(__imp__sub_82A30038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A30040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a300e4
	if (ctx.cr6.eq) goto loc_82A300E4;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a300e4
	if (!ctx.cr6.eq) goto loc_82A300E4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82228518
	ctx.lr = 0x82A3007C;
	sub_82228518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a300e4
	if (ctx.cr6.eq) goto loc_82A300E4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a30098
	if (!ctx.cr6.eq) goto loc_82A30098;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A30098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a300e4
	if (ctx.cr6.eq) goto loc_82A300E4;
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a300e4
	if (!ctx.cr6.eq) goto loc_82A300E4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82228518
	ctx.lr = 0x82A300C4;
	sub_82228518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a300e4
	if (ctx.cr6.eq) goto loc_82A300E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc8260
	ctx.lr = 0x82A300D8;
	sub_82BC8260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82a300e8
	if (!ctx.cr6.eq) goto loc_82A300E8;
loc_82A300E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A300E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A300F0"))) PPC_WEAK_FUNC(sub_82A300F0);
PPC_FUNC_IMPL(__imp__sub_82A300F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A300F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82228d30
	ctx.lr = 0x82A30110;
	sub_82228D30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3012c
	if (!ctx.cr6.eq) goto loc_82A3012C;
loc_82A30120:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A3012C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228d30
	ctx.lr = 0x82A30138;
	sub_82228D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc8260
	ctx.lr = 0x82A30144;
	sub_82BC8260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a30120
	if (ctx.cr6.eq) goto loc_82A30120;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ff50
	ctx.lr = 0x82A30164;
	sub_82A2FF50(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a30194
	if (ctx.cr6.eq) goto loc_82A30194;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a30188
	if (!ctx.cr6.eq) goto loc_82A30188;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a30194
	if (ctx.cr6.eq) goto loc_82A30194;
loc_82A30188:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A30194:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A301A0"))) PPC_WEAK_FUNC(sub_82A301A0);
PPC_FUNC_IMPL(__imp__sub_82A301A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A301A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caaf08
	ctx.lr = 0x82A301C8;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a3024c
	if (!ctx.cr6.eq) goto loc_82A3024C;
loc_82A301D0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A301D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a301d4
	if (!ctx.cr6.eq) goto loc_82A301D4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a30230
	if (ctx.cr6.eq) goto loc_82A30230;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a30248
	if (ctx.cr6.eq) goto loc_82A30248;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82caaf08
	ctx.lr = 0x82A30220;
	sub_82CAAF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a301d0
	if (ctx.cr6.eq) goto loc_82A301D0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A30230:
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A30248:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A3024C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30254"))) PPC_WEAK_FUNC(sub_82A30254);
PPC_FUNC_IMPL(__imp__sub_82A30254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30258"))) PPC_WEAK_FUNC(sub_82A30258);
PPC_FUNC_IMPL(__imp__sub_82A30258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A30260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a3031c
	if (!ctx.cr6.eq) goto loc_82A3031C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a302a8
	if (!ctx.cr6.eq) goto loc_82A302A8;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3032c
	if (!ctx.cr6.gt) goto loc_82A3032C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A302A8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a302d4
	if (!ctx.cr6.eq) goto loc_82A302D4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a301a0
	ctx.lr = 0x82A302BC;
	sub_82A301A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82a3032c
	if (!ctx.cr6.gt) goto loc_82A3032C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A302D4:
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a300f0
	ctx.lr = 0x82A302E8;
	sub_82A300F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a3032c
	if (!ctx.cr6.eq) goto loc_82A3032C;
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a300f0
	ctx.lr = 0x82A30304;
	sub_82A300F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a3031c
	if (ctx.cr6.eq) goto loc_82A3031C;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A3031C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c3c8
	ctx.lr = 0x82A3032C;
	sub_82A2C3C8(ctx, base);
loc_82A3032C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30334"))) PPC_WEAK_FUNC(sub_82A30334);
PPC_FUNC_IMPL(__imp__sub_82A30334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30338"))) PPC_WEAK_FUNC(sub_82A30338);
PPC_FUNC_IMPL(__imp__sub_82A30338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A30340;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8222d580
	ctx.lr = 0x82A3036C;
	sub_8222D580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a304cc
	if (ctx.cr6.eq) goto loc_82A304CC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222d580
	ctx.lr = 0x82A30384;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a304cc
	if (ctx.cr6.eq) goto loc_82A304CC;
	// addi r11,r30,-5
	ctx.r11.s64 = ctx.r30.s64 + -5;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82a30554
	if (ctx.cr6.gt) goto loc_82A30554;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,952
	ctx.r12.s64 = ctx.r12.s64 + 952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A303D4;
	case 1:
		goto loc_82A303F4;
	case 2:
		goto loc_82A30414;
	case 3:
		goto loc_82A30434;
	case 4:
		goto loc_82A30454;
	case 5:
		goto loc_82A30480;
	case 6:
		goto loc_82A304AC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,980(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// lwz r21,1012(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
	// lwz r21,1044(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// lwz r21,1076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// lwz r21,1108(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// lwz r21,1152(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// lwz r21,1196(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
loc_82A303D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A303F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A30414:
	// li r11,3
	ctx.r11.s64 = 3;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A30434:
	// li r11,3
	ctx.r11.s64 = 3;
	// fdivs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A30454:
	// fdivs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82A3045C;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// fnmsubs f13,f0,f30,f31
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64)));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A30480:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fe378
	ctx.lr = 0x82A3048C;
	sub_821FE378(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A304AC:
	// li r11,3
	ctx.r11.s64 = 3;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A304CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228d30
	ctx.lr = 0x82A304DC;
	sub_82228D30(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a304f4
	if (!ctx.cr6.eq) goto loc_82A304F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228d30
	ctx.lr = 0x82A304F4;
	sub_82228D30(ctx, base);
loc_82A304F4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a30528
	if (ctx.cr6.eq) goto loc_82A30528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ff50
	ctx.lr = 0x82A30518;
	sub_82A2FF50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82A30528:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d580
	ctx.lr = 0x82A30534;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a30540
	if (!ctx.cr6.eq) goto loc_82A30540;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82A30540:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11656
	ctx.r5.s64 = ctx.r11.s64 + 11656;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2c300
	ctx.lr = 0x82A30554;
	sub_82A2C300(ctx, base);
loc_82A30554:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30564"))) PPC_WEAK_FUNC(sub_82A30564);
PPC_FUNC_IMPL(__imp__sub_82A30564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30568"))) PPC_WEAK_FUNC(sub_82A30568);
PPC_FUNC_IMPL(__imp__sub_82A30568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A30570;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a305f8
	if (!ctx.cr6.gt) goto loc_82A305F8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a305b4
	if (ctx.cr6.lt) goto loc_82A305B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12832
	ctx.r4.s64 = ctx.r11.s64 + 12832;
	// bl 0x82a306a0
	ctx.lr = 0x82A305B4;
	sub_82A306A0(ctx, base);
loc_82A305B4:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,-3
	ctx.r11.s64 = -3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a305e0
	if (ctx.cr6.gt) goto loc_82A305E0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82227940
	ctx.lr = 0x82A305DC;
	sub_82227940(ctx, base);
	// b 0x82a305f0
	goto loc_82A305F0;
loc_82A305E0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82a2c520
	ctx.lr = 0x82A305EC;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A305F0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82A305F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30618"))) PPC_WEAK_FUNC(sub_82A30618);
PPC_FUNC_IMPL(__imp__sub_82A30618) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,257
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 257, ctx.xer);
	// bge cr6,0x82a30674
	if (!ctx.cr6.lt) goto loc_82A30674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca6bb0
	ctx.lr = 0x82A30644;
	sub_82CA6BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq cr6,0x82a30664
	if (ctx.cr6.eq) goto loc_82A30664;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12860
	ctx.r4.s64 = ctx.r11.s64 + 12860;
	// bl 0x82a2ed28
	ctx.lr = 0x82A30660;
	sub_82A2ED28(ctx, base);
	// b 0x82a30688
	goto loc_82A30688;
loc_82A30664:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
	// bl 0x82a2ed28
	ctx.lr = 0x82A30670;
	sub_82A2ED28(ctx, base);
	// b 0x82a30688
	goto loc_82A30688;
loc_82A30674:
	// addi r11,r31,-257
	ctx.r11.s64 = ctx.r31.s64 + -257;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-26976
	ctx.r8.s64 = ctx.r10.s64 + -26976;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82A30688:
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

__attribute__((alias("__imp__sub_82A306A0"))) PPC_WEAK_FUNC(sub_82A306A0);
PPC_FUNC_IMPL(__imp__sub_82A306A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A306A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A306CC;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A306E8;
	sub_82A2ED28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a30740
	if (ctx.cr6.eq) goto loc_82A30740;
	// cmpwi cr6,r30,284
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 284, ctx.xer);
	// blt cr6,0x82a3071c
	if (ctx.cr6.lt) goto loc_82A3071C;
	// cmpwi cr6,r30,286
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 286, ctx.xer);
	// bgt cr6,0x82a3071c
	if (ctx.cr6.gt) goto loc_82A3071C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A30710;
	sub_82A30568(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a3072c
	goto loc_82A3072C;
loc_82A3071C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30618
	ctx.lr = 0x82A30728;
	sub_82A30618(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82A3072C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,12876
	ctx.r4.s64 = ctx.r11.s64 + 12876;
	// bl 0x82a2ed28
	ctx.lr = 0x82A30740;
	sub_82A2ED28(ctx, base);
loc_82A30740:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A3074C;
	sub_821E51D0(ctx, base);
}

__attribute__((alias("__imp__sub_82A3074C"))) PPC_WEAK_FUNC(sub_82A3074C);
PPC_FUNC_IMPL(__imp__sub_82A3074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30750"))) PPC_WEAK_FUNC(sub_82A30750);
PPC_FUNC_IMPL(__imp__sub_82A30750) {
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
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A30774;
	sub_82227EA0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82228570
	ctx.lr = 0x82A3078C;
	sub_82228570(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a307c0
	if (!ctx.cr6.eq) goto loc_82A307C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2fbe0
	ctx.lr = 0x82A307BC;
	sub_82A2FBE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A307C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a307dc
	if (!ctx.cr6.eq) goto loc_82A307DC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82A307DC:
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

__attribute__((alias("__imp__sub_82A307F4"))) PPC_WEAK_FUNC(sub_82A307F4);
PPC_FUNC_IMPL(__imp__sub_82A307F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A307F8"))) PPC_WEAK_FUNC(sub_82A307F8);
PPC_FUNC_IMPL(__imp__sub_82A307F8) {
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
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30844
	if (ctx.cr6.eq) goto loc_82A30844;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a3084c
	goto loc_82A3084C;
loc_82A30844:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A3084C;
	sub_82BCD8A8(ctx, base);
loc_82A3084C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82a30860
	if (ctx.cr6.eq) goto loc_82A30860;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x82a308a4
	if (!ctx.cr6.eq) goto loc_82A308A4;
loc_82A30860:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82a308a4
	if (ctx.cr6.eq) goto loc_82A308A4;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30898
	if (ctx.cr6.eq) goto loc_82A30898;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a308a0
	goto loc_82A308A0;
loc_82A30898:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A308A0;
	sub_82BCD8A8(ctx, base);
loc_82A308A0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A308A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,65533
	ctx.r9.u64 = ctx.r10.u64 | 65533;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a308d4
	if (ctx.cr6.lt) goto loc_82A308D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12892
	ctx.r4.s64 = ctx.r11.s64 + 12892;
	// bl 0x82a306a0
	ctx.lr = 0x82A308D4;
	sub_82A306A0(ctx, base);
loc_82A308D4:
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

__attribute__((alias("__imp__sub_82A308EC"))) PPC_WEAK_FUNC(sub_82A308EC);
PPC_FUNC_IMPL(__imp__sub_82A308EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A308F0"))) PPC_WEAK_FUNC(sub_82A308F0);
PPC_FUNC_IMPL(__imp__sub_82A308F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A308F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,46
	ctx.r10.s64 = 46;
	// li r9,287
	ctx.r9.s64 = 287;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r28,8(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A3095C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a30970
	if (!ctx.cr6.eq) goto loc_82A30970;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e51d0
	ctx.lr = 0x82A30970;
	sub_821E51D0(ctx, base);
loc_82A30970:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r10,32
	ctx.r10.s64 = 32;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r9,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// beq cr6,0x82a309cc
	if (ctx.cr6.eq) goto loc_82A309CC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A309CC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A309D4;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A309E0"))) PPC_WEAK_FUNC(sub_82A309E0);
PPC_FUNC_IMPL(__imp__sub_82A309E0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A309FC;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30a30
	if (ctx.cr6.eq) goto loc_82A30A30;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82a30a40
	goto loc_82A30A40;
loc_82A30A30:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30A38;
	sub_82BCD8A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A30A40:
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
}

__attribute__((alias("__imp__sub_82A30A58"))) PPC_WEAK_FUNC(sub_82A30A58);
PPC_FUNC_IMPL(__imp__sub_82A30A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A30A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ca5e20
	ctx.lr = 0x82A30A70;
	sub_82CA5E20(ctx, base);
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// li r29,46
	ctx.r29.s64 = 46;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30a8c
	if (ctx.cr6.eq) goto loc_82A30A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82a30a90
	goto loc_82A30A90;
loc_82A30A8C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82A30A90:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82a30acc
	if (ctx.cr6.eq) goto loc_82A30ACC;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
loc_82A30AAC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a30ac4
	if (!ctx.cr6.eq) goto loc_82A30AC4;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82A30AC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30aac
	if (!ctx.cr6.eq) goto loc_82A30AAC;
loc_82A30ACC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2e7b0
	ctx.lr = 0x82A30ADC;
	sub_82A2E7B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a30b8c
	if (!ctx.cr6.eq) goto loc_82A30B8C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a30b20
	if (ctx.cr6.eq) goto loc_82A30B20;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
loc_82A30B00:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82a30b18
	if (!ctx.cr6.eq) goto loc_82A30B18;
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
loc_82A30B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30b00
	if (!ctx.cr6.eq) goto loc_82A30B00;
loc_82A30B20:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A30B34;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,12920
	ctx.r7.s64 = ctx.r11.s64 + 12920;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A30B54;
	sub_82A2ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A30B64;
	sub_82A30568(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82a2ed28
	ctx.lr = 0x82A30B80;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A30B8C;
	sub_821E51D0(ctx, base);
loc_82A30B8C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30B94"))) PPC_WEAK_FUNC(sub_82A30B94);
PPC_FUNC_IMPL(__imp__sub_82A30B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30B98"))) PPC_WEAK_FUNC(sub_82A30B98);
PPC_FUNC_IMPL(__imp__sub_82A30B98) {
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
loc_82A30BB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A30BC0;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30bf0
	if (ctx.cr6.eq) goto loc_82A30BF0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a30bf8
	goto loc_82A30BF8;
loc_82A30BF0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30BF8;
	sub_82BCD8A8(ctx, base);
loc_82A30BF8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca6b10
	ctx.lr = 0x82A30C00;
	sub_82CA6B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a30bb4
	if (!ctx.cr6.eq) goto loc_82A30BB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82a30bb4
	if (ctx.cr6.eq) goto loc_82A30BB4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,12940
	ctx.r3.s64 = ctx.r11.s64 + 12940;
	// bl 0x82ca3980
	ctx.lr = 0x82A30C24;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30c5c
	if (ctx.cr6.eq) goto loc_82A30C5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a309e0
	ctx.lr = 0x82A30C34;
	sub_82A309E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a30c5c
	if (ctx.cr6.eq) goto loc_82A30C5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// bl 0x82ca3980
	ctx.lr = 0x82A30C4C;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30c5c
	if (ctx.cr6.eq) goto loc_82A30C5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a309e0
	ctx.lr = 0x82A30C5C;
	sub_82A309E0(ctx, base);
loc_82A30C5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca6b90
	ctx.lr = 0x82A30C64;
	sub_82CA6B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a30c78
	if (!ctx.cr6.eq) goto loc_82A30C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x82a30cc8
	if (!ctx.cr6.eq) goto loc_82A30CC8;
loc_82A30C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A30C84;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30cb8
	if (ctx.cr6.eq) goto loc_82A30CB8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a30c5c
	goto loc_82A30C5C;
loc_82A30CB8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30CC0;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a30c5c
	goto loc_82A30C5C;
loc_82A30CC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A30CD4;
	sub_82A30568(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82a30d08
	if (ctx.cr6.eq) goto loc_82A30D08;
loc_82A30CEC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,46
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 46, ctx.xer);
	// bne cr6,0x82a30d00
	if (!ctx.cr6.eq) goto loc_82A30D00;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82A30D00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30cec
	if (!ctx.cr6.eq) goto loc_82A30CEC;
loc_82A30D08:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2e7b0
	ctx.lr = 0x82A30D18;
	sub_82A2E7B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a30d2c
	if (!ctx.cr6.eq) goto loc_82A30D2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30a58
	ctx.lr = 0x82A30D2C;
	sub_82A30A58(ctx, base);
loc_82A30D2C:
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

__attribute__((alias("__imp__sub_82A30D44"))) PPC_WEAK_FUNC(sub_82A30D44);
PPC_FUNC_IMPL(__imp__sub_82A30D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30D48"))) PPC_WEAK_FUNC(sub_82A30D48);
PPC_FUNC_IMPL(__imp__sub_82A30D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A30D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A30D68;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30d98
	if (ctx.cr6.eq) goto loc_82A30D98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a30da0
	goto loc_82A30DA0;
loc_82A30D98:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30DA0;
	sub_82BCD8A8(ctx, base);
loc_82A30DA0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// bne cr6,0x82a30e04
	if (!ctx.cr6.eq) goto loc_82A30E04;
loc_82A30DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A30DB8;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30de8
	if (ctx.cr6.eq) goto loc_82A30DE8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a30df0
	goto loc_82A30DF0;
loc_82A30DE8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30DF0;
	sub_82BCD8A8(ctx, base);
loc_82A30DF0:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x82a30dac
	if (ctx.cr6.eq) goto loc_82A30DAC;
loc_82A30E04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82a30e18
	if (ctx.cr6.eq) goto loc_82A30E18;
	// subfic r3,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r30.s64;
loc_82A30E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30E20"))) PPC_WEAK_FUNC(sub_82A30E20);
PPC_FUNC_IMPL(__imp__sub_82A30E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A30E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A30E40;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a30e70
	if (ctx.cr6.eq) goto loc_82A30E70;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a30e78
	goto loc_82A30E78;
loc_82A30E70:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A30E78;
	sub_82BCD8A8(ctx, base);
loc_82A30E78:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82a30e8c
	if (ctx.cr6.eq) goto loc_82A30E8C;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x82a30e94
	if (!ctx.cr6.eq) goto loc_82A30E94;
loc_82A30E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a307f8
	ctx.lr = 0x82A30E94;
	sub_82A307F8(ctx, base);
loc_82A30E94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A30E98:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bgt cr6,0x82a3116c
	if (ctx.cr6.gt) goto loc_82A3116C;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,3776
	ctx.r12.s64 = ctx.r12.s64 + 3776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A311C0;
	case 1:
		goto loc_82A3116C;
	case 2:
		goto loc_82A3116C;
	case 3:
		goto loc_82A3116C;
	case 4:
		goto loc_82A3116C;
	case 5:
		goto loc_82A3116C;
	case 6:
		goto loc_82A3116C;
	case 7:
		goto loc_82A3116C;
	case 8:
		goto loc_82A3116C;
	case 9:
		goto loc_82A3116C;
	case 10:
		goto loc_82A3116C;
	case 11:
		goto loc_82A31144;
	case 12:
		goto loc_82A3116C;
	case 13:
		goto loc_82A3116C;
	case 14:
		goto loc_82A31144;
	case 15:
		goto loc_82A3116C;
	case 16:
		goto loc_82A3116C;
	case 17:
		goto loc_82A3116C;
	case 18:
		goto loc_82A3116C;
	case 19:
		goto loc_82A3116C;
	case 20:
		goto loc_82A3116C;
	case 21:
		goto loc_82A3116C;
	case 22:
		goto loc_82A3116C;
	case 23:
		goto loc_82A3116C;
	case 24:
		goto loc_82A3116C;
	case 25:
		goto loc_82A3116C;
	case 26:
		goto loc_82A3116C;
	case 27:
		goto loc_82A3116C;
	case 28:
		goto loc_82A3116C;
	case 29:
		goto loc_82A3116C;
	case 30:
		goto loc_82A3116C;
	case 31:
		goto loc_82A3116C;
	case 32:
		goto loc_82A3116C;
	case 33:
		goto loc_82A3116C;
	case 34:
		goto loc_82A3116C;
	case 35:
		goto loc_82A3116C;
	case 36:
		goto loc_82A3116C;
	case 37:
		goto loc_82A3116C;
	case 38:
		goto loc_82A3116C;
	case 39:
		goto loc_82A3116C;
	case 40:
		goto loc_82A3116C;
	case 41:
		goto loc_82A3116C;
	case 42:
		goto loc_82A3116C;
	case 43:
		goto loc_82A3116C;
	case 44:
		goto loc_82A3116C;
	case 45:
		goto loc_82A3116C;
	case 46:
		goto loc_82A3116C;
	case 47:
		goto loc_82A3116C;
	case 48:
		goto loc_82A3116C;
	case 49:
		goto loc_82A3116C;
	case 50:
		goto loc_82A3116C;
	case 51:
		goto loc_82A3116C;
	case 52:
		goto loc_82A3116C;
	case 53:
		goto loc_82A3116C;
	case 54:
		goto loc_82A3116C;
	case 55:
		goto loc_82A3116C;
	case 56:
		goto loc_82A3116C;
	case 57:
		goto loc_82A3116C;
	case 58:
		goto loc_82A3116C;
	case 59:
		goto loc_82A3116C;
	case 60:
		goto loc_82A3116C;
	case 61:
		goto loc_82A3116C;
	case 62:
		goto loc_82A3116C;
	case 63:
		goto loc_82A3116C;
	case 64:
		goto loc_82A3116C;
	case 65:
		goto loc_82A3116C;
	case 66:
		goto loc_82A3116C;
	case 67:
		goto loc_82A3116C;
	case 68:
		goto loc_82A3116C;
	case 69:
		goto loc_82A3116C;
	case 70:
		goto loc_82A3116C;
	case 71:
		goto loc_82A3116C;
	case 72:
		goto loc_82A3116C;
	case 73:
		goto loc_82A3116C;
	case 74:
		goto loc_82A3116C;
	case 75:
		goto loc_82A3116C;
	case 76:
		goto loc_82A3116C;
	case 77:
		goto loc_82A3116C;
	case 78:
		goto loc_82A3116C;
	case 79:
		goto loc_82A3116C;
	case 80:
		goto loc_82A3116C;
	case 81:
		goto loc_82A3116C;
	case 82:
		goto loc_82A3116C;
	case 83:
		goto loc_82A3116C;
	case 84:
		goto loc_82A3116C;
	case 85:
		goto loc_82A3116C;
	case 86:
		goto loc_82A3116C;
	case 87:
		goto loc_82A3116C;
	case 88:
		goto loc_82A3116C;
	case 89:
		goto loc_82A3116C;
	case 90:
		goto loc_82A3116C;
	case 91:
		goto loc_82A3116C;
	case 92:
		goto loc_82A3103C;
	case 93:
		goto loc_82A3116C;
	case 94:
		goto loc_82A310F8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,4544(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4420(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4420);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4420(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4420);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4156);
	// lwz r21,4460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// lwz r21,4344(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4344);
loc_82A3103C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30d48
	ctx.lr = 0x82A31044;
	sub_82A30D48(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82a30e98
	if (!ctx.cr6.eq) goto loc_82A30E98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A31058;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31088
	if (ctx.cr6.eq) goto loc_82A31088;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31090
	goto loc_82A31090;
loc_82A31088:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31090;
	sub_82BCD8A8(ctx, base);
loc_82A31090:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a30e98
	if (!ctx.cr6.eq) goto loc_82A30E98;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A310B0;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,12996
	ctx.r7.s64 = ctx.r11.s64 + 12996;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A310D0;
	sub_82A2ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,91
	ctx.r3.s64 = 91;
	// bl 0x82ca6bb0
	ctx.lr = 0x82A310DC;
	sub_82CA6BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,91
	ctx.r5.s64 = 91;
	// beq cr6,0x82a31238
	if (ctx.cr6.eq) goto loc_82A31238;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12860
	ctx.r4.s64 = ctx.r11.s64 + 12860;
	// b 0x82a31240
	goto loc_82A31240;
loc_82A310F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30d48
	ctx.lr = 0x82A31100;
	sub_82A30D48(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82a30e98
	if (!ctx.cr6.eq) goto loc_82A30E98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A31114;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31268
	if (ctx.cr6.eq) goto loc_82A31268;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31270
	goto loc_82A31270;
loc_82A31144:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A31150;
	sub_82A30568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a307f8
	ctx.lr = 0x82A31158;
	sub_82A307F8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a30e98
	if (!ctx.cr6.eq) goto loc_82A30E98;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x82a30e98
	goto loc_82A30E98;
loc_82A3116C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a3117c
	if (ctx.cr6.eq) goto loc_82A3117C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A3117C;
	sub_82A30568(ctx, base);
loc_82A3117C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a311b0
	if (ctx.cr6.eq) goto loc_82A311B0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a30e98
	goto loc_82A30E98;
loc_82A311B0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A311B8;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a30e98
	goto loc_82A30E98;
loc_82A311C0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a311d4
	if (ctx.cr6.eq) goto loc_82A311D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,12948
	ctx.r30.s64 = ctx.r11.s64 + 12948;
	// b 0x82a311dc
	goto loc_82A311DC;
loc_82A311D4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,12972
	ctx.r30.s64 = ctx.r11.s64 + 12972;
loc_82A311DC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A311F0;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A3120C;
	sub_82A2ED28(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-26976
	ctx.r8.s64 = ctx.r10.s64 + -26976;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,120(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// bl 0x82a2ed28
	ctx.lr = 0x82A3122C;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A31238;
	sub_821E51D0(ctx, base);
loc_82A31238:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
loc_82A31240:
	// bl 0x82a2ed28
	ctx.lr = 0x82A31244;
	sub_82A2ED28(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,12876
	ctx.r4.s64 = ctx.r11.s64 + 12876;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a2ed28
	ctx.lr = 0x82A3125C;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A31268;
	sub_821E51D0(ctx, base);
loc_82A31268:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31270;
	sub_82BCD8A8(ctx, base);
loc_82A31270:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a312a8
	if (ctx.cr6.eq) goto loc_82A312A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82a30750
	ctx.lr = 0x82A312A4;
	sub_82A30750(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82A312A8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A312B0"))) PPC_WEAK_FUNC(sub_82A312B0);
PPC_FUNC_IMPL(__imp__sub_82A312B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A312B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A312D0;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31300
	if (ctx.cr6.eq) goto loc_82A31300;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31308
	goto loc_82A31308;
loc_82A31300:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31308;
	sub_82BCD8A8(ctx, base);
loc_82A31308:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82a31864
	if (ctx.cr6.eq) goto loc_82A31864;
loc_82A31314:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bgt cr6,0x82a31728
	if (ctx.cr6.gt) goto loc_82A31728;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,4924
	ctx.r12.s64 = ctx.r12.s64 + 4924;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A318A0;
	case 1:
		goto loc_82A31728;
	case 2:
		goto loc_82A31728;
	case 3:
		goto loc_82A31728;
	case 4:
		goto loc_82A31728;
	case 5:
		goto loc_82A31728;
	case 6:
		goto loc_82A31728;
	case 7:
		goto loc_82A31728;
	case 8:
		goto loc_82A31728;
	case 9:
		goto loc_82A31728;
	case 10:
		goto loc_82A31728;
	case 11:
		goto loc_82A31900;
	case 12:
		goto loc_82A31728;
	case 13:
		goto loc_82A31728;
	case 14:
		goto loc_82A31900;
	case 15:
		goto loc_82A31728;
	case 16:
		goto loc_82A31728;
	case 17:
		goto loc_82A31728;
	case 18:
		goto loc_82A31728;
	case 19:
		goto loc_82A31728;
	case 20:
		goto loc_82A31728;
	case 21:
		goto loc_82A31728;
	case 22:
		goto loc_82A31728;
	case 23:
		goto loc_82A31728;
	case 24:
		goto loc_82A31728;
	case 25:
		goto loc_82A31728;
	case 26:
		goto loc_82A31728;
	case 27:
		goto loc_82A31728;
	case 28:
		goto loc_82A31728;
	case 29:
		goto loc_82A31728;
	case 30:
		goto loc_82A31728;
	case 31:
		goto loc_82A31728;
	case 32:
		goto loc_82A31728;
	case 33:
		goto loc_82A31728;
	case 34:
		goto loc_82A31728;
	case 35:
		goto loc_82A31728;
	case 36:
		goto loc_82A31728;
	case 37:
		goto loc_82A31728;
	case 38:
		goto loc_82A31728;
	case 39:
		goto loc_82A31728;
	case 40:
		goto loc_82A31728;
	case 41:
		goto loc_82A31728;
	case 42:
		goto loc_82A31728;
	case 43:
		goto loc_82A31728;
	case 44:
		goto loc_82A31728;
	case 45:
		goto loc_82A31728;
	case 46:
		goto loc_82A31728;
	case 47:
		goto loc_82A31728;
	case 48:
		goto loc_82A31728;
	case 49:
		goto loc_82A31728;
	case 50:
		goto loc_82A31728;
	case 51:
		goto loc_82A31728;
	case 52:
		goto loc_82A31728;
	case 53:
		goto loc_82A31728;
	case 54:
		goto loc_82A31728;
	case 55:
		goto loc_82A31728;
	case 56:
		goto loc_82A31728;
	case 57:
		goto loc_82A31728;
	case 58:
		goto loc_82A31728;
	case 59:
		goto loc_82A31728;
	case 60:
		goto loc_82A31728;
	case 61:
		goto loc_82A31728;
	case 62:
		goto loc_82A31728;
	case 63:
		goto loc_82A31728;
	case 64:
		goto loc_82A31728;
	case 65:
		goto loc_82A31728;
	case 66:
		goto loc_82A31728;
	case 67:
		goto loc_82A31728;
	case 68:
		goto loc_82A31728;
	case 69:
		goto loc_82A31728;
	case 70:
		goto loc_82A31728;
	case 71:
		goto loc_82A31728;
	case 72:
		goto loc_82A31728;
	case 73:
		goto loc_82A31728;
	case 74:
		goto loc_82A31728;
	case 75:
		goto loc_82A31728;
	case 76:
		goto loc_82A31728;
	case 77:
		goto loc_82A31728;
	case 78:
		goto loc_82A31728;
	case 79:
		goto loc_82A31728;
	case 80:
		goto loc_82A31728;
	case 81:
		goto loc_82A31728;
	case 82:
		goto loc_82A31728;
	case 83:
		goto loc_82A31728;
	case 84:
		goto loc_82A31728;
	case 85:
		goto loc_82A31728;
	case 86:
		goto loc_82A31728;
	case 87:
		goto loc_82A31728;
	case 88:
		goto loc_82A31728;
	case 89:
		goto loc_82A31728;
	case 90:
		goto loc_82A31728;
	case 91:
		goto loc_82A31728;
	case 92:
		goto loc_82A31728;
	case 93:
		goto loc_82A314B4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,6304(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6304);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,6400(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6400);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,6400(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6400);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5928(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// lwz r21,5300(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5300);
loc_82A314B4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a314e4
	if (ctx.cr6.eq) goto loc_82A314E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a314ec
	goto loc_82A314EC;
loc_82A314E4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A314EC;
	sub_82BCD8A8(ctx, base);
loc_82A314EC:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x82a31778
	if (ctx.cr6.gt) goto loc_82A31778;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,5396
	ctx.r12.s64 = ctx.r12.s64 + 5396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A31858;
	case 1:
		goto loc_82A31778;
	case 2:
		goto loc_82A31778;
	case 3:
		goto loc_82A31778;
	case 4:
		goto loc_82A31778;
	case 5:
		goto loc_82A31778;
	case 6:
		goto loc_82A31778;
	case 7:
		goto loc_82A31778;
	case 8:
		goto loc_82A31778;
	case 9:
		goto loc_82A31778;
	case 10:
		goto loc_82A31778;
	case 11:
		goto loc_82A31760;
	case 12:
		goto loc_82A31778;
	case 13:
		goto loc_82A31778;
	case 14:
		goto loc_82A31760;
	case 15:
		goto loc_82A31778;
	case 16:
		goto loc_82A31778;
	case 17:
		goto loc_82A31778;
	case 18:
		goto loc_82A31778;
	case 19:
		goto loc_82A31778;
	case 20:
		goto loc_82A31778;
	case 21:
		goto loc_82A31778;
	case 22:
		goto loc_82A31778;
	case 23:
		goto loc_82A31778;
	case 24:
		goto loc_82A31778;
	case 25:
		goto loc_82A31778;
	case 26:
		goto loc_82A31778;
	case 27:
		goto loc_82A31778;
	case 28:
		goto loc_82A31778;
	case 29:
		goto loc_82A31778;
	case 30:
		goto loc_82A31778;
	case 31:
		goto loc_82A31778;
	case 32:
		goto loc_82A31778;
	case 33:
		goto loc_82A31778;
	case 34:
		goto loc_82A31778;
	case 35:
		goto loc_82A31778;
	case 36:
		goto loc_82A31778;
	case 37:
		goto loc_82A31778;
	case 38:
		goto loc_82A31778;
	case 39:
		goto loc_82A31778;
	case 40:
		goto loc_82A31778;
	case 41:
		goto loc_82A31778;
	case 42:
		goto loc_82A31778;
	case 43:
		goto loc_82A31778;
	case 44:
		goto loc_82A31778;
	case 45:
		goto loc_82A31778;
	case 46:
		goto loc_82A31778;
	case 47:
		goto loc_82A31778;
	case 48:
		goto loc_82A31778;
	case 49:
		goto loc_82A31778;
	case 50:
		goto loc_82A31778;
	case 51:
		goto loc_82A31778;
	case 52:
		goto loc_82A31778;
	case 53:
		goto loc_82A31778;
	case 54:
		goto loc_82A31778;
	case 55:
		goto loc_82A31778;
	case 56:
		goto loc_82A31778;
	case 57:
		goto loc_82A31778;
	case 58:
		goto loc_82A31778;
	case 59:
		goto loc_82A31778;
	case 60:
		goto loc_82A31778;
	case 61:
		goto loc_82A31778;
	case 62:
		goto loc_82A31778;
	case 63:
		goto loc_82A31778;
	case 64:
		goto loc_82A31778;
	case 65:
		goto loc_82A31778;
	case 66:
		goto loc_82A31778;
	case 67:
		goto loc_82A31778;
	case 68:
		goto loc_82A31778;
	case 69:
		goto loc_82A31778;
	case 70:
		goto loc_82A31778;
	case 71:
		goto loc_82A31778;
	case 72:
		goto loc_82A31778;
	case 73:
		goto loc_82A31778;
	case 74:
		goto loc_82A31778;
	case 75:
		goto loc_82A31778;
	case 76:
		goto loc_82A31778;
	case 77:
		goto loc_82A31778;
	case 78:
		goto loc_82A31778;
	case 79:
		goto loc_82A31778;
	case 80:
		goto loc_82A31778;
	case 81:
		goto loc_82A31778;
	case 82:
		goto loc_82A31778;
	case 83:
		goto loc_82A31778;
	case 84:
		goto loc_82A31778;
	case 85:
		goto loc_82A31778;
	case 86:
		goto loc_82A31778;
	case 87:
		goto loc_82A31778;
	case 88:
		goto loc_82A31778;
	case 89:
		goto loc_82A31778;
	case 90:
		goto loc_82A31778;
	case 91:
		goto loc_82A31778;
	case 92:
		goto loc_82A31778;
	case 93:
		goto loc_82A31778;
	case 94:
		goto loc_82A31778;
	case 95:
		goto loc_82A31778;
	case 96:
		goto loc_82A31778;
	case 97:
		goto loc_82A31778;
	case 98:
		goto loc_82A316F4;
	case 99:
		goto loc_82A316FC;
	case 100:
		goto loc_82A31778;
	case 101:
		goto loc_82A31778;
	case 102:
		goto loc_82A31778;
	case 103:
		goto loc_82A31704;
	case 104:
		goto loc_82A31778;
	case 105:
		goto loc_82A31778;
	case 106:
		goto loc_82A31778;
	case 107:
		goto loc_82A31778;
	case 108:
		goto loc_82A31778;
	case 109:
		goto loc_82A31778;
	case 110:
		goto loc_82A31778;
	case 111:
		goto loc_82A3170C;
	case 112:
		goto loc_82A31778;
	case 113:
		goto loc_82A31778;
	case 114:
		goto loc_82A31778;
	case 115:
		goto loc_82A31714;
	case 116:
		goto loc_82A31778;
	case 117:
		goto loc_82A3171C;
	case 118:
		goto loc_82A31778;
	case 119:
		goto loc_82A31724;
	default:
		__builtin_unreachable();
	}
	// lwz r21,6232(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6232);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5984(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5984);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5984(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5984);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5876(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5876);
	// lwz r21,5884(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5884);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5892(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5892);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5900(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5900);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5908(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5908);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5916(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5916);
	// lwz r21,6008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r21,5924(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5924);
loc_82A316F4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A316FC:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A31704:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A3170C:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A31714:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A3171C:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82a31728
	goto loc_82A31728;
loc_82A31724:
	// li r4,11
	ctx.r4.s64 = 11;
loc_82A31728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A31730;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a3184c
	if (ctx.cr6.eq) goto loc_82A3184C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31854
	goto loc_82A31854;
loc_82A31760:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A3176C;
	sub_82A30568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a307f8
	ctx.lr = 0x82A31774;
	sub_82A307F8(ctx, base);
	// b 0x82a31858
	goto loc_82A31858;
loc_82A31778:
	// bl 0x82ca6b10
	ctx.lr = 0x82A3177C;
	sub_82CA6B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a317c0
	if (!ctx.cr6.eq) goto loc_82A317C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A31790;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a3184c
	if (ctx.cr6.eq) goto loc_82A3184C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31854
	goto loc_82A31854;
loc_82A317C0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A317C8:
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-48
	ctx.r30.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82a31810
	if (ctx.cr6.eq) goto loc_82A31810;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31818
	goto loc_82A31818;
loc_82A31810:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31818;
	sub_82BCD8A8(ctx, base);
loc_82A31818:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bge cr6,0x82a31834
	if (!ctx.cr6.lt) goto loc_82A31834;
	// bl 0x82ca6b10
	ctx.lr = 0x82A3182C;
	sub_82CA6B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a317c8
	if (!ctx.cr6.eq) goto loc_82A317C8;
loc_82A31834:
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// bgt cr6,0x82a3196c
	if (ctx.cr6.gt) goto loc_82A3196C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A31848;
	sub_82A30568(ctx, base);
	// b 0x82a31858
	goto loc_82A31858;
loc_82A3184C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31854;
	sub_82BCD8A8(ctx, base);
loc_82A31854:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A31858:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82a31314
	if (!ctx.cr6.eq) goto loc_82A31314;
loc_82A31864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A31870;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a319d8
	if (ctx.cr6.eq) goto loc_82A319D8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a319e0
	goto loc_82A319E0;
loc_82A318A0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A318B4;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13032
	ctx.r7.s64 = ctx.r11.s64 + 13032;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A318D4;
	sub_82A2ED28(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r9,-26976
	ctx.r7.s64 = ctx.r9.s64 + -26976;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r8,12876
	ctx.r4.s64 = ctx.r8.s64 + 12876;
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// bl 0x82a2ed28
	ctx.lr = 0x82A318F4;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A31900;
	sub_821E51D0(ctx, base);
loc_82A31900:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A31914;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13032
	ctx.r7.s64 = ctx.r11.s64 + 13032;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A31934;
	sub_82A2ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A31944;
	sub_82A30568(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82a2ed28
	ctx.lr = 0x82A31960;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A3196C;
	sub_821E51D0(ctx, base);
loc_82A3196C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A31980;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13052
	ctx.r7.s64 = ctx.r11.s64 + 13052;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A319A0;
	sub_82A2ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A319B0;
	sub_82A30568(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82a2ed28
	ctx.lr = 0x82A319CC;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A319D8;
	sub_821E51D0(ctx, base);
loc_82A319D8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A319E0;
	sub_82BCD8A8(ctx, base);
loc_82A319E0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82a30750
	ctx.lr = 0x82A31A00;
	sub_82A30750(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A31A0C"))) PPC_WEAK_FUNC(sub_82A31A0C);
PPC_FUNC_IMPL(__imp__sub_82A31A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31A10"))) PPC_WEAK_FUNC(sub_82A31A10);
PPC_FUNC_IMPL(__imp__sub_82A31A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A31A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A31A28:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82A31A30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x82a31d84
	if (ctx.cr6.gt) goto loc_82A31D84;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,6744
	ctx.r12.s64 = ctx.r12.s64 + 6744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A3221C;
	case 1:
		goto loc_82A31D84;
	case 2:
		goto loc_82A31D84;
	case 3:
		goto loc_82A31D84;
	case 4:
		goto loc_82A31D84;
	case 5:
		goto loc_82A31D84;
	case 6:
		goto loc_82A31D84;
	case 7:
		goto loc_82A31D84;
	case 8:
		goto loc_82A31D84;
	case 9:
		goto loc_82A31D84;
	case 10:
		goto loc_82A31D84;
	case 11:
		goto loc_82A31C58;
	case 12:
		goto loc_82A31D84;
	case 13:
		goto loc_82A31D84;
	case 14:
		goto loc_82A31C58;
	case 15:
		goto loc_82A31D84;
	case 16:
		goto loc_82A31D84;
	case 17:
		goto loc_82A31D84;
	case 18:
		goto loc_82A31D84;
	case 19:
		goto loc_82A31D84;
	case 20:
		goto loc_82A31D84;
	case 21:
		goto loc_82A31D84;
	case 22:
		goto loc_82A31D84;
	case 23:
		goto loc_82A31D84;
	case 24:
		goto loc_82A31D84;
	case 25:
		goto loc_82A31D84;
	case 26:
		goto loc_82A31D84;
	case 27:
		goto loc_82A31D84;
	case 28:
		goto loc_82A31D84;
	case 29:
		goto loc_82A31D84;
	case 30:
		goto loc_82A31D84;
	case 31:
		goto loc_82A31D84;
	case 32:
		goto loc_82A31D84;
	case 33:
		goto loc_82A31D84;
	case 34:
		goto loc_82A31D84;
	case 35:
		goto loc_82A3211C;
	case 36:
		goto loc_82A31D84;
	case 37:
		goto loc_82A31D84;
	case 38:
		goto loc_82A31D84;
	case 39:
		goto loc_82A31D84;
	case 40:
		goto loc_82A3211C;
	case 41:
		goto loc_82A31D84;
	case 42:
		goto loc_82A31D84;
	case 43:
		goto loc_82A31D84;
	case 44:
		goto loc_82A31D84;
	case 45:
		goto loc_82A31D84;
	case 46:
		goto loc_82A31C64;
	case 47:
		goto loc_82A32138;
	case 48:
		goto loc_82A31D84;
	case 49:
		goto loc_82A31D84;
	case 50:
		goto loc_82A31D84;
	case 51:
		goto loc_82A31D84;
	case 52:
		goto loc_82A31D84;
	case 53:
		goto loc_82A31D84;
	case 54:
		goto loc_82A31D84;
	case 55:
		goto loc_82A31D84;
	case 56:
		goto loc_82A31D84;
	case 57:
		goto loc_82A31D84;
	case 58:
		goto loc_82A31D84;
	case 59:
		goto loc_82A31D84;
	case 60:
		goto loc_82A31D84;
	case 61:
		goto loc_82A31F30;
	case 62:
		goto loc_82A31E8C;
	case 63:
		goto loc_82A31FD4;
	case 64:
		goto loc_82A31D84;
	case 65:
		goto loc_82A31D84;
	case 66:
		goto loc_82A31D84;
	case 67:
		goto loc_82A31D84;
	case 68:
		goto loc_82A31D84;
	case 69:
		goto loc_82A31D84;
	case 70:
		goto loc_82A31D84;
	case 71:
		goto loc_82A31D84;
	case 72:
		goto loc_82A31D84;
	case 73:
		goto loc_82A31D84;
	case 74:
		goto loc_82A31D84;
	case 75:
		goto loc_82A31D84;
	case 76:
		goto loc_82A31D84;
	case 77:
		goto loc_82A31D84;
	case 78:
		goto loc_82A31D84;
	case 79:
		goto loc_82A31D84;
	case 80:
		goto loc_82A31D84;
	case 81:
		goto loc_82A31D84;
	case 82:
		goto loc_82A31D84;
	case 83:
		goto loc_82A31D84;
	case 84:
		goto loc_82A31D84;
	case 85:
		goto loc_82A31D84;
	case 86:
		goto loc_82A31D84;
	case 87:
		goto loc_82A31D84;
	case 88:
		goto loc_82A31D84;
	case 89:
		goto loc_82A31D84;
	case 90:
		goto loc_82A31D84;
	case 91:
		goto loc_82A31D84;
	case 92:
		goto loc_82A31DE0;
	case 93:
		goto loc_82A31D84;
	case 94:
		goto loc_82A31D84;
	case 95:
		goto loc_82A31D84;
	case 96:
		goto loc_82A31D84;
	case 97:
		goto loc_82A31D84;
	case 98:
		goto loc_82A31D84;
	case 99:
		goto loc_82A31D84;
	case 100:
		goto loc_82A31D84;
	case 101:
		goto loc_82A31D84;
	case 102:
		goto loc_82A31D84;
	case 103:
		goto loc_82A31D84;
	case 104:
		goto loc_82A31D84;
	case 105:
		goto loc_82A31D84;
	case 106:
		goto loc_82A31D84;
	case 107:
		goto loc_82A31D84;
	case 108:
		goto loc_82A31D84;
	case 109:
		goto loc_82A31D84;
	case 110:
		goto loc_82A31D84;
	case 111:
		goto loc_82A31D84;
	case 112:
		goto loc_82A31D84;
	case 113:
		goto loc_82A31D84;
	case 114:
		goto loc_82A31D84;
	case 115:
		goto loc_82A31D84;
	case 116:
		goto loc_82A31D84;
	case 117:
		goto loc_82A31D84;
	case 118:
		goto loc_82A31D84;
	case 119:
		goto loc_82A31D84;
	case 120:
		goto loc_82A31D84;
	case 121:
		goto loc_82A31D84;
	case 122:
		goto loc_82A31D84;
	case 123:
		goto loc_82A31D84;
	case 124:
		goto loc_82A31D84;
	case 125:
		goto loc_82A31D84;
	case 126:
		goto loc_82A31D84;
	case 127:
		goto loc_82A32078;
	default:
		__builtin_unreachable();
	}
	// lwz r21,8732(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8732);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7256(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7256);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7256(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7256);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,8476(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8476);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,8476(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8476);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7268(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7268);
	// lwz r21,8504(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8504);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7984(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7984);
	// lwz r21,7820(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7820);
	// lwz r21,8148(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8148);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7648(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7648);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,7556(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7556);
	// lwz r21,8312(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8312);
loc_82A31C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a307f8
	ctx.lr = 0x82A31C60;
	sub_82A307F8(ctx, base);
	// b 0x82a31a30
	goto loc_82A31A30;
loc_82A31C64:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31c94
	if (ctx.cr6.eq) goto loc_82A31C94;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31c9c
	goto loc_82A31C9C;
loc_82A31C94:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31C9C;
	sub_82BCD8A8(ctx, base);
loc_82A31C9C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// bne cr6,0x82a31dd4
	if (!ctx.cr6.eq) goto loc_82A31DD4;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31cd8
	if (ctx.cr6.eq) goto loc_82A31CD8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31ce0
	goto loc_82A31CE0;
loc_82A31CD8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31CE0;
	sub_82BCD8A8(ctx, base);
loc_82A31CE0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// bne cr6,0x82a31d18
	if (!ctx.cr6.eq) goto loc_82A31D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30d48
	ctx.lr = 0x82A31CF4;
	sub_82A30D48(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// blt cr6,0x82a31d18
	if (ctx.cr6.lt) goto loc_82A31D18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30e20
	ctx.lr = 0x82A31D14;
	sub_82A30E20(ctx, base);
	// b 0x82a31a28
	goto loc_82A31A28;
loc_82A31D18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82a31a30
	if (ctx.cr6.eq) goto loc_82A31A30;
loc_82A31D24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82a31a30
	if (ctx.cr6.eq) goto loc_82A31A30;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a31a30
	if (ctx.cr6.eq) goto loc_82A31A30;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31d68
	if (ctx.cr6.eq) goto loc_82A31D68;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31d70
	goto loc_82A31D70;
loc_82A31D68:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31D70;
	sub_82BCD8A8(ctx, base);
loc_82A31D70:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82a31d24
	if (!ctx.cr6.eq) goto loc_82A31D24;
	// b 0x82a31a30
	goto loc_82A31A30;
loc_82A31D84:
	// bl 0x82ca6b50
	ctx.lr = 0x82A31D88;
	sub_82CA6B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a32228
	if (ctx.cr6.eq) goto loc_82A32228;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31dc4
	if (ctx.cr6.eq) goto loc_82A31DC4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a31a30
	goto loc_82A31A30;
loc_82A31DC4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31DCC;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82a31a30
	goto loc_82A31A30;
loc_82A31DD4:
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30d48
	ctx.lr = 0x82A31DE8;
	sub_82A30D48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82a31e0c
	if (ctx.cr6.lt) goto loc_82A31E0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30e20
	ctx.lr = 0x82A31E00;
	sub_82A30E20(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31E0C:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82a31e20
	if (!ctx.cr6.eq) goto loc_82A31E20;
	// li r3,91
	ctx.r3.s64 = 91;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31E20:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A31E34;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13080
	ctx.r7.s64 = ctx.r11.s64 + 13080;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A31E54;
	sub_82A2ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30568
	ctx.lr = 0x82A31E64;
	sub_82A30568(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82a2ed28
	ctx.lr = 0x82A31E80;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A31E8C;
	sub_821E51D0(ctx, base);
loc_82A31E8C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31ebc
	if (ctx.cr6.eq) goto loc_82A31EBC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31ec4
	goto loc_82A31EC4;
loc_82A31EBC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31EC4;
	sub_82BCD8A8(ctx, base);
loc_82A31EC4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82a31edc
	if (ctx.cr6.eq) goto loc_82A31EDC;
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31EDC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31f18
	if (ctx.cr6.eq) goto loc_82A31F18;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31F18:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31F20;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31F30:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31f60
	if (ctx.cr6.eq) goto loc_82A31F60;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a31f68
	goto loc_82A31F68;
loc_82A31F60:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31F68;
	sub_82BCD8A8(ctx, base);
loc_82A31F68:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82a31f80
	if (ctx.cr6.eq) goto loc_82A31F80;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31F80:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a31fbc
	if (ctx.cr6.eq) goto loc_82A31FBC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31FBC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A31FC4;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A31FD4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a32004
	if (ctx.cr6.eq) goto loc_82A32004;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a3200c
	goto loc_82A3200C;
loc_82A32004:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A3200C;
	sub_82BCD8A8(ctx, base);
loc_82A3200C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82a32024
	if (ctx.cr6.eq) goto loc_82A32024;
	// li r3,62
	ctx.r3.s64 = 62;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32024:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a32060
	if (ctx.cr6.eq) goto loc_82A32060;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32060:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A32068;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32078:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a320a8
	if (ctx.cr6.eq) goto loc_82A320A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a320b0
	goto loc_82A320B0;
loc_82A320A8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A320B0;
	sub_82BCD8A8(ctx, base);
loc_82A320B0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82a320c8
	if (ctx.cr6.eq) goto loc_82A320C8;
	// li r3,126
	ctx.r3.s64 = 126;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A320C8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a32104
	if (ctx.cr6.eq) goto loc_82A32104;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32104:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A3210C;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A3211C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a312b0
	ctx.lr = 0x82A3212C;
	sub_82A312B0(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A32144;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a32174
	if (ctx.cr6.eq) goto loc_82A32174;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a32180
	goto loc_82A32180;
loc_82A32174:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A3217C;
	sub_82BCD8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82A32180:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-6348
	ctx.r30.s64 = ctx.r11.s64 + -6348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82A32194;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a321e8
	if (ctx.cr6.eq) goto loc_82A321E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a309e0
	ctx.lr = 0x82A321A4;
	sub_82A309E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a321e8
	if (ctx.cr6.eq) goto loc_82A321E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca3980
	ctx.lr = 0x82A321B8;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a321dc
	if (ctx.cr6.eq) goto loc_82A321DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a309e0
	ctx.lr = 0x82A321C8;
	sub_82A309E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a321dc
	if (ctx.cr6.eq) goto loc_82A321DC;
	// li r3,279
	ctx.r3.s64 = 279;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A321DC:
	// li r3,278
	ctx.r3.s64 = 278;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A321E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca6b10
	ctx.lr = 0x82A321F0;
	sub_82CA6B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a32204
	if (!ctx.cr6.eq) goto loc_82A32204;
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32204:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30b98
	ctx.lr = 0x82A32210;
	sub_82A30B98(ctx, base);
	// li r3,284
	ctx.r3.s64 = 284;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A3221C:
	// li r3,287
	ctx.r3.s64 = 287;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32228:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca6b10
	ctx.lr = 0x82A32230;
	sub_82CA6B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a32204
	if (!ctx.cr6.eq) goto loc_82A32204;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca6ab0
	ctx.lr = 0x82A32240;
	sub_82CA6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a322a8
	if (!ctx.cr6.eq) goto loc_82A322A8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 95, ctx.xer);
	// beq cr6,0x82a322a8
	if (ctx.cr6.eq) goto loc_82A322A8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a32290
	if (ctx.cr6.eq) goto loc_82A32290;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32290:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A32298;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A322A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a30568
	ctx.lr = 0x82A322B4;
	sub_82A30568(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a322e4
	if (ctx.cr6.eq) goto loc_82A322E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a322ec
	goto loc_82A322EC;
loc_82A322E4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82A322EC;
	sub_82BCD8A8(ctx, base);
loc_82A322EC:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca6b90
	ctx.lr = 0x82A322F4;
	sub_82CA6B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a322a8
	if (!ctx.cr6.eq) goto loc_82A322A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82a322a8
	if (ctx.cr6.eq) goto loc_82A322A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a30750
	ctx.lr = 0x82A3231C;
	sub_82A30750(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a32334
	if (ctx.cr6.eq) goto loc_82A32334;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32334:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,285
	ctx.r3.s64 = 285;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32344"))) PPC_WEAK_FUNC(sub_82A32344);
PPC_FUNC_IMPL(__imp__sub_82A32344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32348"))) PPC_WEAK_FUNC(sub_82A32348);
PPC_FUNC_IMPL(__imp__sub_82A32348) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,287
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 287, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a3239c
	if (ctx.cr6.eq) goto loc_82A3239C;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,287
	ctx.r10.s64 = 287;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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
loc_82A3239C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31a10
	ctx.lr = 0x82A323A8;
	sub_82A31A10(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A323C0"))) PPC_WEAK_FUNC(sub_82A323C0);
PPC_FUNC_IMPL(__imp__sub_82A323C0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82a3240c
	if (!ctx.cr6.eq) goto loc_82A3240C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r10,13420
	ctx.r4.s64 = ctx.r10.s64 + 13420;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82a2ed28
	ctx.lr = 0x82A32408;
	sub_82A2ED28(ctx, base);
	// b 0x82a3241c
	goto loc_82A3241C;
loc_82A3240C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r10,13456
	ctx.r4.s64 = ctx.r10.s64 + 13456;
	// bl 0x82a2ed28
	ctx.lr = 0x82A3241C;
	sub_82A2ED28(ctx, base);
loc_82A3241C:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A32438;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A32454;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A32460;
	sub_821E51D0(ctx, base);
}

__attribute__((alias("__imp__sub_82A32460"))) PPC_WEAK_FUNC(sub_82A32460);
PPC_FUNC_IMPL(__imp__sub_82A32460) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82a324a8
	if (ctx.cr6.eq) goto loc_82A324A8;
	// bl 0x82a30618
	ctx.lr = 0x82A32484;
	sub_82A30618(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,13404
	ctx.r4.s64 = ctx.r11.s64 + 13404;
	// bl 0x82a2ed28
	ctx.lr = 0x82A32498;
	sub_82A2ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A324A8;
	sub_82A306A0(ctx, base);
loc_82A324A8:
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

__attribute__((alias("__imp__sub_82A324BC"))) PPC_WEAK_FUNC(sub_82A324BC);
PPC_FUNC_IMPL(__imp__sub_82A324BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A324C0"))) PPC_WEAK_FUNC(sub_82A324C0);
PPC_FUNC_IMPL(__imp__sub_82A324C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A324C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82a324f0
	if (!ctx.cr6.eq) goto loc_82A324F0;
	// bl 0x82a32348
	ctx.lr = 0x82A324E8;
	sub_82A32348(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A324F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a32528
	if (!ctx.cr6.eq) goto loc_82A32528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a30618
	ctx.lr = 0x82A32504;
	sub_82A30618(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,13404
	ctx.r4.s64 = ctx.r11.s64 + 13404;
	// bl 0x82a2ed28
	ctx.lr = 0x82A32518;
	sub_82A2ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A32528;
	sub_82A306A0(ctx, base);
loc_82A32528:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a30618
	ctx.lr = 0x82A32530;
	sub_82A30618(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30618
	ctx.lr = 0x82A32540;
	sub_82A30618(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,13496
	ctx.r4.s64 = ctx.r11.s64 + 13496;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82a2ed28
	ctx.lr = 0x82A3255C;
	sub_82A2ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A3256C;
	sub_82A306A0(ctx, base);
}

__attribute__((alias("__imp__sub_82A3256C"))) PPC_WEAK_FUNC(sub_82A3256C);
PPC_FUNC_IMPL(__imp__sub_82A3256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32570"))) PPC_WEAK_FUNC(sub_82A32570);
PPC_FUNC_IMPL(__imp__sub_82A32570) {
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
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a37560
	ctx.lr = 0x82A325A4;
	sub_82A37560(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A325D0"))) PPC_WEAK_FUNC(sub_82A325D0);
PPC_FUNC_IMPL(__imp__sub_82A325D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A325D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r28,28(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82a3262c
	if (!ctx.cr6.gt) goto loc_82A3262C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r7,32767
	ctx.r7.s64 = 32767;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r8,r11,13540
	ctx.r8.s64 = ctx.r11.s64 + 13540;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a2c600
	ctx.lr = 0x82A32628;
	sub_82A2C600(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_82A3262C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a32664
	if (!ctx.cr6.lt) goto loc_82A32664;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A32648:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a32648
	if (ctx.cr6.lt) goto loc_82A32648;
loc_82A32664:
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r26.u32);
	// lbz r6,5(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a326d4
	if (ctx.cr6.eq) goto loc_82A326D4;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a326d4
	if (ctx.cr6.eq) goto loc_82A326D4;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82a326c0
	if (!ctx.cr6.eq) goto loc_82A326C0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A326BC;
	sub_82A2C778(ctx, base);
	// b 0x82a326d4
	goto loc_82A326D4;
loc_82A326C0:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
loc_82A326D4:
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,48(r28)
	PPC_STORE_U16(ctx.r28.u32 + 48, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A326EC"))) PPC_WEAK_FUNC(sub_82A326EC);
PPC_FUNC_IMPL(__imp__sub_82A326EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A326F0"))) PPC_WEAK_FUNC(sub_82A326F0);
PPC_FUNC_IMPL(__imp__sub_82A326F0) {
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
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// ble cr6,0x82a32734
	if (!ctx.cr6.gt) goto loc_82A32734;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r5,r11,13568
	ctx.r5.s64 = ctx.r11.s64 + 13568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a323c0
	ctx.lr = 0x82A32734;
	sub_82A323C0(ctx, base);
loc_82A32734:
	// bl 0x82a325d0
	ctx.lr = 0x82A32738;
	sub_82A325D0(ctx, base);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_82A32764"))) PPC_WEAK_FUNC(sub_82A32764);
PPC_FUNC_IMPL(__imp__sub_82A32764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32768"))) PPC_WEAK_FUNC(sub_82A32768);
PPC_FUNC_IMPL(__imp__sub_82A32768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A32780:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bne 0x82a32780
	if (!ctx.cr0.eq) goto loc_82A32780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A327C0"))) PPC_WEAK_FUNC(sub_82A327C0);
PPC_FUNC_IMPL(__imp__sub_82A327C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A327C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a32830
	if (!ctx.cr6.gt) goto loc_82A32830;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
loc_82A32800:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82a3281c
	if (!ctx.cr6.eq) goto loc_82A3281C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82a32944
	if (ctx.cr6.eq) goto loc_82A32944;
loc_82A3281C:
	// lbz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a32800
	if (ctx.cr6.lt) goto loc_82A32800;
loc_82A32830:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x82a32850
	if (!ctx.cr6.gt) goto loc_82A32850;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r11,13584
	ctx.r5.s64 = ctx.r11.s64 + 13584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a323c0
	ctx.lr = 0x82A32850;
	sub_82A323C0(ctx, base);
loc_82A32850:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82a32880
	if (!ctx.cr6.gt) goto loc_82A32880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,3224
	ctx.r8.s64 = ctx.r11.s64 + 3224;
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a2c600
	ctx.lr = 0x82A3287C;
	sub_82A2C600(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82A32880:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a328ac
	if (!ctx.cr6.lt) goto loc_82A328AC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A32890:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a32890
	if (ctx.cr6.lt) goto loc_82A32890;
loc_82A328AC:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u32);
	// lbz r8,5(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a32910
	if (ctx.cr6.eq) goto loc_82A32910;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a32910
	if (ctx.cr6.eq) goto loc_82A32910;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82a328fc
	if (!ctx.cr6.eq) goto loc_82A328FC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a2c778
	ctx.lr = 0x82A328F8;
	sub_82A2C778(ctx, base);
	// b 0x82a32910
	goto loc_82A32910;
loc_82A328FC:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
loc_82A32910:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,51(r8)
	PPC_STORE_U8(ctx.r8.u32 + 51, ctx.r10.u8);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r6,r11,26
	ctx.r6.s64 = ctx.r11.s64 + 26;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r7,r5,r28
	PPC_STORE_U8(ctx.r5.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_82A32944:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3294C"))) PPC_WEAK_FUNC(sub_82A3294C);
PPC_FUNC_IMPL(__imp__sub_82A3294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32950"))) PPC_WEAK_FUNC(sub_82A32950);
PPC_FUNC_IMPL(__imp__sub_82A32950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A32958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a32998
	if (!ctx.cr6.eq) goto loc_82A32998;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32998:
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addic. r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82a329e0
	if (ctx.cr0.lt) goto loc_82A329E0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r8,86
	ctx.r7.s64 = ctx.r8.s64 + 86;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82A329B8:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82a32a04
	if (ctx.cr6.eq) goto loc_82A32A04;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x82a329b8
	if (!ctx.cr0.lt) goto loc_82A329B8;
loc_82A329E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a32950
	ctx.lr = 0x82A329F4;
	sub_82A32950(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82a32a70
	if (!ctx.cr6.eq) goto loc_82A32A70;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32A04:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82a329e0
	if (ctx.cr6.lt) goto loc_82A329E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82a32a64
	if (!ctx.cr6.eq) goto loc_82A32A64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a32a64
	if (ctx.cr6.eq) goto loc_82A32A64;
loc_82A32A38:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a32a5c
	if (!ctx.cr6.gt) goto loc_82A32A5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a32a38
	if (!ctx.cr6.eq) goto loc_82A32A38;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32A5C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
loc_82A32A64:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82A32A70:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a327c0
	ctx.lr = 0x82A32A80;
	sub_82A327C0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32A98"))) PPC_WEAK_FUNC(sub_82A32A98);
PPC_FUNC_IMPL(__imp__sub_82A32A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A32AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a32460
	ctx.lr = 0x82A32AB4;
	sub_82A32460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82a32348
	ctx.lr = 0x82A32AC0;
	sub_82A32348(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,28(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a32950
	ctx.lr = 0x82A32AD8;
	sub_82A32950(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82a32b00
	if (!ctx.cr6.eq) goto loc_82A32B00;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37560
	ctx.lr = 0x82A32AFC;
	sub_82A37560(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82A32B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32B08"))) PPC_WEAK_FUNC(sub_82A32B08);
PPC_FUNC_IMPL(__imp__sub_82A32B08) {
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
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r30,r5,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82a32ba8
	if (ctx.cr6.eq) goto loc_82A32BA8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a32ba8
	if (ctx.cr6.eq) goto loc_82A32BA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a32b4c
	if (ctx.cr6.eq) goto loc_82A32B4C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A32B4C;
	sub_82A37C20(ctx, base);
loc_82A32B4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a32c14
	if (!ctx.cr6.gt) goto loc_82A32C14;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a32b8c
	if (!ctx.cr6.gt) goto loc_82A32B8C;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a32b88
	if (ctx.cr6.lt) goto loc_82A32B88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A32B88;
	sub_82A306A0(ctx, base);
loc_82A32B88:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A32B8C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82a370d0
	ctx.lr = 0x82A32BA4;
	sub_82A370D0(ctx, base);
	// b 0x82a32c14
	goto loc_82A32C14;
loc_82A32BA8:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82a32bb4
	if (!ctx.cr0.lt) goto loc_82A32BB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A32BB4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a376f0
	ctx.lr = 0x82A32BC4;
	sub_82A376F0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x82a32c14
	if (!ctx.cr6.gt) goto loc_82A32C14;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,75(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a32c08
	if (!ctx.cr6.gt) goto loc_82A32C08;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a32c04
	if (ctx.cr6.lt) goto loc_82A32C04;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A32C04;
	sub_82A306A0(ctx, base);
loc_82A32C04:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A32C08:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A32C14:
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

__attribute__((alias("__imp__sub_82A32C2C"))) PPC_WEAK_FUNC(sub_82A32C2C);
PPC_FUNC_IMPL(__imp__sub_82A32C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32C30"))) PPC_WEAK_FUNC(sub_82A32C30);
PPC_FUNC_IMPL(__imp__sub_82A32C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r10.u16);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 52);
	// cmplwi cr6,r7,200
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 200, ctx.xer);
	// ble cr6,0x82a32ca4
	if (!ctx.cr6.gt) goto loc_82A32CA4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82A32C78;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13596
	ctx.r7.s64 = ctx.r11.s64 + 13596;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2ed28
	ctx.lr = 0x82A32C98;
	sub_82A2ED28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821e51d0
	ctx.lr = 0x82A32CA4;
	sub_821E51D0(ctx, base);
loc_82A32CA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32CB8"))) PPC_WEAK_FUNC(sub_82A32CB8);
PPC_FUNC_IMPL(__imp__sub_82A32CB8) {
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
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82a32d3c
	if (!ctx.cr6.gt) goto loc_82A32D3C;
loc_82A32CF4:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// addi r5,r10,86
	ctx.r5.s64 = ctx.r10.s64 + 86;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a32cf4
	if (ctx.cr6.gt) goto loc_82A32CF4;
loc_82A32D3C:
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a32d64
	if (ctx.cr6.eq) goto loc_82A32D64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,35
	ctx.r4.s64 = 35;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A32D64;
	sub_82A38CC8(ctx, base);
loc_82A32D64:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A32D84;
	sub_82A374B8(ctx, base);
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

__attribute__((alias("__imp__sub_82A32D9C"))) PPC_WEAK_FUNC(sub_82A32D9C);
PPC_FUNC_IMPL(__imp__sub_82A32D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32DA0"))) PPC_WEAK_FUNC(sub_82A32DA0);
PPC_FUNC_IMPL(__imp__sub_82A32DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82A32DA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r31,28(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r27,r28,52
	ctx.r27.s64 = ctx.r28.s64 + 52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82a32e00
	if (!ctx.cr6.gt) goto loc_82A32E00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,32(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r8,r11,13632
	ctx.r8.s64 = ctx.r11.s64 + 13632;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a2c600
	ctx.lr = 0x82A32DFC;
	sub_82A2C600(ctx, base);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
loc_82A32E00:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a32e30
	if (!ctx.cr6.lt) goto loc_82A32E30;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A32E14:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a32e14
	if (ctx.cr6.lt) goto loc_82A32E14;
loc_82A32E30:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a32ea4
	if (ctx.cr6.eq) goto loc_82A32EA4;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a32ea4
	if (ctx.cr6.eq) goto loc_82A32EA4;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82a32e90
	if (!ctx.cr6.eq) goto loc_82A32E90;
	// bl 0x82a2c778
	ctx.lr = 0x82A32E8C;
	sub_82A2C778(ctx, base);
	// b 0x82a32ea4
	goto loc_82A32EA4;
loc_82A32E90:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r9.u8);
loc_82A32EA4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r4,r11,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A32EC4;
	sub_82A38CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 72);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a32f38
	if (ctx.cr6.eq) goto loc_82A32F38;
	// addi r30,r26,52
	ctx.r30.s64 = ctx.r26.s64 + 52;
loc_82A32EF0:
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rotlwi r7,r10,23
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 23);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r6,29,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x4;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// xori r11,r4,4
	ctx.r11.u64 = ctx.r4.u64 ^ 4;
	// or r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 | ctx.r7.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A32F20;
	sub_82A38CC8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a32ef0
	if (ctx.cr6.lt) goto loc_82A32EF0;
loc_82A32F38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32F40"))) PPC_WEAK_FUNC(sub_82A32F40);
PPC_FUNC_IMPL(__imp__sub_82A32F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A32F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ddc0
	ctx.lr = 0x82A32F60;
	sub_82A2DDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// sth r11,48(r28)
	PPC_STORE_U16(ctx.r28.u32 + 48, ctx.r11.u16);
	// stb r11,50(r28)
	PPC_STORE_U8(ctx.r28.u32 + 50, ctx.r11.u8);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// stb r8,75(r30)
	PPC_STORE_U8(ctx.r30.u32 + 75, ctx.r8.u8);
	// bl 0x822277c0
	ctx.lr = 0x82A32FC8;
	sub_822277C0(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82a3300c
	if (ctx.cr6.gt) goto loc_82A3300C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a33008
	if (!ctx.cr6.lt) goto loc_82A33008;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A33008:
	// bl 0x82a2e140
	ctx.lr = 0x82A3300C;
	sub_82A2E140(ctx, base);
loc_82A3300C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x82a33054
	if (ctx.cr6.gt) goto loc_82A33054;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a33050
	if (!ctx.cr6.lt) goto loc_82A33050;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A33050:
	// bl 0x82a2e140
	ctx.lr = 0x82A33054;
	sub_82A2E140(ctx, base);
loc_82A33054:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33068"))) PPC_WEAK_FUNC(sub_82A33068);
PPC_FUNC_IMPL(__imp__sub_82A33068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A33070;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r29,32(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a330d8
	if (ctx.cr6.eq) goto loc_82A330D8;
loc_82A33090:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// addi r7,r11,86
	ctx.r7.s64 = ctx.r11.s64 + 86;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lbz r3,50(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a33090
	if (!ctx.cr6.eq) goto loc_82A33090;
loc_82A330D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A330F0;
	sub_82A38CC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,11760
	ctx.r27.s64 = ctx.r11.s64 + 11760;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82a3312c
	if (ctx.cr6.gt) goto loc_82A3312C;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A33128;
	sub_82227940(ctx, base);
	// b 0x82a33138
	goto loc_82A33138;
loc_82A3312C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A33134;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A33138:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82a33174
	if (ctx.cr6.gt) goto loc_82A33174;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A33170;
	sub_82227940(ctx, base);
	// b 0x82a33180
	goto loc_82A33180;
loc_82A33174:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A3317C;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A33180:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a331c0
	if (ctx.cr6.gt) goto loc_82A331C0;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82227940
	ctx.lr = 0x82A331BC;
	sub_82227940(ctx, base);
	// b 0x82a331cc
	goto loc_82A331CC;
loc_82A331C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A331C8;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A331CC:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82a33204
	if (ctx.cr6.gt) goto loc_82A33204;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A33200;
	sub_82227940(ctx, base);
	// b 0x82a33210
	goto loc_82A33210;
loc_82A33204:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A3320C;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A33210:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lhz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a33264
	if (ctx.cr6.gt) goto loc_82A33264;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A33260;
	sub_82227940(ctx, base);
	// b 0x82a33270
	goto loc_82A33270;
loc_82A33264:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A3326C;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A33270:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// lhz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
	// bgt cr6,0x82a332ac
	if (ctx.cr6.gt) goto loc_82A332AC;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82227940
	ctx.lr = 0x82A332A8;
	sub_82227940(ctx, base);
	// b 0x82a332b8
	goto loc_82A332B8;
loc_82A332AC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2c520
	ctx.lr = 0x82A332B4;
	sub_82A2C520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A332B8:
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// beq cr6,0x82a332ec
	if (ctx.cr6.eq) goto loc_82A332EC;
	// cmpwi cr6,r11,286
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 286, ctx.xer);
	// bne cr6,0x82a33300
	if (!ctx.cr6.eq) goto loc_82A33300;
loc_82A332EC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a30750
	ctx.lr = 0x82A33300;
	sub_82A30750(ctx, base);
loc_82A33300:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33308"))) PPC_WEAK_FUNC(sub_82A33308);
PPC_FUNC_IMPL(__imp__sub_82A33308) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A3332C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3332c
	if (!ctx.cr6.eq) goto loc_82A3332C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82227ea0
	ctx.lr = 0x82A33354;
	sub_82227EA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a308f0
	ctx.lr = 0x82A33368;
	sub_82A308F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a32f40
	ctx.lr = 0x82A33374;
	sub_82A32F40(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,74(r9)
	PPC_STORE_U8(ctx.r9.u32 + 74, ctx.r10.u8);
	// bl 0x82a32348
	ctx.lr = 0x82A33388;
	sub_82A32348(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a36300
	ctx.lr = 0x82A33390;
	sub_82A36300(ctx, base);
	// li r4,287
	ctx.r4.s64 = 287;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a32460
	ctx.lr = 0x82A3339C;
	sub_82A32460(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a33068
	ctx.lr = 0x82A333A4;
	sub_82A33068(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
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

__attribute__((alias("__imp__sub_82A333C0"))) PPC_WEAK_FUNC(sub_82A333C0);
PPC_FUNC_IMPL(__imp__sub_82A333C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A333C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A333E0;
	sub_82A37CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A333E8;
	sub_82A32348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x82a32460
	ctx.lr = 0x82A333F4;
	sub_82A32460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a32348
	ctx.lr = 0x82A33400;
	sub_82A32348(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32570
	ctx.lr = 0x82A33410;
	sub_82A32570(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A3341C;
	sub_82A37D68(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33430"))) PPC_WEAK_FUNC(sub_82A33430);
PPC_FUNC_IMPL(__imp__sub_82A33430) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33450;
	sub_82A32348(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A33460;
	sub_82A34B00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a33480
	if (ctx.cr6.eq) goto loc_82A33480;
	// bl 0x82a37ce0
	ctx.lr = 0x82A3347C;
	sub_82A37CE0(ctx, base);
	// b 0x82a33484
	goto loc_82A33484;
loc_82A33480:
	// bl 0x82a377b8
	ctx.lr = 0x82A33484;
	sub_82A377B8(ctx, base);
loc_82A33484:
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32460
	ctx.lr = 0x82A33490;
	sub_82A32460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33498;
	sub_82A32348(ctx, base);
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

__attribute__((alias("__imp__sub_82A334B0"))) PPC_WEAK_FUNC(sub_82A334B0);
PPC_FUNC_IMPL(__imp__sub_82A334B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A334B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bne cr6,0x82a33528
	if (!ctx.cr6.eq) goto loc_82A33528;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// ori r4,r11,65533
	ctx.r4.u64 = ctx.r11.u64 | 65533;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82a334fc
	if (!ctx.cr6.gt) goto loc_82A334FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13656
	ctx.r5.s64 = ctx.r11.s64 + 13656;
	// bl 0x82a323c0
	ctx.lr = 0x82A334FC;
	sub_82A323C0(ctx, base);
loc_82A334FC:
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32460
	ctx.lr = 0x82A33508;
	sub_82A32460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a32348
	ctx.lr = 0x82A33514;
	sub_82A32348(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32570
	ctx.lr = 0x82A33524;
	sub_82A32570(ctx, base);
	// b 0x82a33534
	goto loc_82A33534;
loc_82A33528:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a33430
	ctx.lr = 0x82A33534;
	sub_82A33430(ctx, base);
loc_82A33534:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// bl 0x82a32460
	ctx.lr = 0x82A3354C;
	sub_82A32460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33554;
	sub_82A32348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A33560;
	sub_82A37D68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A33574;
	sub_82A34B00(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A33580;
	sub_82A37D68(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r9,r27,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,9
	ctx.r4.s64 = 9;
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r4,r10,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x82a38cc8
	ctx.lr = 0x82A335B0;
	sub_82A38CC8(ctx, base);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A335BC"))) PPC_WEAK_FUNC(sub_82A335BC);
PPC_FUNC_IMPL(__imp__sub_82A335BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A335C0"))) PPC_WEAK_FUNC(sub_82A335C0);
PPC_FUNC_IMPL(__imp__sub_82A335C0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A335E4;
	sub_82A34B00(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r4,r10,65533
	ctx.r4.u64 = ctx.r10.u64 | 65533;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82a33608
	if (!ctx.cr6.gt) goto loc_82A33608;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r5,r11,13656
	ctx.r5.s64 = ctx.r11.s64 + 13656;
	// bl 0x82a323c0
	ctx.lr = 0x82A33608;
	sub_82A323C0(ctx, base);
loc_82A33608:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A33634"))) PPC_WEAK_FUNC(sub_82A33634);
PPC_FUNC_IMPL(__imp__sub_82A33634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33638"))) PPC_WEAK_FUNC(sub_82A33638);
PPC_FUNC_IMPL(__imp__sub_82A33638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A33640;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A33668;
	sub_82A38CC8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a37c20
	ctx.lr = 0x82A336B4;
	sub_82A37C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x82a32460
	ctx.lr = 0x82A336C0;
	sub_82A32460(ctx, base);
loc_82A336C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A336C8;
	sub_82A32348(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82a3377c
	if (ctx.cr6.eq) goto loc_82A3377C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a33718
	if (ctx.cr6.eq) goto loc_82A33718;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A336EC;
	sub_82A37C20(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x82a33718
	if (!ctx.cr6.eq) goto loc_82A33718;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db0
	ctx.lr = 0x82A33714;
	sub_82A38DB0(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_82A33718:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82a33760
	if (ctx.cr6.eq) goto loc_82A33760;
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// beq cr6,0x82a3373c
	if (ctx.cr6.eq) goto loc_82A3373C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a335c0
	ctx.lr = 0x82A33738;
	sub_82A335C0(ctx, base);
	// b 0x82a33768
	goto loc_82A33768;
loc_82A3373C:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x82a31a10
	ctx.lr = 0x82A33744;
	sub_82A31A10(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a33764
	if (ctx.cr6.eq) goto loc_82A33764;
	// bl 0x82a335c0
	ctx.lr = 0x82A3375C;
	sub_82A335C0(ctx, base);
	// b 0x82a33768
	goto loc_82A33768;
loc_82A33760:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A33764:
	// bl 0x82a334b0
	ctx.lr = 0x82A33768;
	sub_82A334B0(ctx, base);
loc_82A33768:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82a336c0
	if (ctx.cr6.eq) goto loc_82A336C0;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x82a336c0
	if (ctx.cr6.eq) goto loc_82A336C0;
loc_82A3377C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a324c0
	ctx.lr = 0x82A33790;
	sub_82A324C0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a33814
	if (ctx.cr6.eq) goto loc_82A33814;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82a337e0
	if (ctx.cr6.eq) goto loc_82A337E0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a337e0
	if (ctx.cr6.eq) goto loc_82A337E0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a337c4
	if (ctx.cr6.eq) goto loc_82A337C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A337C4;
	sub_82A37C20(ctx, base);
loc_82A337C4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db0
	ctx.lr = 0x82A337DC;
	sub_82A38DB0(ctx, base);
	// b 0x82a33814
	goto loc_82A33814;
loc_82A337E0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a376f0
	ctx.lr = 0x82A337F0;
	sub_82A376F0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db0
	ctx.lr = 0x82A33808;
	sub_82A38DB0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_82A33814:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82a33838
	if (ctx.cr6.lt) goto loc_82A33838;
loc_82A33824:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82a33824
	if (!ctx.cr6.lt) goto loc_82A33824;
loc_82A33838:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a33848
	if (!ctx.cr6.lt) goto loc_82A33848;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82a33858
	goto loc_82A33858;
loc_82A33848:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82A33858:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r8,23,0,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 23) & 0xFF800000) | (ctx.r7.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82a33894
	if (ctx.cr6.lt) goto loc_82A33894;
loc_82A33880:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82a33880
	if (!ctx.cr6.lt) goto loc_82A33880;
loc_82A33894:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82a338ac
	if (ctx.cr6.lt) goto loc_82A338AC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_82A338AC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwimi r8,r11,14,9,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x7FC000) | (ctx.r8.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A338C8"))) PPC_WEAK_FUNC(sub_82A338C8);
PPC_FUNC_IMPL(__imp__sub_82A338C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A338D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r28,74(r29)
	PPC_STORE_U8(ctx.r29.u32 + 74, ctx.r28.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82a33978
	if (ctx.cr6.eq) goto loc_82A33978;
loc_82A338F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,279
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 279, ctx.xer);
	// beq cr6,0x82a3392c
	if (ctx.cr6.eq) goto loc_82A3392C;
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// bne cr6,0x82a33964
	if (!ctx.cr6.eq) goto loc_82A33964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a32348
	ctx.lr = 0x82A33914;
	sub_82A32348(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a326f0
	ctx.lr = 0x82A33924;
	sub_82A326F0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82a33940
	goto loc_82A33940;
loc_82A3392C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33934;
	sub_82A32348(ctx, base);
	// lbz r11,74(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 74);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,74(r29)
	PPC_STORE_U8(ctx.r29.u32 + 74, ctx.r10.u8);
loc_82A33940:
	// lbz r11,74(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a33978
	if (!ctx.cr6.eq) goto loc_82A33978;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82a33978
	if (!ctx.cr6.eq) goto loc_82A33978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33960;
	sub_82A32348(ctx, base);
	// b 0x82a338f4
	goto loc_82A338F4;
loc_82A33964:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13680
	ctx.r4.s64 = ctx.r11.s64 + 13680;
	// bl 0x82a306a0
	ctx.lr = 0x82A33978;
	sub_82A306A0(ctx, base);
loc_82A33978:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32768
	ctx.lr = 0x82A33984;
	sub_82A32768(ctx, base);
	// lbz r11,74(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 74);
	// lbz r10,50(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r8,73(r29)
	PPC_STORE_U8(ctx.r29.u32 + 73, ctx.r8.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lbz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,75(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82a339d4
	if (!ctx.cr6.gt) goto loc_82A339D4;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a339d0
	if (ctx.cr6.lt) goto loc_82A339D0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A339D0;
	sub_82A306A0(ctx, base);
loc_82A339D0:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A339D4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A339E8"))) PPC_WEAK_FUNC(sub_82A339E8);
PPC_FUNC_IMPL(__imp__sub_82A339E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A339F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82a32f40
	ctx.lr = 0x82A33A0C;
	sub_82A32F40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// bl 0x82a32460
	ctx.lr = 0x82A33A20;
	sub_82A32460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33A28;
	sub_82A32348(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a33a94
	if (ctx.cr6.eq) goto loc_82A33A94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,3488
	ctx.r4.s64 = ctx.r11.s64 + 3488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30750
	ctx.lr = 0x82A33A44;
	sub_82A30750(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a326f0
	ctx.lr = 0x82A33A54;
	sub_82A326F0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r11,50(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r11,50(r10)
	PPC_STORE_U8(ctx.r10.u32 + 50, ctx.r11.u8);
	// addi r6,r11,85
	ctx.r6.s64 = ctx.r11.s64 + 85;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_82A33A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a338c8
	ctx.lr = 0x82A33A9C;
	sub_82A338C8(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32460
	ctx.lr = 0x82A33AA8;
	sub_82A32460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33AB0;
	sub_82A32348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a36300
	ctx.lr = 0x82A33AB8;
	sub_82A36300(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,265
	ctx.r5.s64 = 265;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// bl 0x82a324c0
	ctx.lr = 0x82A33AD8;
	sub_82A324C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33068
	ctx.lr = 0x82A33AE0;
	sub_82A33068(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32da0
	ctx.lr = 0x82A33AF0;
	sub_82A32DA0(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33AF8"))) PPC_WEAK_FUNC(sub_82A33AF8);
PPC_FUNC_IMPL(__imp__sub_82A33AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A33B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82a34b00
	ctx.lr = 0x82A33B18;
	sub_82A34B00(ctx, base);
loc_82A33B18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82a33b50
	if (!ctx.cr6.eq) goto loc_82A33B50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33B2C;
	sub_82A32348(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a37c20
	ctx.lr = 0x82A33B38;
	sub_82A37C20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A33B48;
	sub_82A34B00(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82a33b18
	goto loc_82A33B18;
loc_82A33B50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33B5C"))) PPC_WEAK_FUNC(sub_82A33B5C);
PPC_FUNC_IMPL(__imp__sub_82A33B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33B60"))) PPC_WEAK_FUNC(sub_82A33B60);
PPC_FUNC_IMPL(__imp__sub_82A33B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A33B68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r5,40
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 40, ctx.xer);
	// beq cr6,0x82a33bc8
	if (ctx.cr6.eq) goto loc_82A33BC8;
	// cmpwi cr6,r5,123
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 123, ctx.xer);
	// beq cr6,0x82a33bbc
	if (ctx.cr6.eq) goto loc_82A33BBC;
	// cmpwi cr6,r5,286
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 286, ctx.xer);
	// beq cr6,0x82a33ba4
	if (ctx.cr6.eq) goto loc_82A33BA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,13760
	ctx.r4.s64 = ctx.r11.s64 + 13760;
	// bl 0x82a306a0
	ctx.lr = 0x82A33BA4;
	sub_82A306A0(ctx, base);
loc_82A33BA4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a32570
	ctx.lr = 0x82A33BB0;
	sub_82A32570(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A33BB8;
	sub_82A32348(ctx, base);
	// b 0x82a33c30
	goto loc_82A33C30;
loc_82A33BBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a33638
	ctx.lr = 0x82A33BC4;
	sub_82A33638(ctx, base);
	// b 0x82a33c30
	goto loc_82A33C30;
loc_82A33BC8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a33be4
	if (ctx.cr6.eq) goto loc_82A33BE4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,13708
	ctx.r4.s64 = ctx.r11.s64 + 13708;
	// bl 0x82a306a0
	ctx.lr = 0x82A33BE4;
	sub_82A306A0(ctx, base);
loc_82A33BE4:
	// bl 0x82a32348
	ctx.lr = 0x82A33BE8;
	sub_82A32348(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x82a33c00
	if (!ctx.cr6.eq) goto loc_82A33C00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82a33c1c
	goto loc_82A33C1C;
loc_82A33C00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a33af8
	ctx.lr = 0x82A33C0C;
	sub_82A33AF8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a376f0
	ctx.lr = 0x82A33C1C;
	sub_82A376F0(ctx, base);
loc_82A33C1C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a324c0
	ctx.lr = 0x82A33C30;
	sub_82A324C0(ctx, base);
loc_82A33C30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82a33c70
	if (ctx.cr6.eq) goto loc_82A33C70;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a33c70
	if (ctx.cr6.eq) goto loc_82A33C70;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a33c60
	if (ctx.cr6.eq) goto loc_82A33C60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A33C60;
	sub_82A37C20(ctx, base);
loc_82A33C60:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a33c74
	goto loc_82A33C74;
loc_82A33C70:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A33C74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r30,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r11,23,0,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r4,r7,32796
	ctx.r4.u64 = ctx.r7.u64 | 32796;
	// bl 0x82a38cc8
	ctx.lr = 0x82A33C98;
	sub_82A38CC8(ctx, base);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33CD4"))) PPC_WEAK_FUNC(sub_82A33CD4);
PPC_FUNC_IMPL(__imp__sub_82A33CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33CD8"))) PPC_WEAK_FUNC(sub_82A33CD8);
PPC_FUNC_IMPL(__imp__sub_82A33CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A33CE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,40
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 40, ctx.xer);
	// beq cr6,0x82a33d1c
	if (ctx.cr6.eq) goto loc_82A33D1C;
	// cmpwi cr6,r5,285
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 285, ctx.xer);
	// beq cr6,0x82a33d10
	if (ctx.cr6.eq) goto loc_82A33D10;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,13788
	ctx.r4.s64 = ctx.r11.s64 + 13788;
	// bl 0x82a306a0
	ctx.lr = 0x82A33D10;
	sub_82A306A0(ctx, base);
loc_82A33D10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a32a98
	ctx.lr = 0x82A33D18;
	sub_82A32A98(ctx, base);
	// b 0x82a33d54
	goto loc_82A33D54;
loc_82A33D1C:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a32348
	ctx.lr = 0x82A33D24;
	sub_82A32348(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A33D34;
	sub_82A34B00(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a324c0
	ctx.lr = 0x82A33D48;
	sub_82A324C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a377b8
	ctx.lr = 0x82A33D54;
	sub_82A377B8(ctx, base);
loc_82A33D54:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// bgt cr6,0x82a34228
	if (ctx.cr6.gt) goto loc_82A34228;
	// li r26,9
	ctx.r26.s64 = 9;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82A33D70:
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,15752
	ctx.r12.s64 = ctx.r12.s64 + 15752;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A34200;
	case 1:
		goto loc_82A34228;
	case 2:
		goto loc_82A34228;
	case 3:
		goto loc_82A34228;
	case 4:
		goto loc_82A34228;
	case 5:
		goto loc_82A34228;
	case 6:
		goto loc_82A34164;
	case 7:
		goto loc_82A34228;
	case 8:
		goto loc_82A34228;
	case 9:
		goto loc_82A34228;
	case 10:
		goto loc_82A34228;
	case 11:
		goto loc_82A34228;
	case 12:
		goto loc_82A34228;
	case 13:
		goto loc_82A34228;
	case 14:
		goto loc_82A34228;
	case 15:
		goto loc_82A34228;
	case 16:
		goto loc_82A34228;
	case 17:
		goto loc_82A34228;
	case 18:
		goto loc_82A341A4;
	case 19:
		goto loc_82A34228;
	case 20:
		goto loc_82A34228;
	case 21:
		goto loc_82A34228;
	case 22:
		goto loc_82A34228;
	case 23:
		goto loc_82A34228;
	case 24:
		goto loc_82A34228;
	case 25:
		goto loc_82A34228;
	case 26:
		goto loc_82A34228;
	case 27:
		goto loc_82A34228;
	case 28:
		goto loc_82A34228;
	case 29:
		goto loc_82A34228;
	case 30:
		goto loc_82A34228;
	case 31:
		goto loc_82A34228;
	case 32:
		goto loc_82A34228;
	case 33:
		goto loc_82A34228;
	case 34:
		goto loc_82A34228;
	case 35:
		goto loc_82A34228;
	case 36:
		goto loc_82A34228;
	case 37:
		goto loc_82A34228;
	case 38:
		goto loc_82A34228;
	case 39:
		goto loc_82A34228;
	case 40:
		goto loc_82A34228;
	case 41:
		goto loc_82A34228;
	case 42:
		goto loc_82A34228;
	case 43:
		goto loc_82A34228;
	case 44:
		goto loc_82A34228;
	case 45:
		goto loc_82A34228;
	case 46:
		goto loc_82A34228;
	case 47:
		goto loc_82A34228;
	case 48:
		goto loc_82A34228;
	case 49:
		goto loc_82A34228;
	case 50:
		goto loc_82A34228;
	case 51:
		goto loc_82A34174;
	case 52:
		goto loc_82A34228;
	case 53:
		goto loc_82A34228;
	case 54:
		goto loc_82A34228;
	case 55:
		goto loc_82A34228;
	case 56:
		goto loc_82A34228;
	case 57:
		goto loc_82A34228;
	case 58:
		goto loc_82A34228;
	case 59:
		goto loc_82A34228;
	case 60:
		goto loc_82A34228;
	case 61:
		goto loc_82A34228;
	case 62:
		goto loc_82A34228;
	case 63:
		goto loc_82A34228;
	case 64:
		goto loc_82A34228;
	case 65:
		goto loc_82A34228;
	case 66:
		goto loc_82A34228;
	case 67:
		goto loc_82A34228;
	case 68:
		goto loc_82A34228;
	case 69:
		goto loc_82A34228;
	case 70:
		goto loc_82A34228;
	case 71:
		goto loc_82A34228;
	case 72:
		goto loc_82A34228;
	case 73:
		goto loc_82A34228;
	case 74:
		goto loc_82A34228;
	case 75:
		goto loc_82A34228;
	case 76:
		goto loc_82A34228;
	case 77:
		goto loc_82A34228;
	case 78:
		goto loc_82A34228;
	case 79:
		goto loc_82A34228;
	case 80:
		goto loc_82A34228;
	case 81:
		goto loc_82A34228;
	case 82:
		goto loc_82A34228;
	case 83:
		goto loc_82A34200;
	case 84:
		goto loc_82A34228;
	case 85:
		goto loc_82A34228;
	case 86:
		goto loc_82A34228;
	case 87:
		goto loc_82A34228;
	case 88:
		goto loc_82A34228;
	case 89:
		goto loc_82A34228;
	case 90:
		goto loc_82A34228;
	case 91:
		goto loc_82A34228;
	case 92:
		goto loc_82A34228;
	case 93:
		goto loc_82A34228;
	case 94:
		goto loc_82A34228;
	case 95:
		goto loc_82A34228;
	case 96:
		goto loc_82A34228;
	case 97:
		goto loc_82A34228;
	case 98:
		goto loc_82A34228;
	case 99:
		goto loc_82A34228;
	case 100:
		goto loc_82A34228;
	case 101:
		goto loc_82A34228;
	case 102:
		goto loc_82A34228;
	case 103:
		goto loc_82A34228;
	case 104:
		goto loc_82A34228;
	case 105:
		goto loc_82A34228;
	case 106:
		goto loc_82A34228;
	case 107:
		goto loc_82A34228;
	case 108:
		goto loc_82A34228;
	case 109:
		goto loc_82A34228;
	case 110:
		goto loc_82A34228;
	case 111:
		goto loc_82A34228;
	case 112:
		goto loc_82A34228;
	case 113:
		goto loc_82A34228;
	case 114:
		goto loc_82A34228;
	case 115:
		goto loc_82A34228;
	case 116:
		goto loc_82A34228;
	case 117:
		goto loc_82A34228;
	case 118:
		goto loc_82A34228;
	case 119:
		goto loc_82A34228;
	case 120:
		goto loc_82A34228;
	case 121:
		goto loc_82A34228;
	case 122:
		goto loc_82A34228;
	case 123:
		goto loc_82A34228;
	case 124:
		goto loc_82A34228;
	case 125:
		goto loc_82A34228;
	case 126:
		goto loc_82A34228;
	case 127:
		goto loc_82A34228;
	case 128:
		goto loc_82A34228;
	case 129:
		goto loc_82A34228;
	case 130:
		goto loc_82A34228;
	case 131:
		goto loc_82A34228;
	case 132:
		goto loc_82A34228;
	case 133:
		goto loc_82A34228;
	case 134:
		goto loc_82A34228;
	case 135:
		goto loc_82A34228;
	case 136:
		goto loc_82A34228;
	case 137:
		goto loc_82A34228;
	case 138:
		goto loc_82A34228;
	case 139:
		goto loc_82A34228;
	case 140:
		goto loc_82A34228;
	case 141:
		goto loc_82A34228;
	case 142:
		goto loc_82A34228;
	case 143:
		goto loc_82A34228;
	case 144:
		goto loc_82A34228;
	case 145:
		goto loc_82A34228;
	case 146:
		goto loc_82A34228;
	case 147:
		goto loc_82A34228;
	case 148:
		goto loc_82A34228;
	case 149:
		goto loc_82A34228;
	case 150:
		goto loc_82A34228;
	case 151:
		goto loc_82A34228;
	case 152:
		goto loc_82A34228;
	case 153:
		goto loc_82A34228;
	case 154:
		goto loc_82A34228;
	case 155:
		goto loc_82A34228;
	case 156:
		goto loc_82A34228;
	case 157:
		goto loc_82A34228;
	case 158:
		goto loc_82A34228;
	case 159:
		goto loc_82A34228;
	case 160:
		goto loc_82A34228;
	case 161:
		goto loc_82A34228;
	case 162:
		goto loc_82A34228;
	case 163:
		goto loc_82A34228;
	case 164:
		goto loc_82A34228;
	case 165:
		goto loc_82A34228;
	case 166:
		goto loc_82A34228;
	case 167:
		goto loc_82A34228;
	case 168:
		goto loc_82A34228;
	case 169:
		goto loc_82A34228;
	case 170:
		goto loc_82A34228;
	case 171:
		goto loc_82A34228;
	case 172:
		goto loc_82A34228;
	case 173:
		goto loc_82A34228;
	case 174:
		goto loc_82A34228;
	case 175:
		goto loc_82A34228;
	case 176:
		goto loc_82A34228;
	case 177:
		goto loc_82A34228;
	case 178:
		goto loc_82A34228;
	case 179:
		goto loc_82A34228;
	case 180:
		goto loc_82A34228;
	case 181:
		goto loc_82A34228;
	case 182:
		goto loc_82A34228;
	case 183:
		goto loc_82A34228;
	case 184:
		goto loc_82A34228;
	case 185:
		goto loc_82A34228;
	case 186:
		goto loc_82A34228;
	case 187:
		goto loc_82A34228;
	case 188:
		goto loc_82A34228;
	case 189:
		goto loc_82A34228;
	case 190:
		goto loc_82A34228;
	case 191:
		goto loc_82A34228;
	case 192:
		goto loc_82A34228;
	case 193:
		goto loc_82A34228;
	case 194:
		goto loc_82A34228;
	case 195:
		goto loc_82A34228;
	case 196:
		goto loc_82A34228;
	case 197:
		goto loc_82A34228;
	case 198:
		goto loc_82A34228;
	case 199:
		goto loc_82A34228;
	case 200:
		goto loc_82A34228;
	case 201:
		goto loc_82A34228;
	case 202:
		goto loc_82A34228;
	case 203:
		goto loc_82A34228;
	case 204:
		goto loc_82A34228;
	case 205:
		goto loc_82A34228;
	case 206:
		goto loc_82A34228;
	case 207:
		goto loc_82A34228;
	case 208:
		goto loc_82A34228;
	case 209:
		goto loc_82A34228;
	case 210:
		goto loc_82A34228;
	case 211:
		goto loc_82A34228;
	case 212:
		goto loc_82A34228;
	case 213:
		goto loc_82A34228;
	case 214:
		goto loc_82A34228;
	case 215:
		goto loc_82A34228;
	case 216:
		goto loc_82A34228;
	case 217:
		goto loc_82A34228;
	case 218:
		goto loc_82A34228;
	case 219:
		goto loc_82A34228;
	case 220:
		goto loc_82A34228;
	case 221:
		goto loc_82A34228;
	case 222:
		goto loc_82A34228;
	case 223:
		goto loc_82A34228;
	case 224:
		goto loc_82A34228;
	case 225:
		goto loc_82A34228;
	case 226:
		goto loc_82A34228;
	case 227:
		goto loc_82A34228;
	case 228:
		goto loc_82A34228;
	case 229:
		goto loc_82A34228;
	case 230:
		goto loc_82A34228;
	case 231:
		goto loc_82A34228;
	case 232:
		goto loc_82A34228;
	case 233:
		goto loc_82A34228;
	case 234:
		goto loc_82A34228;
	case 235:
		goto loc_82A34228;
	case 236:
		goto loc_82A34228;
	case 237:
		goto loc_82A34228;
	case 238:
		goto loc_82A34228;
	case 239:
		goto loc_82A34228;
	case 240:
		goto loc_82A34228;
	case 241:
		goto loc_82A34228;
	case 242:
		goto loc_82A34228;
	case 243:
		goto loc_82A34228;
	case 244:
		goto loc_82A34228;
	case 245:
		goto loc_82A34228;
	case 246:
		goto loc_82A34200;
	default:
		__builtin_unreachable();
	}
	// lwz r21,16896(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16740(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16740);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16804(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16804);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16756(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16756);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16896(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
	// lwz r21,16896(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
loc_82A34164:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a333c0
	ctx.lr = 0x82A34170;
	sub_82A333C0(ctx, base);
	// b 0x82a34218
	goto loc_82A34218;
loc_82A34174:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A34180;
	sub_82A37CE0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33430
	ctx.lr = 0x82A3418C;
	sub_82A33430(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A34198;
	sub_82A37D68(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82a34218
	goto loc_82A34218;
loc_82A341A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A341AC;
	sub_82A32348(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// bne cr6,0x82a34230
	if (!ctx.cr6.eq) goto loc_82A34230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,16(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a32348
	ctx.lr = 0x82A341C4;
	sub_82A32348(ctx, base);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// bl 0x82a37560
	ctx.lr = 0x82A341E8;
	sub_82A37560(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a38010
	ctx.lr = 0x82A341FC;
	sub_82A38010(ctx, base);
	// b 0x82a3420c
	goto loc_82A3420C;
loc_82A34200:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A3420C;
	sub_82A37C20(ctx, base);
loc_82A3420C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33b60
	ctx.lr = 0x82A34218;
	sub_82A33B60(ctx, base);
loc_82A34218:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// ble cr6,0x82a33d70
	if (!ctx.cr6.gt) goto loc_82A33D70;
loc_82A34228:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_82A34230:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-26976
	ctx.r9.s64 = ctx.r11.s64 + -26976;
	// addi r4,r10,13404
	ctx.r4.s64 = ctx.r10.s64 + 13404;
	// lwz r5,112(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// bl 0x82a2ed28
	ctx.lr = 0x82A3424C;
	sub_82A2ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a306a0
	ctx.lr = 0x82A3425C;
	sub_82A306A0(ctx, base);
}

__attribute__((alias("__imp__sub_82A3425C"))) PPC_WEAK_FUNC(sub_82A3425C);
PPC_FUNC_IMPL(__imp__sub_82A3425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A34260"))) PPC_WEAK_FUNC(sub_82A34260);
PPC_FUNC_IMPL(__imp__sub_82A34260) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r5,-123
	ctx.r11.s64 = ctx.r5.s64 + -123;
	// cmplwi cr6,r11,163
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 163, ctx.xer);
	// bgt cr6,0x82a34658
	if (ctx.cr6.gt) goto loc_82A34658;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,17060
	ctx.r12.s64 = ctx.r12.s64 + 17060;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A34628;
	case 1:
		goto loc_82A34658;
	case 2:
		goto loc_82A34658;
	case 3:
		goto loc_82A34658;
	case 4:
		goto loc_82A34658;
	case 5:
		goto loc_82A34658;
	case 6:
		goto loc_82A34658;
	case 7:
		goto loc_82A34658;
	case 8:
		goto loc_82A34658;
	case 9:
		goto loc_82A34658;
	case 10:
		goto loc_82A34658;
	case 11:
		goto loc_82A34658;
	case 12:
		goto loc_82A34658;
	case 13:
		goto loc_82A34658;
	case 14:
		goto loc_82A34658;
	case 15:
		goto loc_82A34658;
	case 16:
		goto loc_82A34658;
	case 17:
		goto loc_82A34658;
	case 18:
		goto loc_82A34658;
	case 19:
		goto loc_82A34658;
	case 20:
		goto loc_82A34658;
	case 21:
		goto loc_82A34658;
	case 22:
		goto loc_82A34658;
	case 23:
		goto loc_82A34658;
	case 24:
		goto loc_82A34658;
	case 25:
		goto loc_82A34658;
	case 26:
		goto loc_82A34658;
	case 27:
		goto loc_82A34658;
	case 28:
		goto loc_82A34658;
	case 29:
		goto loc_82A34658;
	case 30:
		goto loc_82A34658;
	case 31:
		goto loc_82A34658;
	case 32:
		goto loc_82A34658;
	case 33:
		goto loc_82A34658;
	case 34:
		goto loc_82A34658;
	case 35:
		goto loc_82A34658;
	case 36:
		goto loc_82A34658;
	case 37:
		goto loc_82A34658;
	case 38:
		goto loc_82A34658;
	case 39:
		goto loc_82A34658;
	case 40:
		goto loc_82A34658;
	case 41:
		goto loc_82A34658;
	case 42:
		goto loc_82A34658;
	case 43:
		goto loc_82A34658;
	case 44:
		goto loc_82A34658;
	case 45:
		goto loc_82A34658;
	case 46:
		goto loc_82A34658;
	case 47:
		goto loc_82A34658;
	case 48:
		goto loc_82A34658;
	case 49:
		goto loc_82A34658;
	case 50:
		goto loc_82A34658;
	case 51:
		goto loc_82A34658;
	case 52:
		goto loc_82A34658;
	case 53:
		goto loc_82A34658;
	case 54:
		goto loc_82A34658;
	case 55:
		goto loc_82A34658;
	case 56:
		goto loc_82A34658;
	case 57:
		goto loc_82A34658;
	case 58:
		goto loc_82A34658;
	case 59:
		goto loc_82A34658;
	case 60:
		goto loc_82A34658;
	case 61:
		goto loc_82A34658;
	case 62:
		goto loc_82A34658;
	case 63:
		goto loc_82A34658;
	case 64:
		goto loc_82A34658;
	case 65:
		goto loc_82A34658;
	case 66:
		goto loc_82A34658;
	case 67:
		goto loc_82A34658;
	case 68:
		goto loc_82A34658;
	case 69:
		goto loc_82A34658;
	case 70:
		goto loc_82A34658;
	case 71:
		goto loc_82A34658;
	case 72:
		goto loc_82A34658;
	case 73:
		goto loc_82A34658;
	case 74:
		goto loc_82A34658;
	case 75:
		goto loc_82A34658;
	case 76:
		goto loc_82A34658;
	case 77:
		goto loc_82A34658;
	case 78:
		goto loc_82A34658;
	case 79:
		goto loc_82A34658;
	case 80:
		goto loc_82A34658;
	case 81:
		goto loc_82A34658;
	case 82:
		goto loc_82A34658;
	case 83:
		goto loc_82A34658;
	case 84:
		goto loc_82A34658;
	case 85:
		goto loc_82A34658;
	case 86:
		goto loc_82A34658;
	case 87:
		goto loc_82A34658;
	case 88:
		goto loc_82A34658;
	case 89:
		goto loc_82A34658;
	case 90:
		goto loc_82A34658;
	case 91:
		goto loc_82A34658;
	case 92:
		goto loc_82A34658;
	case 93:
		goto loc_82A34658;
	case 94:
		goto loc_82A34658;
	case 95:
		goto loc_82A34658;
	case 96:
		goto loc_82A34658;
	case 97:
		goto loc_82A34658;
	case 98:
		goto loc_82A34658;
	case 99:
		goto loc_82A34658;
	case 100:
		goto loc_82A34658;
	case 101:
		goto loc_82A34658;
	case 102:
		goto loc_82A34658;
	case 103:
		goto loc_82A34658;
	case 104:
		goto loc_82A34658;
	case 105:
		goto loc_82A34658;
	case 106:
		goto loc_82A34658;
	case 107:
		goto loc_82A34658;
	case 108:
		goto loc_82A34658;
	case 109:
		goto loc_82A34658;
	case 110:
		goto loc_82A34658;
	case 111:
		goto loc_82A34658;
	case 112:
		goto loc_82A34658;
	case 113:
		goto loc_82A34658;
	case 114:
		goto loc_82A34658;
	case 115:
		goto loc_82A34658;
	case 116:
		goto loc_82A34658;
	case 117:
		goto loc_82A34658;
	case 118:
		goto loc_82A34658;
	case 119:
		goto loc_82A34658;
	case 120:
		goto loc_82A34658;
	case 121:
		goto loc_82A34658;
	case 122:
		goto loc_82A34658;
	case 123:
		goto loc_82A34658;
	case 124:
		goto loc_82A34658;
	case 125:
		goto loc_82A34658;
	case 126:
		goto loc_82A34658;
	case 127:
		goto loc_82A34658;
	case 128:
		goto loc_82A34658;
	case 129:
		goto loc_82A34658;
	case 130:
		goto loc_82A34658;
	case 131:
		goto loc_82A34658;
	case 132:
		goto loc_82A34658;
	case 133:
		goto loc_82A34658;
	case 134:
		goto loc_82A34658;
	case 135:
		goto loc_82A34658;
	case 136:
		goto loc_82A34658;
	case 137:
		goto loc_82A34658;
	case 138:
		goto loc_82A34658;
	case 139:
		goto loc_82A34658;
	case 140:
		goto loc_82A345A8;
	case 141:
		goto loc_82A34658;
	case 142:
		goto loc_82A34638;
	case 143:
		goto loc_82A34658;
	case 144:
		goto loc_82A34658;
	case 145:
		goto loc_82A34658;
	case 146:
		goto loc_82A34580;
	case 147:
		goto loc_82A34658;
	case 148:
		goto loc_82A34658;
	case 149:
		goto loc_82A34658;
	case 150:
		goto loc_82A34658;
	case 151:
		goto loc_82A34658;
	case 152:
		goto loc_82A34594;
	case 153:
		goto loc_82A34658;
	case 154:
		goto loc_82A34658;
	case 155:
		goto loc_82A34658;
	case 156:
		goto loc_82A345BC;
	case 157:
		goto loc_82A34658;
	case 158:
		goto loc_82A34658;
	case 159:
		goto loc_82A34658;
	case 160:
		goto loc_82A34658;
	case 161:
		goto loc_82A34534;
	case 162:
		goto loc_82A34658;
	case 163:
		goto loc_82A34564;
	default:
		__builtin_unreachable();
	}
	// lwz r21,17960(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17960);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17832(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17832);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17976(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17976);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17792(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17792);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17812(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17812);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17852(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17852);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17716(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17716);
	// lwz r21,18008(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18008);
	// lwz r21,17764(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17764);
loc_82A34534:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82a32348
	ctx.lr = 0x82A34560;
	sub_82A32348(ctx, base);
	// b 0x82a34664
	goto loc_82A34664;
loc_82A34564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32570
	ctx.lr = 0x82A34574;
	sub_82A32570(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A3457C;
	sub_82A32348(ctx, base);
	// b 0x82a34664
	goto loc_82A34664;
loc_82A34580:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82a34610
	goto loc_82A34610;
loc_82A34594:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82a34610
	goto loc_82A34610;
loc_82A345A8:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82a34610
	goto loc_82A34610;
loc_82A345BC:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a345e0
	if (!ctx.cr6.eq) goto loc_82A345E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13808
	ctx.r4.s64 = ctx.r11.s64 + 13808;
	// bl 0x82a306a0
	ctx.lr = 0x82A345E0;
	sub_82A306A0(ctx, base);
loc_82A345E0:
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r9.u8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A34604;
	sub_82A38CC8(ctx, base);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82A34610:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82a32348
	ctx.lr = 0x82A34624;
	sub_82A32348(ctx, base);
	// b 0x82a34664
	goto loc_82A34664;
loc_82A34628:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a33638
	ctx.lr = 0x82A34634;
	sub_82A33638(ctx, base);
	// b 0x82a34664
	goto loc_82A34664;
loc_82A34638:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A34640;
	sub_82A32348(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a339e8
	ctx.lr = 0x82A34654;
	sub_82A339E8(ctx, base);
	// b 0x82a34664
	goto loc_82A34664;
loc_82A34658:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a33cd8
	ctx.lr = 0x82A34664;
	sub_82A33CD8(ctx, base);
loc_82A34664:
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

__attribute__((alias("__imp__sub_82A3467C"))) PPC_WEAK_FUNC(sub_82A3467C);
PPC_FUNC_IMPL(__imp__sub_82A3467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A34680"))) PPC_WEAK_FUNC(sub_82A34680);
PPC_FUNC_IMPL(__imp__sub_82A34680) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-37
	ctx.r11.s64 = ctx.r3.s64 + -37;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// bgt cr6,0x82a34af8
	if (ctx.cr6.gt) {
		sub_82A34AF8(ctx, base);
		return;
	}
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,18084
	ctx.r12.s64 = ctx.r12.s64 + 18084;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82A34AA0
		return;
	case 1:
		// ERROR: 0x82A34AF8
		return;
	case 2:
		// ERROR: 0x82A34AF8
		return;
	case 3:
		// ERROR: 0x82A34AF8
		return;
	case 4:
		// ERROR: 0x82A34AF8
		return;
	case 5:
		// ERROR: 0x82A34A90
		return;
	case 6:
		// ERROR: 0x82A34A80
		return;
	case 7:
		// ERROR: 0x82A34AF8
		return;
	case 8:
		// ERROR: 0x82A34A88
		return;
	case 9:
		// ERROR: 0x82A34AF8
		return;
	case 10:
		// ERROR: 0x82A34A98
		return;
	case 11:
		// ERROR: 0x82A34AF8
		return;
	case 12:
		// ERROR: 0x82A34AF8
		return;
	case 13:
		// ERROR: 0x82A34AF8
		return;
	case 14:
		// ERROR: 0x82A34AF8
		return;
	case 15:
		// ERROR: 0x82A34AF8
		return;
	case 16:
		// ERROR: 0x82A34AF8
		return;
	case 17:
		// ERROR: 0x82A34AF8
		return;
	case 18:
		// ERROR: 0x82A34AF8
		return;
	case 19:
		// ERROR: 0x82A34AF8
		return;
	case 20:
		// ERROR: 0x82A34AF8
		return;
	case 21:
		// ERROR: 0x82A34AF8
		return;
	case 22:
		// ERROR: 0x82A34AF8
		return;
	case 23:
		// ERROR: 0x82A34AC8
		return;
	case 24:
		// ERROR: 0x82A34AF8
		return;
	case 25:
		// ERROR: 0x82A34AD8
		return;
	case 26:
		// ERROR: 0x82A34AF8
		return;
	case 27:
		// ERROR: 0x82A34AF8
		return;
	case 28:
		// ERROR: 0x82A34AF8
		return;
	case 29:
		// ERROR: 0x82A34AF8
		return;
	case 30:
		// ERROR: 0x82A34AF8
		return;
	case 31:
		// ERROR: 0x82A34AF8
		return;
	case 32:
		// ERROR: 0x82A34AF8
		return;
	case 33:
		// ERROR: 0x82A34AF8
		return;
	case 34:
		// ERROR: 0x82A34AF8
		return;
	case 35:
		// ERROR: 0x82A34AF8
		return;
	case 36:
		// ERROR: 0x82A34AF8
		return;
	case 37:
		// ERROR: 0x82A34AF8
		return;
	case 38:
		// ERROR: 0x82A34AF8
		return;
	case 39:
		// ERROR: 0x82A34AF8
		return;
	case 40:
		// ERROR: 0x82A34AF8
		return;
	case 41:
		// ERROR: 0x82A34AF8
		return;
	case 42:
		// ERROR: 0x82A34AF8
		return;
	case 43:
		// ERROR: 0x82A34AF8
		return;
	case 44:
		// ERROR: 0x82A34AF8
		return;
	case 45:
		// ERROR: 0x82A34AF8
		return;
	case 46:
		// ERROR: 0x82A34AF8
		return;
	case 47:
		// ERROR: 0x82A34AF8
		return;
	case 48:
		// ERROR: 0x82A34AF8
		return;
	case 49:
		// ERROR: 0x82A34AF8
		return;
	case 50:
		// ERROR: 0x82A34AF8
		return;
	case 51:
		// ERROR: 0x82A34AF8
		return;
	case 52:
		// ERROR: 0x82A34AF8
		return;
	case 53:
		// ERROR: 0x82A34AF8
		return;
	case 54:
		// ERROR: 0x82A34AF8
		return;
	case 55:
		// ERROR: 0x82A34AF8
		return;
	case 56:
		// ERROR: 0x82A34AF8
		return;
	case 57:
		// ERROR: 0x82A34AA8
		return;
	case 58:
		// ERROR: 0x82A34AF8
		return;
	case 59:
		// ERROR: 0x82A34AF8
		return;
	case 60:
		// ERROR: 0x82A34AF8
		return;
	case 61:
		// ERROR: 0x82A34AF8
		return;
	case 62:
		// ERROR: 0x82A34AF8
		return;
	case 63:
		// ERROR: 0x82A34AF8
		return;
	case 64:
		// ERROR: 0x82A34AF8
		return;
	case 65:
		// ERROR: 0x82A34AF8
		return;
	case 66:
		// ERROR: 0x82A34AF8
		return;
	case 67:
		// ERROR: 0x82A34AF8
		return;
	case 68:
		// ERROR: 0x82A34AF8
		return;
	case 69:
		// ERROR: 0x82A34AF8
		return;
	case 70:
		// ERROR: 0x82A34AF8
		return;
	case 71:
		// ERROR: 0x82A34AF8
		return;
	case 72:
		// ERROR: 0x82A34AF8
		return;
	case 73:
		// ERROR: 0x82A34AF8
		return;
	case 74:
		// ERROR: 0x82A34AF8
		return;
	case 75:
		// ERROR: 0x82A34AF8
		return;
	case 76:
		// ERROR: 0x82A34AF8
		return;
	case 77:
		// ERROR: 0x82A34AF8
		return;
	case 78:
		// ERROR: 0x82A34AF8
		return;
	case 79:
		// ERROR: 0x82A34AF8
		return;
	case 80:
		// ERROR: 0x82A34AF8
		return;
	case 81:
		// ERROR: 0x82A34AF8
		return;
	case 82:
		// ERROR: 0x82A34AF8
		return;
	case 83:
		// ERROR: 0x82A34AF8
		return;
	case 84:
		// ERROR: 0x82A34AF8
		return;
	case 85:
		// ERROR: 0x82A34AF8
		return;
	case 86:
		// ERROR: 0x82A34AF8
		return;
	case 87:
		// ERROR: 0x82A34AF8
		return;
	case 88:
		// ERROR: 0x82A34AF8
		return;
	case 89:
		// ERROR: 0x82A34AF8
		return;
	case 90:
		// ERROR: 0x82A34AF8
		return;
	case 91:
		// ERROR: 0x82A34AF8
		return;
	case 92:
		// ERROR: 0x82A34AF8
		return;
	case 93:
		// ERROR: 0x82A34AF8
		return;
	case 94:
		// ERROR: 0x82A34AF8
		return;
	case 95:
		// ERROR: 0x82A34AF8
		return;
	case 96:
		// ERROR: 0x82A34AF8
		return;
	case 97:
		// ERROR: 0x82A34AF8
		return;
	case 98:
		// ERROR: 0x82A34AF8
		return;
	case 99:
		// ERROR: 0x82A34AF8
		return;
	case 100:
		// ERROR: 0x82A34AF8
		return;
	case 101:
		// ERROR: 0x82A34AF8
		return;
	case 102:
		// ERROR: 0x82A34AF8
		return;
	case 103:
		// ERROR: 0x82A34AF8
		return;
	case 104:
		// ERROR: 0x82A34AF8
		return;
	case 105:
		// ERROR: 0x82A34AF8
		return;
	case 106:
		// ERROR: 0x82A34AF8
		return;
	case 107:
		// ERROR: 0x82A34AF8
		return;
	case 108:
		// ERROR: 0x82A34AF8
		return;
	case 109:
		// ERROR: 0x82A34AF8
		return;
	case 110:
		// ERROR: 0x82A34AF8
		return;
	case 111:
		// ERROR: 0x82A34AF8
		return;
	case 112:
		// ERROR: 0x82A34AF8
		return;
	case 113:
		// ERROR: 0x82A34AF8
		return;
	case 114:
		// ERROR: 0x82A34AF8
		return;
	case 115:
		// ERROR: 0x82A34AF8
		return;
	case 116:
		// ERROR: 0x82A34AF8
		return;
	case 117:
		// ERROR: 0x82A34AF8
		return;
	case 118:
		// ERROR: 0x82A34AF8
		return;
	case 119:
		// ERROR: 0x82A34AF8
		return;
	case 120:
		// ERROR: 0x82A34AF8
		return;
	case 121:
		// ERROR: 0x82A34AF8
		return;
	case 122:
		// ERROR: 0x82A34AF8
		return;
	case 123:
		// ERROR: 0x82A34AF8
		return;
	case 124:
		// ERROR: 0x82A34AF8
		return;
	case 125:
		// ERROR: 0x82A34AF8
		return;
	case 126:
		// ERROR: 0x82A34AF8
		return;
	case 127:
		// ERROR: 0x82A34AF8
		return;
	case 128:
		// ERROR: 0x82A34AF8
		return;
	case 129:
		// ERROR: 0x82A34AF8
		return;
	case 130:
		// ERROR: 0x82A34AF8
		return;
	case 131:
		// ERROR: 0x82A34AF8
		return;
	case 132:
		// ERROR: 0x82A34AF8
		return;
	case 133:
		// ERROR: 0x82A34AF8
		return;
	case 134:
		// ERROR: 0x82A34AF8
		return;
	case 135:
		// ERROR: 0x82A34AF8
		return;
	case 136:
		// ERROR: 0x82A34AF8
		return;
	case 137:
		// ERROR: 0x82A34AF8
		return;
	case 138:
		// ERROR: 0x82A34AF8
		return;
	case 139:
		// ERROR: 0x82A34AF8
		return;
	case 140:
		// ERROR: 0x82A34AF8
		return;
	case 141:
		// ERROR: 0x82A34AF8
		return;
	case 142:
		// ERROR: 0x82A34AF8
		return;
	case 143:
		// ERROR: 0x82A34AF8
		return;
	case 144:
		// ERROR: 0x82A34AF8
		return;
	case 145:
		// ERROR: 0x82A34AF8
		return;
	case 146:
		// ERROR: 0x82A34AF8
		return;
	case 147:
		// ERROR: 0x82A34AF8
		return;
	case 148:
		// ERROR: 0x82A34AF8
		return;
	case 149:
		// ERROR: 0x82A34AF8
		return;
	case 150:
		// ERROR: 0x82A34AF8
		return;
	case 151:
		// ERROR: 0x82A34AF8
		return;
	case 152:
		// ERROR: 0x82A34AF8
		return;
	case 153:
		// ERROR: 0x82A34AF8
		return;
	case 154:
		// ERROR: 0x82A34AF8
		return;
	case 155:
		// ERROR: 0x82A34AF8
		return;
	case 156:
		// ERROR: 0x82A34AF8
		return;
	case 157:
		// ERROR: 0x82A34AF8
		return;
	case 158:
		// ERROR: 0x82A34AF8
		return;
	case 159:
		// ERROR: 0x82A34AF8
		return;
	case 160:
		// ERROR: 0x82A34AF8
		return;
	case 161:
		// ERROR: 0x82A34AF8
		return;
	case 162:
		// ERROR: 0x82A34AF8
		return;
	case 163:
		// ERROR: 0x82A34AF8
		return;
	case 164:
		// ERROR: 0x82A34AF8
		return;
	case 165:
		// ERROR: 0x82A34AF8
		return;
	case 166:
		// ERROR: 0x82A34AF8
		return;
	case 167:
		// ERROR: 0x82A34AF8
		return;
	case 168:
		// ERROR: 0x82A34AF8
		return;
	case 169:
		// ERROR: 0x82A34AF8
		return;
	case 170:
		// ERROR: 0x82A34AF8
		return;
	case 171:
		// ERROR: 0x82A34AF8
		return;
	case 172:
		// ERROR: 0x82A34AF8
		return;
	case 173:
		// ERROR: 0x82A34AF8
		return;
	case 174:
		// ERROR: 0x82A34AF8
		return;
	case 175:
		// ERROR: 0x82A34AF8
		return;
	case 176:
		// ERROR: 0x82A34AF8
		return;
	case 177:
		// ERROR: 0x82A34AF8
		return;
	case 178:
		// ERROR: 0x82A34AF8
		return;
	case 179:
		// ERROR: 0x82A34AF8
		return;
	case 180:
		// ERROR: 0x82A34AF8
		return;
	case 181:
		// ERROR: 0x82A34AF8
		return;
	case 182:
		// ERROR: 0x82A34AF8
		return;
	case 183:
		// ERROR: 0x82A34AF8
		return;
	case 184:
		// ERROR: 0x82A34AF8
		return;
	case 185:
		// ERROR: 0x82A34AF8
		return;
	case 186:
		// ERROR: 0x82A34AF8
		return;
	case 187:
		// ERROR: 0x82A34AF8
		return;
	case 188:
		// ERROR: 0x82A34AF8
		return;
	case 189:
		// ERROR: 0x82A34AF8
		return;
	case 190:
		// ERROR: 0x82A34AF8
		return;
	case 191:
		// ERROR: 0x82A34AF8
		return;
	case 192:
		// ERROR: 0x82A34AF8
		return;
	case 193:
		// ERROR: 0x82A34AF8
		return;
	case 194:
		// ERROR: 0x82A34AF8
		return;
	case 195:
		// ERROR: 0x82A34AF8
		return;
	case 196:
		// ERROR: 0x82A34AF8
		return;
	case 197:
		// ERROR: 0x82A34AF8
		return;
	case 198:
		// ERROR: 0x82A34AF8
		return;
	case 199:
		// ERROR: 0x82A34AF8
		return;
	case 200:
		// ERROR: 0x82A34AF8
		return;
	case 201:
		// ERROR: 0x82A34AF8
		return;
	case 202:
		// ERROR: 0x82A34AF8
		return;
	case 203:
		// ERROR: 0x82A34AF8
		return;
	case 204:
		// ERROR: 0x82A34AF8
		return;
	case 205:
		// ERROR: 0x82A34AF8
		return;
	case 206:
		// ERROR: 0x82A34AF8
		return;
	case 207:
		// ERROR: 0x82A34AF8
		return;
	case 208:
		// ERROR: 0x82A34AF8
		return;
	case 209:
		// ERROR: 0x82A34AF8
		return;
	case 210:
		// ERROR: 0x82A34AF8
		return;
	case 211:
		// ERROR: 0x82A34AF8
		return;
	case 212:
		// ERROR: 0x82A34AF8
		return;
	case 213:
		// ERROR: 0x82A34AF8
		return;
	case 214:
		// ERROR: 0x82A34AF8
		return;
	case 215:
		// ERROR: 0x82A34AF8
		return;
	case 216:
		// ERROR: 0x82A34AF8
		return;
	case 217:
		// ERROR: 0x82A34AF8
		return;
	case 218:
		// ERROR: 0x82A34AF8
		return;
	case 219:
		// ERROR: 0x82A34AF8
		return;
	case 220:
		// ERROR: 0x82A34AE8
		return;
	case 221:
		// ERROR: 0x82A34AF8
		return;
	case 222:
		// ERROR: 0x82A34AF8
		return;
	case 223:
		// ERROR: 0x82A34AF8
		return;
	case 224:
		// ERROR: 0x82A34AF8
		return;
	case 225:
		// ERROR: 0x82A34AF8
		return;
	case 226:
		// ERROR: 0x82A34AF8
		return;
	case 227:
		// ERROR: 0x82A34AF8
		return;
	case 228:
		// ERROR: 0x82A34AF8
		return;
	case 229:
		// ERROR: 0x82A34AF8
		return;
	case 230:
		// ERROR: 0x82A34AF8
		return;
	case 231:
		// ERROR: 0x82A34AF8
		return;
	case 232:
		// ERROR: 0x82A34AF8
		return;
	case 233:
		// ERROR: 0x82A34AF8
		return;
	case 234:
		// ERROR: 0x82A34AF0
		return;
	case 235:
		// ERROR: 0x82A34AF8
		return;
	case 236:
		// ERROR: 0x82A34AF8
		return;
	case 237:
		// ERROR: 0x82A34AF8
		return;
	case 238:
		// ERROR: 0x82A34AF8
		return;
	case 239:
		// ERROR: 0x82A34AF8
		return;
	case 240:
		// ERROR: 0x82A34AF8
		return;
	case 241:
		// ERROR: 0x82A34AB0
		return;
	case 242:
		// ERROR: 0x82A34AF8
		return;
	case 243:
		// ERROR: 0x82A34AC0
		return;
	case 244:
		// ERROR: 0x82A34AE0
		return;
	case 245:
		// ERROR: 0x82A34AD0
		return;
	case 246:
		// ERROR: 0x82A34AB8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82A346A4"))) PPC_WEAK_FUNC(sub_82A346A4);
PPC_FUNC_IMPL(__imp__sub_82A346A4) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,19104(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19104);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19088(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19088);
	// lwz r21,19072(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19072);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19080(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19080);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19096(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19096);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19144(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19144);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19160);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19112);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19176(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19176);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19184(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19184);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19120);
	// lwz r21,19192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19192);
	// lwz r21,19136(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19136);
	// lwz r21,19168(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19168);
	// lwz r21,19152(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19152);
	// lwz r21,19128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19128);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34A88"))) PPC_WEAK_FUNC(sub_82A34A88);
PPC_FUNC_IMPL(__imp__sub_82A34A88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34A90"))) PPC_WEAK_FUNC(sub_82A34A90);
PPC_FUNC_IMPL(__imp__sub_82A34A90) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34A98"))) PPC_WEAK_FUNC(sub_82A34A98);
PPC_FUNC_IMPL(__imp__sub_82A34A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AA0"))) PPC_WEAK_FUNC(sub_82A34AA0);
PPC_FUNC_IMPL(__imp__sub_82A34AA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AA8"))) PPC_WEAK_FUNC(sub_82A34AA8);
PPC_FUNC_IMPL(__imp__sub_82A34AA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AB0"))) PPC_WEAK_FUNC(sub_82A34AB0);
PPC_FUNC_IMPL(__imp__sub_82A34AB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AB8"))) PPC_WEAK_FUNC(sub_82A34AB8);
PPC_FUNC_IMPL(__imp__sub_82A34AB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AC0"))) PPC_WEAK_FUNC(sub_82A34AC0);
PPC_FUNC_IMPL(__imp__sub_82A34AC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AC8"))) PPC_WEAK_FUNC(sub_82A34AC8);
PPC_FUNC_IMPL(__imp__sub_82A34AC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AD0"))) PPC_WEAK_FUNC(sub_82A34AD0);
PPC_FUNC_IMPL(__imp__sub_82A34AD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AD8"))) PPC_WEAK_FUNC(sub_82A34AD8);
PPC_FUNC_IMPL(__imp__sub_82A34AD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AE0"))) PPC_WEAK_FUNC(sub_82A34AE0);
PPC_FUNC_IMPL(__imp__sub_82A34AE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AE8"))) PPC_WEAK_FUNC(sub_82A34AE8);
PPC_FUNC_IMPL(__imp__sub_82A34AE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AF0"))) PPC_WEAK_FUNC(sub_82A34AF0);
PPC_FUNC_IMPL(__imp__sub_82A34AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34AF8"))) PPC_WEAK_FUNC(sub_82A34AF8);
PPC_FUNC_IMPL(__imp__sub_82A34AF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A34B00"))) PPC_WEAK_FUNC(sub_82A34B00);
PPC_FUNC_IMPL(__imp__sub_82A34B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A34B08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82a32c30
	ctx.lr = 0x82A34B1C;
	sub_82A32C30(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,-27468
	ctx.r27.s64 = ctx.r11.s64 + -27468;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82a34b50
	if (ctx.cr6.eq) goto loc_82A34B50;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82a34b48
	if (ctx.cr6.eq) goto loc_82A34B48;
	// cmpwi cr6,r11,270
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 270, ctx.xer);
	// bne cr6,0x82a34c1c
	if (!ctx.cr6.eq) goto loc_82A34C1C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a34b54
	goto loc_82A34B54;
loc_82A34B48:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a34b54
	goto loc_82A34B54;
loc_82A34B50:
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A34B54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A34B5C;
	sub_82A32348(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A34B6C;
	sub_82A34B00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// blt cr6,0x82a34bd4
	if (ctx.cr6.lt) goto loc_82A34BD4;
	// beq cr6,0x82a34bc4
	if (ctx.cr6.eq) goto loc_82A34BC4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x82a34c28
	if (!ctx.cr6.lt) goto loc_82A34C28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A34BAC;
	sub_82A37CE0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A34BC0;
	sub_82A38798(ctx, base);
	// b 0x82a34c28
	goto loc_82A34C28;
loc_82A34BC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38498
	ctx.lr = 0x82A34BD0;
	sub_82A38498(ctx, base);
	// b 0x82a34c28
	goto loc_82A34C28;
loc_82A34BD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a34bf8
	if (!ctx.cr6.eq) goto loc_82A34BF8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a34bf8
	if (!ctx.cr6.eq) goto loc_82A34BF8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a34c04
	if (ctx.cr6.eq) goto loc_82A34C04;
loc_82A34BF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A34C04;
	sub_82A37CE0(ctx, base);
loc_82A34C04:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A34C18;
	sub_82A38798(ctx, base);
	// b 0x82a34c28
	goto loc_82A34C28;
loc_82A34C1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a34260
	ctx.lr = 0x82A34C28;
	sub_82A34260(ctx, base);
loc_82A34C28:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a34680
	ctx.lr = 0x82A34C30;
	sub_82A34680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// beq cr6,0x82a34d40
	if (ctx.cr6.eq) goto loc_82A34D40;
loc_82A34C3C:
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82a34d40
	if (!ctx.cr6.gt) goto loc_82A34D40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A34C58;
	sub_82A32348(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bgt cr6,0x82a34d00
	if (ctx.cr6.gt) goto loc_82A34D00;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,19580
	ctx.r12.s64 = ctx.r12.s64 + 19580;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82A34CDC;
	case 1:
		goto loc_82A34CDC;
	case 2:
		goto loc_82A34CDC;
	case 3:
		goto loc_82A34CDC;
	case 4:
		goto loc_82A34CDC;
	case 5:
		goto loc_82A34CDC;
	case 6:
		goto loc_82A34CD0;
	case 7:
		goto loc_82A34D00;
	case 8:
		goto loc_82A34D00;
	case 9:
		goto loc_82A34D00;
	case 10:
		goto loc_82A34D00;
	case 11:
		goto loc_82A34D00;
	case 12:
		goto loc_82A34D00;
	case 13:
		goto loc_82A34CB8;
	case 14:
		goto loc_82A34CC4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19676(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19676);
	// lwz r21,19664(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19664);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19712);
	// lwz r21,19640(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19640);
	// lwz r21,19652(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19652);
loc_82A34CB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a382c0
	ctx.lr = 0x82A34CC0;
	sub_82A382C0(ctx, base);
	// b 0x82a34d08
	goto loc_82A34D08;
loc_82A34CC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a383b0
	ctx.lr = 0x82A34CCC;
	sub_82A383B0(ctx, base);
	// b 0x82a34d08
	goto loc_82A34D08;
loc_82A34CD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A34CD8;
	sub_82A37C20(ctx, base);
	// b 0x82a34d08
	goto loc_82A34D08;
loc_82A34CDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a34d00
	if (!ctx.cr6.eq) goto loc_82A34D00;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a34d00
	if (!ctx.cr6.eq) goto loc_82A34D00;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a34d08
	if (ctx.cr6.eq) goto loc_82A34D08;
loc_82A34D00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A34D08;
	sub_82A37D68(ctx, base);
loc_82A34D08:
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82a34b00
	ctx.lr = 0x82A34D20;
	sub_82A34B00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82a389f8
	ctx.lr = 0x82A34D38;
	sub_82A389F8(ctx, base);
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// bne cr6,0x82a34c3c
	if (!ctx.cr6.eq) goto loc_82A34C3C;
loc_82A34D40:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A34D60"))) PPC_WEAK_FUNC(sub_82A34D60);
PPC_FUNC_IMPL(__imp__sub_82A34D60) {
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
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82a36300
	ctx.lr = 0x82A34DA4;
	sub_82A36300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A34DAC;
	sub_82A32CB8(ctx, base);
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

__attribute__((alias("__imp__sub_82A34DC0"))) PPC_WEAK_FUNC(sub_82A34DC0);
PPC_FUNC_IMPL(__imp__sub_82A34DC0) {
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
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// beq cr6,0x82a34e9c
	if (ctx.cr6.eq) goto loc_82A34E9C;
loc_82A34DE4:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82a34e20
	if (!ctx.cr6.eq) goto loc_82A34E20;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a34e08
	if (!ctx.cr6.eq) goto loc_82A34E08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
loc_82A34E08:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82a34e20
	if (!ctx.cr6.eq) goto loc_82A34E20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_82A34E20:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a34de4
	if (!ctx.cr6.eq) goto loc_82A34DE4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a34e9c
	if (ctx.cr6.eq) goto loc_82A34E9C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r4,r7,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A34E58;
	sub_82A38CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,75(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82a34e90
	if (!ctx.cr6.gt) goto loc_82A34E90;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a34e8c
	if (ctx.cr6.lt) goto loc_82A34E8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A34E8C;
	sub_82A306A0(ctx, base);
loc_82A34E8C:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A34E90:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A34E9C:
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

__attribute__((alias("__imp__sub_82A34EB0"))) PPC_WEAK_FUNC(sub_82A34EB0);
PPC_FUNC_IMPL(__imp__sub_82A34EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A34EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82a35008
	if (ctx.cr6.lt) goto loc_82A35008;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x82a35008
	if (ctx.cr6.gt) goto loc_82A35008;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82a34f54
	if (!ctx.cr6.eq) goto loc_82A34F54;
	// bl 0x82a32348
	ctx.lr = 0x82A34EF0;
	sub_82A32348(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33cd8
	ctx.lr = 0x82A34F00;
	sub_82A33CD8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82a34f1c
	if (!ctx.cr6.eq) goto loc_82A34F1C;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a34dc0
	ctx.lr = 0x82A34F1C;
	sub_82A34DC0(ctx, base);
loc_82A34F1C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// subfic r4,r10,200
	ctx.xer.ca = ctx.r10.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r10.s64;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82a34f40
	if (!ctx.cr6.gt) goto loc_82A34F40;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r11,13868
	ctx.r5.s64 = ctx.r11.s64 + 13868;
	// bl 0x82a323c0
	ctx.lr = 0x82A34F40;
	sub_82A323C0(ctx, base);
loc_82A34F40:
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a34eb0
	ctx.lr = 0x82A34F50;
	sub_82A34EB0(ctx, base);
	// b 0x82a34fac
	goto loc_82A34FAC;
loc_82A34F54:
	// li r4,61
	ctx.r4.s64 = 61;
	// bl 0x82a32460
	ctx.lr = 0x82A34F5C;
	sub_82A32460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A34F64;
	sub_82A32348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33af8
	ctx.lr = 0x82A34F70;
	sub_82A33AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82a34fe4
	if (ctx.cr6.eq) goto loc_82A34FE4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32b08
	ctx.lr = 0x82A34F90;
	sub_82A32B08(ctx, base);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82a34fac
	if (!ctx.cr6.gt) goto loc_82A34FAC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r9,r29,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_82A34FAC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a37ea0
	ctx.lr = 0x82A34FDC;
	sub_82A37EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A34FE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82be1e98
	ctx.lr = 0x82A34FF0;
	sub_82BE1E98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a37ea0
	ctx.lr = 0x82A35000;
	sub_82A37EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A35008:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13852
	ctx.r4.s64 = ctx.r11.s64 + 13852;
	// bl 0x82a306a0
	ctx.lr = 0x82A3501C;
	sub_82A306A0(ctx, base);
}

__attribute__((alias("__imp__sub_82A3501C"))) PPC_WEAK_FUNC(sub_82A3501C);
PPC_FUNC_IMPL(__imp__sub_82A3501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35020"))) PPC_WEAK_FUNC(sub_82A35020);
PPC_FUNC_IMPL(__imp__sub_82A35020) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a34b00
	ctx.lr = 0x82A35040;
	sub_82A34B00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a35054
	if (!ctx.cr6.eq) goto loc_82A35054;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A35054:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a382c0
	ctx.lr = 0x82A35060;
	sub_82A382C0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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

__attribute__((alias("__imp__sub_82A35078"))) PPC_WEAK_FUNC(sub_82A35078);
PPC_FUNC_IMPL(__imp__sub_82A35078) {
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
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a350c0
	if (ctx.cr6.eq) goto loc_82A350C0;
loc_82A350A0:
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a350d0
	if (!ctx.cr6.eq) goto loc_82A350D0;
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a350a0
	if (!ctx.cr6.eq) goto loc_82A350A0;
loc_82A350C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,13892
	ctx.r4.s64 = ctx.r11.s64 + 13892;
	// bl 0x82a306a0
	ctx.lr = 0x82A350D0;
	sub_82A306A0(ctx, base);
loc_82A350D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a350f4
	if (ctx.cr6.eq) goto loc_82A350F4;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,35
	ctx.r4.s64 = 35;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A350F4;
	sub_82A38CC8(ctx, base);
loc_82A350F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A350FC;
	sub_82A37178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A3510C;
	sub_82A374B8(ctx, base);
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

__attribute__((alias("__imp__sub_82A35124"))) PPC_WEAK_FUNC(sub_82A35124);
PPC_FUNC_IMPL(__imp__sub_82A35124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35128"))) PPC_WEAK_FUNC(sub_82A35128);
PPC_FUNC_IMPL(__imp__sub_82A35128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A35130;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82a32348
	ctx.lr = 0x82A35144;
	sub_82A32348(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a35020
	ctx.lr = 0x82A35158;
	sub_82A35020(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r7,50(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// li r4,259
	ctx.r4.s64 = 259;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x82a32460
	ctx.lr = 0x82A35198;
	sub_82A32460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A351A0;
	sub_82A32348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a34d60
	ctx.lr = 0x82A351A8;
	sub_82A34D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A351B0;
	sub_82A37178(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a351d8
	if (!ctx.cr6.eq) goto loc_82A351D8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A351D4;
	sub_82A374B8(ctx, base);
	// b 0x82a351ec
	goto loc_82A351EC;
loc_82A351D8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a373b8
	ctx.lr = 0x82A351EC;
	sub_82A373B8(ctx, base);
loc_82A351EC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,277
	ctx.r5.s64 = 277;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a324c0
	ctx.lr = 0x82A35200;
	sub_82A324C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A35208;
	sub_82A32CB8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A35220;
	sub_82A374B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35228"))) PPC_WEAK_FUNC(sub_82A35228);
PPC_FUNC_IMPL(__imp__sub_82A35228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A35230;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r9,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r9.u8);
	// lbz r6,50(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// lbz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x82a32348
	ctx.lr = 0x82A352A0;
	sub_82A32348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a36300
	ctx.lr = 0x82A352A8;
	sub_82A36300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,276
	ctx.r4.s64 = 276;
	// bl 0x82a324c0
	ctx.lr = 0x82A352BC;
	sub_82A324C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a35020
	ctx.lr = 0x82A352C4;
	sub_82A35020(ctx, base);
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a35314
	if (!ctx.cr6.eq) goto loc_82A35314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A352DC;
	sub_82A32CB8(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a3530c
	if (!ctx.cr6.eq) goto loc_82A3530C;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A352FC;
	sub_82A374B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A35304;
	sub_82A32CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A3530C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82a35380
	goto loc_82A35380;
loc_82A35314:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a35078
	ctx.lr = 0x82A3531C;
	sub_82A35078(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A35334;
	sub_82A374B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A3533C;
	sub_82A32CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A35344;
	sub_82A37178(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a3537c
	if (!ctx.cr6.eq) goto loc_82A3537C;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A3536C;
	sub_82A374B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A35374;
	sub_82A32CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82A3537C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82A35380:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a373b8
	ctx.lr = 0x82A35390;
	sub_82A373B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A35398;
	sub_82A32CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A353A0"))) PPC_WEAK_FUNC(sub_82A353A0);
PPC_FUNC_IMPL(__imp__sub_82A353A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A353A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r10.u8);
loc_82A353D4:
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// bne 0x82a353d4
	if (!ctx.cr0.eq) goto loc_82A353D4;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32460
	ctx.lr = 0x82A3541C;
	sub_82A32460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32348
	ctx.lr = 0x82A35424;
	sub_82A32348(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a3544c
	if (ctx.cr6.eq) goto loc_82A3544C;
	// rlwinm r10,r26,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r4,r10,32767
	ctx.r4.u64 = ctx.r10.u64 | 2147418112;
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A35448;
	sub_82A38CC8(ctx, base);
	// b 0x82a35454
	goto loc_82A35454;
loc_82A3544C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A35454;
	sub_82A37178(ctx, base);
loc_82A35454:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82a32768
	ctx.lr = 0x82A35490;
	sub_82A32768(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r6,75(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82a354c8
	if (!ctx.cr6.gt) goto loc_82A354C8;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a354c4
	if (ctx.cr6.lt) goto loc_82A354C4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A354C4;
	sub_82A306A0(ctx, base);
loc_82A354C4:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A354C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82a34d60
	ctx.lr = 0x82A354DC;
	sub_82A34D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32cb8
	ctx.lr = 0x82A354E4;
	sub_82A32CB8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A35500;
	sub_82A374B8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a35520
	if (ctx.cr6.eq) goto loc_82A35520;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r26,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// oris r4,r10,32767
	ctx.r4.u64 = ctx.r10.u64 | 2147418112;
	// ori r4,r4,32799
	ctx.r4.u64 = ctx.r4.u64 | 32799;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82a35538
	goto loc_82A35538;
loc_82A35520:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,33
	ctx.r4.s64 = 33;
	// or r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 | ctx.r26.u64;
	// rlwimi r4,r9,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82A35538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A35540;
	sub_82A38CC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r25.u32);
	// bne cr6,0x82a35568
	if (!ctx.cr6.eq) goto loc_82A35568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A35568;
	sub_82A37178(ctx, base);
loc_82A35568:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a35598
	if (!ctx.cr6.eq) goto loc_82A35598;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A35590;
	sub_82A374B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_82A35598:
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a373b8
	ctx.lr = 0x82A355A8;
	sub_82A373B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

