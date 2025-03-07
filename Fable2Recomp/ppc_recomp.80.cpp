#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826583F4"))) PPC_WEAK_FUNC(sub_826583F4);
PPC_FUNC_IMPL(__imp__sub_826583F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826583F8"))) PPC_WEAK_FUNC(sub_826583F8);
PPC_FUNC_IMPL(__imp__sub_826583F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82658400;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658560
	if (ctx.cr6.eq) goto loc_82658560;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29648
	ctx.r4.s64 = ctx.r11.s64 + -29648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658428;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658440
	if (!ctx.cr6.eq) goto loc_82658440;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658444
	goto loc_82658444;
loc_82658440:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265844C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-31240
	ctx.r9.s64 = ctx.r11.s64 + -31240;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265847C;
	sub_821F0108(ctx, base);
	// li r7,121
	ctx.r7.s64 = 121;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658498;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826584b0
	if (!ctx.cr6.eq) goto loc_826584B0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826584bc
	goto loc_826584BC;
loc_826584B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826584BC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826584f8
	if (!ctx.cr6.lt) goto loc_826584F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826584ec
	if (ctx.cr6.eq) goto loc_826584EC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826584EC;
	sub_82668718(ctx, base);
loc_826584EC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658514
	goto loc_82658514;
loc_826584F8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658514;
	sub_82668848(ctx, base);
loc_82658514:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265851C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658534;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658544;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265854C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658558;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82658560;
	sub_82214F08(ctx, base);
loc_82658560:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82658568"))) PPC_WEAK_FUNC(sub_82658568);
PPC_FUNC_IMPL(__imp__sub_82658568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658570;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826586d4
	if (ctx.cr6.eq) goto loc_826586D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29976
	ctx.r4.s64 = ctx.r11.s64 + 29976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265859C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826585b4
	if (!ctx.cr6.eq) goto loc_826585B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826585b8
	goto loc_826585B8;
loc_826585B4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826585B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826585C0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-31080
	ctx.r9.s64 = ctx.r11.s64 + -31080;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826585F0;
	sub_821F0108(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265860C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658624
	if (!ctx.cr6.eq) goto loc_82658624;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658630
	goto loc_82658630;
loc_82658624:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658630:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265866c
	if (!ctx.cr6.lt) goto loc_8265866C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658660
	if (ctx.cr6.eq) goto loc_82658660;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658660;
	sub_82668718(ctx, base);
loc_82658660:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658688
	goto loc_82658688;
loc_8265866C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658688;
	sub_82668848(ctx, base);
loc_82658688:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658690;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826586A8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826586B8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826586C0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826586CC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826586D4;
	sub_82214F08(ctx, base);
loc_826586D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826586e4
	if (ctx.cr6.eq) goto loc_826586E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b2ce0
	ctx.lr = 0x826586E4;
	sub_823B2CE0(ctx, base);
loc_826586E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826586EC"))) PPC_WEAK_FUNC(sub_826586EC);
PPC_FUNC_IMPL(__imp__sub_826586EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826586F0"))) PPC_WEAK_FUNC(sub_826586F0);
PPC_FUNC_IMPL(__imp__sub_826586F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826586F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265885c
	if (ctx.cr6.eq) goto loc_8265885C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18308
	ctx.r4.s64 = ctx.r11.s64 + 18308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658724;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265873c
	if (!ctx.cr6.eq) goto loc_8265873C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658740
	goto loc_82658740;
loc_8265873C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658740:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82658748;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30632
	ctx.r9.s64 = ctx.r11.s64 + -30632;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658778;
	sub_821F0108(ctx, base);
	// li r7,65
	ctx.r7.s64 = 65;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658794;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826587ac
	if (!ctx.cr6.eq) goto loc_826587AC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826587b8
	goto loc_826587B8;
loc_826587AC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826587B8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826587f4
	if (!ctx.cr6.lt) goto loc_826587F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826587e8
	if (ctx.cr6.eq) goto loc_826587E8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826587E8;
	sub_82668718(ctx, base);
loc_826587E8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658810
	goto loc_82658810;
loc_826587F4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658810;
	sub_82668848(ctx, base);
loc_82658810:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658818;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658830;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658840;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82658848;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658854;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265885C;
	sub_82214F08(ctx, base);
loc_8265885C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265886c
	if (ctx.cr6.eq) goto loc_8265886C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e32e0
	ctx.lr = 0x8265886C;
	sub_825E32E0(ctx, base);
loc_8265886C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82658874"))) PPC_WEAK_FUNC(sub_82658874);
PPC_FUNC_IMPL(__imp__sub_82658874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658878"))) PPC_WEAK_FUNC(sub_82658878);
PPC_FUNC_IMPL(__imp__sub_82658878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658880;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826589e4
	if (ctx.cr6.eq) goto loc_826589E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29544
	ctx.r4.s64 = ctx.r11.s64 + -29544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826588AC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826588c4
	if (!ctx.cr6.eq) goto loc_826588C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826588c8
	goto loc_826588C8;
loc_826588C4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826588C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826588D0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30544
	ctx.r9.s64 = ctx.r11.s64 + -30544;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658900;
	sub_821F0108(ctx, base);
	// li r7,66
	ctx.r7.s64 = 66;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265891C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658934
	if (!ctx.cr6.eq) goto loc_82658934;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658940
	goto loc_82658940;
loc_82658934:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658940:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265897c
	if (!ctx.cr6.lt) goto loc_8265897C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658970
	if (ctx.cr6.eq) goto loc_82658970;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658970;
	sub_82668718(ctx, base);
loc_82658970:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658998
	goto loc_82658998;
loc_8265897C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658998;
	sub_82668848(ctx, base);
loc_82658998:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826589A0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826589B8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826589C8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826589D0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826589DC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826589E4;
	sub_82214F08(ctx, base);
loc_826589E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826589f4
	if (ctx.cr6.eq) goto loc_826589F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8297efa0
	ctx.lr = 0x826589F4;
	sub_8297EFA0(ctx, base);
loc_826589F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826589FC"))) PPC_WEAK_FUNC(sub_826589FC);
PPC_FUNC_IMPL(__imp__sub_826589FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658A00"))) PPC_WEAK_FUNC(sub_82658A00);
PPC_FUNC_IMPL(__imp__sub_82658A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658A08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658b6c
	if (ctx.cr6.eq) goto loc_82658B6C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30116
	ctx.r4.s64 = ctx.r11.s64 + 30116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658A34;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658a4c
	if (!ctx.cr6.eq) goto loc_82658A4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658a50
	goto loc_82658A50;
loc_82658A4C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658A50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82658A58;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30424
	ctx.r9.s64 = ctx.r11.s64 + -30424;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658A88;
	sub_821F0108(ctx, base);
	// li r7,122
	ctx.r7.s64 = 122;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658AA4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658abc
	if (!ctx.cr6.eq) goto loc_82658ABC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658ac8
	goto loc_82658AC8;
loc_82658ABC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658AC8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82658b04
	if (!ctx.cr6.lt) goto loc_82658B04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658af8
	if (ctx.cr6.eq) goto loc_82658AF8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658AF8;
	sub_82668718(ctx, base);
loc_82658AF8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658b20
	goto loc_82658B20;
loc_82658B04:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658B20;
	sub_82668848(ctx, base);
loc_82658B20:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658B28;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658B40;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658B50;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82658B58;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658B64;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82658B6C;
	sub_82214F08(ctx, base);
loc_82658B6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82658b7c
	if (ctx.cr6.eq) goto loc_82658B7C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824d2b00
	ctx.lr = 0x82658B7C;
	sub_824D2B00(ctx, base);
loc_82658B7C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82658B84"))) PPC_WEAK_FUNC(sub_82658B84);
PPC_FUNC_IMPL(__imp__sub_82658B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658B88"))) PPC_WEAK_FUNC(sub_82658B88);
PPC_FUNC_IMPL(__imp__sub_82658B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658B90;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658cf4
	if (ctx.cr6.eq) goto loc_82658CF4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29524
	ctx.r4.s64 = ctx.r11.s64 + -29524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658BBC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658bd4
	if (!ctx.cr6.eq) goto loc_82658BD4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658bd8
	goto loc_82658BD8;
loc_82658BD4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658BD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82658BE0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30256
	ctx.r9.s64 = ctx.r11.s64 + -30256;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658C10;
	sub_821F0108(ctx, base);
	// li r7,41
	ctx.r7.s64 = 41;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658C2C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658c44
	if (!ctx.cr6.eq) goto loc_82658C44;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658c50
	goto loc_82658C50;
loc_82658C44:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658C50:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82658c8c
	if (!ctx.cr6.lt) goto loc_82658C8C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658c80
	if (ctx.cr6.eq) goto loc_82658C80;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658C80;
	sub_82668718(ctx, base);
loc_82658C80:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658ca8
	goto loc_82658CA8;
loc_82658C8C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658CA8;
	sub_82668848(ctx, base);
loc_82658CA8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658CB0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658CC8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658CD8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82658CE0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658CEC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82658CF4;
	sub_82214F08(ctx, base);
loc_82658CF4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82658d04
	if (ctx.cr6.eq) goto loc_82658D04;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82983f58
	ctx.lr = 0x82658D04;
	sub_82983F58(ctx, base);
loc_82658D04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82658D0C"))) PPC_WEAK_FUNC(sub_82658D0C);
PPC_FUNC_IMPL(__imp__sub_82658D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658D10"))) PPC_WEAK_FUNC(sub_82658D10);
PPC_FUNC_IMPL(__imp__sub_82658D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658D18;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658e7c
	if (ctx.cr6.eq) goto loc_82658E7C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29508
	ctx.r4.s64 = ctx.r11.s64 + -29508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658D44;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658d5c
	if (!ctx.cr6.eq) goto loc_82658D5C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658d60
	goto loc_82658D60;
loc_82658D5C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658D60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82658D68;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30120
	ctx.r9.s64 = ctx.r11.s64 + -30120;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658D98;
	sub_821F0108(ctx, base);
	// li r7,123
	ctx.r7.s64 = 123;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658DB4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658dcc
	if (!ctx.cr6.eq) goto loc_82658DCC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658dd8
	goto loc_82658DD8;
loc_82658DCC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658DD8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82658e14
	if (!ctx.cr6.lt) goto loc_82658E14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658e08
	if (ctx.cr6.eq) goto loc_82658E08;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658E08;
	sub_82668718(ctx, base);
loc_82658E08:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658e30
	goto loc_82658E30;
loc_82658E14:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658E30;
	sub_82668848(ctx, base);
loc_82658E30:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658E38;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658E50;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658E60;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82658E68;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658E74;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82658E7C;
	sub_82214F08(ctx, base);
loc_82658E7C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82658e8c
	if (ctx.cr6.eq) goto loc_82658E8C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82940140
	ctx.lr = 0x82658E8C;
	sub_82940140(ctx, base);
loc_82658E8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82658E94"))) PPC_WEAK_FUNC(sub_82658E94);
PPC_FUNC_IMPL(__imp__sub_82658E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658E98"))) PPC_WEAK_FUNC(sub_82658E98);
PPC_FUNC_IMPL(__imp__sub_82658E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82658EA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659004
	if (ctx.cr6.eq) goto loc_82659004;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82658ECC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658ee4
	if (!ctx.cr6.eq) goto loc_82658EE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82658ee8
	goto loc_82658EE8;
loc_82658EE4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82658EE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82658EF0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29968
	ctx.r9.s64 = ctx.r11.s64 + -29968;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82658F20;
	sub_821F0108(ctx, base);
	// li r7,37
	ctx.r7.s64 = 37;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82658F3C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82658f54
	if (!ctx.cr6.eq) goto loc_82658F54;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82658f60
	goto loc_82658F60;
loc_82658F54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82658F60:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82658f9c
	if (!ctx.cr6.lt) goto loc_82658F9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658f90
	if (ctx.cr6.eq) goto loc_82658F90;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82658F90;
	sub_82668718(ctx, base);
loc_82658F90:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82658fb8
	goto loc_82658FB8;
loc_82658F9C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82658FB8;
	sub_82668848(ctx, base);
loc_82658FB8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82658FC0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82658FD8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82658FE8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82658FF0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82658FFC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659004;
	sub_82214F08(ctx, base);
loc_82659004:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659014
	if (ctx.cr6.eq) goto loc_82659014;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82531978
	ctx.lr = 0x82659014;
	sub_82531978(ctx, base);
loc_82659014:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265901C"))) PPC_WEAK_FUNC(sub_8265901C);
PPC_FUNC_IMPL(__imp__sub_8265901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659020"))) PPC_WEAK_FUNC(sub_82659020);
PPC_FUNC_IMPL(__imp__sub_82659020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82659028;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659188
	if (ctx.cr6.eq) goto loc_82659188;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29484
	ctx.r4.s64 = ctx.r11.s64 + -29484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659050;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659068
	if (!ctx.cr6.eq) goto loc_82659068;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265906c
	goto loc_8265906C;
loc_82659068:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265906C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659074;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29880
	ctx.r9.s64 = ctx.r11.s64 + -29880;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826590A4;
	sub_821F0108(ctx, base);
	// li r7,124
	ctx.r7.s64 = 124;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826590C0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826590d8
	if (!ctx.cr6.eq) goto loc_826590D8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826590e4
	goto loc_826590E4;
loc_826590D8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826590E4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659120
	if (!ctx.cr6.lt) goto loc_82659120;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659114
	if (ctx.cr6.eq) goto loc_82659114;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659114;
	sub_82668718(ctx, base);
loc_82659114:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265913c
	goto loc_8265913C;
loc_82659120:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265913C;
	sub_82668848(ctx, base);
loc_8265913C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659144;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265915C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265916C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659174;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659180;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659188;
	sub_82214F08(ctx, base);
loc_82659188:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82659190"))) PPC_WEAK_FUNC(sub_82659190);
PPC_FUNC_IMPL(__imp__sub_82659190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659198;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826592fc
	if (ctx.cr6.eq) goto loc_826592FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29476
	ctx.r4.s64 = ctx.r11.s64 + -29476;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826591C4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826591dc
	if (!ctx.cr6.eq) goto loc_826591DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826591e0
	goto loc_826591E0;
loc_826591DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826591E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826591E8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29792
	ctx.r9.s64 = ctx.r11.s64 + -29792;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659218;
	sub_821F0108(ctx, base);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82659234;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265924c
	if (!ctx.cr6.eq) goto loc_8265924C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659258
	goto loc_82659258;
loc_8265924C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659258:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659294
	if (!ctx.cr6.lt) goto loc_82659294;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659288
	if (ctx.cr6.eq) goto loc_82659288;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659288;
	sub_82668718(ctx, base);
loc_82659288:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826592b0
	goto loc_826592B0;
loc_82659294:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826592B0;
	sub_82668848(ctx, base);
loc_826592B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826592B8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826592D0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826592E0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826592E8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826592F4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826592FC;
	sub_82214F08(ctx, base);
loc_826592FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265930c
	if (ctx.cr6.eq) goto loc_8265930C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827b12d0
	ctx.lr = 0x8265930C;
	sub_827B12D0(ctx, base);
loc_8265930C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82659314"))) PPC_WEAK_FUNC(sub_82659314);
PPC_FUNC_IMPL(__imp__sub_82659314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659318"))) PPC_WEAK_FUNC(sub_82659318);
PPC_FUNC_IMPL(__imp__sub_82659318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659320;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659484
	if (ctx.cr6.eq) goto loc_82659484;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29460
	ctx.r4.s64 = ctx.r11.s64 + -29460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265934C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659364
	if (!ctx.cr6.eq) goto loc_82659364;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659368
	goto loc_82659368;
loc_82659364:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659368:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659370;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29648
	ctx.r9.s64 = ctx.r11.s64 + -29648;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826593A0;
	sub_821F0108(ctx, base);
	// li r7,125
	ctx.r7.s64 = 125;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826593BC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826593d4
	if (!ctx.cr6.eq) goto loc_826593D4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826593e0
	goto loc_826593E0;
loc_826593D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826593E0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265941c
	if (!ctx.cr6.lt) goto loc_8265941C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659410
	if (ctx.cr6.eq) goto loc_82659410;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659410;
	sub_82668718(ctx, base);
loc_82659410:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659438
	goto loc_82659438;
loc_8265941C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659438;
	sub_82668848(ctx, base);
loc_82659438:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659440;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659458;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659468;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659470;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265947C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659484;
	sub_82214F08(ctx, base);
loc_82659484:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659504
	if (ctx.cr6.eq) goto loc_82659504;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-17352
	ctx.r31.s64 = ctx.r11.s64 + -17352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826594A4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829459e0
	ctx.lr = 0x826594B0;
	sub_829459E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826594B8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-17336
	ctx.r4.s64 = ctx.r10.s64 + -17336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826594CC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826594DC;
	sub_8222CF18(ctx, base);
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,21592
	ctx.r6.s64 = ctx.r9.s64 + 21592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82945c28
	ctx.lr = 0x826594F4;
	sub_82945C28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826594FC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659504;
	sub_82214F08(ctx, base);
loc_82659504:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265950C"))) PPC_WEAK_FUNC(sub_8265950C);
PPC_FUNC_IMPL(__imp__sub_8265950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659510"))) PPC_WEAK_FUNC(sub_82659510);
PPC_FUNC_IMPL(__imp__sub_82659510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659518;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265967c
	if (ctx.cr6.eq) goto loc_8265967C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29444
	ctx.r4.s64 = ctx.r11.s64 + -29444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659544;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265955c
	if (!ctx.cr6.eq) goto loc_8265955C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659560
	goto loc_82659560;
loc_8265955C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659560:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659568;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29520
	ctx.r9.s64 = ctx.r11.s64 + -29520;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659598;
	sub_821F0108(ctx, base);
	// li r7,126
	ctx.r7.s64 = 126;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826595B4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826595cc
	if (!ctx.cr6.eq) goto loc_826595CC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826595d8
	goto loc_826595D8;
loc_826595CC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826595D8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659614
	if (!ctx.cr6.lt) goto loc_82659614;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659608
	if (ctx.cr6.eq) goto loc_82659608;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659608;
	sub_82668718(ctx, base);
loc_82659608:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659630
	goto loc_82659630;
loc_82659614:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659630;
	sub_82668848(ctx, base);
loc_82659630:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659638;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659650;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659660;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659668;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659674;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265967C;
	sub_82214F08(ctx, base);
loc_8265967C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265968c
	if (ctx.cr6.eq) goto loc_8265968C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829486e8
	ctx.lr = 0x8265968C;
	sub_829486E8(ctx, base);
loc_8265968C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82659694"))) PPC_WEAK_FUNC(sub_82659694);
PPC_FUNC_IMPL(__imp__sub_82659694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659698"))) PPC_WEAK_FUNC(sub_82659698);
PPC_FUNC_IMPL(__imp__sub_82659698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826596A0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659804
	if (ctx.cr6.eq) goto loc_82659804;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29428
	ctx.r4.s64 = ctx.r11.s64 + -29428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826596CC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826596e4
	if (!ctx.cr6.eq) goto loc_826596E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826596e8
	goto loc_826596E8;
loc_826596E4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826596E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826596F0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29392
	ctx.r9.s64 = ctx.r11.s64 + -29392;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659720;
	sub_821F0108(ctx, base);
	// li r7,127
	ctx.r7.s64 = 127;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265973C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659754
	if (!ctx.cr6.eq) goto loc_82659754;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659760
	goto loc_82659760;
loc_82659754:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659760:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265979c
	if (!ctx.cr6.lt) goto loc_8265979C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659790
	if (ctx.cr6.eq) goto loc_82659790;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659790;
	sub_82668718(ctx, base);
loc_82659790:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826597b8
	goto loc_826597B8;
loc_8265979C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826597B8;
	sub_82668848(ctx, base);
loc_826597B8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826597C0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826597D8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826597E8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826597F0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826597FC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659804;
	sub_82214F08(ctx, base);
loc_82659804:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659814
	if (ctx.cr6.eq) goto loc_82659814;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8294beb0
	ctx.lr = 0x82659814;
	sub_8294BEB0(ctx, base);
loc_82659814:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265981C"))) PPC_WEAK_FUNC(sub_8265981C);
PPC_FUNC_IMPL(__imp__sub_8265981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659820"))) PPC_WEAK_FUNC(sub_82659820);
PPC_FUNC_IMPL(__imp__sub_82659820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659828;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265998c
	if (ctx.cr6.eq) goto loc_8265998C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29412
	ctx.r4.s64 = ctx.r11.s64 + -29412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659854;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265986c
	if (!ctx.cr6.eq) goto loc_8265986C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659870
	goto loc_82659870;
loc_8265986C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659870:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659878;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-29112
	ctx.r9.s64 = ctx.r11.s64 + -29112;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826598A8;
	sub_821F0108(ctx, base);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826598C4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826598dc
	if (!ctx.cr6.eq) goto loc_826598DC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826598e8
	goto loc_826598E8;
loc_826598DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826598E8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659924
	if (!ctx.cr6.lt) goto loc_82659924;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659918
	if (ctx.cr6.eq) goto loc_82659918;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659918;
	sub_82668718(ctx, base);
loc_82659918:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659940
	goto loc_82659940;
loc_82659924:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659940;
	sub_82668848(ctx, base);
loc_82659940:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659948;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659960;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659970;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659978;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659984;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265998C;
	sub_82214F08(ctx, base);
loc_8265998C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659a0c
	if (ctx.cr6.eq) goto loc_82659A0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-31488
	ctx.r31.s64 = ctx.r11.s64 + -31488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826599AC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827e93d0
	ctx.lr = 0x826599B8;
	sub_827E93D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826599C0;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-31476
	ctx.r4.s64 = ctx.r10.s64 + -31476;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826599D4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826599E4;
	sub_8222CF18(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-5136
	ctx.r6.s64 = ctx.r9.s64 + -5136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827e9618
	ctx.lr = 0x826599FC;
	sub_827E9618(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659A04;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659A0C;
	sub_82214F08(ctx, base);
loc_82659A0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82659A14"))) PPC_WEAK_FUNC(sub_82659A14);
PPC_FUNC_IMPL(__imp__sub_82659A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659A18"))) PPC_WEAK_FUNC(sub_82659A18);
PPC_FUNC_IMPL(__imp__sub_82659A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659A20;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659b84
	if (ctx.cr6.eq) goto loc_82659B84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29396
	ctx.r4.s64 = ctx.r11.s64 + -29396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659A4C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659a64
	if (!ctx.cr6.eq) goto loc_82659A64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659a68
	goto loc_82659A68;
loc_82659A64:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659A68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659A70;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28984
	ctx.r9.s64 = ctx.r11.s64 + -28984;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659AA0;
	sub_821F0108(ctx, base);
	// li r7,129
	ctx.r7.s64 = 129;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82659ABC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659ad4
	if (!ctx.cr6.eq) goto loc_82659AD4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659ae0
	goto loc_82659AE0;
loc_82659AD4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659AE0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659b1c
	if (!ctx.cr6.lt) goto loc_82659B1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659b10
	if (ctx.cr6.eq) goto loc_82659B10;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659B10;
	sub_82668718(ctx, base);
loc_82659B10:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659b38
	goto loc_82659B38;
loc_82659B1C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659B38;
	sub_82668848(ctx, base);
loc_82659B38:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659B40;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659B58;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659B68;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659B70;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659B7C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659B84;
	sub_82214F08(ctx, base);
loc_82659B84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659b94
	if (ctx.cr6.eq) goto loc_82659B94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8294ff30
	ctx.lr = 0x82659B94;
	sub_8294FF30(ctx, base);
loc_82659B94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82659B9C"))) PPC_WEAK_FUNC(sub_82659B9C);
PPC_FUNC_IMPL(__imp__sub_82659B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659BA0"))) PPC_WEAK_FUNC(sub_82659BA0);
PPC_FUNC_IMPL(__imp__sub_82659BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659BA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659d0c
	if (ctx.cr6.eq) goto loc_82659D0C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,7140
	ctx.r4.s64 = ctx.r11.s64 + 7140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659BD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659bec
	if (!ctx.cr6.eq) goto loc_82659BEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659bf0
	goto loc_82659BF0;
loc_82659BEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659BF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659BF8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28872
	ctx.r9.s64 = ctx.r11.s64 + -28872;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659C28;
	sub_821F0108(ctx, base);
	// li r7,133
	ctx.r7.s64 = 133;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82659C44;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659c5c
	if (!ctx.cr6.eq) goto loc_82659C5C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659c68
	goto loc_82659C68;
loc_82659C5C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659C68:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659ca4
	if (!ctx.cr6.lt) goto loc_82659CA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659c98
	if (ctx.cr6.eq) goto loc_82659C98;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659C98;
	sub_82668718(ctx, base);
loc_82659C98:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659cc0
	goto loc_82659CC0;
loc_82659CA4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659CC0;
	sub_82668848(ctx, base);
loc_82659CC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659CC8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659CE0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659CF0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659CF8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659D04;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659D0C;
	sub_82214F08(ctx, base);
loc_82659D0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82659d1c
	if (ctx.cr6.eq) goto loc_82659D1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82540078
	ctx.lr = 0x82659D1C;
	sub_82540078(ctx, base);
loc_82659D1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82659D24"))) PPC_WEAK_FUNC(sub_82659D24);
PPC_FUNC_IMPL(__imp__sub_82659D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659D28"))) PPC_WEAK_FUNC(sub_82659D28);
PPC_FUNC_IMPL(__imp__sub_82659D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82659D30;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659e90
	if (ctx.cr6.eq) goto loc_82659E90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29376
	ctx.r4.s64 = ctx.r11.s64 + -29376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659D58;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659d70
	if (!ctx.cr6.eq) goto loc_82659D70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659d74
	goto loc_82659D74;
loc_82659D70:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659D74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659D7C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28744
	ctx.r9.s64 = ctx.r11.s64 + -28744;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659DAC;
	sub_821F0108(ctx, base);
	// li r7,130
	ctx.r7.s64 = 130;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82659DC8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659de0
	if (!ctx.cr6.eq) goto loc_82659DE0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659dec
	goto loc_82659DEC;
loc_82659DE0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659DEC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659e28
	if (!ctx.cr6.lt) goto loc_82659E28;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659e1c
	if (ctx.cr6.eq) goto loc_82659E1C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659E1C;
	sub_82668718(ctx, base);
loc_82659E1C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659e44
	goto loc_82659E44;
loc_82659E28:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659E44;
	sub_82668848(ctx, base);
loc_82659E44:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659E4C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659E64;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659E74;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659E7C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659E88;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82659E90;
	sub_82214F08(ctx, base);
loc_82659E90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82659E98"))) PPC_WEAK_FUNC(sub_82659E98);
PPC_FUNC_IMPL(__imp__sub_82659E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82659EA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a004
	if (ctx.cr6.eq) goto loc_8265A004;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13020
	ctx.r4.s64 = ctx.r11.s64 + 13020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82659ECC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659ee4
	if (!ctx.cr6.eq) goto loc_82659EE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82659ee8
	goto loc_82659EE8;
loc_82659EE4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82659EE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82659EF0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28440
	ctx.r9.s64 = ctx.r11.s64 + -28440;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82659F20;
	sub_821F0108(ctx, base);
	// li r7,131
	ctx.r7.s64 = 131;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82659F3C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659f54
	if (!ctx.cr6.eq) goto loc_82659F54;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82659f60
	goto loc_82659F60;
loc_82659F54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82659F60:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82659f9c
	if (!ctx.cr6.lt) goto loc_82659F9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659f90
	if (ctx.cr6.eq) goto loc_82659F90;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82659F90;
	sub_82668718(ctx, base);
loc_82659F90:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82659fb8
	goto loc_82659FB8;
loc_82659F9C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82659FB8;
	sub_82668848(ctx, base);
loc_82659FB8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82659FC0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82659FD8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82659FE8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82659FF0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82659FFC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A004;
	sub_82214F08(ctx, base);
loc_8265A004:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a014
	if (ctx.cr6.eq) goto loc_8265A014;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82451948
	ctx.lr = 0x8265A014;
	sub_82451948(ctx, base);
loc_8265A014:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A01C"))) PPC_WEAK_FUNC(sub_8265A01C);
PPC_FUNC_IMPL(__imp__sub_8265A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A020"))) PPC_WEAK_FUNC(sub_8265A020);
PPC_FUNC_IMPL(__imp__sub_8265A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A028;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a18c
	if (ctx.cr6.eq) goto loc_8265A18C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29360
	ctx.r4.s64 = ctx.r11.s64 + -29360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A054;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a06c
	if (!ctx.cr6.eq) goto loc_8265A06C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a070
	goto loc_8265A070;
loc_8265A06C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A078;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28352
	ctx.r9.s64 = ctx.r11.s64 + -28352;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A0A8;
	sub_821F0108(ctx, base);
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A0C4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a0dc
	if (!ctx.cr6.eq) goto loc_8265A0DC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a0e8
	goto loc_8265A0E8;
loc_8265A0DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A0E8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a124
	if (!ctx.cr6.lt) goto loc_8265A124;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a118
	if (ctx.cr6.eq) goto loc_8265A118;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A118;
	sub_82668718(ctx, base);
loc_8265A118:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a140
	goto loc_8265A140;
loc_8265A124:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A140;
	sub_82668848(ctx, base);
loc_8265A140:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A148;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A160;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A170;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A178;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A184;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A18C;
	sub_82214F08(ctx, base);
loc_8265A18C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a20c
	if (ctx.cr6.eq) goto loc_8265A20C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-1528
	ctx.r31.s64 = ctx.r11.s64 + -1528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265A1AC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8288c380
	ctx.lr = 0x8265A1B8;
	sub_8288C380(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A1C0;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-1508
	ctx.r4.s64 = ctx.r10.s64 + -1508;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265A1D4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A1E4;
	sub_8222CF18(ctx, base);
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-10424
	ctx.r6.s64 = ctx.r9.s64 + -10424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8288c5c8
	ctx.lr = 0x8265A1FC;
	sub_8288C5C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A204;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A20C;
	sub_82214F08(ctx, base);
loc_8265A20C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A214"))) PPC_WEAK_FUNC(sub_8265A214);
PPC_FUNC_IMPL(__imp__sub_8265A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A218"))) PPC_WEAK_FUNC(sub_8265A218);
PPC_FUNC_IMPL(__imp__sub_8265A218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A220;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a384
	if (ctx.cr6.eq) goto loc_8265A384;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-14152
	ctx.r4.s64 = ctx.r11.s64 + -14152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A24C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a264
	if (!ctx.cr6.eq) goto loc_8265A264;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a268
	goto loc_8265A268;
loc_8265A264:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A270;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28216
	ctx.r9.s64 = ctx.r11.s64 + -28216;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A2A0;
	sub_821F0108(ctx, base);
	// li r7,134
	ctx.r7.s64 = 134;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A2BC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a2d4
	if (!ctx.cr6.eq) goto loc_8265A2D4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a2e0
	goto loc_8265A2E0;
loc_8265A2D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A2E0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a31c
	if (!ctx.cr6.lt) goto loc_8265A31C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a310
	if (ctx.cr6.eq) goto loc_8265A310;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A310;
	sub_82668718(ctx, base);
loc_8265A310:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a338
	goto loc_8265A338;
loc_8265A31C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A338;
	sub_82668848(ctx, base);
loc_8265A338:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A340;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A358;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A368;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A370;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A37C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A384;
	sub_82214F08(ctx, base);
loc_8265A384:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a394
	if (ctx.cr6.eq) goto loc_8265A394;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82526808
	ctx.lr = 0x8265A394;
	sub_82526808(ctx, base);
loc_8265A394:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A39C"))) PPC_WEAK_FUNC(sub_8265A39C);
PPC_FUNC_IMPL(__imp__sub_8265A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A3A0"))) PPC_WEAK_FUNC(sub_8265A3A0);
PPC_FUNC_IMPL(__imp__sub_8265A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A3A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a50c
	if (ctx.cr6.eq) goto loc_8265A50C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29340
	ctx.r4.s64 = ctx.r11.s64 + -29340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A3D4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a3ec
	if (!ctx.cr6.eq) goto loc_8265A3EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a3f0
	goto loc_8265A3F0;
loc_8265A3EC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A3F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A3F8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-27832
	ctx.r9.s64 = ctx.r11.s64 + -27832;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A428;
	sub_821F0108(ctx, base);
	// li r7,35
	ctx.r7.s64 = 35;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A444;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a45c
	if (!ctx.cr6.eq) goto loc_8265A45C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a468
	goto loc_8265A468;
loc_8265A45C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A468:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a4a4
	if (!ctx.cr6.lt) goto loc_8265A4A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a498
	if (ctx.cr6.eq) goto loc_8265A498;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A498;
	sub_82668718(ctx, base);
loc_8265A498:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a4c0
	goto loc_8265A4C0;
loc_8265A4A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A4C0;
	sub_82668848(ctx, base);
loc_8265A4C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A4C8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A4E0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A4F0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A4F8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A504;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A50C;
	sub_82214F08(ctx, base);
loc_8265A50C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a51c
	if (ctx.cr6.eq) goto loc_8265A51C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82864f40
	ctx.lr = 0x8265A51C;
	sub_82864F40(ctx, base);
loc_8265A51C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A524"))) PPC_WEAK_FUNC(sub_8265A524);
PPC_FUNC_IMPL(__imp__sub_8265A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A528"))) PPC_WEAK_FUNC(sub_8265A528);
PPC_FUNC_IMPL(__imp__sub_8265A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A530;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a694
	if (ctx.cr6.eq) goto loc_8265A694;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30312
	ctx.r4.s64 = ctx.r11.s64 + 30312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A55C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a574
	if (!ctx.cr6.eq) goto loc_8265A574;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a578
	goto loc_8265A578;
loc_8265A574:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A580;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-27552
	ctx.r9.s64 = ctx.r11.s64 + -27552;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A5B0;
	sub_821F0108(ctx, base);
	// li r7,135
	ctx.r7.s64 = 135;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A5CC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a5e4
	if (!ctx.cr6.eq) goto loc_8265A5E4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a5f0
	goto loc_8265A5F0;
loc_8265A5E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A5F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a62c
	if (!ctx.cr6.lt) goto loc_8265A62C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a620
	if (ctx.cr6.eq) goto loc_8265A620;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A620;
	sub_82668718(ctx, base);
loc_8265A620:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a648
	goto loc_8265A648;
loc_8265A62C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A648;
	sub_82668848(ctx, base);
loc_8265A648:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A650;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A668;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A678;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A680;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A68C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A694;
	sub_82214F08(ctx, base);
loc_8265A694:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a6a4
	if (ctx.cr6.eq) goto loc_8265A6A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a1980
	ctx.lr = 0x8265A6A4;
	sub_823A1980(ctx, base);
loc_8265A6A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A6AC"))) PPC_WEAK_FUNC(sub_8265A6AC);
PPC_FUNC_IMPL(__imp__sub_8265A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A6B0"))) PPC_WEAK_FUNC(sub_8265A6B0);
PPC_FUNC_IMPL(__imp__sub_8265A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A6B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a81c
	if (ctx.cr6.eq) goto loc_8265A81C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29320
	ctx.r4.s64 = ctx.r11.s64 + -29320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A6E4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a6fc
	if (!ctx.cr6.eq) goto loc_8265A6FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a700
	goto loc_8265A700;
loc_8265A6FC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A708;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-27464
	ctx.r9.s64 = ctx.r11.s64 + -27464;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A738;
	sub_821F0108(ctx, base);
	// li r7,136
	ctx.r7.s64 = 136;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A754;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a76c
	if (!ctx.cr6.eq) goto loc_8265A76C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a778
	goto loc_8265A778;
loc_8265A76C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A778:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a7b4
	if (!ctx.cr6.lt) goto loc_8265A7B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a7a8
	if (ctx.cr6.eq) goto loc_8265A7A8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A7A8;
	sub_82668718(ctx, base);
loc_8265A7A8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a7d0
	goto loc_8265A7D0;
loc_8265A7B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A7D0;
	sub_82668848(ctx, base);
loc_8265A7D0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A7D8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A7F0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A800;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A808;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A814;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A81C;
	sub_82214F08(ctx, base);
loc_8265A81C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a82c
	if (ctx.cr6.eq) goto loc_8265A82C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82821dd8
	ctx.lr = 0x8265A82C;
	sub_82821DD8(ctx, base);
loc_8265A82C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A834"))) PPC_WEAK_FUNC(sub_8265A834);
PPC_FUNC_IMPL(__imp__sub_8265A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A838"))) PPC_WEAK_FUNC(sub_8265A838);
PPC_FUNC_IMPL(__imp__sub_8265A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A840;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a9a4
	if (ctx.cr6.eq) goto loc_8265A9A4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-16724
	ctx.r4.s64 = ctx.r11.s64 + -16724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A86C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a884
	if (!ctx.cr6.eq) goto loc_8265A884;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265a888
	goto loc_8265A888;
loc_8265A884:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265A888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265A890;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26960
	ctx.r9.s64 = ctx.r11.s64 + -26960;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265A8C0;
	sub_821F0108(ctx, base);
	// li r7,137
	ctx.r7.s64 = 137;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265A8DC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a8f4
	if (!ctx.cr6.eq) goto loc_8265A8F4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265a900
	goto loc_8265A900;
loc_8265A8F4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265A900:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265a93c
	if (!ctx.cr6.lt) goto loc_8265A93C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a930
	if (ctx.cr6.eq) goto loc_8265A930;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265A930;
	sub_82668718(ctx, base);
loc_8265A930:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265a958
	goto loc_8265A958;
loc_8265A93C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265A958;
	sub_82668848(ctx, base);
loc_8265A958:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265A960;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265A978;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265A988;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265A990;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265A99C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265A9A4;
	sub_82214F08(ctx, base);
loc_8265A9A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a9b4
	if (ctx.cr6.eq) goto loc_8265A9B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823bbf68
	ctx.lr = 0x8265A9B4;
	sub_823BBF68(ctx, base);
loc_8265A9B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265A9BC"))) PPC_WEAK_FUNC(sub_8265A9BC);
PPC_FUNC_IMPL(__imp__sub_8265A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A9C0"))) PPC_WEAK_FUNC(sub_8265A9C0);
PPC_FUNC_IMPL(__imp__sub_8265A9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265A9C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ab2c
	if (ctx.cr6.eq) goto loc_8265AB2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29280
	ctx.r4.s64 = ctx.r11.s64 + -29280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265A9F4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265aa0c
	if (!ctx.cr6.eq) goto loc_8265AA0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265aa10
	goto loc_8265AA10;
loc_8265AA0C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265AA10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265AA18;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26744
	ctx.r9.s64 = ctx.r11.s64 + -26744;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265AA48;
	sub_821F0108(ctx, base);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265AA64;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265aa7c
	if (!ctx.cr6.eq) goto loc_8265AA7C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265aa88
	goto loc_8265AA88;
loc_8265AA7C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265AA88:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265aac4
	if (!ctx.cr6.lt) goto loc_8265AAC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265aab8
	if (ctx.cr6.eq) goto loc_8265AAB8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265AAB8;
	sub_82668718(ctx, base);
loc_8265AAB8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265aae0
	goto loc_8265AAE0;
loc_8265AAC4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265AAE0;
	sub_82668848(ctx, base);
loc_8265AAE0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265AAE8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265AB00;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265AB10;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265AB18;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265AB24;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265AB2C;
	sub_82214F08(ctx, base);
loc_8265AB2C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265ab3c
	if (ctx.cr6.eq) goto loc_8265AB3C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8295b730
	ctx.lr = 0x8265AB3C;
	sub_8295B730(ctx, base);
loc_8265AB3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265AB44"))) PPC_WEAK_FUNC(sub_8265AB44);
PPC_FUNC_IMPL(__imp__sub_8265AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AB48"))) PPC_WEAK_FUNC(sub_8265AB48);
PPC_FUNC_IMPL(__imp__sub_8265AB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265AB50;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265acb0
	if (ctx.cr6.eq) goto loc_8265ACB0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29260
	ctx.r4.s64 = ctx.r11.s64 + -29260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265AB78;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ab90
	if (!ctx.cr6.eq) goto loc_8265AB90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ab94
	goto loc_8265AB94;
loc_8265AB90:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265AB94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265AB9C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26640
	ctx.r9.s64 = ctx.r11.s64 + -26640;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265ABCC;
	sub_821F0108(ctx, base);
	// li r7,139
	ctx.r7.s64 = 139;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265ABE8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ac00
	if (!ctx.cr6.eq) goto loc_8265AC00;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ac0c
	goto loc_8265AC0C;
loc_8265AC00:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265AC0C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ac48
	if (!ctx.cr6.lt) goto loc_8265AC48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ac3c
	if (ctx.cr6.eq) goto loc_8265AC3C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265AC3C;
	sub_82668718(ctx, base);
loc_8265AC3C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265ac64
	goto loc_8265AC64;
loc_8265AC48:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265AC64;
	sub_82668848(ctx, base);
loc_8265AC64:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265AC6C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265AC84;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265AC94;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265AC9C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265ACA8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265ACB0;
	sub_82214F08(ctx, base);
loc_8265ACB0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265ACB8"))) PPC_WEAK_FUNC(sub_8265ACB8);
PPC_FUNC_IMPL(__imp__sub_8265ACB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265ACC0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ae24
	if (ctx.cr6.eq) goto loc_8265AE24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29304
	ctx.r4.s64 = ctx.r11.s64 + -29304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265ACEC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ad04
	if (!ctx.cr6.eq) goto loc_8265AD04;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ad08
	goto loc_8265AD08;
loc_8265AD04:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265AD08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265AD10;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-27376
	ctx.r9.s64 = ctx.r11.s64 + -27376;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265AD40;
	sub_821F0108(ctx, base);
	// li r7,140
	ctx.r7.s64 = 140;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265AD5C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ad74
	if (!ctx.cr6.eq) goto loc_8265AD74;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ad80
	goto loc_8265AD80;
loc_8265AD74:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265AD80:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265adbc
	if (!ctx.cr6.lt) goto loc_8265ADBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265adb0
	if (ctx.cr6.eq) goto loc_8265ADB0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265ADB0;
	sub_82668718(ctx, base);
loc_8265ADB0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265add8
	goto loc_8265ADD8;
loc_8265ADBC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265ADD8;
	sub_82668848(ctx, base);
loc_8265ADD8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265ADE0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265ADF8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265AE08;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265AE10;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265AE1C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265AE24;
	sub_82214F08(ctx, base);
loc_8265AE24:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265ae34
	if (ctx.cr6.eq) goto loc_8265AE34;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826ffd68
	ctx.lr = 0x8265AE34;
	sub_826FFD68(ctx, base);
loc_8265AE34:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265AE3C"))) PPC_WEAK_FUNC(sub_8265AE3C);
PPC_FUNC_IMPL(__imp__sub_8265AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AE40"))) PPC_WEAK_FUNC(sub_8265AE40);
PPC_FUNC_IMPL(__imp__sub_8265AE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265AE48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265afac
	if (ctx.cr6.eq) goto loc_8265AFAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29292
	ctx.r4.s64 = ctx.r11.s64 + -29292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265AE74;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ae8c
	if (!ctx.cr6.eq) goto loc_8265AE8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ae90
	goto loc_8265AE90;
loc_8265AE8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265AE90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265AE98;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-27208
	ctx.r9.s64 = ctx.r11.s64 + -27208;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265AEC8;
	sub_821F0108(ctx, base);
	// li r7,141
	ctx.r7.s64 = 141;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265AEE4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265aefc
	if (!ctx.cr6.eq) goto loc_8265AEFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265af08
	goto loc_8265AF08;
loc_8265AEFC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265AF08:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265af44
	if (!ctx.cr6.lt) goto loc_8265AF44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265af38
	if (ctx.cr6.eq) goto loc_8265AF38;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265AF38;
	sub_82668718(ctx, base);
loc_8265AF38:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265af60
	goto loc_8265AF60;
loc_8265AF44:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265AF60;
	sub_82668848(ctx, base);
loc_8265AF60:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265AF68;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265AF80;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265AF90;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265AF98;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265AFA4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265AFAC;
	sub_82214F08(ctx, base);
loc_8265AFAC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265affc
	if (ctx.cr6.eq) goto loc_8265AFFC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823b09b0
	ctx.lr = 0x8265AFC4;
	sub_823B09B0(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r5,r10,6280
	ctx.r5.s64 = ctx.r10.s64 + 6280;
	// addi r4,r9,-12988
	ctx.r4.s64 = ctx.r9.s64 + -12988;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82395c68
	ctx.lr = 0x8265AFDC;
	sub_82395C68(ctx, base);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r5,r8,6264
	ctx.r5.s64 = ctx.r8.s64 + 6264;
	// addi r4,r7,-12964
	ctx.r4.s64 = ctx.r7.s64 + -12964;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82350e30
	ctx.lr = 0x8265AFF4;
	sub_82350E30(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8265AFFC;
	sub_829FF648(ctx, base);
loc_8265AFFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B004"))) PPC_WEAK_FUNC(sub_8265B004);
PPC_FUNC_IMPL(__imp__sub_8265B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B008"))) PPC_WEAK_FUNC(sub_8265B008);
PPC_FUNC_IMPL(__imp__sub_8265B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265B010;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b174
	if (ctx.cr6.eq) goto loc_8265B174;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29244
	ctx.r4.s64 = ctx.r11.s64 + -29244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B03C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b054
	if (!ctx.cr6.eq) goto loc_8265B054;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b058
	goto loc_8265B058;
loc_8265B054:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B060;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26528
	ctx.r9.s64 = ctx.r11.s64 + -26528;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B090;
	sub_821F0108(ctx, base);
	// li r7,142
	ctx.r7.s64 = 142;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B0AC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b0c4
	if (!ctx.cr6.eq) goto loc_8265B0C4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b0d0
	goto loc_8265B0D0;
loc_8265B0C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B0D0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b10c
	if (!ctx.cr6.lt) goto loc_8265B10C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b100
	if (ctx.cr6.eq) goto loc_8265B100;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B100;
	sub_82668718(ctx, base);
loc_8265B100:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b128
	goto loc_8265B128;
loc_8265B10C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B128;
	sub_82668848(ctx, base);
loc_8265B128:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B130;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B148;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B158;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B160;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B16C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B174;
	sub_82214F08(ctx, base);
loc_8265B174:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b1f4
	if (ctx.cr6.eq) goto loc_8265B1F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,26044
	ctx.r31.s64 = ctx.r11.s64 + 26044;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265B194;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828f0bf0
	ctx.lr = 0x8265B1A0;
	sub_828F0BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B1A8;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26064
	ctx.r4.s64 = ctx.r10.s64 + 26064;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265B1BC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B1CC;
	sub_8222CF18(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,24352
	ctx.r6.s64 = ctx.r9.s64 + 24352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828f0e38
	ctx.lr = 0x8265B1E4;
	sub_828F0E38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B1EC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B1F4;
	sub_82214F08(ctx, base);
loc_8265B1F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B1FC"))) PPC_WEAK_FUNC(sub_8265B1FC);
PPC_FUNC_IMPL(__imp__sub_8265B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B200"))) PPC_WEAK_FUNC(sub_8265B200);
PPC_FUNC_IMPL(__imp__sub_8265B200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265B208;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b36c
	if (ctx.cr6.eq) goto loc_8265B36C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29224
	ctx.r4.s64 = ctx.r11.s64 + -29224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B234;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b24c
	if (!ctx.cr6.eq) goto loc_8265B24C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b250
	goto loc_8265B250;
loc_8265B24C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B250:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B258;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26408
	ctx.r9.s64 = ctx.r11.s64 + -26408;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B288;
	sub_821F0108(ctx, base);
	// li r7,69
	ctx.r7.s64 = 69;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B2A4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b2bc
	if (!ctx.cr6.eq) goto loc_8265B2BC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b2c8
	goto loc_8265B2C8;
loc_8265B2BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B2C8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b304
	if (!ctx.cr6.lt) goto loc_8265B304;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b2f8
	if (ctx.cr6.eq) goto loc_8265B2F8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B2F8;
	sub_82668718(ctx, base);
loc_8265B2F8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b320
	goto loc_8265B320;
loc_8265B304:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B320;
	sub_82668848(ctx, base);
loc_8265B320:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B328;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B340;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B350;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B358;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B364;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B36C;
	sub_82214F08(ctx, base);
loc_8265B36C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b37c
	if (ctx.cr6.eq) goto loc_8265B37C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828b4240
	ctx.lr = 0x8265B37C;
	sub_828B4240(ctx, base);
loc_8265B37C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B384"))) PPC_WEAK_FUNC(sub_8265B384);
PPC_FUNC_IMPL(__imp__sub_8265B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B388"))) PPC_WEAK_FUNC(sub_8265B388);
PPC_FUNC_IMPL(__imp__sub_8265B388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265B390;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b4f4
	if (ctx.cr6.eq) goto loc_8265B4F4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29184
	ctx.r4.s64 = ctx.r11.s64 + -29184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B3BC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b3d4
	if (!ctx.cr6.eq) goto loc_8265B3D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b3d8
	goto loc_8265B3D8;
loc_8265B3D4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B3D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B3E0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26160
	ctx.r9.s64 = ctx.r11.s64 + -26160;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B410;
	sub_821F0108(ctx, base);
	// li r7,26
	ctx.r7.s64 = 26;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B42C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b444
	if (!ctx.cr6.eq) goto loc_8265B444;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b450
	goto loc_8265B450;
loc_8265B444:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B450:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b48c
	if (!ctx.cr6.lt) goto loc_8265B48C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b480
	if (ctx.cr6.eq) goto loc_8265B480;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B480;
	sub_82668718(ctx, base);
loc_8265B480:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b4a8
	goto loc_8265B4A8;
loc_8265B48C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B4A8;
	sub_82668848(ctx, base);
loc_8265B4A8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B4B0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B4C8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B4D8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B4E0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B4EC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B4F4;
	sub_82214F08(ctx, base);
loc_8265B4F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b504
	if (ctx.cr6.eq) goto loc_8265B504;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827a8998
	ctx.lr = 0x8265B504;
	sub_827A8998(ctx, base);
loc_8265B504:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B50C"))) PPC_WEAK_FUNC(sub_8265B50C);
PPC_FUNC_IMPL(__imp__sub_8265B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B510"))) PPC_WEAK_FUNC(sub_8265B510);
PPC_FUNC_IMPL(__imp__sub_8265B510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265B518;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b678
	if (ctx.cr6.eq) goto loc_8265B678;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21676
	ctx.r4.s64 = ctx.r11.s64 + 21676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B540;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b558
	if (!ctx.cr6.eq) goto loc_8265B558;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b55c
	goto loc_8265B55C;
loc_8265B558:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B55C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B564;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26072
	ctx.r9.s64 = ctx.r11.s64 + -26072;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B594;
	sub_821F0108(ctx, base);
	// li r7,143
	ctx.r7.s64 = 143;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B5B0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b5c8
	if (!ctx.cr6.eq) goto loc_8265B5C8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b5d4
	goto loc_8265B5D4;
loc_8265B5C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B5D4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b610
	if (!ctx.cr6.lt) goto loc_8265B610;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b604
	if (ctx.cr6.eq) goto loc_8265B604;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B604;
	sub_82668718(ctx, base);
loc_8265B604:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b62c
	goto loc_8265B62C;
loc_8265B610:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B62C;
	sub_82668848(ctx, base);
loc_8265B62C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B634;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B64C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B65C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B664;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B670;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B678;
	sub_82214F08(ctx, base);
loc_8265B678:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265B680"))) PPC_WEAK_FUNC(sub_8265B680);
PPC_FUNC_IMPL(__imp__sub_8265B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265B688;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b7ec
	if (ctx.cr6.eq) goto loc_8265B7EC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,28820
	ctx.r4.s64 = ctx.r11.s64 + 28820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B6B4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b6cc
	if (!ctx.cr6.eq) goto loc_8265B6CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b6d0
	goto loc_8265B6D0;
loc_8265B6CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B6D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B6D8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25944
	ctx.r9.s64 = ctx.r11.s64 + -25944;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B708;
	sub_821F0108(ctx, base);
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B724;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b73c
	if (!ctx.cr6.eq) goto loc_8265B73C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b748
	goto loc_8265B748;
loc_8265B73C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B748:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b784
	if (!ctx.cr6.lt) goto loc_8265B784;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b778
	if (ctx.cr6.eq) goto loc_8265B778;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B778;
	sub_82668718(ctx, base);
loc_8265B778:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b7a0
	goto loc_8265B7A0;
loc_8265B784:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B7A0;
	sub_82668848(ctx, base);
loc_8265B7A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B7A8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B7C0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B7D0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B7D8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B7E4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B7EC;
	sub_82214F08(ctx, base);
loc_8265B7EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b7fc
	if (ctx.cr6.eq) goto loc_8265B7FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82511da8
	ctx.lr = 0x8265B7FC;
	sub_82511DA8(ctx, base);
loc_8265B7FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B804"))) PPC_WEAK_FUNC(sub_8265B804);
PPC_FUNC_IMPL(__imp__sub_8265B804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B808"))) PPC_WEAK_FUNC(sub_8265B808);
PPC_FUNC_IMPL(__imp__sub_8265B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265B810;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b974
	if (ctx.cr6.eq) goto loc_8265B974;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B83C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b854
	if (!ctx.cr6.eq) goto loc_8265B854;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b858
	goto loc_8265B858;
loc_8265B854:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B858:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B860;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25664
	ctx.r9.s64 = ctx.r11.s64 + -25664;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265B890;
	sub_821F0108(ctx, base);
	// li r7,144
	ctx.r7.s64 = 144;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265B8AC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b8c4
	if (!ctx.cr6.eq) goto loc_8265B8C4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265b8d0
	goto loc_8265B8D0;
loc_8265B8C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265B8D0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265b90c
	if (!ctx.cr6.lt) goto loc_8265B90C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265b900
	if (ctx.cr6.eq) goto loc_8265B900;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265B900;
	sub_82668718(ctx, base);
loc_8265B900:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265b928
	goto loc_8265B928;
loc_8265B90C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265B928;
	sub_82668848(ctx, base);
loc_8265B928:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265B930;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265B948;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265B958;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265B960;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265B96C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265B974;
	sub_82214F08(ctx, base);
loc_8265B974:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265b984
	if (ctx.cr6.eq) goto loc_8265B984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829361d0
	ctx.lr = 0x8265B984;
	sub_829361D0(ctx, base);
loc_8265B984:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265B98C"))) PPC_WEAK_FUNC(sub_8265B98C);
PPC_FUNC_IMPL(__imp__sub_8265B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B990"))) PPC_WEAK_FUNC(sub_8265B990);
PPC_FUNC_IMPL(__imp__sub_8265B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265B998;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265baf8
	if (ctx.cr6.eq) goto loc_8265BAF8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29172
	ctx.r4.s64 = ctx.r11.s64 + -29172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265B9C0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b9d8
	if (!ctx.cr6.eq) goto loc_8265B9D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265b9dc
	goto loc_8265B9DC;
loc_8265B9D8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265B9DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265B9E4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25752
	ctx.r9.s64 = ctx.r11.s64 + -25752;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265BA14;
	sub_821F0108(ctx, base);
	// li r7,145
	ctx.r7.s64 = 145;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265BA30;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ba48
	if (!ctx.cr6.eq) goto loc_8265BA48;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ba54
	goto loc_8265BA54;
loc_8265BA48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265BA54:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ba90
	if (!ctx.cr6.lt) goto loc_8265BA90;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ba84
	if (ctx.cr6.eq) goto loc_8265BA84;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265BA84;
	sub_82668718(ctx, base);
loc_8265BA84:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265baac
	goto loc_8265BAAC;
loc_8265BA90:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265BAAC;
	sub_82668848(ctx, base);
loc_8265BAAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265BAB4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265BACC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265BADC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265BAE4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265BAF0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BAF8;
	sub_82214F08(ctx, base);
loc_8265BAF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265BB00"))) PPC_WEAK_FUNC(sub_8265BB00);
PPC_FUNC_IMPL(__imp__sub_8265BB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265BB08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265bc6c
	if (ctx.cr6.eq) goto loc_8265BC6C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29136
	ctx.r4.s64 = ctx.r11.s64 + -29136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265BB34;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265bb4c
	if (!ctx.cr6.eq) goto loc_8265BB4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265bb50
	goto loc_8265BB50;
loc_8265BB4C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265BB50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265BB58;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25576
	ctx.r9.s64 = ctx.r11.s64 + -25576;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265BB88;
	sub_821F0108(ctx, base);
	// li r7,146
	ctx.r7.s64 = 146;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265BBA4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265bbbc
	if (!ctx.cr6.eq) goto loc_8265BBBC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265bbc8
	goto loc_8265BBC8;
loc_8265BBBC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265BBC8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265bc04
	if (!ctx.cr6.lt) goto loc_8265BC04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265bbf8
	if (ctx.cr6.eq) goto loc_8265BBF8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265BBF8;
	sub_82668718(ctx, base);
loc_8265BBF8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265bc20
	goto loc_8265BC20;
loc_8265BC04:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265BC20;
	sub_82668848(ctx, base);
loc_8265BC20:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265BC28;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265BC40;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265BC50;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265BC58;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265BC64;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BC6C;
	sub_82214F08(ctx, base);
loc_8265BC6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265bcec
	if (ctx.cr6.eq) goto loc_8265BCEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,30868
	ctx.r31.s64 = ctx.r11.s64 + 30868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265BC8C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827da8d0
	ctx.lr = 0x8265BC98;
	sub_827DA8D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BCA0;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,30880
	ctx.r4.s64 = ctx.r10.s64 + 30880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265BCB4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265BCC4;
	sub_8222CF18(ctx, base);
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-11088
	ctx.r6.s64 = ctx.r9.s64 + -11088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827dab18
	ctx.lr = 0x8265BCDC;
	sub_827DAB18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BCE4;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265BCEC;
	sub_82214F08(ctx, base);
loc_8265BCEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265BCF4"))) PPC_WEAK_FUNC(sub_8265BCF4);
PPC_FUNC_IMPL(__imp__sub_8265BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265BCF8"))) PPC_WEAK_FUNC(sub_8265BCF8);
PPC_FUNC_IMPL(__imp__sub_8265BCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265BD00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265be60
	if (ctx.cr6.eq) goto loc_8265BE60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29124
	ctx.r4.s64 = ctx.r11.s64 + -29124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265BD28;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265bd40
	if (!ctx.cr6.eq) goto loc_8265BD40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265bd44
	goto loc_8265BD44;
loc_8265BD40:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265BD44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265BD4C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25408
	ctx.r9.s64 = ctx.r11.s64 + -25408;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265BD7C;
	sub_821F0108(ctx, base);
	// li r7,43
	ctx.r7.s64 = 43;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265BD98;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265bdb0
	if (!ctx.cr6.eq) goto loc_8265BDB0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265bdbc
	goto loc_8265BDBC;
loc_8265BDB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265BDBC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265bdf8
	if (!ctx.cr6.lt) goto loc_8265BDF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265bdec
	if (ctx.cr6.eq) goto loc_8265BDEC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265BDEC;
	sub_82668718(ctx, base);
loc_8265BDEC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BDF8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265BE14;
	sub_82668848(ctx, base);
loc_8265BE14:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265BE1C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265BE34;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265BE44;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265BE4C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265BE58;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BE60;
	sub_82214F08(ctx, base);
loc_8265BE60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265BE68"))) PPC_WEAK_FUNC(sub_8265BE68);
PPC_FUNC_IMPL(__imp__sub_8265BE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265BE70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265bfd4
	if (ctx.cr6.eq) goto loc_8265BFD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29084
	ctx.r4.s64 = ctx.r11.s64 + -29084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265BE9C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265beb4
	if (!ctx.cr6.eq) goto loc_8265BEB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265beb8
	goto loc_8265BEB8;
loc_8265BEB4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265BEB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265BEC0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25144
	ctx.r9.s64 = ctx.r11.s64 + -25144;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265BEF0;
	sub_821F0108(ctx, base);
	// li r7,205
	ctx.r7.s64 = 205;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265BF0C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265bf24
	if (!ctx.cr6.eq) goto loc_8265BF24;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265bf30
	goto loc_8265BF30;
loc_8265BF24:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265BF30:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265bf6c
	if (!ctx.cr6.lt) goto loc_8265BF6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265bf60
	if (ctx.cr6.eq) goto loc_8265BF60;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265BF60;
	sub_82668718(ctx, base);
loc_8265BF60:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265bf88
	goto loc_8265BF88;
loc_8265BF6C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265BF88;
	sub_82668848(ctx, base);
loc_8265BF88:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265BF90;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265BFA8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265BFB8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265BFC0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265BFCC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265BFD4;
	sub_82214F08(ctx, base);
loc_8265BFD4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c028
	if (ctx.cr6.eq) goto loc_8265C028;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8265BFEC;
	sub_824EF300(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-11304
	ctx.r5.s64 = ctx.r10.s64 + -11304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824eef40
	ctx.lr = 0x8265C000;
	sub_824EEF40(ctx, base);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r5,r9,13208
	ctx.r5.s64 = ctx.r9.s64 + 13208;
	// addi r4,r8,-11292
	ctx.r4.s64 = ctx.r8.s64 + -11292;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8242fd90
	ctx.lr = 0x8265C018;
	sub_8242FD90(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8265C020;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8265C028;
	sub_829FF648(ctx, base);
loc_8265C028:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265C030"))) PPC_WEAK_FUNC(sub_8265C030);
PPC_FUNC_IMPL(__imp__sub_8265C030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265C038;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c19c
	if (ctx.cr6.eq) goto loc_8265C19C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29068
	ctx.r4.s64 = ctx.r11.s64 + -29068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C064;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c07c
	if (!ctx.cr6.eq) goto loc_8265C07C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c080
	goto loc_8265C080;
loc_8265C07C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C080:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C088;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25056
	ctx.r9.s64 = ctx.r11.s64 + -25056;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C0B8;
	sub_821F0108(ctx, base);
	// li r7,206
	ctx.r7.s64 = 206;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C0D4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c0ec
	if (!ctx.cr6.eq) goto loc_8265C0EC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c0f8
	goto loc_8265C0F8;
loc_8265C0EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C0F8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c134
	if (!ctx.cr6.lt) goto loc_8265C134;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c128
	if (ctx.cr6.eq) goto loc_8265C128;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C128;
	sub_82668718(ctx, base);
loc_8265C128:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c150
	goto loc_8265C150;
loc_8265C134:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C150;
	sub_82668848(ctx, base);
loc_8265C150:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C158;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C170;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C180;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C188;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C194;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C19C;
	sub_82214F08(ctx, base);
loc_8265C19C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c1ac
	if (ctx.cr6.eq) goto loc_8265C1AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82894ee8
	ctx.lr = 0x8265C1AC;
	sub_82894EE8(ctx, base);
loc_8265C1AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265C1B4"))) PPC_WEAK_FUNC(sub_8265C1B4);
PPC_FUNC_IMPL(__imp__sub_8265C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C1B8"))) PPC_WEAK_FUNC(sub_8265C1B8);
PPC_FUNC_IMPL(__imp__sub_8265C1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265C1C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c324
	if (ctx.cr6.eq) goto loc_8265C324;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29056
	ctx.r4.s64 = ctx.r11.s64 + -29056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C1EC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c204
	if (!ctx.cr6.eq) goto loc_8265C204;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c208
	goto loc_8265C208;
loc_8265C204:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C208:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C210;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24968
	ctx.r9.s64 = ctx.r11.s64 + -24968;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C240;
	sub_821F0108(ctx, base);
	// li r7,207
	ctx.r7.s64 = 207;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C25C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c274
	if (!ctx.cr6.eq) goto loc_8265C274;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c280
	goto loc_8265C280;
loc_8265C274:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C280:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c2bc
	if (!ctx.cr6.lt) goto loc_8265C2BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c2b0
	if (ctx.cr6.eq) goto loc_8265C2B0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C2B0;
	sub_82668718(ctx, base);
loc_8265C2B0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c2d8
	goto loc_8265C2D8;
loc_8265C2BC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C2D8;
	sub_82668848(ctx, base);
loc_8265C2D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C2E0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C2F8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C308;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C310;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C31C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C324;
	sub_82214F08(ctx, base);
loc_8265C324:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c3a4
	if (ctx.cr6.eq) goto loc_8265C3A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,116
	ctx.r31.s64 = ctx.r11.s64 + 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265C344;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8289ab80
	ctx.lr = 0x8265C350;
	sub_8289AB80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C358;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265C36C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C37C;
	sub_8222CF18(ctx, base);
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-23960
	ctx.r6.s64 = ctx.r9.s64 + -23960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8289adc8
	ctx.lr = 0x8265C394;
	sub_8289ADC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C39C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C3A4;
	sub_82214F08(ctx, base);
loc_8265C3A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265C3AC"))) PPC_WEAK_FUNC(sub_8265C3AC);
PPC_FUNC_IMPL(__imp__sub_8265C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C3B0"))) PPC_WEAK_FUNC(sub_8265C3B0);
PPC_FUNC_IMPL(__imp__sub_8265C3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265C3B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c518
	if (ctx.cr6.eq) goto loc_8265C518;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29108
	ctx.r4.s64 = ctx.r11.s64 + -29108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C3E0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c3f8
	if (!ctx.cr6.eq) goto loc_8265C3F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c3fc
	goto loc_8265C3FC;
loc_8265C3F8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C3FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C404;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-25304
	ctx.r9.s64 = ctx.r11.s64 + -25304;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C434;
	sub_821F0108(ctx, base);
	// li r7,204
	ctx.r7.s64 = 204;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C450;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c468
	if (!ctx.cr6.eq) goto loc_8265C468;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c474
	goto loc_8265C474;
loc_8265C468:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C474:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c4b0
	if (!ctx.cr6.lt) goto loc_8265C4B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c4a4
	if (ctx.cr6.eq) goto loc_8265C4A4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C4A4;
	sub_82668718(ctx, base);
loc_8265C4A4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c4cc
	goto loc_8265C4CC;
loc_8265C4B0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C4CC;
	sub_82668848(ctx, base);
loc_8265C4CC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C4D4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C4EC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C4FC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C504;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C510;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C518;
	sub_82214F08(ctx, base);
loc_8265C518:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265C520"))) PPC_WEAK_FUNC(sub_8265C520);
PPC_FUNC_IMPL(__imp__sub_8265C520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265C528;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c68c
	if (ctx.cr6.eq) goto loc_8265C68C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29040
	ctx.r4.s64 = ctx.r11.s64 + -29040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C554;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c56c
	if (!ctx.cr6.eq) goto loc_8265C56C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c570
	goto loc_8265C570;
loc_8265C56C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C570:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C578;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24776
	ctx.r9.s64 = ctx.r11.s64 + -24776;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C5A8;
	sub_821F0108(ctx, base);
	// li r7,208
	ctx.r7.s64 = 208;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C5C4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c5dc
	if (!ctx.cr6.eq) goto loc_8265C5DC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c5e8
	goto loc_8265C5E8;
loc_8265C5DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C5E8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c624
	if (!ctx.cr6.lt) goto loc_8265C624;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c618
	if (ctx.cr6.eq) goto loc_8265C618;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C618;
	sub_82668718(ctx, base);
loc_8265C618:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c640
	goto loc_8265C640;
loc_8265C624:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C640;
	sub_82668848(ctx, base);
loc_8265C640:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C648;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C660;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C670;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C678;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C684;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C68C;
	sub_82214F08(ctx, base);
loc_8265C68C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c69c
	if (ctx.cr6.eq) goto loc_8265C69C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8289eb70
	ctx.lr = 0x8265C69C;
	sub_8289EB70(ctx, base);
loc_8265C69C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265C6A4"))) PPC_WEAK_FUNC(sub_8265C6A4);
PPC_FUNC_IMPL(__imp__sub_8265C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C6A8"))) PPC_WEAK_FUNC(sub_8265C6A8);
PPC_FUNC_IMPL(__imp__sub_8265C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265C6B0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c810
	if (ctx.cr6.eq) goto loc_8265C810;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29028
	ctx.r4.s64 = ctx.r11.s64 + -29028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C6D8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c6f0
	if (!ctx.cr6.eq) goto loc_8265C6F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c6f4
	goto loc_8265C6F4;
loc_8265C6F0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C6F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C6FC;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24688
	ctx.r9.s64 = ctx.r11.s64 + -24688;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C72C;
	sub_821F0108(ctx, base);
	// li r7,209
	ctx.r7.s64 = 209;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C748;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c760
	if (!ctx.cr6.eq) goto loc_8265C760;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c76c
	goto loc_8265C76C;
loc_8265C760:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C76C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c7a8
	if (!ctx.cr6.lt) goto loc_8265C7A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c79c
	if (ctx.cr6.eq) goto loc_8265C79C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C79C;
	sub_82668718(ctx, base);
loc_8265C79C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c7c4
	goto loc_8265C7C4;
loc_8265C7A8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C7C4;
	sub_82668848(ctx, base);
loc_8265C7C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C7CC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C7E4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C7F4;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C7FC;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C808;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C810;
	sub_82214F08(ctx, base);
loc_8265C810:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265C818"))) PPC_WEAK_FUNC(sub_8265C818);
PPC_FUNC_IMPL(__imp__sub_8265C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265C820;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c980
	if (ctx.cr6.eq) goto loc_8265C980;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29016
	ctx.r4.s64 = ctx.r11.s64 + -29016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C848;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c860
	if (!ctx.cr6.eq) goto loc_8265C860;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c864
	goto loc_8265C864;
loc_8265C860:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C864:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C86C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24496
	ctx.r9.s64 = ctx.r11.s64 + -24496;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265C89C;
	sub_821F0108(ctx, base);
	// li r7,210
	ctx.r7.s64 = 210;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265C8B8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c8d0
	if (!ctx.cr6.eq) goto loc_8265C8D0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265c8dc
	goto loc_8265C8DC;
loc_8265C8D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265C8DC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265c918
	if (!ctx.cr6.lt) goto loc_8265C918;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c90c
	if (ctx.cr6.eq) goto loc_8265C90C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265C90C;
	sub_82668718(ctx, base);
loc_8265C90C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265c934
	goto loc_8265C934;
loc_8265C918:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265C934;
	sub_82668848(ctx, base);
loc_8265C934:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265C93C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265C954;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265C964;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265C96C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265C978;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265C980;
	sub_82214F08(ctx, base);
loc_8265C980:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265C988"))) PPC_WEAK_FUNC(sub_8265C988);
PPC_FUNC_IMPL(__imp__sub_8265C988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265C990;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265caf0
	if (ctx.cr6.eq) goto loc_8265CAF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29000
	ctx.r4.s64 = ctx.r11.s64 + -29000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265C9B8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c9d0
	if (!ctx.cr6.eq) goto loc_8265C9D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265c9d4
	goto loc_8265C9D4;
loc_8265C9D0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265C9D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265C9DC;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24360
	ctx.r9.s64 = ctx.r11.s64 + -24360;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265CA0C;
	sub_821F0108(ctx, base);
	// li r7,211
	ctx.r7.s64 = 211;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265CA28;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ca40
	if (!ctx.cr6.eq) goto loc_8265CA40;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ca4c
	goto loc_8265CA4C;
loc_8265CA40:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265CA4C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ca88
	if (!ctx.cr6.lt) goto loc_8265CA88;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ca7c
	if (ctx.cr6.eq) goto loc_8265CA7C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265CA7C;
	sub_82668718(ctx, base);
loc_8265CA7C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265caa4
	goto loc_8265CAA4;
loc_8265CA88:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265CAA4;
	sub_82668848(ctx, base);
loc_8265CAA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265CAAC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265CAC4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265CAD4;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265CADC;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265CAE8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265CAF0;
	sub_82214F08(ctx, base);
loc_8265CAF0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265CAF8"))) PPC_WEAK_FUNC(sub_8265CAF8);
PPC_FUNC_IMPL(__imp__sub_8265CAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265CB00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265cc60
	if (ctx.cr6.eq) goto loc_8265CC60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28988
	ctx.r4.s64 = ctx.r11.s64 + -28988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265CB28;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265cb40
	if (!ctx.cr6.eq) goto loc_8265CB40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265cb44
	goto loc_8265CB44;
loc_8265CB40:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265CB44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265CB4C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24272
	ctx.r9.s64 = ctx.r11.s64 + -24272;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265CB7C;
	sub_821F0108(ctx, base);
	// li r7,212
	ctx.r7.s64 = 212;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265CB98;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265cbb0
	if (!ctx.cr6.eq) goto loc_8265CBB0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265cbbc
	goto loc_8265CBBC;
loc_8265CBB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265CBBC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265cbf8
	if (!ctx.cr6.lt) goto loc_8265CBF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265cbec
	if (ctx.cr6.eq) goto loc_8265CBEC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265CBEC;
	sub_82668718(ctx, base);
loc_8265CBEC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265cc14
	goto loc_8265CC14;
loc_8265CBF8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265CC14;
	sub_82668848(ctx, base);
loc_8265CC14:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265CC1C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265CC34;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265CC44;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265CC4C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265CC58;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265CC60;
	sub_82214F08(ctx, base);
loc_8265CC60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265CC68"))) PPC_WEAK_FUNC(sub_8265CC68);
PPC_FUNC_IMPL(__imp__sub_8265CC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265CC70;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265cdd0
	if (ctx.cr6.eq) goto loc_8265CDD0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31820
	ctx.r4.s64 = ctx.r11.s64 + -31820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265CC98;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ccb0
	if (!ctx.cr6.eq) goto loc_8265CCB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ccb4
	goto loc_8265CCB4;
loc_8265CCB0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265CCB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265CCBC;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-24136
	ctx.r9.s64 = ctx.r11.s64 + -24136;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265CCEC;
	sub_821F0108(ctx, base);
	// li r7,213
	ctx.r7.s64 = 213;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265CD08;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265cd20
	if (!ctx.cr6.eq) goto loc_8265CD20;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265cd2c
	goto loc_8265CD2C;
loc_8265CD20:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265CD2C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265cd68
	if (!ctx.cr6.lt) goto loc_8265CD68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265cd5c
	if (ctx.cr6.eq) goto loc_8265CD5C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265CD5C;
	sub_82668718(ctx, base);
loc_8265CD5C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265cd84
	goto loc_8265CD84;
loc_8265CD68:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265CD84;
	sub_82668848(ctx, base);
loc_8265CD84:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265CD8C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265CDA4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265CDB4;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265CDBC;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265CDC8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265CDD0;
	sub_82214F08(ctx, base);
loc_8265CDD0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265CDD8"))) PPC_WEAK_FUNC(sub_8265CDD8);
PPC_FUNC_IMPL(__imp__sub_8265CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265CDE0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265cf44
	if (ctx.cr6.eq) goto loc_8265CF44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265CE0C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ce24
	if (!ctx.cr6.eq) goto loc_8265CE24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ce28
	goto loc_8265CE28;
loc_8265CE24:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265CE28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265CE30;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23904
	ctx.r9.s64 = ctx.r11.s64 + -23904;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265CE60;
	sub_821F0108(ctx, base);
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265CE7C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ce94
	if (!ctx.cr6.eq) goto loc_8265CE94;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265cea0
	goto loc_8265CEA0;
loc_8265CE94:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265CEA0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265cedc
	if (!ctx.cr6.lt) goto loc_8265CEDC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ced0
	if (ctx.cr6.eq) goto loc_8265CED0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265CED0;
	sub_82668718(ctx, base);
loc_8265CED0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265cef8
	goto loc_8265CEF8;
loc_8265CEDC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265CEF8;
	sub_82668848(ctx, base);
loc_8265CEF8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265CF00;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265CF18;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265CF28;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265CF30;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265CF3C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265CF44;
	sub_82214F08(ctx, base);
loc_8265CF44:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265cf54
	if (ctx.cr6.eq) goto loc_8265CF54;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82795108
	ctx.lr = 0x8265CF54;
	sub_82795108(ctx, base);
loc_8265CF54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265CF5C"))) PPC_WEAK_FUNC(sub_8265CF5C);
PPC_FUNC_IMPL(__imp__sub_8265CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265CF60"))) PPC_WEAK_FUNC(sub_8265CF60);
PPC_FUNC_IMPL(__imp__sub_8265CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265CF68;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d0cc
	if (ctx.cr6.eq) goto loc_8265D0CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29568
	ctx.r4.s64 = ctx.r11.s64 + -29568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265CF94;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265cfac
	if (!ctx.cr6.eq) goto loc_8265CFAC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265cfb0
	goto loc_8265CFB0;
loc_8265CFAC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265CFB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265CFB8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30720
	ctx.r9.s64 = ctx.r11.s64 + -30720;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265CFE8;
	sub_821F0108(ctx, base);
	// li r7,51
	ctx.r7.s64 = 51;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D004;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d01c
	if (!ctx.cr6.eq) goto loc_8265D01C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d028
	goto loc_8265D028;
loc_8265D01C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D028:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d064
	if (!ctx.cr6.lt) goto loc_8265D064;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d058
	if (ctx.cr6.eq) goto loc_8265D058;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D058;
	sub_82668718(ctx, base);
loc_8265D058:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d080
	goto loc_8265D080;
loc_8265D064:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D080;
	sub_82668848(ctx, base);
loc_8265D080:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D088;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D0A0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D0B0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D0B8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D0C4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D0CC;
	sub_82214F08(ctx, base);
loc_8265D0CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265d0dc
	if (ctx.cr6.eq) goto loc_8265D0DC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82873aa8
	ctx.lr = 0x8265D0DC;
	sub_82873AA8(ctx, base);
loc_8265D0DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265D0E4"))) PPC_WEAK_FUNC(sub_8265D0E4);
PPC_FUNC_IMPL(__imp__sub_8265D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D0E8"))) PPC_WEAK_FUNC(sub_8265D0E8);
PPC_FUNC_IMPL(__imp__sub_8265D0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265D0F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d250
	if (ctx.cr6.eq) goto loc_8265D250;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29624
	ctx.r4.s64 = ctx.r11.s64 + -29624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D118;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d130
	if (!ctx.cr6.eq) goto loc_8265D130;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d134
	goto loc_8265D134;
loc_8265D130:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D134:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D13C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-30968
	ctx.r9.s64 = ctx.r11.s64 + -30968;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D16C;
	sub_821F0108(ctx, base);
	// li r7,53
	ctx.r7.s64 = 53;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D188;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d1a0
	if (!ctx.cr6.eq) goto loc_8265D1A0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d1ac
	goto loc_8265D1AC;
loc_8265D1A0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D1AC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d1e8
	if (!ctx.cr6.lt) goto loc_8265D1E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d1dc
	if (ctx.cr6.eq) goto loc_8265D1DC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D1DC;
	sub_82668718(ctx, base);
loc_8265D1DC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d204
	goto loc_8265D204;
loc_8265D1E8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D204;
	sub_82668848(ctx, base);
loc_8265D204:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D20C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D224;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D234;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D23C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D248;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D250;
	sub_82214F08(ctx, base);
loc_8265D250:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265D258"))) PPC_WEAK_FUNC(sub_8265D258);
PPC_FUNC_IMPL(__imp__sub_8265D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265D260;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d3c4
	if (ctx.cr6.eq) goto loc_8265D3C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28956
	ctx.r4.s64 = ctx.r11.s64 + -28956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D28C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d2a4
	if (!ctx.cr6.eq) goto loc_8265D2A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d2a8
	goto loc_8265D2A8;
loc_8265D2A4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D2A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D2B0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23816
	ctx.r9.s64 = ctx.r11.s64 + -23816;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D2E0;
	sub_821F0108(ctx, base);
	// li r7,54
	ctx.r7.s64 = 54;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D2FC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d314
	if (!ctx.cr6.eq) goto loc_8265D314;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d320
	goto loc_8265D320;
loc_8265D314:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D320:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d35c
	if (!ctx.cr6.lt) goto loc_8265D35C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d350
	if (ctx.cr6.eq) goto loc_8265D350;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D350;
	sub_82668718(ctx, base);
loc_8265D350:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d378
	goto loc_8265D378;
loc_8265D35C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D378;
	sub_82668848(ctx, base);
loc_8265D378:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D380;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D398;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D3A8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D3B0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D3BC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D3C4;
	sub_82214F08(ctx, base);
loc_8265D3C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265d444
	if (ctx.cr6.eq) goto loc_8265D444;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-4496
	ctx.r31.s64 = ctx.r11.s64 + -4496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265D3E4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82982dd0
	ctx.lr = 0x8265D3F0;
	sub_82982DD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D3F8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-9376
	ctx.r4.s64 = ctx.r10.s64 + -9376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265D40C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D41C;
	sub_8222CF18(ctx, base);
	// lis r9,-32104
	ctx.r9.s64 = -2103967744;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,11184
	ctx.r6.s64 = ctx.r9.s64 + 11184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82983018
	ctx.lr = 0x8265D434;
	sub_82983018(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D43C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D444;
	sub_82214F08(ctx, base);
loc_8265D444:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265D44C"))) PPC_WEAK_FUNC(sub_8265D44C);
PPC_FUNC_IMPL(__imp__sub_8265D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D450"))) PPC_WEAK_FUNC(sub_8265D450);
PPC_FUNC_IMPL(__imp__sub_8265D450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265D458;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d5bc
	if (ctx.cr6.eq) goto loc_8265D5BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28932
	ctx.r4.s64 = ctx.r11.s64 + -28932;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D484;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d49c
	if (!ctx.cr6.eq) goto loc_8265D49C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d4a0
	goto loc_8265D4A0;
loc_8265D49C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D4A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D4A8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23664
	ctx.r9.s64 = ctx.r11.s64 + -23664;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D4D8;
	sub_821F0108(ctx, base);
	// li r7,55
	ctx.r7.s64 = 55;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D4F4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d50c
	if (!ctx.cr6.eq) goto loc_8265D50C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d518
	goto loc_8265D518;
loc_8265D50C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D518:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d554
	if (!ctx.cr6.lt) goto loc_8265D554;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d548
	if (ctx.cr6.eq) goto loc_8265D548;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D548;
	sub_82668718(ctx, base);
loc_8265D548:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d570
	goto loc_8265D570;
loc_8265D554:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D570;
	sub_82668848(ctx, base);
loc_8265D570:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D578;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D590;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D5A0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D5A8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D5B4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D5BC;
	sub_82214F08(ctx, base);
loc_8265D5BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265d5cc
	if (ctx.cr6.eq) goto loc_8265D5CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298a640
	ctx.lr = 0x8265D5CC;
	sub_8298A640(ctx, base);
loc_8265D5CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265D5D4"))) PPC_WEAK_FUNC(sub_8265D5D4);
PPC_FUNC_IMPL(__imp__sub_8265D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D5D8"))) PPC_WEAK_FUNC(sub_8265D5D8);
PPC_FUNC_IMPL(__imp__sub_8265D5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265D5E0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d744
	if (ctx.cr6.eq) goto loc_8265D744;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6052
	ctx.r4.s64 = ctx.r11.s64 + 6052;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D60C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d624
	if (!ctx.cr6.eq) goto loc_8265D624;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d628
	goto loc_8265D628;
loc_8265D624:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D628:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D630;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23504
	ctx.r9.s64 = ctx.r11.s64 + -23504;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D660;
	sub_821F0108(ctx, base);
	// li r7,148
	ctx.r7.s64 = 148;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D67C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d694
	if (!ctx.cr6.eq) goto loc_8265D694;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d6a0
	goto loc_8265D6A0;
loc_8265D694:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D6A0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d6dc
	if (!ctx.cr6.lt) goto loc_8265D6DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d6d0
	if (ctx.cr6.eq) goto loc_8265D6D0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D6D0;
	sub_82668718(ctx, base);
loc_8265D6D0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d6f8
	goto loc_8265D6F8;
loc_8265D6DC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D6F8;
	sub_82668848(ctx, base);
loc_8265D6F8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D700;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D718;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D728;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D730;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D73C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D744;
	sub_82214F08(ctx, base);
loc_8265D744:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265d754
	if (ctx.cr6.eq) goto loc_8265D754;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827e3020
	ctx.lr = 0x8265D754;
	sub_827E3020(ctx, base);
loc_8265D754:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265D75C"))) PPC_WEAK_FUNC(sub_8265D75C);
PPC_FUNC_IMPL(__imp__sub_8265D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D760"))) PPC_WEAK_FUNC(sub_8265D760);
PPC_FUNC_IMPL(__imp__sub_8265D760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265D768;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d8c8
	if (ctx.cr6.eq) goto loc_8265D8C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28920
	ctx.r4.s64 = ctx.r11.s64 + -28920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D790;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d7a8
	if (!ctx.cr6.eq) goto loc_8265D7A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d7ac
	goto loc_8265D7AC;
loc_8265D7A8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D7AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D7B4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23376
	ctx.r9.s64 = ctx.r11.s64 + -23376;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D7E4;
	sub_821F0108(ctx, base);
	// li r7,149
	ctx.r7.s64 = 149;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D800;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d818
	if (!ctx.cr6.eq) goto loc_8265D818;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d824
	goto loc_8265D824;
loc_8265D818:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D824:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d860
	if (!ctx.cr6.lt) goto loc_8265D860;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d854
	if (ctx.cr6.eq) goto loc_8265D854;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D854;
	sub_82668718(ctx, base);
loc_8265D854:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d87c
	goto loc_8265D87C;
loc_8265D860:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D87C;
	sub_82668848(ctx, base);
loc_8265D87C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D884;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265D89C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265D8AC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265D8B4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265D8C0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265D8C8;
	sub_82214F08(ctx, base);
loc_8265D8C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265D8D0"))) PPC_WEAK_FUNC(sub_8265D8D0);
PPC_FUNC_IMPL(__imp__sub_8265D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265D8D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265da38
	if (ctx.cr6.eq) goto loc_8265DA38;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28904
	ctx.r4.s64 = ctx.r11.s64 + -28904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265D900;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d918
	if (!ctx.cr6.eq) goto loc_8265D918;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265d91c
	goto loc_8265D91C;
loc_8265D918:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265D91C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265D924;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23256
	ctx.r9.s64 = ctx.r11.s64 + -23256;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265D954;
	sub_821F0108(ctx, base);
	// li r7,150
	ctx.r7.s64 = 150;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265D970;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d988
	if (!ctx.cr6.eq) goto loc_8265D988;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265d994
	goto loc_8265D994;
loc_8265D988:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265D994:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265d9d0
	if (!ctx.cr6.lt) goto loc_8265D9D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d9c4
	if (ctx.cr6.eq) goto loc_8265D9C4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265D9C4;
	sub_82668718(ctx, base);
loc_8265D9C4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265d9ec
	goto loc_8265D9EC;
loc_8265D9D0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265D9EC;
	sub_82668848(ctx, base);
loc_8265D9EC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265D9F4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265DA0C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265DA1C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265DA24;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265DA30;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DA38;
	sub_82214F08(ctx, base);
loc_8265DA38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265DA40"))) PPC_WEAK_FUNC(sub_8265DA40);
PPC_FUNC_IMPL(__imp__sub_8265DA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265DA48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dbac
	if (ctx.cr6.eq) goto loc_8265DBAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28888
	ctx.r4.s64 = ctx.r11.s64 + -28888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265DA74;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265da8c
	if (!ctx.cr6.eq) goto loc_8265DA8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265da90
	goto loc_8265DA90;
loc_8265DA8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265DA90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265DA98;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-23136
	ctx.r9.s64 = ctx.r11.s64 + -23136;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265DAC8;
	sub_821F0108(ctx, base);
	// li r7,29
	ctx.r7.s64 = 29;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265DAE4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265dafc
	if (!ctx.cr6.eq) goto loc_8265DAFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265db08
	goto loc_8265DB08;
loc_8265DAFC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265DB08:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265db44
	if (!ctx.cr6.lt) goto loc_8265DB44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265db38
	if (ctx.cr6.eq) goto loc_8265DB38;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265DB38;
	sub_82668718(ctx, base);
loc_8265DB38:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265db60
	goto loc_8265DB60;
loc_8265DB44:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265DB60;
	sub_82668848(ctx, base);
loc_8265DB60:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265DB68;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265DB80;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265DB90;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265DB98;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265DBA4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DBAC;
	sub_82214F08(ctx, base);
loc_8265DBAC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265dbbc
	if (ctx.cr6.eq) goto loc_8265DBBC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298c050
	ctx.lr = 0x8265DBBC;
	sub_8298C050(ctx, base);
loc_8265DBBC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265DBC4"))) PPC_WEAK_FUNC(sub_8265DBC4);
PPC_FUNC_IMPL(__imp__sub_8265DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265DBC8"))) PPC_WEAK_FUNC(sub_8265DBC8);
PPC_FUNC_IMPL(__imp__sub_8265DBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265DBD0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dd30
	if (ctx.cr6.eq) goto loc_8265DD30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28880
	ctx.r4.s64 = ctx.r11.s64 + -28880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265DBF8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265dc10
	if (!ctx.cr6.eq) goto loc_8265DC10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265dc14
	goto loc_8265DC14;
loc_8265DC10:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265DC14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265DC1C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22960
	ctx.r9.s64 = ctx.r11.s64 + -22960;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265DC4C;
	sub_821F0108(ctx, base);
	// li r7,151
	ctx.r7.s64 = 151;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265DC68;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265dc80
	if (!ctx.cr6.eq) goto loc_8265DC80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265dc8c
	goto loc_8265DC8C;
loc_8265DC80:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265DC8C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265dcc8
	if (!ctx.cr6.lt) goto loc_8265DCC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265dcbc
	if (ctx.cr6.eq) goto loc_8265DCBC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265DCBC;
	sub_82668718(ctx, base);
loc_8265DCBC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265dce4
	goto loc_8265DCE4;
loc_8265DCC8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265DCE4;
	sub_82668848(ctx, base);
loc_8265DCE4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265DCEC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265DD04;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265DD14;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265DD1C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265DD28;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DD30;
	sub_82214F08(ctx, base);
loc_8265DD30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265DD38"))) PPC_WEAK_FUNC(sub_8265DD38);
PPC_FUNC_IMPL(__imp__sub_8265DD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265DD40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dea4
	if (ctx.cr6.eq) goto loc_8265DEA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28864
	ctx.r4.s64 = ctx.r11.s64 + -28864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265DD6C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265dd84
	if (!ctx.cr6.eq) goto loc_8265DD84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265dd88
	goto loc_8265DD88;
loc_8265DD84:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265DD88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265DD90;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22776
	ctx.r9.s64 = ctx.r11.s64 + -22776;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265DDC0;
	sub_821F0108(ctx, base);
	// li r7,152
	ctx.r7.s64 = 152;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265DDDC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ddf4
	if (!ctx.cr6.eq) goto loc_8265DDF4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265de00
	goto loc_8265DE00;
loc_8265DDF4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265DE00:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265de3c
	if (!ctx.cr6.lt) goto loc_8265DE3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265de30
	if (ctx.cr6.eq) goto loc_8265DE30;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265DE30;
	sub_82668718(ctx, base);
loc_8265DE30:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265de58
	goto loc_8265DE58;
loc_8265DE3C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265DE58;
	sub_82668848(ctx, base);
loc_8265DE58:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265DE60;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265DE78;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265DE88;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265DE90;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265DE9C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DEA4;
	sub_82214F08(ctx, base);
loc_8265DEA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265df24
	if (ctx.cr6.eq) goto loc_8265DF24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-7544
	ctx.r31.s64 = ctx.r11.s64 + -7544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265DEC4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298e4d0
	ctx.lr = 0x8265DED0;
	sub_8298E4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DED8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-7528
	ctx.r4.s64 = ctx.r10.s64 + -7528;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265DEEC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265DEFC;
	sub_8222CF18(ctx, base);
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-6976
	ctx.r6.s64 = ctx.r9.s64 + -6976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298e718
	ctx.lr = 0x8265DF14;
	sub_8298E718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265DF1C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265DF24;
	sub_82214F08(ctx, base);
loc_8265DF24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265DF2C"))) PPC_WEAK_FUNC(sub_8265DF2C);
PPC_FUNC_IMPL(__imp__sub_8265DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265DF30"))) PPC_WEAK_FUNC(sub_8265DF30);
PPC_FUNC_IMPL(__imp__sub_8265DF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265DF38;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e09c
	if (ctx.cr6.eq) goto loc_8265E09C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28844
	ctx.r4.s64 = ctx.r11.s64 + -28844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265DF64;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265df7c
	if (!ctx.cr6.eq) goto loc_8265DF7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265df80
	goto loc_8265DF80;
loc_8265DF7C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265DF80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265DF88;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22672
	ctx.r9.s64 = ctx.r11.s64 + -22672;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265DFB8;
	sub_821F0108(ctx, base);
	// li r7,153
	ctx.r7.s64 = 153;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265DFD4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265dfec
	if (!ctx.cr6.eq) goto loc_8265DFEC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265dff8
	goto loc_8265DFF8;
loc_8265DFEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265DFF8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e034
	if (!ctx.cr6.lt) goto loc_8265E034;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e028
	if (ctx.cr6.eq) goto loc_8265E028;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E028;
	sub_82668718(ctx, base);
loc_8265E028:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e050
	goto loc_8265E050;
loc_8265E034:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E050;
	sub_82668848(ctx, base);
loc_8265E050:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E058;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E070;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E080;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E088;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E094;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E09C;
	sub_82214F08(ctx, base);
loc_8265E09C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e0ac
	if (ctx.cr6.eq) goto loc_8265E0AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828b7d18
	ctx.lr = 0x8265E0AC;
	sub_828B7D18(ctx, base);
loc_8265E0AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E0B4"))) PPC_WEAK_FUNC(sub_8265E0B4);
PPC_FUNC_IMPL(__imp__sub_8265E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E0B8"))) PPC_WEAK_FUNC(sub_8265E0B8);
PPC_FUNC_IMPL(__imp__sub_8265E0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E0C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e224
	if (ctx.cr6.eq) goto loc_8265E224;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8768
	ctx.r4.s64 = ctx.r11.s64 + -8768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E0EC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e104
	if (!ctx.cr6.eq) goto loc_8265E104;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e108
	goto loc_8265E108;
loc_8265E104:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E108:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E110;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22544
	ctx.r9.s64 = ctx.r11.s64 + -22544;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E140;
	sub_821F0108(ctx, base);
	// li r7,154
	ctx.r7.s64 = 154;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E15C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e174
	if (!ctx.cr6.eq) goto loc_8265E174;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e180
	goto loc_8265E180;
loc_8265E174:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E180:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e1bc
	if (!ctx.cr6.lt) goto loc_8265E1BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e1b0
	if (ctx.cr6.eq) goto loc_8265E1B0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E1B0;
	sub_82668718(ctx, base);
loc_8265E1B0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e1d8
	goto loc_8265E1D8;
loc_8265E1BC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E1D8;
	sub_82668848(ctx, base);
loc_8265E1D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E1E0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E1F8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E208;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E210;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E21C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E224;
	sub_82214F08(ctx, base);
loc_8265E224:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e234
	if (ctx.cr6.eq) goto loc_8265E234;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823e8720
	ctx.lr = 0x8265E234;
	sub_823E8720(ctx, base);
loc_8265E234:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E23C"))) PPC_WEAK_FUNC(sub_8265E23C);
PPC_FUNC_IMPL(__imp__sub_8265E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E240"))) PPC_WEAK_FUNC(sub_8265E240);
PPC_FUNC_IMPL(__imp__sub_8265E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E248;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e3ac
	if (ctx.cr6.eq) goto loc_8265E3AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28820
	ctx.r4.s64 = ctx.r11.s64 + -28820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E274;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e28c
	if (!ctx.cr6.eq) goto loc_8265E28C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e290
	goto loc_8265E290;
loc_8265E28C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E290:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E298;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22456
	ctx.r9.s64 = ctx.r11.s64 + -22456;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E2C8;
	sub_821F0108(ctx, base);
	// li r7,157
	ctx.r7.s64 = 157;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E2E4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e2fc
	if (!ctx.cr6.eq) goto loc_8265E2FC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e308
	goto loc_8265E308;
loc_8265E2FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E308:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e344
	if (!ctx.cr6.lt) goto loc_8265E344;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e338
	if (ctx.cr6.eq) goto loc_8265E338;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E338;
	sub_82668718(ctx, base);
loc_8265E338:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e360
	goto loc_8265E360;
loc_8265E344:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E360;
	sub_82668848(ctx, base);
loc_8265E360:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E368;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E380;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E390;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E398;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E3A4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E3AC;
	sub_82214F08(ctx, base);
loc_8265E3AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e3bc
	if (ctx.cr6.eq) goto loc_8265E3BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82941548
	ctx.lr = 0x8265E3BC;
	sub_82941548(ctx, base);
loc_8265E3BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E3C4"))) PPC_WEAK_FUNC(sub_8265E3C4);
PPC_FUNC_IMPL(__imp__sub_8265E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E3C8"))) PPC_WEAK_FUNC(sub_8265E3C8);
PPC_FUNC_IMPL(__imp__sub_8265E3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E3D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e534
	if (ctx.cr6.eq) goto loc_8265E534;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28796
	ctx.r4.s64 = ctx.r11.s64 + -28796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E3FC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e414
	if (!ctx.cr6.eq) goto loc_8265E414;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e418
	goto loc_8265E418;
loc_8265E414:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E418:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E420;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22280
	ctx.r9.s64 = ctx.r11.s64 + -22280;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E450;
	sub_821F0108(ctx, base);
	// li r7,155
	ctx.r7.s64 = 155;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E46C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e484
	if (!ctx.cr6.eq) goto loc_8265E484;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e490
	goto loc_8265E490;
loc_8265E484:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E490:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e4cc
	if (!ctx.cr6.lt) goto loc_8265E4CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e4c0
	if (ctx.cr6.eq) goto loc_8265E4C0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E4C0;
	sub_82668718(ctx, base);
loc_8265E4C0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e4e8
	goto loc_8265E4E8;
loc_8265E4CC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E4E8;
	sub_82668848(ctx, base);
loc_8265E4E8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E4F0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E508;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E518;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E520;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E52C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E534;
	sub_82214F08(ctx, base);
loc_8265E534:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e544
	if (ctx.cr6.eq) goto loc_8265E544;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291f0a8
	ctx.lr = 0x8265E544;
	sub_8291F0A8(ctx, base);
loc_8265E544:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E54C"))) PPC_WEAK_FUNC(sub_8265E54C);
PPC_FUNC_IMPL(__imp__sub_8265E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E550"))) PPC_WEAK_FUNC(sub_8265E550);
PPC_FUNC_IMPL(__imp__sub_8265E550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265E558;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e6b8
	if (ctx.cr6.eq) goto loc_8265E6B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28784
	ctx.r4.s64 = ctx.r11.s64 + -28784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E580;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e598
	if (!ctx.cr6.eq) goto loc_8265E598;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e59c
	goto loc_8265E59C;
loc_8265E598:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E59C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E5A4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-22136
	ctx.r9.s64 = ctx.r11.s64 + -22136;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E5D4;
	sub_821F0108(ctx, base);
	// li r7,156
	ctx.r7.s64 = 156;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E5F0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e608
	if (!ctx.cr6.eq) goto loc_8265E608;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e614
	goto loc_8265E614;
loc_8265E608:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E614:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e650
	if (!ctx.cr6.lt) goto loc_8265E650;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e644
	if (ctx.cr6.eq) goto loc_8265E644;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E644;
	sub_82668718(ctx, base);
loc_8265E644:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e66c
	goto loc_8265E66C;
loc_8265E650:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E66C;
	sub_82668848(ctx, base);
loc_8265E66C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E674;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E68C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E69C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E6A4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E6B0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E6B8;
	sub_82214F08(ctx, base);
loc_8265E6B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265E6C0"))) PPC_WEAK_FUNC(sub_8265E6C0);
PPC_FUNC_IMPL(__imp__sub_8265E6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E6C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e82c
	if (ctx.cr6.eq) goto loc_8265E82C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15336
	ctx.r4.s64 = ctx.r11.s64 + -15336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E6F4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e70c
	if (!ctx.cr6.eq) goto loc_8265E70C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e710
	goto loc_8265E710;
loc_8265E70C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E710:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E718;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-21952
	ctx.r9.s64 = ctx.r11.s64 + -21952;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E748;
	sub_821F0108(ctx, base);
	// li r7,58
	ctx.r7.s64 = 58;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E764;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e77c
	if (!ctx.cr6.eq) goto loc_8265E77C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e788
	goto loc_8265E788;
loc_8265E77C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E788:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e7c4
	if (!ctx.cr6.lt) goto loc_8265E7C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e7b8
	if (ctx.cr6.eq) goto loc_8265E7B8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E7B8;
	sub_82668718(ctx, base);
loc_8265E7B8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e7e0
	goto loc_8265E7E0;
loc_8265E7C4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E7E0;
	sub_82668848(ctx, base);
loc_8265E7E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E7E8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E800;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E810;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E818;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E824;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E82C;
	sub_82214F08(ctx, base);
loc_8265E82C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e83c
	if (ctx.cr6.eq) goto loc_8265E83C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827d7a78
	ctx.lr = 0x8265E83C;
	sub_827D7A78(ctx, base);
loc_8265E83C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E844"))) PPC_WEAK_FUNC(sub_8265E844);
PPC_FUNC_IMPL(__imp__sub_8265E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E848"))) PPC_WEAK_FUNC(sub_8265E848);
PPC_FUNC_IMPL(__imp__sub_8265E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E850;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e9b4
	if (ctx.cr6.eq) goto loc_8265E9B4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-5376
	ctx.r4.s64 = ctx.r11.s64 + -5376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265E87C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e894
	if (!ctx.cr6.eq) goto loc_8265E894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265e898
	goto loc_8265E898;
loc_8265E894:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265E898:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265E8A0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-21392
	ctx.r9.s64 = ctx.r11.s64 + -21392;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265E8D0;
	sub_821F0108(ctx, base);
	// li r7,158
	ctx.r7.s64 = 158;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265E8EC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e904
	if (!ctx.cr6.eq) goto loc_8265E904;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265e910
	goto loc_8265E910;
loc_8265E904:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265E910:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265e94c
	if (!ctx.cr6.lt) goto loc_8265E94C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265e940
	if (ctx.cr6.eq) goto loc_8265E940;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265E940;
	sub_82668718(ctx, base);
loc_8265E940:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265e968
	goto loc_8265E968;
loc_8265E94C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265E968;
	sub_82668848(ctx, base);
loc_8265E968:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265E970;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265E988;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265E998;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265E9A0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265E9AC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265E9B4;
	sub_82214F08(ctx, base);
loc_8265E9B4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265e9c4
	if (ctx.cr6.eq) goto loc_8265E9C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82567550
	ctx.lr = 0x8265E9C4;
	sub_82567550(ctx, base);
loc_8265E9C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265E9CC"))) PPC_WEAK_FUNC(sub_8265E9CC);
PPC_FUNC_IMPL(__imp__sub_8265E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9D0"))) PPC_WEAK_FUNC(sub_8265E9D0);
PPC_FUNC_IMPL(__imp__sub_8265E9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265E9D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265eb3c
	if (ctx.cr6.eq) goto loc_8265EB3C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-5412
	ctx.r4.s64 = ctx.r11.s64 + -5412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265EA08;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ea20
	if (!ctx.cr6.eq) goto loc_8265EA20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ea24
	goto loc_8265EA24;
loc_8265EA20:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265EA24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265EA2C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r9,r11,-21760
	ctx.r9.s64 = ctx.r11.s64 + -21760;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x821f0108
	ctx.lr = 0x8265EA58;
	sub_821F0108(ctx, base);
	// li r7,159
	ctx.r7.s64 = 159;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265EA74;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ea8c
	if (!ctx.cr6.eq) goto loc_8265EA8C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ea98
	goto loc_8265EA98;
loc_8265EA8C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265EA98:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ead4
	if (!ctx.cr6.lt) goto loc_8265EAD4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265eac8
	if (ctx.cr6.eq) goto loc_8265EAC8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265EAC8;
	sub_82668718(ctx, base);
loc_8265EAC8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265eaf0
	goto loc_8265EAF0;
loc_8265EAD4:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265EAF0;
	sub_82668848(ctx, base);
loc_8265EAF0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82214f08
	ctx.lr = 0x8265EAF8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265EB10;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265EB20;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265EB28;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82214f08
	ctx.lr = 0x8265EB34;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EB3C;
	sub_82214F08(ctx, base);
loc_8265EB3C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265ebc8
	if (ctx.cr6.eq) goto loc_8265EBC8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-5220
	ctx.r31.s64 = ctx.r11.s64 + -5220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265EB5C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825679d8
	ctx.lr = 0x8265EB68;
	sub_825679D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EB70;
	sub_82214F08(ctx, base);
	// lis r10,-32107
	ctx.r10.s64 = -2104164352;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r8,r10,-23816
	ctx.r8.s64 = ctx.r10.s64 + -23816;
	// addi r4,r9,-5204
	ctx.r4.s64 = ctx.r9.s64 + -5204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265EB94;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265EBA4;
	sub_8222CF18(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82567c20
	ctx.lr = 0x8265EBB8;
	sub_82567C20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EBC0;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265EBC8;
	sub_82214F08(ctx, base);
loc_8265EBC8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265EBD0"))) PPC_WEAK_FUNC(sub_8265EBD0);
PPC_FUNC_IMPL(__imp__sub_8265EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265EBD8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ed38
	if (ctx.cr6.eq) goto loc_8265ED38;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265EC00;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ec18
	if (!ctx.cr6.eq) goto loc_8265EC18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ec1c
	goto loc_8265EC1C;
loc_8265EC18:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265EC1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265EC24;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-21528
	ctx.r9.s64 = ctx.r11.s64 + -21528;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265EC54;
	sub_821F0108(ctx, base);
	// li r7,160
	ctx.r7.s64 = 160;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265EC70;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ec88
	if (!ctx.cr6.eq) goto loc_8265EC88;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ec94
	goto loc_8265EC94;
loc_8265EC88:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265EC94:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ecd0
	if (!ctx.cr6.lt) goto loc_8265ECD0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ecc4
	if (ctx.cr6.eq) goto loc_8265ECC4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265ECC4;
	sub_82668718(ctx, base);
loc_8265ECC4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265ecec
	goto loc_8265ECEC;
loc_8265ECD0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265ECEC;
	sub_82668848(ctx, base);
loc_8265ECEC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265ECF4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265ED0C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265ED1C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265ED24;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265ED30;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265ED38;
	sub_82214F08(ctx, base);
loc_8265ED38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265ED40"))) PPC_WEAK_FUNC(sub_8265ED40);
PPC_FUNC_IMPL(__imp__sub_8265ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265ED48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265eeac
	if (ctx.cr6.eq) goto loc_8265EEAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28752
	ctx.r4.s64 = ctx.r11.s64 + -28752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265ED74;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ed8c
	if (!ctx.cr6.eq) goto loc_8265ED8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ed90
	goto loc_8265ED90;
loc_8265ED8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265ED90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265ED98;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-21240
	ctx.r9.s64 = ctx.r11.s64 + -21240;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265EDC8;
	sub_821F0108(ctx, base);
	// li r7,161
	ctx.r7.s64 = 161;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265EDE4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265edfc
	if (!ctx.cr6.eq) goto loc_8265EDFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ee08
	goto loc_8265EE08;
loc_8265EDFC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265EE08:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265ee44
	if (!ctx.cr6.lt) goto loc_8265EE44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ee38
	if (ctx.cr6.eq) goto loc_8265EE38;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265EE38;
	sub_82668718(ctx, base);
loc_8265EE38:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265ee60
	goto loc_8265EE60;
loc_8265EE44:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265EE60;
	sub_82668848(ctx, base);
loc_8265EE60:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265EE68;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265EE80;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265EE90;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265EE98;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265EEA4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EEAC;
	sub_82214F08(ctx, base);
loc_8265EEAC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265ef2c
	if (ctx.cr6.eq) goto loc_8265EF2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-12324
	ctx.r31.s64 = ctx.r11.s64 + -12324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265EECC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8296be18
	ctx.lr = 0x8265EED8;
	sub_8296BE18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EEE0;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-12304
	ctx.r4.s64 = ctx.r10.s64 + -12304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265EEF4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265EF04;
	sub_8222CF18(ctx, base);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-19784
	ctx.r6.s64 = ctx.r9.s64 + -19784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8296c060
	ctx.lr = 0x8265EF1C;
	sub_8296C060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265EF24;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265EF2C;
	sub_82214F08(ctx, base);
loc_8265EF2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265EF34"))) PPC_WEAK_FUNC(sub_8265EF34);
PPC_FUNC_IMPL(__imp__sub_8265EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EF38"))) PPC_WEAK_FUNC(sub_8265EF38);
PPC_FUNC_IMPL(__imp__sub_8265EF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265EF40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f0a4
	if (ctx.cr6.eq) goto loc_8265F0A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28728
	ctx.r4.s64 = ctx.r11.s64 + -28728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265EF6C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ef84
	if (!ctx.cr6.eq) goto loc_8265EF84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ef88
	goto loc_8265EF88;
loc_8265EF84:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265EF88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265EF90;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-21064
	ctx.r9.s64 = ctx.r11.s64 + -21064;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265EFC0;
	sub_821F0108(ctx, base);
	// li r7,38
	ctx.r7.s64 = 38;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265EFDC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265eff4
	if (!ctx.cr6.eq) goto loc_8265EFF4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f000
	goto loc_8265F000;
loc_8265EFF4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F000:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f03c
	if (!ctx.cr6.lt) goto loc_8265F03C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f030
	if (ctx.cr6.eq) goto loc_8265F030;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F030;
	sub_82668718(ctx, base);
loc_8265F030:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f058
	goto loc_8265F058;
loc_8265F03C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F058;
	sub_82668848(ctx, base);
loc_8265F058:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F060;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F078;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F088;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F090;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F09C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F0A4;
	sub_82214F08(ctx, base);
loc_8265F0A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265f0b4
	if (ctx.cr6.eq) goto loc_8265F0B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8296f0c0
	ctx.lr = 0x8265F0B4;
	sub_8296F0C0(ctx, base);
loc_8265F0B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265F0BC"))) PPC_WEAK_FUNC(sub_8265F0BC);
PPC_FUNC_IMPL(__imp__sub_8265F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F0C0"))) PPC_WEAK_FUNC(sub_8265F0C0);
PPC_FUNC_IMPL(__imp__sub_8265F0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265F0C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f228
	if (ctx.cr6.eq) goto loc_8265F228;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28700
	ctx.r4.s64 = ctx.r11.s64 + -28700;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F0F0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f108
	if (!ctx.cr6.eq) goto loc_8265F108;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f10c
	goto loc_8265F10C;
loc_8265F108:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F10C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F114;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20888
	ctx.r9.s64 = ctx.r11.s64 + -20888;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F144;
	sub_821F0108(ctx, base);
	// li r7,39
	ctx.r7.s64 = 39;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F160;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f178
	if (!ctx.cr6.eq) goto loc_8265F178;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f184
	goto loc_8265F184;
loc_8265F178:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F184:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f1c0
	if (!ctx.cr6.lt) goto loc_8265F1C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f1b4
	if (ctx.cr6.eq) goto loc_8265F1B4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F1B4;
	sub_82668718(ctx, base);
loc_8265F1B4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f1dc
	goto loc_8265F1DC;
loc_8265F1C0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F1DC;
	sub_82668848(ctx, base);
loc_8265F1DC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F1E4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F1FC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F20C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F214;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F220;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F228;
	sub_82214F08(ctx, base);
loc_8265F228:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265F230"))) PPC_WEAK_FUNC(sub_8265F230);
PPC_FUNC_IMPL(__imp__sub_8265F230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265F238;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f39c
	if (ctx.cr6.eq) goto loc_8265F39C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,31972
	ctx.r4.s64 = ctx.r11.s64 + 31972;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F264;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f27c
	if (!ctx.cr6.eq) goto loc_8265F27C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f280
	goto loc_8265F280;
loc_8265F27C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F280:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F288;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20744
	ctx.r9.s64 = ctx.r11.s64 + -20744;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F2B8;
	sub_821F0108(ctx, base);
	// li r7,162
	ctx.r7.s64 = 162;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F2D4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f2ec
	if (!ctx.cr6.eq) goto loc_8265F2EC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f2f8
	goto loc_8265F2F8;
loc_8265F2EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F2F8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f334
	if (!ctx.cr6.lt) goto loc_8265F334;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f328
	if (ctx.cr6.eq) goto loc_8265F328;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F328;
	sub_82668718(ctx, base);
loc_8265F328:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f350
	goto loc_8265F350;
loc_8265F334:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F350;
	sub_82668848(ctx, base);
loc_8265F350:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F358;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F370;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F380;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F388;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F394;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F39C;
	sub_82214F08(ctx, base);
loc_8265F39C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265f3ac
	if (ctx.cr6.eq) goto loc_8265F3AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824de170
	ctx.lr = 0x8265F3AC;
	sub_824DE170(ctx, base);
loc_8265F3AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265F3B4"))) PPC_WEAK_FUNC(sub_8265F3B4);
PPC_FUNC_IMPL(__imp__sub_8265F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F3B8"))) PPC_WEAK_FUNC(sub_8265F3B8);
PPC_FUNC_IMPL(__imp__sub_8265F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265F3C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f524
	if (ctx.cr6.eq) goto loc_8265F524;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28668
	ctx.r4.s64 = ctx.r11.s64 + -28668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F3EC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f404
	if (!ctx.cr6.eq) goto loc_8265F404;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f408
	goto loc_8265F408;
loc_8265F404:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F408:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F410;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20656
	ctx.r9.s64 = ctx.r11.s64 + -20656;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F440;
	sub_821F0108(ctx, base);
	// li r7,163
	ctx.r7.s64 = 163;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F45C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f474
	if (!ctx.cr6.eq) goto loc_8265F474;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f480
	goto loc_8265F480;
loc_8265F474:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F480:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f4bc
	if (!ctx.cr6.lt) goto loc_8265F4BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f4b0
	if (ctx.cr6.eq) goto loc_8265F4B0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F4B0;
	sub_82668718(ctx, base);
loc_8265F4B0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f4d8
	goto loc_8265F4D8;
loc_8265F4BC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F4D8;
	sub_82668848(ctx, base);
loc_8265F4D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F4E0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F4F8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F508;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F510;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F51C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F524;
	sub_82214F08(ctx, base);
loc_8265F524:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265f5a4
	if (ctx.cr6.eq) goto loc_8265F5A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-10892
	ctx.r31.s64 = ctx.r11.s64 + -10892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265F544;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8297a560
	ctx.lr = 0x8265F550;
	sub_8297A560(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F558;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-11344
	ctx.r4.s64 = ctx.r10.s64 + -11344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265F56C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F57C;
	sub_8222CF18(ctx, base);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,10368
	ctx.r6.s64 = ctx.r9.s64 + 10368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8297a7a8
	ctx.lr = 0x8265F594;
	sub_8297A7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F59C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F5A4;
	sub_82214F08(ctx, base);
loc_8265F5A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265F5AC"))) PPC_WEAK_FUNC(sub_8265F5AC);
PPC_FUNC_IMPL(__imp__sub_8265F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F5B0"))) PPC_WEAK_FUNC(sub_8265F5B0);
PPC_FUNC_IMPL(__imp__sub_8265F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265F5B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f71c
	if (ctx.cr6.eq) goto loc_8265F71C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15012
	ctx.r4.s64 = ctx.r11.s64 + -15012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F5E4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f5fc
	if (!ctx.cr6.eq) goto loc_8265F5FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f600
	goto loc_8265F600;
loc_8265F5FC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F600:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F608;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-28008
	ctx.r9.s64 = ctx.r11.s64 + -28008;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F638;
	sub_821F0108(ctx, base);
	// li r7,164
	ctx.r7.s64 = 164;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F654;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f66c
	if (!ctx.cr6.eq) goto loc_8265F66C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f678
	goto loc_8265F678;
loc_8265F66C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F678:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f6b4
	if (!ctx.cr6.lt) goto loc_8265F6B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f6a8
	if (ctx.cr6.eq) goto loc_8265F6A8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F6A8;
	sub_82668718(ctx, base);
loc_8265F6A8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f6d0
	goto loc_8265F6D0;
loc_8265F6B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F6D0;
	sub_82668848(ctx, base);
loc_8265F6D0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F6D8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F6F0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F700;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F708;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F714;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F71C;
	sub_82214F08(ctx, base);
loc_8265F71C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265f72c
	if (ctx.cr6.eq) goto loc_8265F72C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8251d958
	ctx.lr = 0x8265F72C;
	sub_8251D958(ctx, base);
loc_8265F72C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265F734"))) PPC_WEAK_FUNC(sub_8265F734);
PPC_FUNC_IMPL(__imp__sub_8265F734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F738"))) PPC_WEAK_FUNC(sub_8265F738);
PPC_FUNC_IMPL(__imp__sub_8265F738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265F740;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f8a0
	if (ctx.cr6.eq) goto loc_8265F8A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28644
	ctx.r4.s64 = ctx.r11.s64 + -28644;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F768;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f780
	if (!ctx.cr6.eq) goto loc_8265F780;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f784
	goto loc_8265F784;
loc_8265F780:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F784:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F78C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20456
	ctx.r9.s64 = ctx.r11.s64 + -20456;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F7BC;
	sub_821F0108(ctx, base);
	// li r7,165
	ctx.r7.s64 = 165;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F7D8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f7f0
	if (!ctx.cr6.eq) goto loc_8265F7F0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f7fc
	goto loc_8265F7FC;
loc_8265F7F0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F7FC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f838
	if (!ctx.cr6.lt) goto loc_8265F838;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f82c
	if (ctx.cr6.eq) goto loc_8265F82C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F82C;
	sub_82668718(ctx, base);
loc_8265F82C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f854
	goto loc_8265F854;
loc_8265F838:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F854;
	sub_82668848(ctx, base);
loc_8265F854:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F85C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F874;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F884;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265F88C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265F898;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265F8A0;
	sub_82214F08(ctx, base);
loc_8265F8A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265F8A8"))) PPC_WEAK_FUNC(sub_8265F8A8);
PPC_FUNC_IMPL(__imp__sub_8265F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265F8B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fa14
	if (ctx.cr6.eq) goto loc_8265FA14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28636
	ctx.r4.s64 = ctx.r11.s64 + -28636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265F8DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f8f4
	if (!ctx.cr6.eq) goto loc_8265F8F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265f8f8
	goto loc_8265F8F8;
loc_8265F8F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265F8F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265F900;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20352
	ctx.r9.s64 = ctx.r11.s64 + -20352;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265F930;
	sub_821F0108(ctx, base);
	// li r7,166
	ctx.r7.s64 = 166;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265F94C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f964
	if (!ctx.cr6.eq) goto loc_8265F964;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265f970
	goto loc_8265F970;
loc_8265F964:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265F970:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265f9ac
	if (!ctx.cr6.lt) goto loc_8265F9AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f9a0
	if (ctx.cr6.eq) goto loc_8265F9A0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265F9A0;
	sub_82668718(ctx, base);
loc_8265F9A0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265f9c8
	goto loc_8265F9C8;
loc_8265F9AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265F9C8;
	sub_82668848(ctx, base);
loc_8265F9C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265F9D0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265F9E8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265F9F8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265FA00;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265FA0C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FA14;
	sub_82214F08(ctx, base);
loc_8265FA14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265fa24
	if (ctx.cr6.eq) goto loc_8265FA24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8297fea8
	ctx.lr = 0x8265FA24;
	sub_8297FEA8(ctx, base);
loc_8265FA24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265FA2C"))) PPC_WEAK_FUNC(sub_8265FA2C);
PPC_FUNC_IMPL(__imp__sub_8265FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FA30"))) PPC_WEAK_FUNC(sub_8265FA30);
PPC_FUNC_IMPL(__imp__sub_8265FA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8265FA38;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fb98
	if (ctx.cr6.eq) goto loc_8265FB98;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28616
	ctx.r4.s64 = ctx.r11.s64 + -28616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265FA60;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fa78
	if (!ctx.cr6.eq) goto loc_8265FA78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265fa7c
	goto loc_8265FA7C;
loc_8265FA78:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265FA7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265FA84;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20184
	ctx.r9.s64 = ctx.r11.s64 + -20184;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265FAB4;
	sub_821F0108(ctx, base);
	// li r7,167
	ctx.r7.s64 = 167;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265FAD0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fae8
	if (!ctx.cr6.eq) goto loc_8265FAE8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265faf4
	goto loc_8265FAF4;
loc_8265FAE8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265FAF4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265fb30
	if (!ctx.cr6.lt) goto loc_8265FB30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265fb24
	if (ctx.cr6.eq) goto loc_8265FB24;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265FB24;
	sub_82668718(ctx, base);
loc_8265FB24:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265fb4c
	goto loc_8265FB4C;
loc_8265FB30:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265FB4C;
	sub_82668848(ctx, base);
loc_8265FB4C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265FB54;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265FB6C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265FB7C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265FB84;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265FB90;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FB98;
	sub_82214F08(ctx, base);
loc_8265FB98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8265FBA0"))) PPC_WEAK_FUNC(sub_8265FBA0);
PPC_FUNC_IMPL(__imp__sub_8265FBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265FBA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fd0c
	if (ctx.cr6.eq) goto loc_8265FD0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28600
	ctx.r4.s64 = ctx.r11.s64 + -28600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265FBD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fbec
	if (!ctx.cr6.eq) goto loc_8265FBEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265fbf0
	goto loc_8265FBF0;
loc_8265FBEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265FBF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265FBF8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-20016
	ctx.r9.s64 = ctx.r11.s64 + -20016;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265FC28;
	sub_821F0108(ctx, base);
	// li r7,168
	ctx.r7.s64 = 168;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265FC44;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fc5c
	if (!ctx.cr6.eq) goto loc_8265FC5C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265fc68
	goto loc_8265FC68;
loc_8265FC5C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265FC68:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265fca4
	if (!ctx.cr6.lt) goto loc_8265FCA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265fc98
	if (ctx.cr6.eq) goto loc_8265FC98;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265FC98;
	sub_82668718(ctx, base);
loc_8265FC98:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265fcc0
	goto loc_8265FCC0;
loc_8265FCA4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265FCC0;
	sub_82668848(ctx, base);
loc_8265FCC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265FCC8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265FCE0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265FCF0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265FCF8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265FD04;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FD0C;
	sub_82214F08(ctx, base);
loc_8265FD0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265fd1c
	if (ctx.cr6.eq) goto loc_8265FD1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298dab0
	ctx.lr = 0x8265FD1C;
	sub_8298DAB0(ctx, base);
loc_8265FD1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265FD24"))) PPC_WEAK_FUNC(sub_8265FD24);
PPC_FUNC_IMPL(__imp__sub_8265FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FD28"))) PPC_WEAK_FUNC(sub_8265FD28);
PPC_FUNC_IMPL(__imp__sub_8265FD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265FD30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fe94
	if (ctx.cr6.eq) goto loc_8265FE94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28584
	ctx.r4.s64 = ctx.r11.s64 + -28584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265FD5C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fd74
	if (!ctx.cr6.eq) goto loc_8265FD74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265fd78
	goto loc_8265FD78;
loc_8265FD74:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265FD78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265FD80;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19888
	ctx.r9.s64 = ctx.r11.s64 + -19888;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265FDB0;
	sub_821F0108(ctx, base);
	// li r7,169
	ctx.r7.s64 = 169;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265FDCC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265fde4
	if (!ctx.cr6.eq) goto loc_8265FDE4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265fdf0
	goto loc_8265FDF0;
loc_8265FDE4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265FDF0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8265fe2c
	if (!ctx.cr6.lt) goto loc_8265FE2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265fe20
	if (ctx.cr6.eq) goto loc_8265FE20;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8265FE20;
	sub_82668718(ctx, base);
loc_8265FE20:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8265fe48
	goto loc_8265FE48;
loc_8265FE2C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8265FE48;
	sub_82668848(ctx, base);
loc_8265FE48:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8265FE50;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8265FE68;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8265FE78;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265FE80;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8265FE8C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FE94;
	sub_82214F08(ctx, base);
loc_8265FE94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265ff14
	if (ctx.cr6.eq) goto loc_8265FF14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-7484
	ctx.r31.s64 = ctx.r11.s64 + -7484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8265FEB4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298ecc8
	ctx.lr = 0x8265FEC0;
	sub_8298ECC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FEC8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-15848
	ctx.r4.s64 = ctx.r10.s64 + -15848;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8265FEDC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265FEEC;
	sub_8222CF18(ctx, base);
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-5032
	ctx.r6.s64 = ctx.r9.s64 + -5032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8298ef10
	ctx.lr = 0x8265FF04;
	sub_8298EF10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8265FF0C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8265FF14;
	sub_82214F08(ctx, base);
loc_8265FF14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8265FF1C"))) PPC_WEAK_FUNC(sub_8265FF1C);
PPC_FUNC_IMPL(__imp__sub_8265FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FF20"))) PPC_WEAK_FUNC(sub_8265FF20);
PPC_FUNC_IMPL(__imp__sub_8265FF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8265FF28;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266008c
	if (ctx.cr6.eq) goto loc_8266008C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28564
	ctx.r4.s64 = ctx.r11.s64 + -28564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8265FF54;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ff6c
	if (!ctx.cr6.eq) goto loc_8265FF6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8265ff70
	goto loc_8265FF70;
loc_8265FF6C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8265FF70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8265FF78;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19760
	ctx.r9.s64 = ctx.r11.s64 + -19760;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8265FFA8;
	sub_821F0108(ctx, base);
	// li r7,170
	ctx.r7.s64 = 170;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8265FFC4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ffdc
	if (!ctx.cr6.eq) goto loc_8265FFDC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8265ffe8
	goto loc_8265FFE8;
loc_8265FFDC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265FFE8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82660024
	if (!ctx.cr6.lt) goto loc_82660024;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660018
	if (ctx.cr6.eq) goto loc_82660018;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660018;
	sub_82668718(ctx, base);
loc_82660018:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82660040
	goto loc_82660040;
loc_82660024:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82660040;
	sub_82668848(ctx, base);
loc_82660040:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660048;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82660060;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660070;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660078;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660084;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266008C;
	sub_82214F08(ctx, base);
loc_8266008C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266009c
	if (ctx.cr6.eq) goto loc_8266009C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828577e8
	ctx.lr = 0x8266009C;
	sub_828577E8(ctx, base);
loc_8266009C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826600A4"))) PPC_WEAK_FUNC(sub_826600A4);
PPC_FUNC_IMPL(__imp__sub_826600A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826600A8"))) PPC_WEAK_FUNC(sub_826600A8);
PPC_FUNC_IMPL(__imp__sub_826600A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826600B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660214
	if (ctx.cr6.eq) goto loc_82660214;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27788
	ctx.r4.s64 = ctx.r11.s64 + -27788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826600DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826600f4
	if (!ctx.cr6.eq) goto loc_826600F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826600f8
	goto loc_826600F8;
loc_826600F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826600F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660100;
	sub_82644A10(ctx, base);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,20696
	ctx.r9.s64 = ctx.r11.s64 + 20696;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660130;
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266014C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660164
	if (!ctx.cr6.eq) goto loc_82660164;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660170
	goto loc_82660170;
loc_82660164:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660170:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826601ac
	if (!ctx.cr6.lt) goto loc_826601AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826601a0
	if (ctx.cr6.eq) goto loc_826601A0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826601A0;
	sub_82668718(ctx, base);
loc_826601A0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826601c8
	goto loc_826601C8;
loc_826601AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826601C8;
	sub_82668848(ctx, base);
loc_826601C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826601D0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826601E8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826601F8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660200;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266020C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660214;
	sub_82214F08(ctx, base);
loc_82660214:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82660224
	if (ctx.cr6.eq) goto loc_82660224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82749510
	ctx.lr = 0x82660224;
	sub_82749510(ctx, base);
loc_82660224:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266022C"))) PPC_WEAK_FUNC(sub_8266022C);
PPC_FUNC_IMPL(__imp__sub_8266022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660230"))) PPC_WEAK_FUNC(sub_82660230);
PPC_FUNC_IMPL(__imp__sub_82660230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82660238;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660398
	if (ctx.cr6.eq) goto loc_82660398;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28540
	ctx.r4.s64 = ctx.r11.s64 + -28540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660260;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660278
	if (!ctx.cr6.eq) goto loc_82660278;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266027c
	goto loc_8266027C;
loc_82660278:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266027C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660284;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19672
	ctx.r9.s64 = ctx.r11.s64 + -19672;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826602B4;
	sub_821F0108(ctx, base);
	// li r7,171
	ctx.r7.s64 = 171;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826602D0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826602e8
	if (!ctx.cr6.eq) goto loc_826602E8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826602f4
	goto loc_826602F4;
loc_826602E8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826602F4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82660330
	if (!ctx.cr6.lt) goto loc_82660330;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660324
	if (ctx.cr6.eq) goto loc_82660324;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660324;
	sub_82668718(ctx, base);
loc_82660324:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266034c
	goto loc_8266034C;
loc_82660330:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266034C;
	sub_82668848(ctx, base);
loc_8266034C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660354;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266036C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266037C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660384;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660390;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660398;
	sub_82214F08(ctx, base);
loc_82660398:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826603A0"))) PPC_WEAK_FUNC(sub_826603A0);
PPC_FUNC_IMPL(__imp__sub_826603A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826603A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266050c
	if (ctx.cr6.eq) goto loc_8266050C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28532
	ctx.r4.s64 = ctx.r11.s64 + -28532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826603D4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826603ec
	if (!ctx.cr6.eq) goto loc_826603EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826603f0
	goto loc_826603F0;
loc_826603EC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826603F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826603F8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19568
	ctx.r9.s64 = ctx.r11.s64 + -19568;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660428;
	sub_821F0108(ctx, base);
	// li r7,172
	ctx.r7.s64 = 172;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660444;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266045c
	if (!ctx.cr6.eq) goto loc_8266045C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660468
	goto loc_82660468;
loc_8266045C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660468:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826604a4
	if (!ctx.cr6.lt) goto loc_826604A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660498
	if (ctx.cr6.eq) goto loc_82660498;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660498;
	sub_82668718(ctx, base);
loc_82660498:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826604c0
	goto loc_826604C0;
loc_826604A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826604C0;
	sub_82668848(ctx, base);
loc_826604C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826604C8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826604E0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826604F0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826604F8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660504;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266050C;
	sub_82214F08(ctx, base);
loc_8266050C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266051c
	if (ctx.cr6.eq) goto loc_8266051C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82990648
	ctx.lr = 0x8266051C;
	sub_82990648(ctx, base);
loc_8266051C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82660524"))) PPC_WEAK_FUNC(sub_82660524);
PPC_FUNC_IMPL(__imp__sub_82660524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660528"))) PPC_WEAK_FUNC(sub_82660528);
PPC_FUNC_IMPL(__imp__sub_82660528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82660530;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660694
	if (ctx.cr6.eq) goto loc_82660694;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-16088
	ctx.r4.s64 = ctx.r11.s64 + -16088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266055C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660574
	if (!ctx.cr6.eq) goto loc_82660574;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660578
	goto loc_82660578;
loc_82660574:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660580;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19392
	ctx.r9.s64 = ctx.r11.s64 + -19392;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826605B0;
	sub_821F0108(ctx, base);
	// li r7,179
	ctx.r7.s64 = 179;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826605CC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826605e4
	if (!ctx.cr6.eq) goto loc_826605E4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826605f0
	goto loc_826605F0;
loc_826605E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826605F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266062c
	if (!ctx.cr6.lt) goto loc_8266062C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660620
	if (ctx.cr6.eq) goto loc_82660620;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660620;
	sub_82668718(ctx, base);
loc_82660620:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82660648
	goto loc_82660648;
loc_8266062C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82660648;
	sub_82668848(ctx, base);
loc_82660648:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660650;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82660668;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660678;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660680;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266068C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660694;
	sub_82214F08(ctx, base);
loc_82660694:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826606a4
	if (ctx.cr6.eq) goto loc_826606A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8250bed0
	ctx.lr = 0x826606A4;
	sub_8250BED0(ctx, base);
loc_826606A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826606AC"))) PPC_WEAK_FUNC(sub_826606AC);
PPC_FUNC_IMPL(__imp__sub_826606AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826606B0"))) PPC_WEAK_FUNC(sub_826606B0);
PPC_FUNC_IMPL(__imp__sub_826606B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826606B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266081c
	if (ctx.cr6.eq) goto loc_8266081C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28520
	ctx.r4.s64 = ctx.r11.s64 + -28520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826606E4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826606fc
	if (!ctx.cr6.eq) goto loc_826606FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660700
	goto loc_82660700;
loc_826606FC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660708;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19208
	ctx.r9.s64 = ctx.r11.s64 + -19208;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660738;
	sub_821F0108(ctx, base);
	// li r7,180
	ctx.r7.s64 = 180;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660754;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266076c
	if (!ctx.cr6.eq) goto loc_8266076C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660778
	goto loc_82660778;
loc_8266076C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660778:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826607b4
	if (!ctx.cr6.lt) goto loc_826607B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826607a8
	if (ctx.cr6.eq) goto loc_826607A8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826607A8;
	sub_82668718(ctx, base);
loc_826607A8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826607d0
	goto loc_826607D0;
loc_826607B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826607D0;
	sub_82668848(ctx, base);
loc_826607D0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826607D8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826607F0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660800;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660808;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660814;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266081C;
	sub_82214F08(ctx, base);
loc_8266081C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266089c
	if (ctx.cr6.eq) goto loc_8266089C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-20536
	ctx.r31.s64 = ctx.r11.s64 + -20536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8266083C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8292e668
	ctx.lr = 0x82660848;
	sub_8292E668(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660850;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-20524
	ctx.r4.s64 = ctx.r10.s64 + -20524;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82660864;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660874;
	sub_8222CF18(ctx, base);
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-8376
	ctx.r6.s64 = ctx.r9.s64 + -8376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8292e8b0
	ctx.lr = 0x8266088C;
	sub_8292E8B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660894;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8266089C;
	sub_82214F08(ctx, base);
loc_8266089C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826608A4"))) PPC_WEAK_FUNC(sub_826608A4);
PPC_FUNC_IMPL(__imp__sub_826608A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826608A8"))) PPC_WEAK_FUNC(sub_826608A8);
PPC_FUNC_IMPL(__imp__sub_826608A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826608B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660a14
	if (ctx.cr6.eq) goto loc_82660A14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826608DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826608f4
	if (!ctx.cr6.eq) goto loc_826608F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826608f8
	goto loc_826608F8;
loc_826608F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826608F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660900;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-19080
	ctx.r9.s64 = ctx.r11.s64 + -19080;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660930;
	sub_821F0108(ctx, base);
	// li r7,181
	ctx.r7.s64 = 181;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266094C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660964
	if (!ctx.cr6.eq) goto loc_82660964;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660970
	goto loc_82660970;
loc_82660964:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660970:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826609ac
	if (!ctx.cr6.lt) goto loc_826609AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826609a0
	if (ctx.cr6.eq) goto loc_826609A0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826609A0;
	sub_82668718(ctx, base);
loc_826609A0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826609c8
	goto loc_826609C8;
loc_826609AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826609C8;
	sub_82668848(ctx, base);
loc_826609C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826609D0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826609E8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826609F8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660A00;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660A0C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660A14;
	sub_82214F08(ctx, base);
loc_82660A14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82660a24
	if (ctx.cr6.eq) goto loc_82660A24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291aee0
	ctx.lr = 0x82660A24;
	sub_8291AEE0(ctx, base);
loc_82660A24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82660A2C"))) PPC_WEAK_FUNC(sub_82660A2C);
PPC_FUNC_IMPL(__imp__sub_82660A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660A30"))) PPC_WEAK_FUNC(sub_82660A30);
PPC_FUNC_IMPL(__imp__sub_82660A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82660A38;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660b9c
	if (ctx.cr6.eq) goto loc_82660B9C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21512
	ctx.r4.s64 = ctx.r11.s64 + 21512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660A64;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660a7c
	if (!ctx.cr6.eq) goto loc_82660A7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660a80
	goto loc_82660A80;
loc_82660A7C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660A80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660A88;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18992
	ctx.r9.s64 = ctx.r11.s64 + -18992;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660AB8;
	sub_821F0108(ctx, base);
	// li r7,182
	ctx.r7.s64 = 182;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660AD4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660aec
	if (!ctx.cr6.eq) goto loc_82660AEC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660af8
	goto loc_82660AF8;
loc_82660AEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660AF8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82660b34
	if (!ctx.cr6.lt) goto loc_82660B34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660b28
	if (ctx.cr6.eq) goto loc_82660B28;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660B28;
	sub_82668718(ctx, base);
loc_82660B28:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82660b50
	goto loc_82660B50;
loc_82660B34:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82660B50;
	sub_82668848(ctx, base);
loc_82660B50:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660B58;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82660B70;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660B80;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660B88;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660B94;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660B9C;
	sub_82214F08(ctx, base);
loc_82660B9C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82660bac
	if (ctx.cr6.eq) goto loc_82660BAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825edd00
	ctx.lr = 0x82660BAC;
	sub_825EDD00(ctx, base);
loc_82660BAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82660BB4"))) PPC_WEAK_FUNC(sub_82660BB4);
PPC_FUNC_IMPL(__imp__sub_82660BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660BB8"))) PPC_WEAK_FUNC(sub_82660BB8);
PPC_FUNC_IMPL(__imp__sub_82660BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82660BC0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660d20
	if (ctx.cr6.eq) goto loc_82660D20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26812
	ctx.r4.s64 = ctx.r11.s64 + 26812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660BE8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660c00
	if (!ctx.cr6.eq) goto loc_82660C00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660c04
	goto loc_82660C04;
loc_82660C00:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660C0C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18864
	ctx.r9.s64 = ctx.r11.s64 + -18864;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660C3C;
	sub_821F0108(ctx, base);
	// li r7,183
	ctx.r7.s64 = 183;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660C58;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660c70
	if (!ctx.cr6.eq) goto loc_82660C70;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660c7c
	goto loc_82660C7C;
loc_82660C70:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660C7C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82660cb8
	if (!ctx.cr6.lt) goto loc_82660CB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660cac
	if (ctx.cr6.eq) goto loc_82660CAC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660CAC;
	sub_82668718(ctx, base);
loc_82660CAC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82660cd4
	goto loc_82660CD4;
loc_82660CB8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82660CD4;
	sub_82668848(ctx, base);
loc_82660CD4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660CDC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82660CF4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660D04;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660D0C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660D18;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660D20;
	sub_82214F08(ctx, base);
loc_82660D20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82660D28"))) PPC_WEAK_FUNC(sub_82660D28);
PPC_FUNC_IMPL(__imp__sub_82660D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82660D30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660e94
	if (ctx.cr6.eq) goto loc_82660E94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28496
	ctx.r4.s64 = ctx.r11.s64 + -28496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660D5C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660d74
	if (!ctx.cr6.eq) goto loc_82660D74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660d78
	goto loc_82660D78;
loc_82660D74:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660D78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660D80;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18712
	ctx.r9.s64 = ctx.r11.s64 + -18712;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660DB0;
	sub_821F0108(ctx, base);
	// li r7,184
	ctx.r7.s64 = 184;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660DCC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660de4
	if (!ctx.cr6.eq) goto loc_82660DE4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660df0
	goto loc_82660DF0;
loc_82660DE4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660DF0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82660e2c
	if (!ctx.cr6.lt) goto loc_82660E2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82660e20
	if (ctx.cr6.eq) goto loc_82660E20;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82660E20;
	sub_82668718(ctx, base);
loc_82660E20:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82660e48
	goto loc_82660E48;
loc_82660E2C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82660E48;
	sub_82668848(ctx, base);
loc_82660E48:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82660E50;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82660E68;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82660E78;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660E80;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82660E8C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660E94;
	sub_82214F08(ctx, base);
loc_82660E94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82660f14
	if (ctx.cr6.eq) goto loc_82660F14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-6968
	ctx.r31.s64 = ctx.r11.s64 + -6968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82660EB4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82993f18
	ctx.lr = 0x82660EC0;
	sub_82993F18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660EC8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-6952
	ctx.r4.s64 = ctx.r10.s64 + -6952;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82660EDC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660EEC;
	sub_8222CF18(ctx, base);
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,14208
	ctx.r6.s64 = ctx.r9.s64 + 14208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82994160
	ctx.lr = 0x82660F04;
	sub_82994160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82660F0C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82660F14;
	sub_82214F08(ctx, base);
loc_82660F14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82660F1C"))) PPC_WEAK_FUNC(sub_82660F1C);
PPC_FUNC_IMPL(__imp__sub_82660F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660F20"))) PPC_WEAK_FUNC(sub_82660F20);
PPC_FUNC_IMPL(__imp__sub_82660F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82660F28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661088
	if (ctx.cr6.eq) goto loc_82661088;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82660F50;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660f68
	if (!ctx.cr6.eq) goto loc_82660F68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82660f6c
	goto loc_82660F6C;
loc_82660F68:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82660F6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82660F74;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18584
	ctx.r9.s64 = ctx.r11.s64 + -18584;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82660FA4;
	sub_821F0108(ctx, base);
	// li r7,173
	ctx.r7.s64 = 173;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82660FC0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660fd8
	if (!ctx.cr6.eq) goto loc_82660FD8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82660fe4
	goto loc_82660FE4;
loc_82660FD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82660FE4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661020
	if (!ctx.cr6.lt) goto loc_82661020;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661014
	if (ctx.cr6.eq) goto loc_82661014;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661014;
	sub_82668718(ctx, base);
loc_82661014:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266103c
	goto loc_8266103C;
loc_82661020:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266103C;
	sub_82668848(ctx, base);
loc_8266103C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661044;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266105C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266106C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661074;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661080;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661088;
	sub_82214F08(ctx, base);
loc_82661088:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661090"))) PPC_WEAK_FUNC(sub_82661090);
PPC_FUNC_IMPL(__imp__sub_82661090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661098;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826611f8
	if (ctx.cr6.eq) goto loc_826611F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28460
	ctx.r4.s64 = ctx.r11.s64 + -28460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826610C0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826610d8
	if (!ctx.cr6.eq) goto loc_826610D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826610dc
	goto loc_826610DC;
loc_826610D8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826610DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826610E4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18464
	ctx.r9.s64 = ctx.r11.s64 + -18464;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661114;
	sub_821F0108(ctx, base);
	// li r7,174
	ctx.r7.s64 = 174;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661130;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661148
	if (!ctx.cr6.eq) goto loc_82661148;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661154
	goto loc_82661154;
loc_82661148:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661154:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661190
	if (!ctx.cr6.lt) goto loc_82661190;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661184
	if (ctx.cr6.eq) goto loc_82661184;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661184;
	sub_82668718(ctx, base);
loc_82661184:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826611ac
	goto loc_826611AC;
loc_82661190:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826611AC;
	sub_82668848(ctx, base);
loc_826611AC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826611B4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826611CC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826611DC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826611E4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826611F0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826611F8;
	sub_82214F08(ctx, base);
loc_826611F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661200"))) PPC_WEAK_FUNC(sub_82661200);
PPC_FUNC_IMPL(__imp__sub_82661200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661208;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661368
	if (ctx.cr6.eq) goto loc_82661368;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28440
	ctx.r4.s64 = ctx.r11.s64 + -28440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661230;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661248
	if (!ctx.cr6.eq) goto loc_82661248;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266124c
	goto loc_8266124C;
loc_82661248:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266124C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661254;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18352
	ctx.r9.s64 = ctx.r11.s64 + -18352;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661284;
	sub_821F0108(ctx, base);
	// li r7,175
	ctx.r7.s64 = 175;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826612A0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826612b8
	if (!ctx.cr6.eq) goto loc_826612B8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826612c4
	goto loc_826612C4;
loc_826612B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826612C4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661300
	if (!ctx.cr6.lt) goto loc_82661300;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826612f4
	if (ctx.cr6.eq) goto loc_826612F4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826612F4;
	sub_82668718(ctx, base);
loc_826612F4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266131c
	goto loc_8266131C;
loc_82661300:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266131C;
	sub_82668848(ctx, base);
loc_8266131C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661324;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266133C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266134C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661354;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661360;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661368;
	sub_82214F08(ctx, base);
loc_82661368:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661370"))) PPC_WEAK_FUNC(sub_82661370);
PPC_FUNC_IMPL(__imp__sub_82661370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661378;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826614d8
	if (ctx.cr6.eq) goto loc_826614D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826613A0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826613b8
	if (!ctx.cr6.eq) goto loc_826613B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826613bc
	goto loc_826613BC;
loc_826613B8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826613BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826613C4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18248
	ctx.r9.s64 = ctx.r11.s64 + -18248;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826613F4;
	sub_821F0108(ctx, base);
	// li r7,176
	ctx.r7.s64 = 176;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661410;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661428
	if (!ctx.cr6.eq) goto loc_82661428;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661434
	goto loc_82661434;
loc_82661428:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661434:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661470
	if (!ctx.cr6.lt) goto loc_82661470;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661464
	if (ctx.cr6.eq) goto loc_82661464;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661464;
	sub_82668718(ctx, base);
loc_82661464:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266148c
	goto loc_8266148C;
loc_82661470:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266148C;
	sub_82668848(ctx, base);
loc_8266148C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661494;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826614AC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826614BC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826614C4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826614D0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826614D8;
	sub_82214F08(ctx, base);
loc_826614D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826614E0"))) PPC_WEAK_FUNC(sub_826614E0);
PPC_FUNC_IMPL(__imp__sub_826614E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826614E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661648
	if (ctx.cr6.eq) goto loc_82661648;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28392
	ctx.r4.s64 = ctx.r11.s64 + -28392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661510;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661528
	if (!ctx.cr6.eq) goto loc_82661528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266152c
	goto loc_8266152C;
loc_82661528:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266152C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661534;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18144
	ctx.r9.s64 = ctx.r11.s64 + -18144;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661564;
	sub_821F0108(ctx, base);
	// li r7,177
	ctx.r7.s64 = 177;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661580;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661598
	if (!ctx.cr6.eq) goto loc_82661598;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826615a4
	goto loc_826615A4;
loc_82661598:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826615A4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826615e0
	if (!ctx.cr6.lt) goto loc_826615E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826615d4
	if (ctx.cr6.eq) goto loc_826615D4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826615D4;
	sub_82668718(ctx, base);
loc_826615D4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826615fc
	goto loc_826615FC;
loc_826615E0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826615FC;
	sub_82668848(ctx, base);
loc_826615FC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661604;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266161C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266162C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661634;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661640;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661648;
	sub_82214F08(ctx, base);
loc_82661648:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661650"))) PPC_WEAK_FUNC(sub_82661650);
PPC_FUNC_IMPL(__imp__sub_82661650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661658;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826617b8
	if (ctx.cr6.eq) goto loc_826617B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661680;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661698
	if (!ctx.cr6.eq) goto loc_82661698;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266169c
	goto loc_8266169C;
loc_82661698:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266169C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826616A4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-18032
	ctx.r9.s64 = ctx.r11.s64 + -18032;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826616D4;
	sub_821F0108(ctx, base);
	// li r7,178
	ctx.r7.s64 = 178;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826616F0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661708
	if (!ctx.cr6.eq) goto loc_82661708;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661714
	goto loc_82661714;
loc_82661708:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661714:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661750
	if (!ctx.cr6.lt) goto loc_82661750;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661744
	if (ctx.cr6.eq) goto loc_82661744;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661744;
	sub_82668718(ctx, base);
loc_82661744:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266176c
	goto loc_8266176C;
loc_82661750:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266176C;
	sub_82668848(ctx, base);
loc_8266176C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661774;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266178C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266179C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826617A4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826617B0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826617B8;
	sub_82214F08(ctx, base);
loc_826617B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826617C0"))) PPC_WEAK_FUNC(sub_826617C0);
PPC_FUNC_IMPL(__imp__sub_826617C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826617C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661928
	if (ctx.cr6.eq) goto loc_82661928;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28340
	ctx.r4.s64 = ctx.r11.s64 + -28340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826617F0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661808
	if (!ctx.cr6.eq) goto loc_82661808;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266180c
	goto loc_8266180C;
loc_82661808:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266180C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661814;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17904
	ctx.r9.s64 = ctx.r11.s64 + -17904;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661844;
	sub_821F0108(ctx, base);
	// li r7,185
	ctx.r7.s64 = 185;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661860;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661878
	if (!ctx.cr6.eq) goto loc_82661878;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661884
	goto loc_82661884;
loc_82661878:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661884:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826618c0
	if (!ctx.cr6.lt) goto loc_826618C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826618b4
	if (ctx.cr6.eq) goto loc_826618B4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826618B4;
	sub_82668718(ctx, base);
loc_826618B4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826618dc
	goto loc_826618DC;
loc_826618C0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826618DC;
	sub_82668848(ctx, base);
loc_826618DC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826618E4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826618FC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266190C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661914;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661920;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661928;
	sub_82214F08(ctx, base);
loc_82661928:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661930"))) PPC_WEAK_FUNC(sub_82661930);
PPC_FUNC_IMPL(__imp__sub_82661930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661938;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661a98
	if (ctx.cr6.eq) goto loc_82661A98;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28320
	ctx.r4.s64 = ctx.r11.s64 + -28320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661960;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661978
	if (!ctx.cr6.eq) goto loc_82661978;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266197c
	goto loc_8266197C;
loc_82661978:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266197C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661984;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17640
	ctx.r9.s64 = ctx.r11.s64 + -17640;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826619B4;
	sub_821F0108(ctx, base);
	// li r7,186
	ctx.r7.s64 = 186;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826619D0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826619e8
	if (!ctx.cr6.eq) goto loc_826619E8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826619f4
	goto loc_826619F4;
loc_826619E8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826619F4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661a30
	if (!ctx.cr6.lt) goto loc_82661A30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661a24
	if (ctx.cr6.eq) goto loc_82661A24;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661A24;
	sub_82668718(ctx, base);
loc_82661A24:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82661a4c
	goto loc_82661A4C;
loc_82661A30:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82661A4C;
	sub_82668848(ctx, base);
loc_82661A4C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661A54;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82661A6C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82661A7C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661A84;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661A90;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661A98;
	sub_82214F08(ctx, base);
loc_82661A98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661AA0"))) PPC_WEAK_FUNC(sub_82661AA0);
PPC_FUNC_IMPL(__imp__sub_82661AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82661AA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661c0c
	if (ctx.cr6.eq) goto loc_82661C0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28292
	ctx.r4.s64 = ctx.r11.s64 + -28292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661AD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661aec
	if (!ctx.cr6.eq) goto loc_82661AEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82661af0
	goto loc_82661AF0;
loc_82661AEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82661AF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661AF8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17360
	ctx.r9.s64 = ctx.r11.s64 + -17360;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661B28;
	sub_821F0108(ctx, base);
	// li r7,187
	ctx.r7.s64 = 187;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661B44;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661b5c
	if (!ctx.cr6.eq) goto loc_82661B5C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661b68
	goto loc_82661B68;
loc_82661B5C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661B68:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661ba4
	if (!ctx.cr6.lt) goto loc_82661BA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661b98
	if (ctx.cr6.eq) goto loc_82661B98;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661B98;
	sub_82668718(ctx, base);
loc_82661B98:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82661bc0
	goto loc_82661BC0;
loc_82661BA4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82661BC0;
	sub_82668848(ctx, base);
loc_82661BC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661BC8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82661BE0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82661BF0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661BF8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661C04;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661C0C;
	sub_82214F08(ctx, base);
loc_82661C0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82661c1c
	if (ctx.cr6.eq) goto loc_82661C1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82996f30
	ctx.lr = 0x82661C1C;
	sub_82996F30(ctx, base);
loc_82661C1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82661C24"))) PPC_WEAK_FUNC(sub_82661C24);
PPC_FUNC_IMPL(__imp__sub_82661C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661C28"))) PPC_WEAK_FUNC(sub_82661C28);
PPC_FUNC_IMPL(__imp__sub_82661C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661C30;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661d90
	if (ctx.cr6.eq) goto loc_82661D90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28280
	ctx.r4.s64 = ctx.r11.s64 + -28280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661C58;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661c70
	if (!ctx.cr6.eq) goto loc_82661C70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82661c74
	goto loc_82661C74;
loc_82661C70:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82661C74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661C7C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17256
	ctx.r9.s64 = ctx.r11.s64 + -17256;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661CAC;
	sub_821F0108(ctx, base);
	// li r7,188
	ctx.r7.s64 = 188;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661CC8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661ce0
	if (!ctx.cr6.eq) goto loc_82661CE0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661cec
	goto loc_82661CEC;
loc_82661CE0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661CEC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661d28
	if (!ctx.cr6.lt) goto loc_82661D28;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661d1c
	if (ctx.cr6.eq) goto loc_82661D1C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661D1C;
	sub_82668718(ctx, base);
loc_82661D1C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82661d44
	goto loc_82661D44;
loc_82661D28:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82661D44;
	sub_82668848(ctx, base);
loc_82661D44:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661D4C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82661D64;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82661D74;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661D7C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661D88;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661D90;
	sub_82214F08(ctx, base);
loc_82661D90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82661D98"))) PPC_WEAK_FUNC(sub_82661D98);
PPC_FUNC_IMPL(__imp__sub_82661D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82661DA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661f04
	if (ctx.cr6.eq) goto loc_82661F04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28268
	ctx.r4.s64 = ctx.r11.s64 + -28268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661DCC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661de4
	if (!ctx.cr6.eq) goto loc_82661DE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82661de8
	goto loc_82661DE8;
loc_82661DE4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82661DE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661DF0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17152
	ctx.r9.s64 = ctx.r11.s64 + -17152;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661E20;
	sub_821F0108(ctx, base);
	// li r7,189
	ctx.r7.s64 = 189;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661E3C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661e54
	if (!ctx.cr6.eq) goto loc_82661E54;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661e60
	goto loc_82661E60;
loc_82661E54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661E60:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82661e9c
	if (!ctx.cr6.lt) goto loc_82661E9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661e90
	if (ctx.cr6.eq) goto loc_82661E90;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82661E90;
	sub_82668718(ctx, base);
loc_82661E90:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82661eb8
	goto loc_82661EB8;
loc_82661E9C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82661EB8;
	sub_82668848(ctx, base);
loc_82661EB8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82661EC0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82661ED8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82661EE8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82661EF0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82661EFC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82661F04;
	sub_82214F08(ctx, base);
loc_82661F04:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82661f14
	if (ctx.cr6.eq) goto loc_82661F14;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8273c0d0
	ctx.lr = 0x82661F14;
	sub_8273C0D0(ctx, base);
loc_82661F14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82661F1C"))) PPC_WEAK_FUNC(sub_82661F1C);
PPC_FUNC_IMPL(__imp__sub_82661F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661F20"))) PPC_WEAK_FUNC(sub_82661F20);
PPC_FUNC_IMPL(__imp__sub_82661F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82661F28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662088
	if (ctx.cr6.eq) goto loc_82662088;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28248
	ctx.r4.s64 = ctx.r11.s64 + -28248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82661F50;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661f68
	if (!ctx.cr6.eq) goto loc_82661F68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82661f6c
	goto loc_82661F6C;
loc_82661F68:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82661F6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82661F74;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-17064
	ctx.r9.s64 = ctx.r11.s64 + -17064;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82661FA4;
	sub_821F0108(ctx, base);
	// li r7,190
	ctx.r7.s64 = 190;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82661FC0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661fd8
	if (!ctx.cr6.eq) goto loc_82661FD8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82661fe4
	goto loc_82661FE4;
loc_82661FD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82661FE4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662020
	if (!ctx.cr6.lt) goto loc_82662020;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662014
	if (ctx.cr6.eq) goto loc_82662014;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662014;
	sub_82668718(ctx, base);
loc_82662014:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266203c
	goto loc_8266203C;
loc_82662020:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266203C;
	sub_82668848(ctx, base);
loc_8266203C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662044;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266205C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266206C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662074;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662080;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662088;
	sub_82214F08(ctx, base);
loc_82662088:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82662090"))) PPC_WEAK_FUNC(sub_82662090);
PPC_FUNC_IMPL(__imp__sub_82662090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662098;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826621fc
	if (ctx.cr6.eq) goto loc_826621FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28228
	ctx.r4.s64 = ctx.r11.s64 + -28228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826620C4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826620dc
	if (!ctx.cr6.eq) goto loc_826620DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826620e0
	goto loc_826620E0;
loc_826620DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826620E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826620E8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16944
	ctx.r9.s64 = ctx.r11.s64 + -16944;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662118;
	sub_821F0108(ctx, base);
	// li r7,192
	ctx.r7.s64 = 192;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662134;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266214c
	if (!ctx.cr6.eq) goto loc_8266214C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662158
	goto loc_82662158;
loc_8266214C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662158:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662194
	if (!ctx.cr6.lt) goto loc_82662194;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662188
	if (ctx.cr6.eq) goto loc_82662188;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662188;
	sub_82668718(ctx, base);
loc_82662188:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826621b0
	goto loc_826621B0;
loc_82662194:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826621B0;
	sub_82668848(ctx, base);
loc_826621B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826621B8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826621D0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826621E0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826621E8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826621F4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826621FC;
	sub_82214F08(ctx, base);
loc_826621FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266220c
	if (ctx.cr6.eq) goto loc_8266220C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8270aa30
	ctx.lr = 0x8266220C;
	sub_8270AA30(ctx, base);
loc_8266220C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82662214"))) PPC_WEAK_FUNC(sub_82662214);
PPC_FUNC_IMPL(__imp__sub_82662214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662218"))) PPC_WEAK_FUNC(sub_82662218);
PPC_FUNC_IMPL(__imp__sub_82662218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662220;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662384
	if (ctx.cr6.eq) goto loc_82662384;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28212
	ctx.r4.s64 = ctx.r11.s64 + -28212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266224C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662264
	if (!ctx.cr6.eq) goto loc_82662264;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82662268
	goto loc_82662268;
loc_82662264:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82662268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662270;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16736
	ctx.r9.s64 = ctx.r11.s64 + -16736;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826622A0;
	sub_821F0108(ctx, base);
	// li r7,193
	ctx.r7.s64 = 193;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826622BC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826622d4
	if (!ctx.cr6.eq) goto loc_826622D4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826622e0
	goto loc_826622E0;
loc_826622D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826622E0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266231c
	if (!ctx.cr6.lt) goto loc_8266231C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662310
	if (ctx.cr6.eq) goto loc_82662310;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662310;
	sub_82668718(ctx, base);
loc_82662310:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662338
	goto loc_82662338;
loc_8266231C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662338;
	sub_82668848(ctx, base);
loc_82662338:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662340;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82662358;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82662368;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662370;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266237C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662384;
	sub_82214F08(ctx, base);
loc_82662384:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82662404
	if (ctx.cr6.eq) goto loc_82662404;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,9996
	ctx.r31.s64 = ctx.r11.s64 + 9996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826623A4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82998280
	ctx.lr = 0x826623B0;
	sub_82998280(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826623B8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-5772
	ctx.r4.s64 = ctx.r10.s64 + -5772;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826623CC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826623DC;
	sub_8222CF18(ctx, base);
	// lis r9,-32102
	ctx.r9.s64 = -2103836672;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-32368
	ctx.r6.s64 = ctx.r9.s64 + -32368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829984c8
	ctx.lr = 0x826623F4;
	sub_829984C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826623FC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662404;
	sub_82214F08(ctx, base);
loc_82662404:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266240C"))) PPC_WEAK_FUNC(sub_8266240C);
PPC_FUNC_IMPL(__imp__sub_8266240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662410"))) PPC_WEAK_FUNC(sub_82662410);
PPC_FUNC_IMPL(__imp__sub_82662410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82662418;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662578
	if (ctx.cr6.eq) goto loc_82662578;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28196
	ctx.r4.s64 = ctx.r11.s64 + -28196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662440;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662458
	if (!ctx.cr6.eq) goto loc_82662458;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266245c
	goto loc_8266245C;
loc_82662458:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266245C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662464;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16632
	ctx.r9.s64 = ctx.r11.s64 + -16632;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662494;
	sub_821F0108(ctx, base);
	// li r7,45
	ctx.r7.s64 = 45;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826624B0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826624c8
	if (!ctx.cr6.eq) goto loc_826624C8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826624d4
	goto loc_826624D4;
loc_826624C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826624D4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662510
	if (!ctx.cr6.lt) goto loc_82662510;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662504
	if (ctx.cr6.eq) goto loc_82662504;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662504;
	sub_82668718(ctx, base);
loc_82662504:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266252c
	goto loc_8266252C;
loc_82662510:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266252C;
	sub_82668848(ctx, base);
loc_8266252C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662534;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266254C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266255C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662564;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662570;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662578;
	sub_82214F08(ctx, base);
loc_82662578:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82662580"))) PPC_WEAK_FUNC(sub_82662580);
PPC_FUNC_IMPL(__imp__sub_82662580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82662588;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826626e8
	if (ctx.cr6.eq) goto loc_826626E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28172
	ctx.r4.s64 = ctx.r11.s64 + -28172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826625B0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826625c8
	if (!ctx.cr6.eq) goto loc_826625C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826625cc
	goto loc_826625CC;
loc_826625C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826625CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826625D4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16336
	ctx.r9.s64 = ctx.r11.s64 + -16336;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662604;
	sub_821F0108(ctx, base);
	// li r7,195
	ctx.r7.s64 = 195;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662620;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662638
	if (!ctx.cr6.eq) goto loc_82662638;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662644
	goto loc_82662644;
loc_82662638:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662644:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662680
	if (!ctx.cr6.lt) goto loc_82662680;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662674
	if (ctx.cr6.eq) goto loc_82662674;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662674;
	sub_82668718(ctx, base);
loc_82662674:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266269c
	goto loc_8266269C;
loc_82662680:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266269C;
	sub_82668848(ctx, base);
loc_8266269C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826626A4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826626BC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826626CC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826626D4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826626E0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826626E8;
	sub_82214F08(ctx, base);
loc_826626E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826626F0"))) PPC_WEAK_FUNC(sub_826626F0);
PPC_FUNC_IMPL(__imp__sub_826626F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826626F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662858
	if (ctx.cr6.eq) goto loc_82662858;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28188
	ctx.r4.s64 = ctx.r11.s64 + -28188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662720;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662738
	if (!ctx.cr6.eq) goto loc_82662738;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266273c
	goto loc_8266273C;
loc_82662738:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266273C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662744;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16424
	ctx.r9.s64 = ctx.r11.s64 + -16424;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662774;
	sub_821F0108(ctx, base);
	// li r7,46
	ctx.r7.s64 = 46;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662790;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826627a8
	if (!ctx.cr6.eq) goto loc_826627A8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826627b4
	goto loc_826627B4;
loc_826627A8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826627B4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826627f0
	if (!ctx.cr6.lt) goto loc_826627F0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826627e4
	if (ctx.cr6.eq) goto loc_826627E4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826627E4;
	sub_82668718(ctx, base);
loc_826627E4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266280c
	goto loc_8266280C;
loc_826627F0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266280C;
	sub_82668848(ctx, base);
loc_8266280C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662814;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266282C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266283C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662844;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662850;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662858;
	sub_82214F08(ctx, base);
loc_82662858:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82662860"))) PPC_WEAK_FUNC(sub_82662860);
PPC_FUNC_IMPL(__imp__sub_82662860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662868;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826629cc
	if (ctx.cr6.eq) goto loc_826629CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662894;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826628ac
	if (!ctx.cr6.eq) goto loc_826628AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826628b0
	goto loc_826628B0;
loc_826628AC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826628B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826628B8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16200
	ctx.r9.s64 = ctx.r11.s64 + -16200;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826628E8;
	sub_821F0108(ctx, base);
	// li r7,194
	ctx.r7.s64 = 194;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662904;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266291c
	if (!ctx.cr6.eq) goto loc_8266291C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662928
	goto loc_82662928;
loc_8266291C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662928:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662964
	if (!ctx.cr6.lt) goto loc_82662964;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662958
	if (ctx.cr6.eq) goto loc_82662958;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662958;
	sub_82668718(ctx, base);
loc_82662958:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662980
	goto loc_82662980;
loc_82662964:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662980;
	sub_82668848(ctx, base);
loc_82662980:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662988;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826629A0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826629B0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826629B8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826629C4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826629CC;
	sub_82214F08(ctx, base);
loc_826629CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826629dc
	if (ctx.cr6.eq) goto loc_826629DC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82942290
	ctx.lr = 0x826629DC;
	sub_82942290(ctx, base);
loc_826629DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826629E4"))) PPC_WEAK_FUNC(sub_826629E4);
PPC_FUNC_IMPL(__imp__sub_826629E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826629E8"))) PPC_WEAK_FUNC(sub_826629E8);
PPC_FUNC_IMPL(__imp__sub_826629E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826629F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b50
	if (ctx.cr6.eq) goto loc_82662B50;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21776
	ctx.r4.s64 = ctx.r11.s64 + 21776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662A18;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662a30
	if (!ctx.cr6.eq) goto loc_82662A30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82662a34
	goto loc_82662A34;
loc_82662A30:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82662A34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662A3C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-16072
	ctx.r9.s64 = ctx.r11.s64 + -16072;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662A6C;
	sub_821F0108(ctx, base);
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662A88;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662aa0
	if (!ctx.cr6.eq) goto loc_82662AA0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662aac
	goto loc_82662AAC;
loc_82662AA0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662AAC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662ae8
	if (!ctx.cr6.lt) goto loc_82662AE8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662adc
	if (ctx.cr6.eq) goto loc_82662ADC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662ADC;
	sub_82668718(ctx, base);
loc_82662ADC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662b04
	goto loc_82662B04;
loc_82662AE8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662B04;
	sub_82668848(ctx, base);
loc_82662B04:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662B0C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82662B24;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82662B34;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662B3C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662B48;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662B50;
	sub_82214F08(ctx, base);
loc_82662B50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82662B58"))) PPC_WEAK_FUNC(sub_82662B58);
PPC_FUNC_IMPL(__imp__sub_82662B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662B60;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662cc4
	if (ctx.cr6.eq) goto loc_82662CC4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-11724
	ctx.r4.s64 = ctx.r11.s64 + -11724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662B8C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662ba4
	if (!ctx.cr6.eq) goto loc_82662BA4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82662ba8
	goto loc_82662BA8;
loc_82662BA4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82662BA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662BB0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15904
	ctx.r9.s64 = ctx.r11.s64 + -15904;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662BE0;
	sub_821F0108(ctx, base);
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662BFC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662c14
	if (!ctx.cr6.eq) goto loc_82662C14;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662c20
	goto loc_82662C20;
loc_82662C14:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662C20:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662c5c
	if (!ctx.cr6.lt) goto loc_82662C5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662c50
	if (ctx.cr6.eq) goto loc_82662C50;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662C50;
	sub_82668718(ctx, base);
loc_82662C50:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662c78
	goto loc_82662C78;
loc_82662C5C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662C78;
	sub_82668848(ctx, base);
loc_82662C78:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662C80;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82662C98;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82662CA8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662CB0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662CBC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662CC4;
	sub_82214F08(ctx, base);
loc_82662CC4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82662cd4
	if (ctx.cr6.eq) goto loc_82662CD4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82537f38
	ctx.lr = 0x82662CD4;
	sub_82537F38(ctx, base);
loc_82662CD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82662CDC"))) PPC_WEAK_FUNC(sub_82662CDC);
PPC_FUNC_IMPL(__imp__sub_82662CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662CE0"))) PPC_WEAK_FUNC(sub_82662CE0);
PPC_FUNC_IMPL(__imp__sub_82662CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662CE8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662e4c
	if (ctx.cr6.eq) goto loc_82662E4C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28136
	ctx.r4.s64 = ctx.r11.s64 + -28136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662D14;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662d2c
	if (!ctx.cr6.eq) goto loc_82662D2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82662d30
	goto loc_82662D30;
loc_82662D2C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82662D30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662D38;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15816
	ctx.r9.s64 = ctx.r11.s64 + -15816;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662D68;
	sub_821F0108(ctx, base);
	// li r7,197
	ctx.r7.s64 = 197;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662D84;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662d9c
	if (!ctx.cr6.eq) goto loc_82662D9C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662da8
	goto loc_82662DA8;
loc_82662D9C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662DA8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662de4
	if (!ctx.cr6.lt) goto loc_82662DE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662dd8
	if (ctx.cr6.eq) goto loc_82662DD8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662DD8;
	sub_82668718(ctx, base);
loc_82662DD8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662e00
	goto loc_82662E00;
loc_82662DE4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662E00;
	sub_82668848(ctx, base);
loc_82662E00:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662E08;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82662E20;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82662E30;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662E38;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662E44;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662E4C;
	sub_82214F08(ctx, base);
loc_82662E4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82662e5c
	if (ctx.cr6.eq) goto loc_82662E5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828bd4c0
	ctx.lr = 0x82662E5C;
	sub_828BD4C0(ctx, base);
loc_82662E5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82662E64"))) PPC_WEAK_FUNC(sub_82662E64);
PPC_FUNC_IMPL(__imp__sub_82662E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662E68"))) PPC_WEAK_FUNC(sub_82662E68);
PPC_FUNC_IMPL(__imp__sub_82662E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662E70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662fd4
	if (ctx.cr6.eq) goto loc_82662FD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28116
	ctx.r4.s64 = ctx.r11.s64 + -28116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82662E9C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662eb4
	if (!ctx.cr6.eq) goto loc_82662EB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82662eb8
	goto loc_82662EB8;
loc_82662EB4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82662EB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82662EC0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15712
	ctx.r9.s64 = ctx.r11.s64 + -15712;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82662EF0;
	sub_821F0108(ctx, base);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82662F0C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662f24
	if (!ctx.cr6.eq) goto loc_82662F24;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82662f30
	goto loc_82662F30;
loc_82662F24:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82662F30:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82662f6c
	if (!ctx.cr6.lt) goto loc_82662F6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662f60
	if (ctx.cr6.eq) goto loc_82662F60;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82662F60;
	sub_82668718(ctx, base);
loc_82662F60:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82662f88
	goto loc_82662F88;
loc_82662F6C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82662F88;
	sub_82668848(ctx, base);
loc_82662F88:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82662F90;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82662FA8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82662FB8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82662FC0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82662FCC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82662FD4;
	sub_82214F08(ctx, base);
loc_82662FD4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82662fe4
	if (ctx.cr6.eq) goto loc_82662FE4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82919ef8
	ctx.lr = 0x82662FE4;
	sub_82919EF8(ctx, base);
loc_82662FE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82662FEC"))) PPC_WEAK_FUNC(sub_82662FEC);
PPC_FUNC_IMPL(__imp__sub_82662FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662FF0"))) PPC_WEAK_FUNC(sub_82662FF0);
PPC_FUNC_IMPL(__imp__sub_82662FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82662FF8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266315c
	if (ctx.cr6.eq) goto loc_8266315C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28100
	ctx.r4.s64 = ctx.r11.s64 + -28100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82663024;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266303c
	if (!ctx.cr6.eq) goto loc_8266303C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663040
	goto loc_82663040;
loc_8266303C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663040:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663048;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15576
	ctx.r9.s64 = ctx.r11.s64 + -15576;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663078;
	sub_821F0108(ctx, base);
	// li r7,198
	ctx.r7.s64 = 198;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663094;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826630ac
	if (!ctx.cr6.eq) goto loc_826630AC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826630b8
	goto loc_826630B8;
loc_826630AC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826630B8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826630f4
	if (!ctx.cr6.lt) goto loc_826630F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826630e8
	if (ctx.cr6.eq) goto loc_826630E8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826630E8;
	sub_82668718(ctx, base);
loc_826630E8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663110
	goto loc_82663110;
loc_826630F4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663110;
	sub_82668848(ctx, base);
loc_82663110:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663118;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663130;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663140;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663148;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82663154;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266315C;
	sub_82214F08(ctx, base);
loc_8266315C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266316c
	if (ctx.cr6.eq) goto loc_8266316C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82951f30
	ctx.lr = 0x8266316C;
	sub_82951F30(ctx, base);
loc_8266316C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663174"))) PPC_WEAK_FUNC(sub_82663174);
PPC_FUNC_IMPL(__imp__sub_82663174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663178"))) PPC_WEAK_FUNC(sub_82663178);
PPC_FUNC_IMPL(__imp__sub_82663178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663180;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826632e4
	if (ctx.cr6.eq) goto loc_826632E4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-16268
	ctx.r4.s64 = ctx.r11.s64 + -16268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826631AC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826631c4
	if (!ctx.cr6.eq) goto loc_826631C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826631c8
	goto loc_826631C8;
loc_826631C4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826631C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826631D0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15400
	ctx.r9.s64 = ctx.r11.s64 + -15400;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663200;
	sub_821F0108(ctx, base);
	// li r7,191
	ctx.r7.s64 = 191;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266321C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663234
	if (!ctx.cr6.eq) goto loc_82663234;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663240
	goto loc_82663240;
loc_82663234:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663240:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266327c
	if (!ctx.cr6.lt) goto loc_8266327C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663270
	if (ctx.cr6.eq) goto loc_82663270;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663270;
	sub_82668718(ctx, base);
loc_82663270:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663298
	goto loc_82663298;
loc_8266327C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663298;
	sub_82668848(ctx, base);
loc_82663298:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826632A0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826632B8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826632C8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826632D0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826632DC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826632E4;
	sub_82214F08(ctx, base);
loc_826632E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663364
	if (ctx.cr6.eq) goto loc_82663364;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-16184
	ctx.r31.s64 = ctx.r11.s64 + -16184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82663304;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8250b130
	ctx.lr = 0x82663310;
	sub_8250B130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663318;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16168
	ctx.r4.s64 = ctx.r10.s64 + -16168;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8266332C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266333C;
	sub_8222CF18(ctx, base);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-23504
	ctx.r6.s64 = ctx.r9.s64 + -23504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8250b378
	ctx.lr = 0x82663354;
	sub_8250B378(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266335C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663364;
	sub_82214F08(ctx, base);
loc_82663364:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266336C"))) PPC_WEAK_FUNC(sub_8266336C);
PPC_FUNC_IMPL(__imp__sub_8266336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663370"))) PPC_WEAK_FUNC(sub_82663370);
PPC_FUNC_IMPL(__imp__sub_82663370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663378;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826634dc
	if (ctx.cr6.eq) goto loc_826634DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28088
	ctx.r4.s64 = ctx.r11.s64 + -28088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826633A4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826633bc
	if (!ctx.cr6.eq) goto loc_826633BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826633c0
	goto loc_826633C0;
loc_826633BC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826633C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826633C8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15312
	ctx.r9.s64 = ctx.r11.s64 + -15312;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826633F8;
	sub_821F0108(ctx, base);
	// li r7,199
	ctx.r7.s64 = 199;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663414;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266342c
	if (!ctx.cr6.eq) goto loc_8266342C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663438
	goto loc_82663438;
loc_8266342C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663438:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663474
	if (!ctx.cr6.lt) goto loc_82663474;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663468
	if (ctx.cr6.eq) goto loc_82663468;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663468;
	sub_82668718(ctx, base);
loc_82663468:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663490
	goto loc_82663490;
loc_82663474:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663490;
	sub_82668848(ctx, base);
loc_82663490:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663498;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826634B0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826634C0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826634C8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826634D4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826634DC;
	sub_82214F08(ctx, base);
loc_826634DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826634ec
	if (ctx.cr6.eq) goto loc_826634EC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828a5700
	ctx.lr = 0x826634EC;
	sub_828A5700(ctx, base);
loc_826634EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826634F4"))) PPC_WEAK_FUNC(sub_826634F4);
PPC_FUNC_IMPL(__imp__sub_826634F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826634F8"))) PPC_WEAK_FUNC(sub_826634F8);
PPC_FUNC_IMPL(__imp__sub_826634F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663500;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663664
	if (ctx.cr6.eq) goto loc_82663664;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28060
	ctx.r4.s64 = ctx.r11.s64 + -28060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266352C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663544
	if (!ctx.cr6.eq) goto loc_82663544;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663548
	goto loc_82663548;
loc_82663544:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663548:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663550;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15048
	ctx.r9.s64 = ctx.r11.s64 + -15048;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663580;
	sub_821F0108(ctx, base);
	// li r7,201
	ctx.r7.s64 = 201;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266359C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826635b4
	if (!ctx.cr6.eq) goto loc_826635B4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826635c0
	goto loc_826635C0;
loc_826635B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826635C0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826635fc
	if (!ctx.cr6.lt) goto loc_826635FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826635f0
	if (ctx.cr6.eq) goto loc_826635F0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826635F0;
	sub_82668718(ctx, base);
loc_826635F0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663618
	goto loc_82663618;
loc_826635FC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663618;
	sub_82668848(ctx, base);
loc_82663618:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663620;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663638;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663648;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663650;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266365C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663664;
	sub_82214F08(ctx, base);
loc_82663664:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663674
	if (ctx.cr6.eq) goto loc_82663674;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828767f0
	ctx.lr = 0x82663674;
	sub_828767F0(ctx, base);
loc_82663674:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266367C"))) PPC_WEAK_FUNC(sub_8266367C);
PPC_FUNC_IMPL(__imp__sub_8266367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663680"))) PPC_WEAK_FUNC(sub_82663680);
PPC_FUNC_IMPL(__imp__sub_82663680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663688;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826637ec
	if (ctx.cr6.eq) goto loc_826637EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28072
	ctx.r4.s64 = ctx.r11.s64 + -28072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826636B4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826636cc
	if (!ctx.cr6.eq) goto loc_826636CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826636d0
	goto loc_826636D0;
loc_826636CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826636D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826636D8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-15136
	ctx.r9.s64 = ctx.r11.s64 + -15136;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663708;
	sub_821F0108(ctx, base);
	// li r7,200
	ctx.r7.s64 = 200;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663724;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266373c
	if (!ctx.cr6.eq) goto loc_8266373C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663748
	goto loc_82663748;
loc_8266373C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663748:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663784
	if (!ctx.cr6.lt) goto loc_82663784;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663778
	if (ctx.cr6.eq) goto loc_82663778;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663778;
	sub_82668718(ctx, base);
loc_82663778:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826637a0
	goto loc_826637A0;
loc_82663784:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826637A0;
	sub_82668848(ctx, base);
loc_826637A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826637A8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826637C0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826637D0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826637D8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826637E4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826637EC;
	sub_82214F08(ctx, base);
loc_826637EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826637fc
	if (ctx.cr6.eq) goto loc_826637FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826f7ae0
	ctx.lr = 0x826637FC;
	sub_826F7AE0(ctx, base);
loc_826637FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663804"))) PPC_WEAK_FUNC(sub_82663804);
PPC_FUNC_IMPL(__imp__sub_82663804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663808"))) PPC_WEAK_FUNC(sub_82663808);
PPC_FUNC_IMPL(__imp__sub_82663808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663810;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663974
	if (ctx.cr6.eq) goto loc_82663974;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28048
	ctx.r4.s64 = ctx.r11.s64 + -28048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266383C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663854
	if (!ctx.cr6.eq) goto loc_82663854;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663858
	goto loc_82663858;
loc_82663854:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663858:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663860;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14904
	ctx.r9.s64 = ctx.r11.s64 + -14904;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663890;
	sub_821F0108(ctx, base);
	// li r7,202
	ctx.r7.s64 = 202;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826638AC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826638c4
	if (!ctx.cr6.eq) goto loc_826638C4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826638d0
	goto loc_826638D0;
loc_826638C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826638D0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266390c
	if (!ctx.cr6.lt) goto loc_8266390C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663900
	if (ctx.cr6.eq) goto loc_82663900;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663900;
	sub_82668718(ctx, base);
loc_82663900:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663928
	goto loc_82663928;
loc_8266390C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663928;
	sub_82668848(ctx, base);
loc_82663928:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663930;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663948;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663958;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663960;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266396C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663974;
	sub_82214F08(ctx, base);
loc_82663974:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663984
	if (ctx.cr6.eq) goto loc_82663984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829666f8
	ctx.lr = 0x82663984;
	sub_829666F8(ctx, base);
loc_82663984:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266398C"))) PPC_WEAK_FUNC(sub_8266398C);
PPC_FUNC_IMPL(__imp__sub_8266398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663990"))) PPC_WEAK_FUNC(sub_82663990);
PPC_FUNC_IMPL(__imp__sub_82663990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663998;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663afc
	if (ctx.cr6.eq) goto loc_82663AFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28028
	ctx.r4.s64 = ctx.r11.s64 + -28028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826639C4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826639dc
	if (!ctx.cr6.eq) goto loc_826639DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826639e0
	goto loc_826639E0;
loc_826639DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826639E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826639E8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14736
	ctx.r9.s64 = ctx.r11.s64 + -14736;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663A18;
	sub_821F0108(ctx, base);
	// li r7,203
	ctx.r7.s64 = 203;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663A34;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663a4c
	if (!ctx.cr6.eq) goto loc_82663A4C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663a58
	goto loc_82663A58;
loc_82663A4C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663A58:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663a94
	if (!ctx.cr6.lt) goto loc_82663A94;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663a88
	if (ctx.cr6.eq) goto loc_82663A88;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663A88;
	sub_82668718(ctx, base);
loc_82663A88:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663ab0
	goto loc_82663AB0;
loc_82663A94:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663AB0;
	sub_82668848(ctx, base);
loc_82663AB0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663AB8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663AD0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663AE0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663AE8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82663AF4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663AFC;
	sub_82214F08(ctx, base);
loc_82663AFC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663b0c
	if (ctx.cr6.eq) goto loc_82663B0C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829714c8
	ctx.lr = 0x82663B0C;
	sub_829714C8(ctx, base);
loc_82663B0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663B14"))) PPC_WEAK_FUNC(sub_82663B14);
PPC_FUNC_IMPL(__imp__sub_82663B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663B18"))) PPC_WEAK_FUNC(sub_82663B18);
PPC_FUNC_IMPL(__imp__sub_82663B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663B20;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663c84
	if (ctx.cr6.eq) goto loc_82663C84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28004
	ctx.r4.s64 = ctx.r11.s64 + -28004;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82663B4C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663b64
	if (!ctx.cr6.eq) goto loc_82663B64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663b68
	goto loc_82663B68;
loc_82663B64:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663B68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663B70;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14616
	ctx.r9.s64 = ctx.r11.s64 + -14616;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663BA0;
	sub_821F0108(ctx, base);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663BBC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663bd4
	if (!ctx.cr6.eq) goto loc_82663BD4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663be0
	goto loc_82663BE0;
loc_82663BD4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663BE0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663c1c
	if (!ctx.cr6.lt) goto loc_82663C1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663c10
	if (ctx.cr6.eq) goto loc_82663C10;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663C10;
	sub_82668718(ctx, base);
loc_82663C10:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663c38
	goto loc_82663C38;
loc_82663C1C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663C38;
	sub_82668848(ctx, base);
loc_82663C38:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663C40;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663C58;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663C68;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663C70;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82663C7C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663C84;
	sub_82214F08(ctx, base);
loc_82663C84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663c94
	if (ctx.cr6.eq) goto loc_82663C94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82973eb8
	ctx.lr = 0x82663C94;
	sub_82973EB8(ctx, base);
loc_82663C94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663C9C"))) PPC_WEAK_FUNC(sub_82663C9C);
PPC_FUNC_IMPL(__imp__sub_82663C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663CA0"))) PPC_WEAK_FUNC(sub_82663CA0);
PPC_FUNC_IMPL(__imp__sub_82663CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663CA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663e0c
	if (ctx.cr6.eq) goto loc_82663E0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27992
	ctx.r4.s64 = ctx.r11.s64 + -27992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82663CD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663cec
	if (!ctx.cr6.eq) goto loc_82663CEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663cf0
	goto loc_82663CF0;
loc_82663CEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663CF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663CF8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14456
	ctx.r9.s64 = ctx.r11.s64 + -14456;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663D28;
	sub_821F0108(ctx, base);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663D44;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663d5c
	if (!ctx.cr6.eq) goto loc_82663D5C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663d68
	goto loc_82663D68;
loc_82663D5C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663D68:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663da4
	if (!ctx.cr6.lt) goto loc_82663DA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663d98
	if (ctx.cr6.eq) goto loc_82663D98;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663D98;
	sub_82668718(ctx, base);
loc_82663D98:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663dc0
	goto loc_82663DC0;
loc_82663DA4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663DC0;
	sub_82668848(ctx, base);
loc_82663DC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663DC8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663DE0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663DF0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663DF8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82663E04;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663E0C;
	sub_82214F08(ctx, base);
loc_82663E0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663e1c
	if (ctx.cr6.eq) goto loc_82663E1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826b2488
	ctx.lr = 0x82663E1C;
	sub_826B2488(ctx, base);
loc_82663E1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663E24"))) PPC_WEAK_FUNC(sub_82663E24);
PPC_FUNC_IMPL(__imp__sub_82663E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663E28"))) PPC_WEAK_FUNC(sub_82663E28);
PPC_FUNC_IMPL(__imp__sub_82663E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663E30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663f94
	if (ctx.cr6.eq) goto loc_82663F94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29204
	ctx.r4.s64 = ctx.r11.s64 + -29204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82663E5C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663e74
	if (!ctx.cr6.eq) goto loc_82663E74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82663e78
	goto loc_82663E78;
loc_82663E74:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82663E78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82663E80;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-26320
	ctx.r9.s64 = ctx.r11.s64 + -26320;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82663EB0;
	sub_821F0108(ctx, base);
	// li r7,214
	ctx.r7.s64 = 214;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82663ECC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663ee4
	if (!ctx.cr6.eq) goto loc_82663EE4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82663ef0
	goto loc_82663EF0;
loc_82663EE4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82663EF0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82663f2c
	if (!ctx.cr6.lt) goto loc_82663F2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82663f20
	if (ctx.cr6.eq) goto loc_82663F20;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82663F20;
	sub_82668718(ctx, base);
loc_82663F20:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82663f48
	goto loc_82663F48;
loc_82663F2C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82663F48;
	sub_82668848(ctx, base);
loc_82663F48:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82663F50;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82663F68;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82663F78;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82663F80;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82663F8C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82663F94;
	sub_82214F08(ctx, base);
loc_82663F94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82663fa4
	if (ctx.cr6.eq) goto loc_82663FA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828b4df0
	ctx.lr = 0x82663FA4;
	sub_828B4DF0(ctx, base);
loc_82663FA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82663FAC"))) PPC_WEAK_FUNC(sub_82663FAC);
PPC_FUNC_IMPL(__imp__sub_82663FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663FB0"))) PPC_WEAK_FUNC(sub_82663FB0);
PPC_FUNC_IMPL(__imp__sub_82663FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82663FB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266411c
	if (ctx.cr6.eq) goto loc_8266411C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27980
	ctx.r4.s64 = ctx.r11.s64 + -27980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82663FE4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663ffc
	if (!ctx.cr6.eq) goto loc_82663FFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664000
	goto loc_82664000;
loc_82663FFC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664000:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664008;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664038;
	sub_821F0108(ctx, base);
	// li r7,215
	ctx.r7.s64 = 215;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82664054;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266406c
	if (!ctx.cr6.eq) goto loc_8266406C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664078
	goto loc_82664078;
loc_8266406C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664078:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826640b4
	if (!ctx.cr6.lt) goto loc_826640B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826640a8
	if (ctx.cr6.eq) goto loc_826640A8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826640A8;
	sub_82668718(ctx, base);
loc_826640A8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826640d0
	goto loc_826640D0;
loc_826640B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826640D0;
	sub_82668848(ctx, base);
loc_826640D0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826640D8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826640F0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664100;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664108;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664114;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266411C;
	sub_82214F08(ctx, base);
loc_8266411C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266412c
	if (ctx.cr6.eq) goto loc_8266412C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827cf030
	ctx.lr = 0x8266412C;
	sub_827CF030(ctx, base);
loc_8266412C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82664134"))) PPC_WEAK_FUNC(sub_82664134);
PPC_FUNC_IMPL(__imp__sub_82664134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664138"))) PPC_WEAK_FUNC(sub_82664138);
PPC_FUNC_IMPL(__imp__sub_82664138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82664140;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826642a0
	if (ctx.cr6.eq) goto loc_826642A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27968
	ctx.r4.s64 = ctx.r11.s64 + -27968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664168;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664180
	if (!ctx.cr6.eq) goto loc_82664180;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664184
	goto loc_82664184;
loc_82664180:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664184:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8266418C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14232
	ctx.r9.s64 = ctx.r11.s64 + -14232;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826641BC;
	sub_821F0108(ctx, base);
	// li r7,216
	ctx.r7.s64 = 216;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826641D8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826641f0
	if (!ctx.cr6.eq) goto loc_826641F0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826641fc
	goto loc_826641FC;
loc_826641F0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826641FC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664238
	if (!ctx.cr6.lt) goto loc_82664238;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8266422c
	if (ctx.cr6.eq) goto loc_8266422C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8266422C;
	sub_82668718(ctx, base);
loc_8266422C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664254
	goto loc_82664254;
loc_82664238:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664254;
	sub_82668848(ctx, base);
loc_82664254:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x8266425C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664274;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664284;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8266428C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664298;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826642A0;
	sub_82214F08(ctx, base);
loc_826642A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826642A8"))) PPC_WEAK_FUNC(sub_826642A8);
PPC_FUNC_IMPL(__imp__sub_826642A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826642B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664414
	if (ctx.cr6.eq) goto loc_82664414;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27956
	ctx.r4.s64 = ctx.r11.s64 + -27956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826642DC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826642f4
	if (!ctx.cr6.eq) goto loc_826642F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826642f8
	goto loc_826642F8;
loc_826642F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826642F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664300;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-14064
	ctx.r9.s64 = ctx.r11.s64 + -14064;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664330;
	sub_821F0108(ctx, base);
	// li r7,219
	ctx.r7.s64 = 219;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266434C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664364
	if (!ctx.cr6.eq) goto loc_82664364;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664370
	goto loc_82664370;
loc_82664364:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664370:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826643ac
	if (!ctx.cr6.lt) goto loc_826643AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826643a0
	if (ctx.cr6.eq) goto loc_826643A0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826643A0;
	sub_82668718(ctx, base);
loc_826643A0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826643c8
	goto loc_826643C8;
loc_826643AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826643C8;
	sub_82668848(ctx, base);
loc_826643C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826643D0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826643E8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826643F8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664400;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266440C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664414;
	sub_82214F08(ctx, base);
loc_82664414:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82664424
	if (ctx.cr6.eq) goto loc_82664424;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826f05b0
	ctx.lr = 0x82664424;
	sub_826F05B0(ctx, base);
loc_82664424:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266442C"))) PPC_WEAK_FUNC(sub_8266442C);
PPC_FUNC_IMPL(__imp__sub_8266442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664430"))) PPC_WEAK_FUNC(sub_82664430);
PPC_FUNC_IMPL(__imp__sub_82664430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82664438;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266459c
	if (ctx.cr6.eq) goto loc_8266459C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27936
	ctx.r4.s64 = ctx.r11.s64 + -27936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664464;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266447c
	if (!ctx.cr6.eq) goto loc_8266447C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664480
	goto loc_82664480;
loc_8266447C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664480:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664488;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13944
	ctx.r9.s64 = ctx.r11.s64 + -13944;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826644B8;
	sub_821F0108(ctx, base);
	// li r7,220
	ctx.r7.s64 = 220;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826644D4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826644ec
	if (!ctx.cr6.eq) goto loc_826644EC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826644f8
	goto loc_826644F8;
loc_826644EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826644F8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664534
	if (!ctx.cr6.lt) goto loc_82664534;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664528
	if (ctx.cr6.eq) goto loc_82664528;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664528;
	sub_82668718(ctx, base);
loc_82664528:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664550
	goto loc_82664550;
loc_82664534:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664550;
	sub_82668848(ctx, base);
loc_82664550:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664558;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664570;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664580;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664588;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664594;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266459C;
	sub_82214F08(ctx, base);
loc_8266459C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266461c
	if (ctx.cr6.eq) goto loc_8266461C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-8996
	ctx.r31.s64 = ctx.r11.s64 + -8996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826645BC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82985ae0
	ctx.lr = 0x826645C8;
	sub_82985AE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826645D0;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-21872
	ctx.r4.s64 = ctx.r10.s64 + -21872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826645E4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826645F4;
	sub_8222CF18(ctx, base);
	// lis r9,-32104
	ctx.r9.s64 = -2103967744;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,19776
	ctx.r6.s64 = ctx.r9.s64 + 19776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82985d28
	ctx.lr = 0x8266460C;
	sub_82985D28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664614;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8266461C;
	sub_82214F08(ctx, base);
loc_8266461C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82664624"))) PPC_WEAK_FUNC(sub_82664624);
PPC_FUNC_IMPL(__imp__sub_82664624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664628"))) PPC_WEAK_FUNC(sub_82664628);
PPC_FUNC_IMPL(__imp__sub_82664628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82664630;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664794
	if (ctx.cr6.eq) goto loc_82664794;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-5764
	ctx.r4.s64 = ctx.r11.s64 + -5764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266465C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664674
	if (!ctx.cr6.eq) goto loc_82664674;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664678
	goto loc_82664678;
loc_82664674:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664678:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664680;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13832
	ctx.r9.s64 = ctx.r11.s64 + -13832;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826646B0;
	sub_821F0108(ctx, base);
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826646CC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826646e4
	if (!ctx.cr6.eq) goto loc_826646E4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826646f0
	goto loc_826646F0;
loc_826646E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826646F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266472c
	if (!ctx.cr6.lt) goto loc_8266472C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664720
	if (ctx.cr6.eq) goto loc_82664720;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664720;
	sub_82668718(ctx, base);
loc_82664720:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664748
	goto loc_82664748;
loc_8266472C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664748;
	sub_82668848(ctx, base);
loc_82664748:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664750;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664768;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664778;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664780;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266478C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664794;
	sub_82214F08(ctx, base);
loc_82664794:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82664814
	if (ctx.cr6.eq) goto loc_82664814;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-5528
	ctx.r31.s64 = ctx.r11.s64 + -5528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826647B4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82562890
	ctx.lr = 0x826647C0;
	sub_82562890(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826647C8;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-5504
	ctx.r4.s64 = ctx.r10.s64 + -5504;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826647DC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826647EC;
	sub_8222CF18(ctx, base);
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,19296
	ctx.r6.s64 = ctx.r9.s64 + 19296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82562ad8
	ctx.lr = 0x82664804;
	sub_82562AD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266480C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664814;
	sub_82214F08(ctx, base);
loc_82664814:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266481C"))) PPC_WEAK_FUNC(sub_8266481C);
PPC_FUNC_IMPL(__imp__sub_8266481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664820"))) PPC_WEAK_FUNC(sub_82664820);
PPC_FUNC_IMPL(__imp__sub_82664820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82664828;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664988
	if (ctx.cr6.eq) goto loc_82664988;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12108
	ctx.r4.s64 = ctx.r11.s64 + 12108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664850;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664868
	if (!ctx.cr6.eq) goto loc_82664868;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266486c
	goto loc_8266486C;
loc_82664868:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266486C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664874;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13680
	ctx.r9.s64 = ctx.r11.s64 + -13680;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826648A4;
	sub_821F0108(ctx, base);
	// li r7,217
	ctx.r7.s64 = 217;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826648C0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826648d8
	if (!ctx.cr6.eq) goto loc_826648D8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826648e4
	goto loc_826648E4;
loc_826648D8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826648E4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664920
	if (!ctx.cr6.lt) goto loc_82664920;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664914
	if (ctx.cr6.eq) goto loc_82664914;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664914;
	sub_82668718(ctx, base);
loc_82664914:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266493c
	goto loc_8266493C;
loc_82664920:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266493C;
	sub_82668848(ctx, base);
loc_8266493C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664944;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266495C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266496C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664974;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664980;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664988;
	sub_82214F08(ctx, base);
loc_82664988:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82664990"))) PPC_WEAK_FUNC(sub_82664990);
PPC_FUNC_IMPL(__imp__sub_82664990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82664998;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664af8
	if (ctx.cr6.eq) goto loc_82664AF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12124
	ctx.r4.s64 = ctx.r11.s64 + 12124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826649C0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826649d8
	if (!ctx.cr6.eq) goto loc_826649D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826649dc
	goto loc_826649DC;
loc_826649D8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826649DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826649E4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13536
	ctx.r9.s64 = ctx.r11.s64 + -13536;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664A14;
	sub_821F0108(ctx, base);
	// li r7,218
	ctx.r7.s64 = 218;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82664A30;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664a48
	if (!ctx.cr6.eq) goto loc_82664A48;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664a54
	goto loc_82664A54;
loc_82664A48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664A54:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664a90
	if (!ctx.cr6.lt) goto loc_82664A90;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664a84
	if (ctx.cr6.eq) goto loc_82664A84;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664A84;
	sub_82668718(ctx, base);
loc_82664A84:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664aac
	goto loc_82664AAC;
loc_82664A90:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664AAC;
	sub_82668848(ctx, base);
loc_82664AAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664AB4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664ACC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664ADC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664AE4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664AF0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664AF8;
	sub_82214F08(ctx, base);
loc_82664AF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82664B00"))) PPC_WEAK_FUNC(sub_82664B00);
PPC_FUNC_IMPL(__imp__sub_82664B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82664B08;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664c68
	if (ctx.cr6.eq) goto loc_82664C68;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664B30;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664b48
	if (!ctx.cr6.eq) goto loc_82664B48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664b4c
	goto loc_82664B4C;
loc_82664B48:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664B4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664B54;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13424
	ctx.r9.s64 = ctx.r11.s64 + -13424;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664B84;
	sub_821F0108(ctx, base);
	// li r7,222
	ctx.r7.s64 = 222;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82664BA0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664bb8
	if (!ctx.cr6.eq) goto loc_82664BB8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664bc4
	goto loc_82664BC4;
loc_82664BB8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664BC4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664c00
	if (!ctx.cr6.lt) goto loc_82664C00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664bf4
	if (ctx.cr6.eq) goto loc_82664BF4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664BF4;
	sub_82668718(ctx, base);
loc_82664BF4:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664c1c
	goto loc_82664C1C;
loc_82664C00:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664C1C;
	sub_82668848(ctx, base);
loc_82664C1C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664C24;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664C3C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664C4C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664C54;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664C60;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664C68;
	sub_82214F08(ctx, base);
loc_82664C68:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82664C70"))) PPC_WEAK_FUNC(sub_82664C70);
PPC_FUNC_IMPL(__imp__sub_82664C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82664C78;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664ddc
	if (ctx.cr6.eq) goto loc_82664DDC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27908
	ctx.r4.s64 = ctx.r11.s64 + -27908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664CA4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664cbc
	if (!ctx.cr6.eq) goto loc_82664CBC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664cc0
	goto loc_82664CC0;
loc_82664CBC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664CC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664CC8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13320
	ctx.r9.s64 = ctx.r11.s64 + -13320;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664CF8;
	sub_821F0108(ctx, base);
	// li r7,221
	ctx.r7.s64 = 221;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82664D14;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664d2c
	if (!ctx.cr6.eq) goto loc_82664D2C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664d38
	goto loc_82664D38;
loc_82664D2C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664D38:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664d74
	if (!ctx.cr6.lt) goto loc_82664D74;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664d68
	if (ctx.cr6.eq) goto loc_82664D68;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664D68;
	sub_82668718(ctx, base);
loc_82664D68:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664d90
	goto loc_82664D90;
loc_82664D74:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664D90;
	sub_82668848(ctx, base);
loc_82664D90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664D98;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664DB0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664DC0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664DC8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664DD4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664DDC;
	sub_82214F08(ctx, base);
loc_82664DDC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82664dec
	if (ctx.cr6.eq) goto loc_82664DEC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82727e98
	ctx.lr = 0x82664DEC;
	sub_82727E98(ctx, base);
loc_82664DEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82664DF4"))) PPC_WEAK_FUNC(sub_82664DF4);
PPC_FUNC_IMPL(__imp__sub_82664DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664DF8"))) PPC_WEAK_FUNC(sub_82664DF8);
PPC_FUNC_IMPL(__imp__sub_82664DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82664E00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664f64
	if (ctx.cr6.eq) goto loc_82664F64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27892
	ctx.r4.s64 = ctx.r11.s64 + -27892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664E2C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664e44
	if (!ctx.cr6.eq) goto loc_82664E44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664e48
	goto loc_82664E48;
loc_82664E44:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664E48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664E50;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-13144
	ctx.r9.s64 = ctx.r11.s64 + -13144;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82664E80;
	sub_821F0108(ctx, base);
	// li r7,223
	ctx.r7.s64 = 223;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82664E9C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664eb4
	if (!ctx.cr6.eq) goto loc_82664EB4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82664ec0
	goto loc_82664EC0;
loc_82664EB4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82664EC0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82664efc
	if (!ctx.cr6.lt) goto loc_82664EFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664ef0
	if (ctx.cr6.eq) goto loc_82664EF0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82664EF0;
	sub_82668718(ctx, base);
loc_82664EF0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82664f18
	goto loc_82664F18;
loc_82664EFC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82664F18;
	sub_82668848(ctx, base);
loc_82664F18:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82664F20;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82664F38;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82664F48;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82664F50;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82664F5C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664F64;
	sub_82214F08(ctx, base);
loc_82664F64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82664f94
	if (ctx.cr6.eq) goto loc_82664F94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664F80;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82898558
	ctx.lr = 0x82664F8C;
	sub_82898558(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82664F94;
	sub_82214F08(ctx, base);
loc_82664F94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82664F9C"))) PPC_WEAK_FUNC(sub_82664F9C);
PPC_FUNC_IMPL(__imp__sub_82664F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664FA0"))) PPC_WEAK_FUNC(sub_82664FA0);
PPC_FUNC_IMPL(__imp__sub_82664FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82664FA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266510c
	if (ctx.cr6.eq) goto loc_8266510C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27876
	ctx.r4.s64 = ctx.r11.s64 + -27876;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82664FD4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664fec
	if (!ctx.cr6.eq) goto loc_82664FEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82664ff0
	goto loc_82664FF0;
loc_82664FEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82664FF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82664FF8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12960
	ctx.r9.s64 = ctx.r11.s64 + -12960;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665028;
	sub_821F0108(ctx, base);
	// li r7,224
	ctx.r7.s64 = 224;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665044;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266505c
	if (!ctx.cr6.eq) goto loc_8266505C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665068
	goto loc_82665068;
loc_8266505C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665068:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826650a4
	if (!ctx.cr6.lt) goto loc_826650A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665098
	if (ctx.cr6.eq) goto loc_82665098;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665098;
	sub_82668718(ctx, base);
loc_82665098:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826650c0
	goto loc_826650C0;
loc_826650A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826650C0;
	sub_82668848(ctx, base);
loc_826650C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826650C8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826650E0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826650F0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826650F8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665104;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266510C;
	sub_82214F08(ctx, base);
loc_8266510C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266518c
	if (ctx.cr6.eq) goto loc_8266518C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-17712
	ctx.r31.s64 = ctx.r11.s64 + -17712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8266512C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829435e8
	ctx.lr = 0x82665138;
	sub_829435E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665140;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-17700
	ctx.r4.s64 = ctx.r10.s64 + -17700;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82665154;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82665164;
	sub_8222CF18(ctx, base);
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,13632
	ctx.r6.s64 = ctx.r9.s64 + 13632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82943830
	ctx.lr = 0x8266517C;
	sub_82943830(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665184;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8266518C;
	sub_82214F08(ctx, base);
loc_8266518C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665194"))) PPC_WEAK_FUNC(sub_82665194);
PPC_FUNC_IMPL(__imp__sub_82665194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665198"))) PPC_WEAK_FUNC(sub_82665198);
PPC_FUNC_IMPL(__imp__sub_82665198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826651A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665300
	if (ctx.cr6.eq) goto loc_82665300;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826651C8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826651e0
	if (!ctx.cr6.eq) goto loc_826651E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826651e4
	goto loc_826651E4;
loc_826651E0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826651E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826651EC;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12848
	ctx.r9.s64 = ctx.r11.s64 + -12848;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8266521C;
	sub_821F0108(ctx, base);
	// li r7,225
	ctx.r7.s64 = 225;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665238;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665250
	if (!ctx.cr6.eq) goto loc_82665250;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8266525c
	goto loc_8266525C;
loc_82665250:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8266525C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665298
	if (!ctx.cr6.lt) goto loc_82665298;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8266528c
	if (ctx.cr6.eq) goto loc_8266528C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x8266528C;
	sub_82668718(ctx, base);
loc_8266528C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826652b4
	goto loc_826652B4;
loc_82665298:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826652B4;
	sub_82668848(ctx, base);
loc_826652B4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826652BC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826652D4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826652E4;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826652EC;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826652F8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665300;
	sub_82214F08(ctx, base);
loc_82665300:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82665308"))) PPC_WEAK_FUNC(sub_82665308);
PPC_FUNC_IMPL(__imp__sub_82665308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665310;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665474
	if (ctx.cr6.eq) goto loc_82665474;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27844
	ctx.r4.s64 = ctx.r11.s64 + -27844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266533C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665354
	if (!ctx.cr6.eq) goto loc_82665354;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665358
	goto loc_82665358;
loc_82665354:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665360;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12672
	ctx.r9.s64 = ctx.r11.s64 + -12672;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665390;
	sub_821F0108(ctx, base);
	// li r7,226
	ctx.r7.s64 = 226;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826653AC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826653c4
	if (!ctx.cr6.eq) goto loc_826653C4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826653d0
	goto loc_826653D0;
loc_826653C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826653D0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266540c
	if (!ctx.cr6.lt) goto loc_8266540C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665400
	if (ctx.cr6.eq) goto loc_82665400;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665400;
	sub_82668718(ctx, base);
loc_82665400:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665428
	goto loc_82665428;
loc_8266540C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665428;
	sub_82668848(ctx, base);
loc_82665428:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665430;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665448;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665458;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665460;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266546C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665474;
	sub_82214F08(ctx, base);
loc_82665474:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665484
	if (ctx.cr6.eq) goto loc_82665484;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829468f8
	ctx.lr = 0x82665484;
	sub_829468F8(ctx, base);
loc_82665484:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266548C"))) PPC_WEAK_FUNC(sub_8266548C);
PPC_FUNC_IMPL(__imp__sub_8266548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665490"))) PPC_WEAK_FUNC(sub_82665490);
PPC_FUNC_IMPL(__imp__sub_82665490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665498;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826655fc
	if (ctx.cr6.eq) goto loc_826655FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27828
	ctx.r4.s64 = ctx.r11.s64 + -27828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826654C4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826654dc
	if (!ctx.cr6.eq) goto loc_826654DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826654e0
	goto loc_826654E0;
loc_826654DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826654E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826654E8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12544
	ctx.r9.s64 = ctx.r11.s64 + -12544;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665518;
	sub_821F0108(ctx, base);
	// li r7,227
	ctx.r7.s64 = 227;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665534;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266554c
	if (!ctx.cr6.eq) goto loc_8266554C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665558
	goto loc_82665558;
loc_8266554C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665558:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665594
	if (!ctx.cr6.lt) goto loc_82665594;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665588
	if (ctx.cr6.eq) goto loc_82665588;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665588;
	sub_82668718(ctx, base);
loc_82665588:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826655b0
	goto loc_826655B0;
loc_82665594:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826655B0;
	sub_82668848(ctx, base);
loc_826655B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826655B8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826655D0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826655E0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826655E8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826655F4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826655FC;
	sub_82214F08(ctx, base);
loc_826655FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266560c
	if (ctx.cr6.eq) goto loc_8266560C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82722ad0
	ctx.lr = 0x8266560C;
	sub_82722AD0(ctx, base);
loc_8266560C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665614"))) PPC_WEAK_FUNC(sub_82665614);
PPC_FUNC_IMPL(__imp__sub_82665614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665618"))) PPC_WEAK_FUNC(sub_82665618);
PPC_FUNC_IMPL(__imp__sub_82665618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665620;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665784
	if (ctx.cr6.eq) goto loc_82665784;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266564C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665664
	if (!ctx.cr6.eq) goto loc_82665664;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665668
	goto loc_82665668;
loc_82665664:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665668:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665670;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12456
	ctx.r9.s64 = ctx.r11.s64 + -12456;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826656A0;
	sub_821F0108(ctx, base);
	// li r7,52
	ctx.r7.s64 = 52;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826656BC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826656d4
	if (!ctx.cr6.eq) goto loc_826656D4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826656e0
	goto loc_826656E0;
loc_826656D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826656E0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266571c
	if (!ctx.cr6.lt) goto loc_8266571C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665710
	if (ctx.cr6.eq) goto loc_82665710;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665710;
	sub_82668718(ctx, base);
loc_82665710:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665738
	goto loc_82665738;
loc_8266571C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665738;
	sub_82668848(ctx, base);
loc_82665738:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665740;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665758;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665768;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665770;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266577C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665784;
	sub_82214F08(ctx, base);
loc_82665784:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665794
	if (ctx.cr6.eq) goto loc_82665794;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8294e218
	ctx.lr = 0x82665794;
	sub_8294E218(ctx, base);
loc_82665794:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266579C"))) PPC_WEAK_FUNC(sub_8266579C);
PPC_FUNC_IMPL(__imp__sub_8266579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826657A0"))) PPC_WEAK_FUNC(sub_826657A0);
PPC_FUNC_IMPL(__imp__sub_826657A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826657A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266590c
	if (ctx.cr6.eq) goto loc_8266590C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826657D4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826657ec
	if (!ctx.cr6.eq) goto loc_826657EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826657f0
	goto loc_826657F0;
loc_826657EC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826657F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826657F8;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12328
	ctx.r9.s64 = ctx.r11.s64 + -12328;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665828;
	sub_821F0108(ctx, base);
	// li r7,228
	ctx.r7.s64 = 228;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665844;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266585c
	if (!ctx.cr6.eq) goto loc_8266585C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665868
	goto loc_82665868;
loc_8266585C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665868:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826658a4
	if (!ctx.cr6.lt) goto loc_826658A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665898
	if (ctx.cr6.eq) goto loc_82665898;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665898;
	sub_82668718(ctx, base);
loc_82665898:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826658c0
	goto loc_826658C0;
loc_826658A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826658C0;
	sub_82668848(ctx, base);
loc_826658C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826658C8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826658E0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826658F0;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826658F8;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665904;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266590C;
	sub_82214F08(ctx, base);
loc_8266590C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8266591c
	if (ctx.cr6.eq) goto loc_8266591C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82725038
	ctx.lr = 0x8266591C;
	sub_82725038(ctx, base);
loc_8266591C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665924"))) PPC_WEAK_FUNC(sub_82665924);
PPC_FUNC_IMPL(__imp__sub_82665924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665928"))) PPC_WEAK_FUNC(sub_82665928);
PPC_FUNC_IMPL(__imp__sub_82665928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665930;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665a94
	if (ctx.cr6.eq) goto loc_82665A94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27656
	ctx.r4.s64 = ctx.r11.s64 + -27656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266595C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665974
	if (!ctx.cr6.eq) goto loc_82665974;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665978
	goto loc_82665978;
loc_82665974:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665980;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11496
	ctx.r9.s64 = ctx.r11.s64 + -11496;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826659B0;
	sub_821F0108(ctx, base);
	// li r7,229
	ctx.r7.s64 = 229;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826659CC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826659e4
	if (!ctx.cr6.eq) goto loc_826659E4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826659f0
	goto loc_826659F0;
loc_826659E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826659F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665a2c
	if (!ctx.cr6.lt) goto loc_82665A2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665a20
	if (ctx.cr6.eq) goto loc_82665A20;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665A20;
	sub_82668718(ctx, base);
loc_82665A20:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665a48
	goto loc_82665A48;
loc_82665A2C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665A48;
	sub_82668848(ctx, base);
loc_82665A48:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665A50;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665A68;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665A78;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665A80;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665A8C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665A94;
	sub_82214F08(ctx, base);
loc_82665A94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665aa4
	if (ctx.cr6.eq) goto loc_82665AA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828823f0
	ctx.lr = 0x82665AA4;
	sub_828823F0(ctx, base);
loc_82665AA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665AAC"))) PPC_WEAK_FUNC(sub_82665AAC);
PPC_FUNC_IMPL(__imp__sub_82665AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665AB0"))) PPC_WEAK_FUNC(sub_82665AB0);
PPC_FUNC_IMPL(__imp__sub_82665AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665AB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665c1c
	if (ctx.cr6.eq) goto loc_82665C1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27776
	ctx.r4.s64 = ctx.r11.s64 + -27776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82665AE4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665afc
	if (!ctx.cr6.eq) goto loc_82665AFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665b00
	goto loc_82665B00;
loc_82665AFC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665B00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665B08;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-12120
	ctx.r9.s64 = ctx.r11.s64 + -12120;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665B38;
	sub_821F0108(ctx, base);
	// li r7,230
	ctx.r7.s64 = 230;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665B54;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665b6c
	if (!ctx.cr6.eq) goto loc_82665B6C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665b78
	goto loc_82665B78;
loc_82665B6C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665B78:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665bb4
	if (!ctx.cr6.lt) goto loc_82665BB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665ba8
	if (ctx.cr6.eq) goto loc_82665BA8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665BA8;
	sub_82668718(ctx, base);
loc_82665BA8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665bd0
	goto loc_82665BD0;
loc_82665BB4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665BD0;
	sub_82668848(ctx, base);
loc_82665BD0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665BD8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665BF0;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665C00;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665C08;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665C14;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665C1C;
	sub_82214F08(ctx, base);
loc_82665C1C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665c2c
	if (ctx.cr6.eq) goto loc_82665C2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82954020
	ctx.lr = 0x82665C2C;
	sub_82954020(ctx, base);
loc_82665C2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665C34"))) PPC_WEAK_FUNC(sub_82665C34);
PPC_FUNC_IMPL(__imp__sub_82665C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665C38"))) PPC_WEAK_FUNC(sub_82665C38);
PPC_FUNC_IMPL(__imp__sub_82665C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665C40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665da4
	if (ctx.cr6.eq) goto loc_82665DA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27684
	ctx.r4.s64 = ctx.r11.s64 + -27684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82665C6C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665c84
	if (!ctx.cr6.eq) goto loc_82665C84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665c88
	goto loc_82665C88;
loc_82665C84:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665C88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665C90;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11632
	ctx.r9.s64 = ctx.r11.s64 + -11632;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665CC0;
	sub_821F0108(ctx, base);
	// li r7,231
	ctx.r7.s64 = 231;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665CDC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665cf4
	if (!ctx.cr6.eq) goto loc_82665CF4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665d00
	goto loc_82665D00;
loc_82665CF4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665D00:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665d3c
	if (!ctx.cr6.lt) goto loc_82665D3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665d30
	if (ctx.cr6.eq) goto loc_82665D30;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665D30;
	sub_82668718(ctx, base);
loc_82665D30:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665d58
	goto loc_82665D58;
loc_82665D3C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665D58;
	sub_82668848(ctx, base);
loc_82665D58:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665D60;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665D78;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665D88;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665D90;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665D9C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665DA4;
	sub_82214F08(ctx, base);
loc_82665DA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665db4
	if (ctx.cr6.eq) goto loc_82665DB4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82957ba0
	ctx.lr = 0x82665DB4;
	sub_82957BA0(ctx, base);
loc_82665DB4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665DBC"))) PPC_WEAK_FUNC(sub_82665DBC);
PPC_FUNC_IMPL(__imp__sub_82665DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665DC0"))) PPC_WEAK_FUNC(sub_82665DC0);
PPC_FUNC_IMPL(__imp__sub_82665DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665DC8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665f2c
	if (ctx.cr6.eq) goto loc_82665F2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82665DF4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665e0c
	if (!ctx.cr6.eq) goto loc_82665E0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665e10
	goto loc_82665E10;
loc_82665E0C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665E10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665E18;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11944
	ctx.r9.s64 = ctx.r11.s64 + -11944;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665E48;
	sub_821F0108(ctx, base);
	// li r7,232
	ctx.r7.s64 = 232;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665E64;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665e7c
	if (!ctx.cr6.eq) goto loc_82665E7C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82665e88
	goto loc_82665E88;
loc_82665E7C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82665E88:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82665ec4
	if (!ctx.cr6.lt) goto loc_82665EC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665eb8
	if (ctx.cr6.eq) goto loc_82665EB8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82665EB8;
	sub_82668718(ctx, base);
loc_82665EB8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82665ee0
	goto loc_82665EE0;
loc_82665EC4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82665EE0;
	sub_82668848(ctx, base);
loc_82665EE0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82665EE8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82665F00;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82665F10;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82665F18;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82665F24;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82665F2C;
	sub_82214F08(ctx, base);
loc_82665F2C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82665f3c
	if (ctx.cr6.eq) goto loc_82665F3C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8293e9a0
	ctx.lr = 0x82665F3C;
	sub_8293E9A0(ctx, base);
loc_82665F3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82665F44"))) PPC_WEAK_FUNC(sub_82665F44);
PPC_FUNC_IMPL(__imp__sub_82665F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665F48"))) PPC_WEAK_FUNC(sub_82665F48);
PPC_FUNC_IMPL(__imp__sub_82665F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82665F50;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826660b4
	if (ctx.cr6.eq) goto loc_826660B4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82665F7C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665f94
	if (!ctx.cr6.eq) goto loc_82665F94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82665f98
	goto loc_82665F98;
loc_82665F94:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82665F98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82665FA0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11392
	ctx.r9.s64 = ctx.r11.s64 + -11392;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82665FD0;
	sub_821F0108(ctx, base);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82665FEC;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666004
	if (!ctx.cr6.eq) goto loc_82666004;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666010
	goto loc_82666010;
loc_82666004:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666010:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266604c
	if (!ctx.cr6.lt) goto loc_8266604C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666040
	if (ctx.cr6.eq) goto loc_82666040;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666040;
	sub_82668718(ctx, base);
loc_82666040:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666068
	goto loc_82666068;
loc_8266604C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666068;
	sub_82668848(ctx, base);
loc_82666068:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666070;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666088;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666098;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826660A0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826660AC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826660B4;
	sub_82214F08(ctx, base);
loc_826660B4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82666134
	if (ctx.cr6.eq) goto loc_82666134;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,31096
	ctx.r31.s64 = ctx.r11.s64 + 31096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826660D4;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8262b3d8
	ctx.lr = 0x826660E0;
	sub_8262B3D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826660E8;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,31112
	ctx.r4.s64 = ctx.r10.s64 + 31112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826660FC;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266610C;
	sub_8222CF18(ctx, base);
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,25184
	ctx.r6.s64 = ctx.r9.s64 + 25184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8262b620
	ctx.lr = 0x82666124;
	sub_8262B620(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266612C;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666134;
	sub_82214F08(ctx, base);
loc_82666134:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266613C"))) PPC_WEAK_FUNC(sub_8266613C);
PPC_FUNC_IMPL(__imp__sub_8266613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666140"))) PPC_WEAK_FUNC(sub_82666140);
PPC_FUNC_IMPL(__imp__sub_82666140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82666148;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826662ac
	if (ctx.cr6.eq) goto loc_826662AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27636
	ctx.r4.s64 = ctx.r11.s64 + -27636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666174;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266618c
	if (!ctx.cr6.eq) goto loc_8266618C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666190
	goto loc_82666190;
loc_8266618C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666190:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666198;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11232
	ctx.r9.s64 = ctx.r11.s64 + -11232;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826661C8;
	sub_821F0108(ctx, base);
	// li r7,233
	ctx.r7.s64 = 233;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826661E4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826661fc
	if (!ctx.cr6.eq) goto loc_826661FC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666208
	goto loc_82666208;
loc_826661FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666208:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666244
	if (!ctx.cr6.lt) goto loc_82666244;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666238
	if (ctx.cr6.eq) goto loc_82666238;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666238;
	sub_82668718(ctx, base);
loc_82666238:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666260
	goto loc_82666260;
loc_82666244:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666260;
	sub_82668848(ctx, base);
loc_82666260:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666268;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666280;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666290;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666298;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826662A4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826662AC;
	sub_82214F08(ctx, base);
loc_826662AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826662bc
	if (ctx.cr6.eq) goto loc_826662BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8295c9e0
	ctx.lr = 0x826662BC;
	sub_8295C9E0(ctx, base);
loc_826662BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826662C4"))) PPC_WEAK_FUNC(sub_826662C4);
PPC_FUNC_IMPL(__imp__sub_826662C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826662C8"))) PPC_WEAK_FUNC(sub_826662C8);
PPC_FUNC_IMPL(__imp__sub_826662C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826662D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666434
	if (ctx.cr6.eq) goto loc_82666434;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27616
	ctx.r4.s64 = ctx.r11.s64 + -27616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826662FC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666314
	if (!ctx.cr6.eq) goto loc_82666314;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666318
	goto loc_82666318;
loc_82666314:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666318:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666320;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11144
	ctx.r9.s64 = ctx.r11.s64 + -11144;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666350;
	sub_821F0108(ctx, base);
	// li r7,62
	ctx.r7.s64 = 62;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266636C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666384
	if (!ctx.cr6.eq) goto loc_82666384;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666390
	goto loc_82666390;
loc_82666384:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666390:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826663cc
	if (!ctx.cr6.lt) goto loc_826663CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826663c0
	if (ctx.cr6.eq) goto loc_826663C0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826663C0;
	sub_82668718(ctx, base);
loc_826663C0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826663e8
	goto loc_826663E8;
loc_826663CC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826663E8;
	sub_82668848(ctx, base);
loc_826663E8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826663F0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666408;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666418;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666420;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266642C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666434;
	sub_82214F08(ctx, base);
loc_82666434:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82666444
	if (ctx.cr6.eq) goto loc_82666444;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82960cf0
	ctx.lr = 0x82666444;
	sub_82960CF0(ctx, base);
loc_82666444:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266644C"))) PPC_WEAK_FUNC(sub_8266644C);
PPC_FUNC_IMPL(__imp__sub_8266644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666450"))) PPC_WEAK_FUNC(sub_82666450);
PPC_FUNC_IMPL(__imp__sub_82666450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82666458;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826665b8
	if (ctx.cr6.eq) goto loc_826665B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27600
	ctx.r4.s64 = ctx.r11.s64 + -27600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666480;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666498
	if (!ctx.cr6.eq) goto loc_82666498;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8266649c
	goto loc_8266649C;
loc_82666498:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266649C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826664A4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11024
	ctx.r9.s64 = ctx.r11.s64 + -11024;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826664D4;
	sub_821F0108(ctx, base);
	// li r7,234
	ctx.r7.s64 = 234;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826664F0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666508
	if (!ctx.cr6.eq) goto loc_82666508;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666514
	goto loc_82666514;
loc_82666508:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666514:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666550
	if (!ctx.cr6.lt) goto loc_82666550;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666544
	if (ctx.cr6.eq) goto loc_82666544;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666544;
	sub_82668718(ctx, base);
loc_82666544:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266656c
	goto loc_8266656C;
loc_82666550:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266656C;
	sub_82668848(ctx, base);
loc_8266656C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666574;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x8266658C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x8266659C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826665A4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826665B0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826665B8;
	sub_82214F08(ctx, base);
loc_826665B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_826665C0"))) PPC_WEAK_FUNC(sub_826665C0);
PPC_FUNC_IMPL(__imp__sub_826665C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x826665C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266672c
	if (ctx.cr6.eq) goto loc_8266672C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27580
	ctx.r4.s64 = ctx.r11.s64 + -27580;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826665F4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266660c
	if (!ctx.cr6.eq) goto loc_8266660C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666610
	goto loc_82666610;
loc_8266660C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666610:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666618;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10936
	ctx.r9.s64 = ctx.r11.s64 + -10936;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666648;
	sub_821F0108(ctx, base);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666664;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266667c
	if (!ctx.cr6.eq) goto loc_8266667C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666688
	goto loc_82666688;
loc_8266667C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666688:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826666c4
	if (!ctx.cr6.lt) goto loc_826666C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826666b8
	if (ctx.cr6.eq) goto loc_826666B8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826666B8;
	sub_82668718(ctx, base);
loc_826666B8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826666e0
	goto loc_826666E0;
loc_826666C4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826666E0;
	sub_82668848(ctx, base);
loc_826666E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826666E8;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666700;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666710;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666718;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666724;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266672C;
	sub_82214F08(ctx, base);
loc_8266672C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826667ac
	if (ctx.cr6.eq) goto loc_826667AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-12800
	ctx.r31.s64 = ctx.r11.s64 + -12800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8266674C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82965eb8
	ctx.lr = 0x82666758;
	sub_82965EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666760;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-12780
	ctx.r4.s64 = ctx.r10.s64 + -12780;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82666774;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666784;
	sub_8222CF18(ctx, base);
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,29272
	ctx.r6.s64 = ctx.r9.s64 + 29272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82966100
	ctx.lr = 0x8266679C;
	sub_82966100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826667A4;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826667AC;
	sub_82214F08(ctx, base);
loc_826667AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826667B4"))) PPC_WEAK_FUNC(sub_826667B4);
PPC_FUNC_IMPL(__imp__sub_826667B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826667B8"))) PPC_WEAK_FUNC(sub_826667B8);
PPC_FUNC_IMPL(__imp__sub_826667B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826667C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666920
	if (ctx.cr6.eq) goto loc_82666920;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27556
	ctx.r4.s64 = ctx.r11.s64 + -27556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826667E8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666800
	if (!ctx.cr6.eq) goto loc_82666800;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666804
	goto loc_82666804;
loc_82666800:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666804:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8266680C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10816
	ctx.r9.s64 = ctx.r11.s64 + -10816;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x8266683C;
	sub_821F0108(ctx, base);
	// li r7,235
	ctx.r7.s64 = 235;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666858;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666870
	if (!ctx.cr6.eq) goto loc_82666870;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8266687c
	goto loc_8266687C;
loc_82666870:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8266687C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826668b8
	if (!ctx.cr6.lt) goto loc_826668B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826668ac
	if (ctx.cr6.eq) goto loc_826668AC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826668AC;
	sub_82668718(ctx, base);
loc_826668AC:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x826668d4
	goto loc_826668D4;
loc_826668B8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x826668D4;
	sub_82668848(ctx, base);
loc_826668D4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826668DC;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826668F4;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666904;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8266690C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666918;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666920;
	sub_82214F08(ctx, base);
loc_82666920:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82666928"))) PPC_WEAK_FUNC(sub_82666928);
PPC_FUNC_IMPL(__imp__sub_82666928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82666930;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666a90
	if (ctx.cr6.eq) goto loc_82666A90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27524
	ctx.r4.s64 = ctx.r11.s64 + -27524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666958;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666970
	if (!ctx.cr6.eq) goto loc_82666970;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666974
	goto loc_82666974;
loc_82666970:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x8266697C;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10712
	ctx.r9.s64 = ctx.r11.s64 + -10712;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x826669AC;
	sub_821F0108(ctx, base);
	// li r7,236
	ctx.r7.s64 = 236;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x826669C8;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826669e0
	if (!ctx.cr6.eq) goto loc_826669E0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826669ec
	goto loc_826669EC;
loc_826669E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826669EC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666a28
	if (!ctx.cr6.lt) goto loc_82666A28;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666a1c
	if (ctx.cr6.eq) goto loc_82666A1C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666A1C;
	sub_82668718(ctx, base);
loc_82666A1C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666a44
	goto loc_82666A44;
loc_82666A28:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666A44;
	sub_82668848(ctx, base);
loc_82666A44:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666A4C;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666A64;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666A74;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666A7C;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666A88;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666A90;
	sub_82214F08(ctx, base);
loc_82666A90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82666A98"))) PPC_WEAK_FUNC(sub_82666A98);
PPC_FUNC_IMPL(__imp__sub_82666A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82666AA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666c04
	if (ctx.cr6.eq) goto loc_82666C04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27504
	ctx.r4.s64 = ctx.r11.s64 + -27504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666ACC;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666ae4
	if (!ctx.cr6.eq) goto loc_82666AE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666ae8
	goto loc_82666AE8;
loc_82666AE4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666AE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666AF0;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10608
	ctx.r9.s64 = ctx.r11.s64 + -10608;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666B20;
	sub_821F0108(ctx, base);
	// li r7,237
	ctx.r7.s64 = 237;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666B3C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666b54
	if (!ctx.cr6.eq) goto loc_82666B54;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666b60
	goto loc_82666B60;
loc_82666B54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666B60:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666b9c
	if (!ctx.cr6.lt) goto loc_82666B9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666b90
	if (ctx.cr6.eq) goto loc_82666B90;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666B90;
	sub_82668718(ctx, base);
loc_82666B90:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666bb8
	goto loc_82666BB8;
loc_82666B9C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666BB8;
	sub_82668848(ctx, base);
loc_82666BB8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666BC0;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666BD8;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666BE8;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666BF0;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666BFC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666C04;
	sub_82214F08(ctx, base);
loc_82666C04:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82666c14
	if (ctx.cr6.eq) goto loc_82666C14;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82968bd0
	ctx.lr = 0x82666C14;
	sub_82968BD0(ctx, base);
loc_82666C14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82666C1C"))) PPC_WEAK_FUNC(sub_82666C1C);
PPC_FUNC_IMPL(__imp__sub_82666C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666C20"))) PPC_WEAK_FUNC(sub_82666C20);
PPC_FUNC_IMPL(__imp__sub_82666C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82666C28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666d88
	if (ctx.cr6.eq) goto loc_82666D88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666C50;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666c68
	if (!ctx.cr6.eq) goto loc_82666C68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666c6c
	goto loc_82666C6C;
loc_82666C68:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666C6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666C74;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10392
	ctx.r9.s64 = ctx.r11.s64 + -10392;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666CA4;
	sub_821F0108(ctx, base);
	// li r7,238
	ctx.r7.s64 = 238;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666CC0;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666cd8
	if (!ctx.cr6.eq) goto loc_82666CD8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666ce4
	goto loc_82666CE4;
loc_82666CD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666CE4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666d20
	if (!ctx.cr6.lt) goto loc_82666D20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666d14
	if (ctx.cr6.eq) goto loc_82666D14;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666D14;
	sub_82668718(ctx, base);
loc_82666D14:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666d3c
	goto loc_82666D3C;
loc_82666D20:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666D3C;
	sub_82668848(ctx, base);
loc_82666D3C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666D44;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666D5C;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666D6C;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666D74;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666D80;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666D88;
	sub_82214F08(ctx, base);
loc_82666D88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82666D90"))) PPC_WEAK_FUNC(sub_82666D90);
PPC_FUNC_IMPL(__imp__sub_82666D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82666D98;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666ef8
	if (ctx.cr6.eq) goto loc_82666EF8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,8156
	ctx.r4.s64 = ctx.r11.s64 + 8156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666DC0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666dd8
	if (!ctx.cr6.eq) goto loc_82666DD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666ddc
	goto loc_82666DDC;
loc_82666DD8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666DDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666DE4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10280
	ctx.r9.s64 = ctx.r11.s64 + -10280;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666E14;
	sub_821F0108(ctx, base);
	// li r7,239
	ctx.r7.s64 = 239;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666E30;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666e48
	if (!ctx.cr6.eq) goto loc_82666E48;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666e54
	goto loc_82666E54;
loc_82666E48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666E54:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82666e90
	if (!ctx.cr6.lt) goto loc_82666E90;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666e84
	if (ctx.cr6.eq) goto loc_82666E84;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666E84;
	sub_82668718(ctx, base);
loc_82666E84:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82666eac
	goto loc_82666EAC;
loc_82666E90:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82666EAC;
	sub_82668848(ctx, base);
loc_82666EAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82666EB4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82666ECC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82666EDC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82666EE4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82666EF0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82666EF8;
	sub_82214F08(ctx, base);
loc_82666EF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82666F00"))) PPC_WEAK_FUNC(sub_82666F00);
PPC_FUNC_IMPL(__imp__sub_82666F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82666F08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266706c
	if (ctx.cr6.eq) goto loc_8266706C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-4376
	ctx.r4.s64 = ctx.r11.s64 + -4376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82666F34;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666f4c
	if (!ctx.cr6.eq) goto loc_82666F4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82666f50
	goto loc_82666F50;
loc_82666F4C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82666F50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82666F58;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10136
	ctx.r9.s64 = ctx.r11.s64 + -10136;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82666F88;
	sub_821F0108(ctx, base);
	// li r7,240
	ctx.r7.s64 = 240;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82666FA4;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666fbc
	if (!ctx.cr6.eq) goto loc_82666FBC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82666fc8
	goto loc_82666FC8;
loc_82666FBC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82666FC8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82667004
	if (!ctx.cr6.lt) goto loc_82667004;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666ff8
	if (ctx.cr6.eq) goto loc_82666FF8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82666FF8;
	sub_82668718(ctx, base);
loc_82666FF8:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82667020
	goto loc_82667020;
loc_82667004:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82667020;
	sub_82668848(ctx, base);
loc_82667020:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82667028;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82667040;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82667050;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82667058;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x82667064;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8266706C;
	sub_82214F08(ctx, base);
loc_8266706C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826670ec
	if (ctx.cr6.eq) goto loc_826670EC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-4352
	ctx.r31.s64 = ctx.r11.s64 + -4352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8266708C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256ded8
	ctx.lr = 0x82667098;
	sub_8256DED8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826670A0;
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-4328
	ctx.r4.s64 = ctx.r10.s64 + -4328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826670B4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826670C4;
	sub_8222CF18(ctx, base);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-9920
	ctx.r6.s64 = ctx.r9.s64 + -9920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256e120
	ctx.lr = 0x826670DC;
	sub_8256E120(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826670E4;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826670EC;
	sub_82214F08(ctx, base);
loc_826670EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826670F4"))) PPC_WEAK_FUNC(sub_826670F4);
PPC_FUNC_IMPL(__imp__sub_826670F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826670F8"))) PPC_WEAK_FUNC(sub_826670F8);
PPC_FUNC_IMPL(__imp__sub_826670F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82667100;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667264
	if (ctx.cr6.eq) goto loc_82667264;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27480
	ctx.r4.s64 = ctx.r11.s64 + -27480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8266712C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82667144
	if (!ctx.cr6.eq) goto loc_82667144;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x82667148
	goto loc_82667148;
loc_82667144:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82667148:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x82667150;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-10016
	ctx.r9.s64 = ctx.r11.s64 + -10016;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82667180;
	sub_821F0108(ctx, base);
	// li r7,241
	ctx.r7.s64 = 241;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x8266719C;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826671b4
	if (!ctx.cr6.eq) goto loc_826671B4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x826671c0
	goto loc_826671C0;
loc_826671B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826671C0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826671fc
	if (!ctx.cr6.lt) goto loc_826671FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826671f0
	if (ctx.cr6.eq) goto loc_826671F0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x826671F0;
	sub_82668718(ctx, base);
loc_826671F0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82667218
	goto loc_82667218;
loc_826671FC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x82667218;
	sub_82668848(ctx, base);
loc_82667218:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x82667220;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x82667238;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x82667248;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82667250;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x8266725C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82667264;
	sub_82214F08(ctx, base);
loc_82667264:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82667274
	if (ctx.cr6.eq) goto loc_82667274;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82969830
	ctx.lr = 0x82667274;
	sub_82969830(ctx, base);
loc_82667274:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8266727C"))) PPC_WEAK_FUNC(sub_8266727C);
PPC_FUNC_IMPL(__imp__sub_8266727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667280"))) PPC_WEAK_FUNC(sub_82667280);
PPC_FUNC_IMPL(__imp__sub_82667280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82667288;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826673e8
	if (ctx.cr6.eq) goto loc_826673E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826672B0;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826672c8
	if (!ctx.cr6.eq) goto loc_826672C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x826672cc
	goto loc_826672CC;
loc_826672C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826672CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82644a10
	ctx.lr = 0x826672D4;
	sub_82644A10(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-9888
	ctx.r9.s64 = ctx.r11.s64 + -9888;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	ctx.lr = 0x82667304;
	sub_821F0108(ctx, base);
	// li r7,242
	ctx.r7.s64 = 242;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x82668718
	ctx.lr = 0x82667320;
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82667338
	if (!ctx.cr6.eq) goto loc_82667338;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82667344
	goto loc_82667344;
loc_82667338:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82667344:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82667380
	if (!ctx.cr6.lt) goto loc_82667380;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82667374
	if (ctx.cr6.eq) goto loc_82667374;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82668718
	ctx.lr = 0x82667374;
	sub_82668718(ctx, base);
loc_82667374:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8266739c
	goto loc_8266739C;
loc_82667380:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	ctx.lr = 0x8266739C;
	sub_82668848(ctx, base);
loc_8266739C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	ctx.lr = 0x826673A4;
	sub_82214F08(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// bl 0x821f0108
	ctx.lr = 0x826673BC;
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824804a8
	ctx.lr = 0x826673CC;
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826673D4;
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x826673E0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826673E8;
	sub_82214F08(ctx, base);
loc_826673E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

