#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F90930"))) PPC_WEAK_FUNC(sub_82F90930);
PPC_FUNC_IMPL(__imp__sub_82F90930) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,-6028
	ctx.r10.s64 = ctx.r11.s64 + -6028;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F90960:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90984
	if (ctx.cr0.eq) goto loc_82F90984;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90960
	if (ctx.cr6.eq) goto loc_82F90960;
loc_82F90984:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f909d4
	if (!ctx.cr0.eq) goto loc_82F909D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F9099C;
	sub_82F8FAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F909B8;
	sub_82F6BBB0(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82F909C8:
	// bl 0x82f6baa0
	ctx.lr = 0x82F909CC;
	sub_82F6BAA0(ctx, base);
loc_82F909CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f90d0c
	goto loc_82F90D0C;
loc_82F909D4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6020
	ctx.r10.s64 = ctx.r10.s64 + -6020;
loc_82F909E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90a04
	if (ctx.cr0.eq) goto loc_82F90A04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f909e0
	if (ctx.cr6.eq) goto loc_82F909E0;
loc_82F90A04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90a4c
	if (!ctx.cr0.eq) goto loc_82F90A4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90A1C;
	sub_82F8FAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90A38;
	sub_82F6BBB0(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90A4C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6060
	ctx.r10.s64 = ctx.r10.s64 + -6060;
loc_82F90A58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90a7c
	if (ctx.cr0.eq) goto loc_82F90A7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90a58
	if (ctx.cr6.eq) goto loc_82F90A58;
loc_82F90A7C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90ac4
	if (!ctx.cr0.eq) goto loc_82F90AC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90A94;
	sub_82F8FAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90AB0;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90AC4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6056
	ctx.r10.s64 = ctx.r10.s64 + -6056;
loc_82F90AD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90af4
	if (ctx.cr0.eq) goto loc_82F90AF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90ad0
	if (ctx.cr6.eq) goto loc_82F90AD0;
loc_82F90AF4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90b3c
	if (!ctx.cr0.eq) goto loc_82F90B3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90B0C;
	sub_82F8FAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90B28;
	sub_82F6BBB0(ctx, base);
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90B3C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,15096
	ctx.r10.s64 = ctx.r10.s64 + 15096;
loc_82F90B48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90b6c
	if (ctx.cr0.eq) goto loc_82F90B6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90b48
	if (ctx.cr6.eq) goto loc_82F90B48;
loc_82F90B6C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90bd4
	if (!ctx.cr0.eq) goto loc_82F90BD4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90B84;
	sub_82F8FAA8(ctx, base);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// bl 0x82f907d0
	ctx.lr = 0x82F90BB4;
	sub_82F907D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90BC0;
	sub_82F6BBB0(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90BD4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
loc_82F90BE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f90c04
	if (ctx.cr0.eq) goto loc_82F90C04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90be0
	if (ctx.cr6.eq) goto loc_82F90BE0;
loc_82F90C04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90c6c
	if (!ctx.cr0.eq) goto loc_82F90C6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90C1C;
	sub_82F8FAA8(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// stfd f11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f11.u64);
	// bl 0x82f90880
	ctx.lr = 0x82F90C4C;
	sub_82F90880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90C58;
	sub_82F6BBB0(ctx, base);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90C6C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-22728
	ctx.r10.s64 = ctx.r10.s64 + -22728;
loc_82F90C78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f90c9c
	if (ctx.cr0.eq) goto loc_82F90C9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90c78
	if (ctx.cr6.eq) goto loc_82F90C78;
loc_82F90C9C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne 0x82f90d04
	if (!ctx.cr0.eq) goto loc_82F90D04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90CB4;
	sub_82F8FAA8(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// stfd f11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f11.u64);
	// bl 0x82f8f9e8
	ctx.lr = 0x82F90CE4;
	sub_82F8F9E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90CF0;
	sub_82F6BBB0(ctx, base);
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f909cc
	if (ctx.cr6.lt) goto loc_82F909CC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x82f909c8
	goto loc_82F909C8;
loc_82F90D04:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82f87748
	ctx.lr = 0x82F90D0C;
	sub_82F87748(ctx, base);
loc_82F90D0C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_82F90D24"))) PPC_WEAK_FUNC(sub_82F90D24);
PPC_FUNC_IMPL(__imp__sub_82F90D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F90D28"))) PPC_WEAK_FUNC(sub_82F90D28);
PPC_FUNC_IMPL(__imp__sub_82F90D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F90D30;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f90d50
	if (ctx.cr0.eq) goto loc_82F90D50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f91094
	goto loc_82F91094;
loc_82F90D50:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-6028
	ctx.r10.s64 = ctx.r11.s64 + -6028;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F90D64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90d88
	if (ctx.cr0.eq) goto loc_82F90D88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90d64
	if (ctx.cr6.eq) goto loc_82F90D64;
loc_82F90D88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90dcc
	if (!ctx.cr0.eq) goto loc_82F90DCC;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90DA4;
	sub_82F8FAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90DB0;
	sub_82F6B480(ctx, base);
	// stfd f1,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
loc_82F90DB4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8f198
	ctx.lr = 0x82F90DC4;
	sub_82F8F198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f91094
	goto loc_82F91094;
loc_82F90DCC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6060
	ctx.r10.s64 = ctx.r10.s64 + -6060;
loc_82F90DD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90dfc
	if (ctx.cr0.eq) goto loc_82F90DFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90dd8
	if (ctx.cr6.eq) goto loc_82F90DD8;
loc_82F90DFC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90e2c
	if (!ctx.cr0.eq) goto loc_82F90E2C;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90E18;
	sub_82F8FAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90E24;
	sub_82F6B480(ctx, base);
	// stfd f1,136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f1.u64);
	// b 0x82f90db4
	goto loc_82F90DB4;
loc_82F90E2C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6020
	ctx.r10.s64 = ctx.r10.s64 + -6020;
loc_82F90E38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90e5c
	if (ctx.cr0.eq) goto loc_82F90E5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90e38
	if (ctx.cr6.eq) goto loc_82F90E38;
loc_82F90E5C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90e8c
	if (!ctx.cr0.eq) goto loc_82F90E8C;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90E78;
	sub_82F8FAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90E84;
	sub_82F6B480(ctx, base);
	// stfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f1.u64);
	// b 0x82f90db4
	goto loc_82F90DB4;
loc_82F90E8C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6056
	ctx.r10.s64 = ctx.r10.s64 + -6056;
loc_82F90E98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90ebc
	if (ctx.cr0.eq) goto loc_82F90EBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90e98
	if (ctx.cr6.eq) goto loc_82F90E98;
loc_82F90EBC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90eec
	if (!ctx.cr0.eq) goto loc_82F90EEC;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90ED8;
	sub_82F8FAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90EE4;
	sub_82F6B480(ctx, base);
	// stfd f1,152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f1.u64);
	// b 0x82f90db4
	goto loc_82F90DB4;
loc_82F90EEC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,15096
	ctx.r10.s64 = ctx.r10.s64 + 15096;
loc_82F90EF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90f1c
	if (ctx.cr0.eq) goto loc_82F90F1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90ef8
	if (ctx.cr6.eq) goto loc_82F90EF8;
loc_82F90F1C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90f74
	if (!ctx.cr0.eq) goto loc_82F90F74;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90F38;
	sub_82F8FAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F90F40;
	sub_82F6AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f90db4
	if (ctx.cr0.eq) goto loc_82F90DB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F90F50;
	sub_82F6AD80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa9b28
	ctx.lr = 0x82F90F60;
	sub_82FA9B28(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// b 0x82f90db4
	goto loc_82F90DB4;
loc_82F90F74:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
loc_82F90F80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f90fa4
	if (ctx.cr0.eq) goto loc_82F90FA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f90f80
	if (ctx.cr6.eq) goto loc_82F90F80;
loc_82F90FA4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f90ffc
	if (!ctx.cr0.eq) goto loc_82F90FFC;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90FC0;
	sub_82F8FAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F90FC8;
	sub_82F6AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f90db4
	if (ctx.cr0.eq) goto loc_82F90DB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F90FD8;
	sub_82F6AD80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa9b28
	ctx.lr = 0x82F90FE8;
	sub_82FA9B28(ctx, base);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82F90FF0:
	// stfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// b 0x82f90db4
	goto loc_82F90DB4;
loc_82F90FFC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-22728
	ctx.r10.s64 = ctx.r10.s64 + -22728;
loc_82F91008:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f9102c
	if (ctx.cr0.eq) goto loc_82F9102C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f91008
	if (ctx.cr6.eq) goto loc_82F91008;
loc_82F9102C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne 0x82f9108c
	if (!ctx.cr0.eq) goto loc_82F9108C;
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F91048;
	sub_82F8FAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F91050;
	sub_82F6AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f90db4
	if (ctx.cr0.eq) goto loc_82F90DB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F91060;
	sub_82F6AD80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa9b28
	ctx.lr = 0x82F91070;
	sub_82FA9B28(ctx, base);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
	// fadd f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// b 0x82f90ff0
	goto loc_82F90FF0;
loc_82F9108C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82F91094;
	sub_82F88A68(ctx, base);
loc_82F91094:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F9109C"))) PPC_WEAK_FUNC(sub_82F9109C);
PPC_FUNC_IMPL(__imp__sub_82F9109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F910A0"))) PPC_WEAK_FUNC(sub_82F910A0);
PPC_FUNC_IMPL(__imp__sub_82F910A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F910A8"))) PPC_WEAK_FUNC(sub_82F910A8);
PPC_FUNC_IMPL(__imp__sub_82F910A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F910B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F910C4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23760
	ctx.r11.s64 = ctx.r11.s64 + 23760;
	// addi r10,r10,15104
	ctx.r10.s64 = ctx.r10.s64 + 15104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82F91108;
	sub_82F0AD10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F9111C;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f9113c
	if (ctx.cr6.eq) goto loc_82F9113C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F9113C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-4336
	ctx.r5.s64 = ctx.r11.s64 + -4336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8f118
	ctx.lr = 0x82F91150;
	sub_82F8F118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F9115C"))) PPC_WEAK_FUNC(sub_82F9115C);
PPC_FUNC_IMPL(__imp__sub_82F9115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F91160"))) PPC_WEAK_FUNC(sub_82F91160);
PPC_FUNC_IMPL(__imp__sub_82F91160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F91168;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F91178;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f911a8
	if (ctx.cr0.eq) goto loc_82F911A8;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f910a8
	ctx.lr = 0x82F911A0;
	sub_82F910A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f911ac
	goto loc_82F911AC;
loc_82F911A8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F911AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F911B8;
	sub_82F6C328(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f912a0
	if (!ctx.cr6.gt) goto loc_82F912A0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F911CC:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f911cc
	if (!ctx.cr0.lt) goto loc_82F911CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F911EC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F911F8;
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82f91264
	if (!ctx.cr6.gt) goto loc_82F91264;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F91210;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F9121C;
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82f91264
	if (!ctx.cr6.gt) goto loc_82F91264;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F91234;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F91240;
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82f91264
	if (!ctx.cr6.gt) goto loc_82F91264;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F91258;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F91264;
	sub_82F6BBB0(ctx, base);
loc_82F91264:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F91278;
	sub_82F8F118(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F91280:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91298
	if (ctx.cr6.lt) goto loc_82F91298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91298;
	sub_82F6BAA0(ctx, base);
loc_82F91298:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f91280
	if (!ctx.cr0.lt) goto loc_82F91280;
loc_82F912A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f912c0
	if (ctx.cr6.eq) goto loc_82F912C0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F912C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F912C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F912C8"))) PPC_WEAK_FUNC(sub_82F912C8);
PPC_FUNC_IMPL(__imp__sub_82F912C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F912D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f912ec
	if (!ctx.cr6.eq) goto loc_82F912EC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F912EC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F912F4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f91324
	if (ctx.cr0.eq) goto loc_82F91324;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f910a8
	ctx.lr = 0x82F9131C;
	sub_82F910A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f91328
	goto loc_82F91328;
loc_82F91324:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F91328:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F91330:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f91330
	if (!ctx.cr0.lt) goto loc_82F91330;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F91358;
	sub_82F8F098(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F9136C;
	sub_82F8F118(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F91378;
	sub_82F6C328(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82F91380:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91398
	if (ctx.cr6.lt) goto loc_82F91398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91398;
	sub_82F6BAA0(ctx, base);
loc_82F91398:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f91380
	if (!ctx.cr0.lt) goto loc_82F91380;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f913c0
	if (ctx.cr6.eq) goto loc_82F913C0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F913C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F913C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F913C8"))) PPC_WEAK_FUNC(sub_82F913C8);
PPC_FUNC_IMPL(__imp__sub_82F913C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F913D0;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca74f8
	ctx.lr = 0x82F913D8;
	sub_82CA74F8(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfd f30,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
	// stfd f26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f26.u64);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// stfd f28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// stfd f27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f27.u64);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// stfd f29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f29.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9141c
	if (!ctx.cr6.eq) goto loc_82F9141C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F9141C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f915b0
	if (!ctx.cr6.gt) goto loc_82F915B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F91434;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F91438;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f915b0
	if (ctx.cr0.eq) goto loc_82F915B0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F91448:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f91448
	if (!ctx.cr0.lt) goto loc_82F91448;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F9146C;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f8f018
	ctx.lr = 0x82F9147C;
	sub_82F8F018(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F91488;
	sub_82F6B480(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F91498;
	sub_82F6B480(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F914A8;
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F914B8;
	sub_82F6B480(ctx, base);
	// lfd f9,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fadd f11,f31,f25
	ctx.f11.f64 = ctx.f31.f64 + ctx.f25.f64;
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fadd f0,f24,f1
	ctx.f0.f64 = ctx.f24.f64 + ctx.f1.f64;
	// blt cr6,0x82f914f4
	if (ctx.cr6.lt) goto loc_82F914F4;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x82f914f4
	if (ctx.cr6.lt) goto loc_82F914F4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82f914f4
	if (ctx.cr6.lt) goto loc_82F914F4;
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82f914f8
	if (!ctx.cr6.lt) goto loc_82F914F8;
loc_82F914F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F914F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f91560
	if (ctx.cr0.eq) goto loc_82F91560;
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x82f91510
	if (!ctx.cr6.gt) goto loc_82F91510;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// b 0x82f91514
	goto loc_82F91514;
loc_82F91510:
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
loc_82F91514:
	// stfd f26,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f26.u64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82f91528
	if (!ctx.cr6.gt) goto loc_82F91528;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// b 0x82f9152c
	goto loc_82F9152C;
loc_82F91528:
	// fmr f27,f12
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f12.f64;
loc_82F9152C:
	// stfd f27,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f27.u64);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82f91540
	if (!ctx.cr6.gt) goto loc_82F91540;
	// fmr f28,f10
	ctx.f28.f64 = ctx.f10.f64;
	// b 0x82f91544
	goto loc_82F91544;
loc_82F91540:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_82F91544:
	// stfd f28,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82f91558
	if (!ctx.cr6.gt) goto loc_82F91558;
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
	// b 0x82f9155c
	goto loc_82F9155C;
loc_82F91558:
	// fmr f29,f9
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f9.f64;
loc_82F9155C:
	// stfd f29,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f29.u64);
loc_82F91560:
	// fsub f0,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64 - ctx.f26.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82f91578
	if (ctx.cr6.eq) goto loc_82F91578;
	// fsub f0,f29,f28
	ctx.f0.f64 = ctx.f29.f64 - ctx.f28.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82f91588
	if (!ctx.cr6.eq) goto loc_82F91588;
loc_82F91578:
	// stfd f30,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f30.u64);
	// stfd f30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f30.u64);
	// stfd f30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f30.u64);
	// stfd f30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f30.u64);
loc_82F91588:
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82F91590:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f915a8
	if (ctx.cr6.lt) goto loc_82F915A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F915A8;
	sub_82F6BAA0(ctx, base);
loc_82F915A8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f91590
	if (!ctx.cr0.lt) goto loc_82F91590;
loc_82F915B0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F915B8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f915e8
	if (ctx.cr0.eq) goto loc_82F915E8;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f910a8
	ctx.lr = 0x82F915E0;
	sub_82F910A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f915ec
	goto loc_82F915EC;
loc_82F915E8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F915EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8f198
	ctx.lr = 0x82F915FC;
	sub_82F8F198(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F91608;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f91628
	if (ctx.cr6.eq) goto loc_82F91628;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F91628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F91628:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7544
	ctx.lr = 0x82F91634;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F91638"))) PPC_WEAK_FUNC(sub_82F91638);
PPC_FUNC_IMPL(__imp__sub_82F91638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F91640;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f91668
	if (!ctx.cr6.eq) goto loc_82F91668;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F91668:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F91670;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f916a0
	if (ctx.cr0.eq) goto loc_82F916A0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f910a8
	ctx.lr = 0x82F91698;
	sub_82F910A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82f916a4
	goto loc_82F916A4;
loc_82F916A0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F916A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F916B0;
	sub_82F6C328(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f918bc
	if (!ctx.cr6.gt) goto loc_82F918BC;
	// bl 0x82f98458
	ctx.lr = 0x82F916C0;
	sub_82F98458(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f98458
	ctx.lr = 0x82F916C8;
	sub_82F98458(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82f98458
	ctx.lr = 0x82F916D0;
	sub_82F98458(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82f98458
	ctx.lr = 0x82F916D8;
	sub_82F98458(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// stfd f29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f29.u64);
	// stfd f30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f30.u64);
	// stfd f31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f31.u64);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F916F4;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F916F8;
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f918a8
	if (ctx.cr0.eq) goto loc_82F918A8;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F91708:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f91708
	if (!ctx.cr0.lt) goto loc_82F91708;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F9172C;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8f018
	ctx.lr = 0x82F9173C;
	sub_82F8F018(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F91748;
	sub_82F6B480(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F91758;
	sub_82F6B480(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F91768;
	sub_82F6B480(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F91778;
	sub_82F6B480(ctx, base);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fadd f12,f31,f30
	ctx.f12.f64 = ctx.f31.f64 + ctx.f30.f64;
	// fadd f0,f29,f1
	ctx.f0.f64 = ctx.f29.f64 + ctx.f1.f64;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x82f91794
	if (!ctx.cr6.gt) goto loc_82F91794;
	// stfd f1,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// b 0x82f91798
	goto loc_82F91798;
loc_82F91794:
	// stfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
loc_82F91798:
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82f917ac
	if (!ctx.cr6.gt) goto loc_82F917AC;
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// b 0x82f917b0
	goto loc_82F917B0;
loc_82F917AC:
	// stfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
loc_82F917B0:
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82f917c4
	if (!ctx.cr6.gt) goto loc_82F917C4;
	// stfd f31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// b 0x82f917c8
	goto loc_82F917C8;
loc_82F917C4:
	// stfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
loc_82F917C8:
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82f917dc
	if (!ctx.cr6.gt) goto loc_82F917DC;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// b 0x82f917e0
	goto loc_82F917E0;
loc_82F917DC:
	// stfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
loc_82F917E0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F917EC;
	sub_82F6B480(ctx, base);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r30,r10,52,11
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r30.u64, ctx.xer);
	// bne cr6,0x82f91820
	if (!ctx.cr6.eq) goto loc_82F91820;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f91824
	if (!ctx.cr6.eq) goto loc_82F91824;
loc_82F91820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F91824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f91834
	if (ctx.cr0.eq) goto loc_82F91834;
	// bl 0x82f98458
	ctx.lr = 0x82F91830;
	sub_82F98458(ctx, base);
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
loc_82F91834:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F91840;
	sub_82F6B480(ctx, base);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r30.u64, ctx.xer);
	// bne cr6,0x82f9186c
	if (!ctx.cr6.eq) goto loc_82F9186C;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f91870
	if (!ctx.cr6.eq) goto loc_82F91870;
loc_82F9186C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F91870:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f91880
	if (ctx.cr0.eq) goto loc_82F91880;
	// bl 0x82f98458
	ctx.lr = 0x82F9187C;
	sub_82F98458(ctx, base);
	// stfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
loc_82F91880:
	// addi r30,r1,224
	ctx.r30.s64 = ctx.r1.s64 + 224;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82F91888:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f918a0
	if (ctx.cr6.lt) goto loc_82F918A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F918A0;
	sub_82F6BAA0(ctx, base);
loc_82F918A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f91888
	if (!ctx.cr0.lt) goto loc_82F91888;
loc_82F918A8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f8f198
	ctx.lr = 0x82F918B8;
	sub_82F8F198(ctx, base);
	// b 0x82f918d4
	goto loc_82F918D4;
loc_82F918BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r10,-27568
	ctx.r5.s64 = ctx.r10.s64 + -27568;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F918D4;
	sub_82F8F118(ctx, base);
loc_82F918D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f918f4
	if (ctx.cr6.eq) goto loc_82F918F4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F918F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F918F4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F91908"))) PPC_WEAK_FUNC(sub_82F91908);
PPC_FUNC_IMPL(__imp__sub_82F91908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F91910;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F9192C;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,15264
	ctx.r11.s64 = ctx.r11.s64 + 15264;
	// addi r10,r10,15184
	ctx.r10.s64 = ctx.r10.s64 + 15184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F9195C;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F91968;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F9197C;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F91988;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F9199C;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f68b10
	ctx.lr = 0x82F919AC;
	sub_82F68B10(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f919c0
	if (ctx.cr6.lt) goto loc_82F919C0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F919C0;
	sub_82F6BAA0(ctx, base);
loc_82F919C0:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F919EC;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F91A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91a20
	if (ctx.cr6.lt) goto loc_82F91A20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91A20;
	sub_82F6BAA0(ctx, base);
loc_82F91A20:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F91A30;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F91A3C"))) PPC_WEAK_FUNC(sub_82F91A3C);
PPC_FUNC_IMPL(__imp__sub_82F91A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F91A40"))) PPC_WEAK_FUNC(sub_82F91A40);
PPC_FUNC_IMPL(__imp__sub_82F91A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f91bb0
	sub_82F91BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F91A48"))) PPC_WEAK_FUNC(sub_82F91A48);
PPC_FUNC_IMPL(__imp__sub_82F91A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F91A50;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f91a70
	if (!ctx.cr6.eq) goto loc_82F91A70;
loc_82F91A68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f91b30
	goto loc_82F91B30;
loc_82F91A70:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f91b2c
	if (ctx.cr6.eq) goto loc_82F91B2C;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f91b2c
	if (ctx.cr6.eq) goto loc_82F91B2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F91A90:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f68a70
	ctx.lr = 0x82F91AA4;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f91b1c
	if (ctx.cr6.eq) goto loc_82F91B1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F91AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F91ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F91AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x82f91b38
	if (!ctx.cr0.eq) goto loc_82F91B38;
	// bctrl 
	ctx.lr = 0x82F91B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F91B1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f91a90
	if (ctx.cr6.lt) goto loc_82F91A90;
loc_82F91B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F91B30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82F91B38:
	// bctrl 
	ctx.lr = 0x82F91B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f91a68
	goto loc_82F91A68;
}

__attribute__((alias("__imp__sub_82F91B40"))) PPC_WEAK_FUNC(sub_82F91B40);
PPC_FUNC_IMPL(__imp__sub_82F91B40) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,15264
	ctx.r11.s64 = ctx.r11.s64 + 15264;
	// addi r10,r10,15184
	ctx.r10.s64 = ctx.r10.s64 + 15184;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f91b80
	if (ctx.cr6.eq) goto loc_82F91B80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F91B80;
	sub_82F0A3F0(ctx, base);
loc_82F91B80:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82f67f08
	ctx.lr = 0x82F91B88;
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f67f08
	ctx.lr = 0x82F91B90;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F91B98;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F91BAC"))) PPC_WEAK_FUNC(sub_82F91BAC);
PPC_FUNC_IMPL(__imp__sub_82F91BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F91BB0"))) PPC_WEAK_FUNC(sub_82F91BB0);
PPC_FUNC_IMPL(__imp__sub_82F91BB0) {
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
	// bl 0x82f91b40
	ctx.lr = 0x82F91BD0;
	sub_82F91B40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f91be0
	if (ctx.cr0.eq) goto loc_82F91BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F91BE0;
	sub_82EF6F38(ctx, base);
loc_82F91BE0:
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

__attribute__((alias("__imp__sub_82F91BFC"))) PPC_WEAK_FUNC(sub_82F91BFC);
PPC_FUNC_IMPL(__imp__sub_82F91BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F91C00"))) PPC_WEAK_FUNC(sub_82F91C00);
PPC_FUNC_IMPL(__imp__sub_82F91C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F91C08;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82f91908
	ctx.lr = 0x82F91C20;
	sub_82F91908(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,15264
	ctx.r10.s64 = ctx.r10.s64 + 15264;
	// addi r9,r9,15184
	ctx.r9.s64 = ctx.r9.s64 + 15184;
	// addi r29,r11,14920
	ctx.r29.s64 = ctx.r11.s64 + 14920;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r9,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r9.u32);
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,14920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f91d4c
	if (ctx.cr6.eq) goto loc_82F91D4C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F91C5C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F91C6C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f91ca8
	if (ctx.cr0.eq) goto loc_82F91CA8;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82f6a280
	ctx.lr = 0x82F91CA0;
	sub_82F6A280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82f91cac
	goto loc_82F91CAC;
loc_82F91CA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F91CAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f67ef0
	ctx.lr = 0x82F91CB8;
	sub_82F67EF0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6ad40
	ctx.lr = 0x82F91CC4;
	sub_82F6AD40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91CD8;
	sub_82F04130(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91CF0;
	sub_82F88220(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91d18
	if (!ctx.cr6.eq) goto loc_82F91D18;
	// bl 0x82f670f0
	ctx.lr = 0x82F91D18;
	sub_82F670F0(ctx, base);
loc_82F91D18:
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91d2c
	if (ctx.cr6.lt) goto loc_82F91D2C;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91D2C;
	sub_82F6BAA0(ctx, base);
loc_82F91D2C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f67f08
	ctx.lr = 0x82F91D34;
	sub_82F67F08(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rlwinm r28,r25,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r28,r29
	ctx.r27.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91c5c
	if (!ctx.cr6.eq) goto loc_82F91C5C;
loc_82F91D4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,3
	ctx.r29.s64 = 3;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// lfd f31,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// addi r5,r9,-6028
	ctx.r5.s64 = ctx.r9.s64 + -6028;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04130
	ctx.lr = 0x82F91D80;
	sub_82F04130(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91D98;
	sub_82F88220(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91dc0
	if (!ctx.cr6.eq) goto loc_82F91DC0;
	// bl 0x82f670f0
	ctx.lr = 0x82F91DC0;
	sub_82F670F0(ctx, base);
loc_82F91DC0:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91dd4
	if (ctx.cr6.lt) goto loc_82F91DD4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91DD4;
	sub_82F6BAA0(ctx, base);
loc_82F91DD4:
	// stfd f31,184(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f31.u64);
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r28.u8);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r5,r10,-6060
	ctx.r5.s64 = ctx.r10.s64 + -6060;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91DF8;
	sub_82F04130(ctx, base);
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91E10;
	sub_82F88220(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91e38
	if (!ctx.cr6.eq) goto loc_82F91E38;
	// bl 0x82f670f0
	ctx.lr = 0x82F91E38;
	sub_82F670F0(ctx, base);
loc_82F91E38:
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91e4c
	if (ctx.cr6.lt) goto loc_82F91E4C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91E4C;
	sub_82F6BAA0(ctx, base);
loc_82F91E4C:
	// stfd f31,152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f31.u64);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r5,r10,-6020
	ctx.r5.s64 = ctx.r10.s64 + -6020;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91E70;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91E88;
	sub_82F88220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91eb0
	if (!ctx.cr6.eq) goto loc_82F91EB0;
	// bl 0x82f670f0
	ctx.lr = 0x82F91EB0;
	sub_82F670F0(ctx, base);
loc_82F91EB0:
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91ec4
	if (ctx.cr6.lt) goto loc_82F91EC4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91EC4;
	sub_82F6BAA0(ctx, base);
loc_82F91EC4:
	// stfd f31,168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f31.u64);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,-6056
	ctx.r5.s64 = ctx.r10.s64 + -6056;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91EE8;
	sub_82F04130(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91F00;
	sub_82F88220(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91f28
	if (!ctx.cr6.eq) goto loc_82F91F28;
	// bl 0x82f670f0
	ctx.lr = 0x82F91F28;
	sub_82F670F0(ctx, base);
loc_82F91F28:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91f3c
	if (ctx.cr6.lt) goto loc_82F91F3C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91F3C;
	sub_82F6BAA0(ctx, base);
loc_82F91F3C:
	// stfd f31,200(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f31.u64);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r10,15096
	ctx.r5.s64 = ctx.r10.s64 + 15096;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91F60;
	sub_82F04130(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91F78;
	sub_82F88220(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f91fa0
	if (!ctx.cr6.eq) goto loc_82F91FA0;
	// bl 0x82f670f0
	ctx.lr = 0x82F91FA0;
	sub_82F670F0(ctx, base);
loc_82F91FA0:
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f91fb4
	if (ctx.cr6.lt) goto loc_82F91FB4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F91FB4;
	sub_82F6BAA0(ctx, base);
loc_82F91FB4:
	// stfd f31,232(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f31.u64);
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r28.u8);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r5,r10,15084
	ctx.r5.s64 = ctx.r10.s64 + 15084;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F91FD8;
	sub_82F04130(ctx, base);
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F91FF0;
	sub_82F88220(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f92018
	if (!ctx.cr6.eq) goto loc_82F92018;
	// bl 0x82f670f0
	ctx.lr = 0x82F92018;
	sub_82F670F0(ctx, base);
loc_82F92018:
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9202c
	if (ctx.cr6.lt) goto loc_82F9202C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9202C;
	sub_82F6BAA0(ctx, base);
loc_82F9202C:
	// stfd f31,216(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f31.u64);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r5,r10,-22728
	ctx.r5.s64 = ctx.r10.s64 + -22728;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F92050;
	sub_82F04130(ctx, base);
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F92068;
	sub_82F88220(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f92090
	if (!ctx.cr6.eq) goto loc_82F92090;
	// bl 0x82f670f0
	ctx.lr = 0x82F92090;
	sub_82F670F0(ctx, base);
loc_82F92090:
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f920a4
	if (ctx.cr6.lt) goto loc_82F920A4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82F920A4;
	sub_82F6BAA0(ctx, base);
loc_82F920A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F920B4"))) PPC_WEAK_FUNC(sub_82F920B4);
PPC_FUNC_IMPL(__imp__sub_82F920B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F920B8"))) PPC_WEAK_FUNC(sub_82F920B8);
PPC_FUNC_IMPL(__imp__sub_82F920B8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f920ec
	if (ctx.cr6.eq) goto loc_82F920EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F920EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F920EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9210c
	if (ctx.cr6.eq) goto loc_82F9210C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F9210C:
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

__attribute__((alias("__imp__sub_82F92120"))) PPC_WEAK_FUNC(sub_82F92120);
PPC_FUNC_IMPL(__imp__sub_82F92120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F92128;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f92144
	if (!ctx.cr6.eq) goto loc_82F92144;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f921c8
	goto loc_82F921C8;
loc_82F92144:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,15320
	ctx.r31.s64 = ctx.r11.s64 + 15320;
	// lwz r11,15320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f921c4
	if (ctx.cr6.eq) goto loc_82F921C4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F92164:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F92180;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F92198;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f921ac
	if (ctx.cr6.lt) goto loc_82F921AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F921AC;
	sub_82F6BAA0(ctx, base);
loc_82F921AC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f92164
	if (!ctx.cr6.eq) goto loc_82F92164;
loc_82F921C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F921C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F921D0"))) PPC_WEAK_FUNC(sub_82F921D0);
PPC_FUNC_IMPL(__imp__sub_82F921D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F921D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f921f4
	if (!ctx.cr6.eq) goto loc_82F921F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f922ac
	goto loc_82F922AC;
loc_82F921F4:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F921FC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f9222c
	if (ctx.cr0.eq) goto loc_82F9222C;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f9e610
	ctx.lr = 0x82F92224;
	sub_82F9E610(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f92230
	goto loc_82F92230;
loc_82F9222C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F92230:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,276
	ctx.r29.s64 = ctx.r11.s64 + 276;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F92254;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92288
	if (ctx.cr6.lt) goto loc_82F92288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92288;
	sub_82F6BAA0(ctx, base);
loc_82F92288:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f922a8
	if (ctx.cr6.eq) goto loc_82F922A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F922A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F922A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F922AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F922B4"))) PPC_WEAK_FUNC(sub_82F922B4);
PPC_FUNC_IMPL(__imp__sub_82F922B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F922B8"))) PPC_WEAK_FUNC(sub_82F922B8);
PPC_FUNC_IMPL(__imp__sub_82F922B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F922C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f92424
	if (ctx.cr6.eq) goto loc_82F92424;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f92424
	if (ctx.cr6.eq) goto loc_82F92424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// addi r4,r27,120
	ctx.r4.s64 = ctx.r27.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 + 276;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f923dc
	if (ctx.cr0.eq) goto loc_82F923DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	ctx.lr = 0x82F92318;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f923dc
	if (ctx.cr0.eq) goto loc_82F923DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82f923dc
	if (!ctx.cr6.eq) goto loc_82F923DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f92394
	if (ctx.cr6.eq) goto loc_82F92394;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82F92364:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f92384
	if (ctx.cr6.eq) goto loc_82F92384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F9237C;
	sub_82F6AE18(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f923f8
	if (ctx.cr6.eq) goto loc_82F923F8;
loc_82F92384:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f92364
	if (ctx.cr6.lt) goto loc_82F92364;
loc_82F92394:
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6c3e8
	ctx.lr = 0x82F923A4;
	sub_82F6C3E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f9cb58
	ctx.lr = 0x82F923B0;
	sub_82F9CB58(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f923c4
	if (ctx.cr6.lt) goto loc_82F923C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F923C4;
	sub_82F6BAA0(ctx, base);
loc_82F923C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F923DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F923DC:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f923f0
	if (ctx.cr6.lt) goto loc_82F923F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F923F0;
	sub_82F6BAA0(ctx, base);
loc_82F923F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f92428
	goto loc_82F92428;
loc_82F923F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92424
	if (ctx.cr6.lt) goto loc_82F92424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92424;
	sub_82F6BAA0(ctx, base);
loc_82F92424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F92428:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F92430"))) PPC_WEAK_FUNC(sub_82F92430);
PPC_FUNC_IMPL(__imp__sub_82F92430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F92438;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f92574
	if (ctx.cr6.eq) goto loc_82F92574;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f92574
	if (ctx.cr6.eq) goto loc_82F92574;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// addi r4,r28,120
	ctx.r4.s64 = ctx.r28.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 + 276;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f9251c
	if (ctx.cr0.eq) goto loc_82F9251C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	ctx.lr = 0x82F92490;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f9251c
	if (ctx.cr0.eq) goto loc_82F9251C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F924AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82f9251c
	if (!ctx.cr6.eq) goto loc_82F9251C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F924C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f92504
	if (ctx.cr0.lt) goto loc_82F92504;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F924D8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f924f8
	if (ctx.cr6.eq) goto loc_82F924F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F924F0;
	sub_82F6AE18(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f92538
	if (ctx.cr6.eq) goto loc_82F92538;
loc_82F924F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82f924d8
	if (!ctx.cr0.lt) goto loc_82F924D8;
loc_82F92504:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F9251C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92530
	if (ctx.cr6.lt) goto loc_82F92530;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92530;
	sub_82F6BAA0(ctx, base);
loc_82F92530:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f92578
	goto loc_82F92578;
loc_82F92538:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f9c538
	ctx.lr = 0x82F92548;
	sub_82F9C538(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92574
	if (ctx.cr6.lt) goto loc_82F92574;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92574;
	sub_82F6BAA0(ctx, base);
loc_82F92574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F92578:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F92580"))) PPC_WEAK_FUNC(sub_82F92580);
PPC_FUNC_IMPL(__imp__sub_82F92580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82F92588;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f925ac
	if (!ctx.cr6.eq) goto loc_82F925AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f92804
	goto loc_82F92804;
loc_82F925AC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r21,r26,120
	ctx.r21.s64 = ctx.r26.s64 + 120;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 + 276;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F925DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f927ec
	if (ctx.cr0.eq) goto loc_82F927EC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ad80
	ctx.lr = 0x82F925EC;
	sub_82F6AD80(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82f927ec
	if (ctx.cr0.eq) goto loc_82F927EC;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// addi r3,r22,16
	ctx.r3.s64 = ctx.r22.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82f927ec
	if (!ctx.cr6.eq) goto loc_82F927EC;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f927d4
	if (ctx.cr6.eq) goto loc_82F927D4;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// addi r24,r10,-5240
	ctx.r24.s64 = ctx.r10.s64 + -5240;
	// addi r27,r11,-3936
	ctx.r27.s64 = ctx.r11.s64 + -3936;
loc_82F92648:
	// lwz r11,52(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// lwzx r31,r23,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f927c8
	if (ctx.cr6.eq) goto loc_82F927C8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F92664;
	sub_82F6AE18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f927c8
	if (ctx.cr0.eq) goto loc_82F927C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82f926b0
	if (!ctx.cr6.eq) goto loc_82F926B0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82f6adb0
	ctx.lr = 0x82F9268C;
	sub_82F6ADB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f926a8
	if (ctx.cr0.eq) goto loc_82F926A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F926A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F926A8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82f926d4
	goto loc_82F926D4;
loc_82F926B0:
	// bl 0x82f6ad80
	ctx.lr = 0x82F926B4;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f926d0
	if (ctx.cr0.eq) goto loc_82F926D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F926D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F926D0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82F926D4:
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F926F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f92774
	if (ctx.cr0.eq) goto loc_82F92774;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ae90
	ctx.lr = 0x82F9270C;
	sub_82F6AE90(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// bl 0x82f67e90
	ctx.lr = 0x82F92730;
	sub_82F67E90(ctx, base);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f680d8
	ctx.lr = 0x82F92748;
	sub_82F680D8(ctx, base);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82f67f08
	ctx.lr = 0x82F92754;
	sub_82F67F08(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9276c
	if (ctx.cr6.lt) goto loc_82F9276C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9276C;
	sub_82F6BAA0(ctx, base);
loc_82F9276C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F92774;
	sub_82F67F08(ctx, base);
loc_82F92774:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92788
	if (ctx.cr6.lt) goto loc_82F92788;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92788;
	sub_82F6BAA0(ctx, base);
loc_82F92788:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f927a8
	if (ctx.cr6.eq) goto loc_82F927A8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F927A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F927A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f927c8
	if (ctx.cr6.eq) goto loc_82F927C8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F927C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F927C8:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x82f92648
	if (!ctx.cr0.eq) goto loc_82F92648;
loc_82F927D4:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F927EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F927EC:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92800
	if (ctx.cr6.lt) goto loc_82F92800;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92800;
	sub_82F6BAA0(ctx, base);
loc_82F92800:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F92804:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82F9280C"))) PPC_WEAK_FUNC(sub_82F9280C);
PPC_FUNC_IMPL(__imp__sub_82F9280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92810"))) PPC_WEAK_FUNC(sub_82F92810);
PPC_FUNC_IMPL(__imp__sub_82F92810) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f92874
	if (ctx.cr6.lt) goto loc_82F92874;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F92840;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F92848;
	sub_82F6AE18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f922b8
	ctx.lr = 0x82F92858;
	sub_82F922B8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92864;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F92874:
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

__attribute__((alias("__imp__sub_82F9288C"))) PPC_WEAK_FUNC(sub_82F9288C);
PPC_FUNC_IMPL(__imp__sub_82F9288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92890"))) PPC_WEAK_FUNC(sub_82F92890);
PPC_FUNC_IMPL(__imp__sub_82F92890) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f92948
	if (ctx.cr6.lt) goto loc_82F92948;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F928C0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F928D4;
	sub_82F6B390(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// bl 0x82f92580
	ctx.lr = 0x82F9290C;
	sub_82F92580(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92918;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f92948
	if (!ctx.cr6.eq) goto loc_82F92948;
	// bl 0x82f670f0
	ctx.lr = 0x82F92948;
	sub_82F670F0(ctx, base);
loc_82F92948:
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

__attribute__((alias("__imp__sub_82F92960"))) PPC_WEAK_FUNC(sub_82F92960);
PPC_FUNC_IMPL(__imp__sub_82F92960) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f929c4
	if (ctx.cr6.lt) goto loc_82F929C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F92990;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F92998;
	sub_82F6AE18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f92430
	ctx.lr = 0x82F929A8;
	sub_82F92430(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F929B8;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82F929C4:
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

__attribute__((alias("__imp__sub_82F929DC"))) PPC_WEAK_FUNC(sub_82F929DC);
PPC_FUNC_IMPL(__imp__sub_82F929DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F929E0"))) PPC_WEAK_FUNC(sub_82F929E0);
PPC_FUNC_IMPL(__imp__sub_82F929E0) {
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
	// bl 0x82f92120
	ctx.lr = 0x82F92A00;
	sub_82F92120(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f921d0
	ctx.lr = 0x82F92A0C;
	sub_82F921D0(ctx, base);
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

__attribute__((alias("__imp__sub_82F92A24"))) PPC_WEAK_FUNC(sub_82F92A24);
PPC_FUNC_IMPL(__imp__sub_82F92A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92A28"))) PPC_WEAK_FUNC(sub_82F92A28);
PPC_FUNC_IMPL(__imp__sub_82F92A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F92A30;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82f92a6c
	if (!ctx.cr6.lt) goto loc_82F92A6C;
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82F92A54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82f920b8
	ctx.lr = 0x82F92A60;
	sub_82F920B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82f92a54
	if (!ctx.cr0.eq) goto loc_82F92A54;
loc_82F92A6C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f92ac0
	if (!ctx.cr6.eq) goto loc_82F92AC0;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f92aa0
	if (ctx.cr0.eq) goto loc_82F92AA0;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f92a98
	if (ctx.cr0.eq) goto loc_82F92A98;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f92ae8
	if (!ctx.cr6.eq) goto loc_82F92AE8;
loc_82F92A98:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f92ae8
	if (!ctx.cr0.eq) goto loc_82F92AE8;
loc_82F92AA0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f92ab8
	if (ctx.cr6.eq) goto loc_82F92AB8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F92AB8;
	sub_82EF6F38(ctx, base);
loc_82F92AB8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82f92ae8
	goto loc_82F92AE8;
loc_82F92AC0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f92ad8
	if (ctx.cr6.gt) goto loc_82F92AD8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f92ae8
	if (ctx.cr6.gt) goto loc_82F92AE8;
loc_82F92AD8:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f06c50
	ctx.lr = 0x82F92AE8;
	sub_82F06C50(ctx, base);
loc_82F92AE8:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82f92b18
	if (!ctx.cr6.lt) goto loc_82F92B18;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r27,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_82F92AF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f92b0c
	if (ctx.cr0.eq) goto loc_82F92B0C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82F92B0C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82f92af8
	if (!ctx.cr0.eq) goto loc_82F92AF8;
loc_82F92B18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F92B20"))) PPC_WEAK_FUNC(sub_82F92B20);
PPC_FUNC_IMPL(__imp__sub_82F92B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F92B28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f92b88
	if (ctx.cr6.lt) goto loc_82F92B88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F92B48;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F92B50;
	sub_82F6AE18(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92B60;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f92120
	ctx.lr = 0x82F92B7C;
	sub_82F92120(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f921d0
	ctx.lr = 0x82F92B88;
	sub_82F921D0(ctx, base);
loc_82F92B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F92B90"))) PPC_WEAK_FUNC(sub_82F92B90);
PPC_FUNC_IMPL(__imp__sub_82F92B90) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r10,588
	ctx.r3.s64 = ctx.r10.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82F92BD4;
	sub_82F0AD10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f92c14
	if (ctx.cr6.eq) goto loc_82F92C14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F92C14:
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

__attribute__((alias("__imp__sub_82F92C2C"))) PPC_WEAK_FUNC(sub_82F92C2C);
PPC_FUNC_IMPL(__imp__sub_82F92C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92C30"))) PPC_WEAK_FUNC(sub_82F92C30);
PPC_FUNC_IMPL(__imp__sub_82F92C30) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F92C4C;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,15448
	ctx.r9.s64 = ctx.r11.s64 + 15448;
	// addi r10,r10,15368
	ctx.r10.s64 = ctx.r10.s64 + 15368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F92C8C"))) PPC_WEAK_FUNC(sub_82F92C8C);
PPC_FUNC_IMPL(__imp__sub_82F92C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92C90"))) PPC_WEAK_FUNC(sub_82F92C90);
PPC_FUNC_IMPL(__imp__sub_82F92C90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f93158
	sub_82F93158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F92C98"))) PPC_WEAK_FUNC(sub_82F92C98);
PPC_FUNC_IMPL(__imp__sub_82F92C98) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f92a28
	ctx.lr = 0x82F92CB8;
	sub_82F92A28(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f92cc8
	if (ctx.cr6.eq) goto loc_82F92CC8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F92CC8;
	sub_82EF6F38(ctx, base);
loc_82F92CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F92CD0;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F92CE4"))) PPC_WEAK_FUNC(sub_82F92CE4);
PPC_FUNC_IMPL(__imp__sub_82F92CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92CE8"))) PPC_WEAK_FUNC(sub_82F92CE8);
PPC_FUNC_IMPL(__imp__sub_82F92CE8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F92D0C;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,15448
	ctx.r9.s64 = ctx.r11.s64 + 15448;
	// addi r10,r10,15368
	ctx.r10.s64 = ctx.r10.s64 + 15368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82f92b90
	ctx.lr = 0x82F92D40;
	sub_82F92B90(ctx, base);
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

__attribute__((alias("__imp__sub_82F92D5C"))) PPC_WEAK_FUNC(sub_82F92D5C);
PPC_FUNC_IMPL(__imp__sub_82F92D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F92D60"))) PPC_WEAK_FUNC(sub_82F92D60);
PPC_FUNC_IMPL(__imp__sub_82F92D60) {
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
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F92D80;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f92db0
	if (ctx.cr0.eq) goto loc_82F92DB0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f92ce8
	ctx.lr = 0x82F92DA8;
	sub_82F92CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f92db4
	goto loc_82F92DB4;
loc_82F92DB0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F92DB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F92DC0;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f92de0
	if (ctx.cr6.eq) goto loc_82F92DE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F92DE0:
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

__attribute__((alias("__imp__sub_82F92DF8"))) PPC_WEAK_FUNC(sub_82F92DF8);
PPC_FUNC_IMPL(__imp__sub_82F92DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F92E00;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,11616
	ctx.r4.s64 = ctx.r11.s64 + 11616;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F92E18;
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,25712
	ctx.r10.s64 = ctx.r10.s64 + 25712;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,15352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f92eb4
	if (ctx.cr6.eq) goto loc_82F92EB4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F92E54:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F92E70;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F92E88;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92e9c
	if (ctx.cr6.lt) goto loc_82F92E9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92E9C;
	sub_82F6BAA0(ctx, base);
loc_82F92E9C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f92e54
	if (!ctx.cr6.eq) goto loc_82F92E54;
loc_82F92EB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F92EC0"))) PPC_WEAK_FUNC(sub_82F92EC0);
PPC_FUNC_IMPL(__imp__sub_82F92EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F92EC8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f92c30
	ctx.lr = 0x82F92EE0;
	sub_82F92C30(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,15552
	ctx.r11.s64 = ctx.r11.s64 + 15552;
	// addi r10,r10,15472
	ctx.r10.s64 = ctx.r10.s64 + 15472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F92F10;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F92F1C;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F92F30;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F92F3C;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F92F50;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4d018
	ctx.lr = 0x82F92F60;
	sub_82F4D018(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92f74
	if (ctx.cr6.lt) goto loc_82F92F74;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92F74;
	sub_82F6BAA0(ctx, base);
loc_82F92F74:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F92FA0;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F92FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f92fd4
	if (ctx.cr6.lt) goto loc_82F92FD4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F92FD4;
	sub_82F6BAA0(ctx, base);
loc_82F92FD4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F92FE4;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F92FF0"))) PPC_WEAK_FUNC(sub_82F92FF0);
PPC_FUNC_IMPL(__imp__sub_82F92FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F92FF8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f93018
	if (!ctx.cr6.eq) goto loc_82F93018;
loc_82F93010:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f930d8
	goto loc_82F930D8;
loc_82F93018:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f930d4
	if (ctx.cr6.eq) goto loc_82F930D4;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f930d4
	if (ctx.cr6.eq) goto loc_82F930D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F93038:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f68a70
	ctx.lr = 0x82F9304C;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f930c4
	if (ctx.cr6.eq) goto loc_82F930C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9306C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F930A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x82f930e0
	if (!ctx.cr0.eq) goto loc_82F930E0;
	// bctrl 
	ctx.lr = 0x82F930C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F930C4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f93038
	if (ctx.cr6.lt) goto loc_82F93038;
loc_82F930D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F930D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82F930E0:
	// bctrl 
	ctx.lr = 0x82F930E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f93010
	goto loc_82F93010;
}

__attribute__((alias("__imp__sub_82F930E8"))) PPC_WEAK_FUNC(sub_82F930E8);
PPC_FUNC_IMPL(__imp__sub_82F930E8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,15552
	ctx.r11.s64 = ctx.r11.s64 + 15552;
	// addi r10,r10,15472
	ctx.r10.s64 = ctx.r10.s64 + 15472;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f93128
	if (ctx.cr6.eq) goto loc_82F93128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F93128;
	sub_82F0A3F0(ctx, base);
loc_82F93128:
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82f67f08
	ctx.lr = 0x82F93130;
	sub_82F67F08(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82f67f08
	ctx.lr = 0x82F93138;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f92c98
	ctx.lr = 0x82F93140;
	sub_82F92C98(ctx, base);
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

__attribute__((alias("__imp__sub_82F93154"))) PPC_WEAK_FUNC(sub_82F93154);
PPC_FUNC_IMPL(__imp__sub_82F93154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F93158"))) PPC_WEAK_FUNC(sub_82F93158);
PPC_FUNC_IMPL(__imp__sub_82F93158) {
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
	// bl 0x82f92c98
	ctx.lr = 0x82F93178;
	sub_82F92C98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f93188
	if (ctx.cr0.eq) goto loc_82F93188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93188;
	sub_82EF6F38(ctx, base);
loc_82F93188:
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

__attribute__((alias("__imp__sub_82F931A4"))) PPC_WEAK_FUNC(sub_82F931A4);
PPC_FUNC_IMPL(__imp__sub_82F931A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F931A8"))) PPC_WEAK_FUNC(sub_82F931A8);
PPC_FUNC_IMPL(__imp__sub_82F931A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F931B0;
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
	// bl 0x82f92ec0
	ctx.lr = 0x82F931C4;
	sub_82F92EC0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,15552
	ctx.r11.s64 = ctx.r11.s64 + 15552;
	// addi r10,r10,15472
	ctx.r10.s64 = ctx.r10.s64 + 15472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15320
	ctx.r5.s64 = ctx.r11.s64 + 15320;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82F931F4;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F93200"))) PPC_WEAK_FUNC(sub_82F93200);
PPC_FUNC_IMPL(__imp__sub_82F93200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f93208
	sub_82F93208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F93208"))) PPC_WEAK_FUNC(sub_82F93208);
PPC_FUNC_IMPL(__imp__sub_82F93208) {
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
	// bl 0x82f930e8
	ctx.lr = 0x82F93228;
	sub_82F930E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f93238
	if (ctx.cr0.eq) goto loc_82F93238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93238;
	sub_82EF6F38(ctx, base);
loc_82F93238:
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

__attribute__((alias("__imp__sub_82F93254"))) PPC_WEAK_FUNC(sub_82F93254);
PPC_FUNC_IMPL(__imp__sub_82F93254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F93258"))) PPC_WEAK_FUNC(sub_82F93258);
PPC_FUNC_IMPL(__imp__sub_82F93258) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,15656
	ctx.r11.s64 = ctx.r11.s64 + 15656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f93284
	if (ctx.cr0.eq) goto loc_82F93284;
	// bl 0x824fe010
	ctx.lr = 0x82F93284;
	sub_824FE010(ctx, base);
loc_82F93284:
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

__attribute__((alias("__imp__sub_82F9329C"))) PPC_WEAK_FUNC(sub_82F9329C);
PPC_FUNC_IMPL(__imp__sub_82F9329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F932A0"))) PPC_WEAK_FUNC(sub_82F932A0);
PPC_FUNC_IMPL(__imp__sub_82F932A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F932A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f93300
	if (!ctx.cr6.eq) goto loc_82F93300;
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f93300
	if (!ctx.cr6.eq) goto loc_82F93300;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ae90
	ctx.lr = 0x82F932EC;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x82f68378
	ctx.lr = 0x82F932F8;
	sub_82F68378(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F93300;
	sub_82F67F08(ctx, base);
loc_82F93300:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82F93318;
	sub_82F88A68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F93320"))) PPC_WEAK_FUNC(sub_82F93320);
PPC_FUNC_IMPL(__imp__sub_82F93320) {
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
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f93368
	if (ctx.cr6.eq) goto loc_82F93368;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9336c
	goto loc_82F9336C;
loc_82F93368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9336C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9337C"))) PPC_WEAK_FUNC(sub_82F9337C);
PPC_FUNC_IMPL(__imp__sub_82F9337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F93380"))) PPC_WEAK_FUNC(sub_82F93380);
PPC_FUNC_IMPL(__imp__sub_82F93380) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F933D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f93404
	if (ctx.cr0.eq) goto loc_82F93404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6aee0
	ctx.lr = 0x82F933E0;
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f93404
	if (ctx.cr0.eq) goto loc_82F93404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F93404:
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

__attribute__((alias("__imp__sub_82F9341C"))) PPC_WEAK_FUNC(sub_82F9341C);
PPC_FUNC_IMPL(__imp__sub_82F9341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F93420"))) PPC_WEAK_FUNC(sub_82F93420);
PPC_FUNC_IMPL(__imp__sub_82F93420) {
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
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F93444;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82F93454;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f93488
	if (ctx.cr6.eq) goto loc_82F93488;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f93498
	goto loc_82F93498;
loc_82F93488:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15680
	ctx.r4.s64 = ctx.r11.s64 + 15680;
	// bl 0x82f93380
	ctx.lr = 0x82F93498;
	sub_82F93380(ctx, base);
loc_82F93498:
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

__attribute__((alias("__imp__sub_82F934B0"))) PPC_WEAK_FUNC(sub_82F934B0);
PPC_FUNC_IMPL(__imp__sub_82F934B0) {
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
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F934D4;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82F934E4;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f93518
	if (ctx.cr6.eq) goto loc_82F93518;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f93528
	goto loc_82F93528;
loc_82F93518:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15760
	ctx.r4.s64 = ctx.r11.s64 + 15760;
	// bl 0x82f93380
	ctx.lr = 0x82F93528;
	sub_82F93380(ctx, base);
loc_82F93528:
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

__attribute__((alias("__imp__sub_82F93540"))) PPC_WEAK_FUNC(sub_82F93540);
PPC_FUNC_IMPL(__imp__sub_82F93540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F93548;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9355C;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82F9356C;
	sub_82F12548(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f935a0
	if (!ctx.cr6.gt) goto loc_82F935A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F9358C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F93594;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82F935A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f93320
	ctx.lr = 0x82F935A8;
	sub_82F93320(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f935c0
	if (!ctx.cr0.eq) goto loc_82F935C0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15840
	ctx.r4.s64 = ctx.r11.s64 + 15840;
	// bl 0x82f93380
	ctx.lr = 0x82F935C0;
	sub_82F93380(ctx, base);
loc_82F935C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F935C8"))) PPC_WEAK_FUNC(sub_82F935C8);
PPC_FUNC_IMPL(__imp__sub_82F935C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F935D0;
	sub_82CA2BE8(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F935EC;
	sub_82F6BAA0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82F935FC;
	sub_82F12548(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82f93690
	if (ctx.cr6.gt) goto loc_82F93690;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82f325a8
	ctx.lr = 0x82F9361C;
	sub_82F325A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82f93688
	if (!ctx.cr6.eq) goto loc_82F93688;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F93678;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F93680;
	sub_82F6B840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f93748
	goto loc_82F93748;
loc_82F93688:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f93748
	goto loc_82F93748;
loc_82F93690:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f93748
	if (ctx.cr6.lt) goto loc_82F93748;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F936A8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F936B0;
	sub_82F6B480(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f31,1312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1312);
	// fmul f0,f1,f31
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82f6c2d0
	ctx.lr = 0x82F936D0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F936D8;
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// blt cr6,0x82f9370c
	if (ctx.cr6.lt) goto loc_82F9370C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F936FC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F93704;
	sub_82F6B840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f93710
	goto loc_82F93710;
loc_82F9370C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F93710:
	// lwz r29,36(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f93768
	if (ctx.cr6.eq) goto loc_82F93768;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	ctx.lr = 0x82F93724;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f60228
	ctx.lr = 0x82F93730;
	sub_82F60228(ctx, base);
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f661f0
	ctx.lr = 0x82F93748;
	sub_82F661F0(ctx, base);
loc_82F93748:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f33320
	ctx.lr = 0x82F93758;
	sub_82F33320(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82f93768
	if (ctx.cr0.eq) goto loc_82F93768;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6be50
	ctx.lr = 0x82F93768;
	sub_82F6BE50(ctx, base);
loc_82F93768:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F93778"))) PPC_WEAK_FUNC(sub_82F93778);
PPC_FUNC_IMPL(__imp__sub_82F93778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F93780;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lbz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82f93844
	if (!ctx.cr6.eq) goto loc_82F93844;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f937c8
	if (!ctx.cr6.eq) goto loc_82F937C8;
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6bea0
	ctx.lr = 0x82F937C0;
	sub_82F6BEA0(ctx, base);
loc_82F937C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f93858
	goto loc_82F93858;
loc_82F937C8:
	// lwz r9,476(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f937e0
	if (!ctx.cr6.eq) goto loc_82F937E0;
loc_82F937D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// b 0x82f9383c
	goto loc_82F9383C;
loc_82F937E0:
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f93834
	if (ctx.cr6.eq) goto loc_82F93834;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f93804
	if (!ctx.cr6.eq) goto loc_82F93804;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3560);
	// b 0x82f9383c
	goto loc_82F9383C;
loc_82F93804:
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f9381c
	if (!ctx.cr6.eq) goto loc_82F9381C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82f9383c
	goto loc_82F9383C;
loc_82F9381C:
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f937d4
	if (ctx.cr6.eq) goto loc_82F937D4;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f93860
	if (!ctx.cr6.eq) goto loc_82F93860;
loc_82F93834:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3552(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3552);
loc_82F9383C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04200
	ctx.lr = 0x82F93844;
	sub_82F04200(ctx, base);
loc_82F93844:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f87748
	ctx.lr = 0x82F93858;
	sub_82F87748(ctx, base);
loc_82F93858:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82F93860:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r9,15924
	ctx.r10.s64 = ctx.r9.s64 + 15924;
loc_82F9386C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f93890
	if (ctx.cr0.eq) goto loc_82F93890;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f9386c
	if (ctx.cr6.eq) goto loc_82F9386C;
loc_82F93890:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f93844
	if (!ctx.cr0.eq) goto loc_82F93844;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13768
	ctx.r4.s64 = ctx.r11.s64 + 13768;
	// bl 0x82f6acb8
	ctx.lr = 0x82F938A8;
	sub_82F6ACB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F938B4;
	sub_82F6BBB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f937c0
	if (ctx.cr6.lt) goto loc_82F937C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F938C8;
	sub_82F6BAA0(ctx, base);
	// b 0x82f937c0
	goto loc_82F937C0;
}

__attribute__((alias("__imp__sub_82F938CC"))) PPC_WEAK_FUNC(sub_82F938CC);
PPC_FUNC_IMPL(__imp__sub_82F938CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F938D0"))) PPC_WEAK_FUNC(sub_82F938D0);
PPC_FUNC_IMPL(__imp__sub_82F938D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F938D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f93970
	if (ctx.cr0.lt) goto loc_82F93970;
	// addi r28,r27,56
	ctx.r28.s64 = ctx.r27.s64 + 56;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82F938F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f93940
	if (ctx.cr6.eq) goto loc_82F93940;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f93940
	if (!ctx.cr0.eq) goto loc_82F93940;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f93938
	if (ctx.cr6.eq) goto loc_82F93938;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82f93938
	if (!ctx.cr0.eq) goto loc_82F93938;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93938;
	sub_82EF6F38(ctx, base);
loc_82F93938:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_82F93940:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f93964
	if (!ctx.cr6.eq) goto loc_82F93964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// bl 0x830eff20
	ctx.lr = 0x82F93958;
	sub_830EFF20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f198d8
	ctx.lr = 0x82F93964;
	sub_82F198D8(ctx, base);
loc_82F93964:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82f938f8
	if (!ctx.cr0.lt) goto loc_82F938F8;
loc_82F93970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F93978"))) PPC_WEAK_FUNC(sub_82F93978);
PPC_FUNC_IMPL(__imp__sub_82F93978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F93980;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82f939a4
	if (!ctx.cr6.lt) goto loc_82F939A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,16000
	ctx.r4.s64 = ctx.r11.s64 + 16000;
loc_82F9399C:
	// bl 0x82f14ea8
	ctx.lr = 0x82F939A0;
	sub_82F14EA8(ctx, base);
	// b 0x82f93b0c
	goto loc_82F93B0C;
loc_82F939A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F939AC;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82f939d0
	if (!ctx.cr6.eq) goto loc_82F939D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F939C4;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F939C8;
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f939d4
	goto loc_82F939D4;
loc_82F939D0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F939D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F939E4;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6adb0
	ctx.lr = 0x82F939EC;
	sub_82F6ADB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f93a00
	if (ctx.cr6.eq) goto loc_82F93A00;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82f93a14
	goto loc_82F93A14;
loc_82F93A00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,128
	ctx.r28.s64 = ctx.r3.s64 + 128;
	// bne cr6,0x82f93a10
	if (!ctx.cr6.eq) goto loc_82F93A10;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F93A10:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F93A14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f93a2c
	if (!ctx.cr6.eq) goto loc_82F93A2C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,15944
	ctx.r4.s64 = ctx.r11.s64 + 15944;
	// b 0x82f9399c
	goto loc_82F9399C;
loc_82F93A2C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f93a40
	if (!ctx.cr6.eq) goto loc_82F93A40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F93A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f938d0
	ctx.lr = 0x82F93A48;
	sub_82F938D0(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f93a78
	if (ctx.cr6.eq) goto loc_82F93A78;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82F93A5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f93b0c
	if (ctx.cr6.eq) goto loc_82F93B0C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f93a5c
	if (ctx.cr6.lt) goto loc_82F93A5C;
loc_82F93A78:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57778
	ctx.lr = 0x82F93A8C;
	sub_82F57778(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// beq cr6,0x82f93ab8
	if (ctx.cr6.eq) goto loc_82F93AB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef7138
	ctx.lr = 0x82F93AB0;
	sub_82EF7138(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f93abc
	goto loc_82F93ABC;
loc_82F93AB8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F93ABC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f168d8
	ctx.lr = 0x82F93AD4;
	sub_82F168D8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82f9b148
	ctx.lr = 0x82F93AEC;
	sub_82F9B148(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f93b0c
	if (ctx.cr6.eq) goto loc_82F93B0C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x82f93b0c
	if (!ctx.cr0.eq) goto loc_82F93B0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93B0C;
	sub_82EF6F38(ctx, base);
loc_82F93B0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F93B14"))) PPC_WEAK_FUNC(sub_82F93B14);
PPC_FUNC_IMPL(__imp__sub_82F93B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F93B18"))) PPC_WEAK_FUNC(sub_82F93B18);
PPC_FUNC_IMPL(__imp__sub_82F93B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F93B20;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82f93b44
	if (!ctx.cr6.lt) goto loc_82F93B44;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,16128
	ctx.r4.s64 = ctx.r11.s64 + 16128;
loc_82F93B3C:
	// bl 0x82f14ea8
	ctx.lr = 0x82F93B40;
	sub_82F14EA8(ctx, base);
	// b 0x82f93c28
	goto loc_82F93C28;
loc_82F93B44:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F93B4C;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82f93b70
	if (!ctx.cr6.eq) goto loc_82F93B70;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F93B64;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F93B68;
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f93b74
	goto loc_82F93B74;
loc_82F93B70:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F93B74:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F93B84;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6adb0
	ctx.lr = 0x82F93B8C;
	sub_82F6ADB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f93b9c
	if (ctx.cr6.eq) goto loc_82F93B9C;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// b 0x82f93bac
	goto loc_82F93BAC;
loc_82F93B9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r3,128
	ctx.r27.s64 = ctx.r3.s64 + 128;
	// bne cr6,0x82f93bac
	if (!ctx.cr6.eq) goto loc_82F93BAC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F93BAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f93bc4
	if (!ctx.cr6.eq) goto loc_82F93BC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16068
	ctx.r4.s64 = ctx.r11.s64 + 16068;
	// b 0x82f93b3c
	goto loc_82F93B3C;
loc_82F93BC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f93bd8
	if (!ctx.cr6.eq) goto loc_82F93BD8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F93BD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f938d0
	ctx.lr = 0x82F93BE0;
	sub_82F938D0(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f93c28
	if (ctx.cr0.lt) goto loc_82F93C28;
	// addi r28,r30,68
	ctx.r28.s64 = ctx.r30.s64 + 68;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F93BF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f93c1c
	if (!ctx.cr6.eq) goto loc_82F93C1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830eff20
	ctx.lr = 0x82F93C10;
	sub_830EFF20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82f198d8
	ctx.lr = 0x82F93C1C;
	sub_82F198D8(ctx, base);
loc_82F93C1C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82f93bf4
	if (!ctx.cr0.lt) goto loc_82F93BF4;
loc_82F93C28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F93C30"))) PPC_WEAK_FUNC(sub_82F93C30);
PPC_FUNC_IMPL(__imp__sub_82F93C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82F93C38;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f93f38
	if (!ctx.cr6.gt) goto loc_82F93F38;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// bl 0x82f178c8
	ctx.lr = 0x82F93C7C;
	sub_82F178C8(ctx, base);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f17928
	ctx.lr = 0x82F93C94;
	sub_82F17928(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f93f00
	if (ctx.cr6.eq) goto loc_82F93F00;
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lwz r23,120(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82F93CAC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82F93CB8;
	sub_82F68A70(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f93ef0
	if (ctx.cr6.eq) goto loc_82F93EF0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82f93d24
	if (ctx.cr6.lt) goto loc_82F93D24;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f93d28
	if (!ctx.cr6.gt) goto loc_82F93D28;
loc_82F93D24:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F93D28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f93d4c
	if (ctx.cr0.eq) goto loc_82F93D4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f85618
	ctx.lr = 0x82F93D38;
	sub_82F85618(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F93D4C:
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f93ec4
	if (ctx.cr0.eq) goto loc_82F93EC4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f93de0
	if (ctx.cr6.eq) goto loc_82F93DE0;
	// cmpwi cr6,r24,87
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 87, ctx.xer);
	// beq cr6,0x82f93d9c
	if (ctx.cr6.eq) goto loc_82F93D9C;
	// cmpwi cr6,r24,88
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 88, ctx.xer);
	// bne cr6,0x82f93de0
	if (!ctx.cr6.eq) goto loc_82F93DE0;
loc_82F93D9C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82f6ae90
	ctx.lr = 0x82F93DA8;
	sub_82F6AE90(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f93dc8
	if (ctx.cr6.eq) goto loc_82F93DC8;
	// bl 0x82f68290
	ctx.lr = 0x82F93DB8;
	sub_82F68290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82f93dd8
	if (ctx.cr0.gt) goto loc_82F93DD8;
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// ble cr6,0x82f93dd4
	if (!ctx.cr6.gt) goto loc_82F93DD4;
loc_82F93DC8:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82f67f08
	ctx.lr = 0x82F93DD0;
	sub_82F67F08(ctx, base);
	// b 0x82f93ec4
	goto loc_82F93EC4;
loc_82F93DD4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F93DD8:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82f67f08
	ctx.lr = 0x82F93DE0;
	sub_82F67F08(ctx, base);
loc_82F93DE0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f93e0c
	if (ctx.cr6.eq) goto loc_82F93E0C;
	// cmpwi cr6,r24,90
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 90, ctx.xer);
	// beq cr6,0x82f93dfc
	if (ctx.cr6.eq) goto loc_82F93DFC;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f93e0c
	if (!ctx.cr0.eq) goto loc_82F93E0C;
loc_82F93DFC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82f18d30
	ctx.lr = 0x82F93E08;
	sub_82F18D30(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F93E0C:
	// cmpwi cr6,r24,87
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 87, ctx.xer);
	// blt cr6,0x82f93e68
	if (ctx.cr6.lt) goto loc_82F93E68;
	// cmpwi cr6,r24,88
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 88, ctx.xer);
	// ble cr6,0x82f93e34
	if (!ctx.cr6.gt) goto loc_82F93E34;
	// cmpwi cr6,r24,90
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 90, ctx.xer);
	// bne cr6,0x82f93e68
	if (!ctx.cr6.eq) goto loc_82F93E68;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82f18b70
	ctx.lr = 0x82F93E30;
	sub_82F18B70(ctx, base);
	// b 0x82f93e64
	goto loc_82F93E64;
loc_82F93E34:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f93e68
	if (ctx.cr6.eq) goto loc_82F93E68;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f93e68
	if (!ctx.cr0.eq) goto loc_82F93E68;
	// clrldi r11,r21,32
	ctx.r11.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82f18cc0
	ctx.lr = 0x82F93E64;
	sub_82F18CC0(ctx, base);
loc_82F93E64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F93E68:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// bl 0x82f15758
	ctx.lr = 0x82F93EA4;
	sub_82F15758(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82f93ec4
	if (!ctx.cr6.gt) goto loc_82F93EC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f93ec4
	if (ctx.cr6.eq) goto loc_82F93EC4;
loc_82F93EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82F93EBC;
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f93eb4
	if (!ctx.cr0.eq) goto loc_82F93EB4;
loc_82F93EC4:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f93ed8
	if (ctx.cr6.lt) goto loc_82F93ED8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F93ED8;
	sub_82F6BAA0(ctx, base);
loc_82F93ED8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F93EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F93EF0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82f93cac
	if (!ctx.cr0.eq) goto loc_82F93CAC;
loc_82F93F00:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f57778
	ctx.lr = 0x82F93F0C;
	sub_82F57778(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f93f1c
	if (ctx.cr6.eq) goto loc_82F93F1C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93F1C;
	sub_82EF6F38(ctx, base);
loc_82F93F1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f168d8
	ctx.lr = 0x82F93F28;
	sub_82F168D8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f93f38
	if (ctx.cr6.eq) goto loc_82F93F38;
	// bl 0x82ef6f38
	ctx.lr = 0x82F93F38;
	sub_82EF6F38(ctx, base);
loc_82F93F38:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82F93F40"))) PPC_WEAK_FUNC(sub_82F93F40);
PPC_FUNC_IMPL(__imp__sub_82F93F40) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,89
	ctx.r5.s64 = 89;
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x82f93c30
	sub_82F93C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F93F58"))) PPC_WEAK_FUNC(sub_82F93F58);
PPC_FUNC_IMPL(__imp__sub_82F93F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F93F60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f93fcc
	if (ctx.cr6.eq) goto loc_82F93FCC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82f63440
	ctx.lr = 0x82F93F80;
	sub_82F63440(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,87
	ctx.r5.s64 = 87;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f93c30
	ctx.lr = 0x82F93FB0;
	sub_82F93C30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f93fe8
	if (!ctx.cr0.eq) goto loc_82F93FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F93FC8;
	sub_82F670F0(ctx, base);
	// b 0x82f93fe8
	goto loc_82F93FE8;
loc_82F93FCC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,87
	ctx.r5.s64 = 87;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x82f93c30
	ctx.lr = 0x82F93FE8;
	sub_82F93C30(ctx, base);
loc_82F93FE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F93FF0"))) PPC_WEAK_FUNC(sub_82F93FF0);
PPC_FUNC_IMPL(__imp__sub_82F93FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F93FF8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f94064
	if (ctx.cr6.eq) goto loc_82F94064;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82f63440
	ctx.lr = 0x82F94018;
	sub_82F63440(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f93c30
	ctx.lr = 0x82F94048;
	sub_82F93C30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f94080
	if (!ctx.cr0.eq) goto loc_82F94080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F94060;
	sub_82F670F0(ctx, base);
	// b 0x82f94080
	goto loc_82F94080;
loc_82F94064:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x82f93c30
	ctx.lr = 0x82F94080;
	sub_82F93C30(ctx, base);
loc_82F94080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F94088"))) PPC_WEAK_FUNC(sub_82F94088);
PPC_FUNC_IMPL(__imp__sub_82F94088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F94090;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f940fc
	if (ctx.cr6.eq) goto loc_82F940FC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82f63440
	ctx.lr = 0x82F940B0;
	sub_82F63440(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,90
	ctx.r5.s64 = 90;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f93c30
	ctx.lr = 0x82F940E0;
	sub_82F93C30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f94118
	if (!ctx.cr0.eq) goto loc_82F94118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F940F8;
	sub_82F670F0(ctx, base);
	// b 0x82f94118
	goto loc_82F94118;
loc_82F940FC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,90
	ctx.r5.s64 = 90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x82f93c30
	ctx.lr = 0x82F94118;
	sub_82F93C30(ctx, base);
loc_82F94118:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F94120"))) PPC_WEAK_FUNC(sub_82F94120);
PPC_FUNC_IMPL(__imp__sub_82F94120) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r10,588
	ctx.r3.s64 = ctx.r10.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82F94164;
	sub_82F0AD10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F94184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f941a4
	if (ctx.cr6.eq) goto loc_82F941A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F941A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F941A4:
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

__attribute__((alias("__imp__sub_82F941BC"))) PPC_WEAK_FUNC(sub_82F941BC);
PPC_FUNC_IMPL(__imp__sub_82F941BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F941C0"))) PPC_WEAK_FUNC(sub_82F941C0);
PPC_FUNC_IMPL(__imp__sub_82F941C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f946d0
	sub_82F946D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F941C8"))) PPC_WEAK_FUNC(sub_82F941C8);
PPC_FUNC_IMPL(__imp__sub_82F941C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F941EC;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23760
	ctx.r11.s64 = ctx.r11.s64 + 23760;
	// addi r10,r10,-6624
	ctx.r10.s64 = ctx.r10.s64 + -6624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f94120
	ctx.lr = 0x82F94210;
	sub_82F94120(ctx, base);
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

__attribute__((alias("__imp__sub_82F9422C"))) PPC_WEAK_FUNC(sub_82F9422C);
PPC_FUNC_IMPL(__imp__sub_82F9422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94230"))) PPC_WEAK_FUNC(sub_82F94230);
PPC_FUNC_IMPL(__imp__sub_82F94230) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F94250;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f94280
	if (ctx.cr0.eq) goto loc_82F94280;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f941c8
	ctx.lr = 0x82F94278;
	sub_82F941C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f94284
	goto loc_82F94284;
loc_82F94280:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F94284:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F94290;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f942b0
	if (ctx.cr6.eq) goto loc_82F942B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F942B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F942B0:
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

__attribute__((alias("__imp__sub_82F942C8"))) PPC_WEAK_FUNC(sub_82F942C8);
PPC_FUNC_IMPL(__imp__sub_82F942C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F942D0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r4,r11,16944
	ctx.r4.s64 = ctx.r11.s64 + 16944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F942EC;
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r11,15656
	ctx.r11.s64 = ctx.r11.s64 + 15656;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r10,r10,16280
	ctx.r10.s64 = ctx.r10.s64 + 16280;
	// addi r9,r9,16200
	ctx.r9.s64 = ctx.r9.s64 + 16200;
	// addi r11,r8,16336
	ctx.r11.s64 = ctx.r8.s64 + 16336;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r25,r31,80
	ctx.r25.s64 = ctx.r31.s64 + 80;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x82f67e90
	ctx.lr = 0x82F94354;
	sub_82F67E90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r29.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r29,r11,15616
	ctx.r29.s64 = ctx.r11.s64 + 15616;
	// lwz r11,15616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f943d4
	if (ctx.cr6.eq) goto loc_82F943D4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F94374:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F94390;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F943A8;
	sub_82F04960(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f943bc
	if (ctx.cr6.lt) goto loc_82F943BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F943BC;
	sub_82F6BAA0(ctx, base);
loc_82F943BC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r30,r29
	ctx.r28.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f94374
	if (!ctx.cr6.eq) goto loc_82F94374;
loc_82F943D4:
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,13632
	ctx.r4.s64 = ctx.r11.s64 + 13632;
	// bl 0x82f6acb8
	ctx.lr = 0x82F943E4;
	sub_82F6ACB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F943F0;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f68378
	ctx.lr = 0x82F943FC;
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F94404;
	sub_82F67F08(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f94418
	if (ctx.cr6.lt) goto loc_82F94418;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F94418;
	sub_82F6BAA0(ctx, base);
loc_82F94418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F94424"))) PPC_WEAK_FUNC(sub_82F94424);
PPC_FUNC_IMPL(__imp__sub_82F94424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94428"))) PPC_WEAK_FUNC(sub_82F94428);
PPC_FUNC_IMPL(__imp__sub_82F94428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f944d8
	sub_82F944D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F94430"))) PPC_WEAK_FUNC(sub_82F94430);
PPC_FUNC_IMPL(__imp__sub_82F94430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x82f944d8
	sub_82F944D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F94438"))) PPC_WEAK_FUNC(sub_82F94438);
PPC_FUNC_IMPL(__imp__sub_82F94438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94448"))) PPC_WEAK_FUNC(sub_82F94448);
PPC_FUNC_IMPL(__imp__sub_82F94448) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F94464;
	sub_82F67F08(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	ctx.lr = 0x82F94470;
	sub_82F57778(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f94480
	if (ctx.cr6.eq) goto loc_82F94480;
	// bl 0x82ef6f38
	ctx.lr = 0x82F94480;
	sub_82EF6F38(ctx, base);
loc_82F94480:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f168d8
	ctx.lr = 0x82F9448C;
	sub_82F168D8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9449c
	if (ctx.cr6.eq) goto loc_82F9449C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F9449C;
	sub_82EF6F38(ctx, base);
loc_82F9449C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// bne cr6,0x82f944ac
	if (!ctx.cr6.eq) goto loc_82F944AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F944AC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,15656
	ctx.r10.s64 = ctx.r10.s64 + 15656;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82f6a3f0
	ctx.lr = 0x82F944C0;
	sub_82F6A3F0(ctx, base);
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

__attribute__((alias("__imp__sub_82F944D4"))) PPC_WEAK_FUNC(sub_82F944D4);
PPC_FUNC_IMPL(__imp__sub_82F944D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F944D8"))) PPC_WEAK_FUNC(sub_82F944D8);
PPC_FUNC_IMPL(__imp__sub_82F944D8) {
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
	// bl 0x82f94448
	ctx.lr = 0x82F944F8;
	sub_82F94448(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f94508
	if (ctx.cr0.eq) goto loc_82F94508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F94508;
	sub_82EF6F38(ctx, base);
loc_82F94508:
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

__attribute__((alias("__imp__sub_82F94524"))) PPC_WEAK_FUNC(sub_82F94524);
PPC_FUNC_IMPL(__imp__sub_82F94524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94528"))) PPC_WEAK_FUNC(sub_82F94528);
PPC_FUNC_IMPL(__imp__sub_82F94528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F94530;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F9454C;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16360
	ctx.r11.s64 = ctx.r11.s64 + 16360;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F9457C;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F94588;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F9459C;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F945A8;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F945BC;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f68b10
	ctx.lr = 0x82F945CC;
	sub_82F68B10(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f945e0
	if (ctx.cr6.lt) goto loc_82F945E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F945E0;
	sub_82F6BAA0(ctx, base);
loc_82F945E0:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F9460C;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9462C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f94640
	if (ctx.cr6.lt) goto loc_82F94640;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F94640;
	sub_82F6BAA0(ctx, base);
loc_82F94640:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F94650;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F9465C"))) PPC_WEAK_FUNC(sub_82F9465C);
PPC_FUNC_IMPL(__imp__sub_82F9465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94660"))) PPC_WEAK_FUNC(sub_82F94660);
PPC_FUNC_IMPL(__imp__sub_82F94660) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16360
	ctx.r11.s64 = ctx.r11.s64 + 16360;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f946a0
	if (ctx.cr6.eq) goto loc_82F946A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F946A0;
	sub_82F0A3F0(ctx, base);
loc_82F946A0:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82f67f08
	ctx.lr = 0x82F946A8;
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f67f08
	ctx.lr = 0x82F946B0;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F946B8;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F946CC"))) PPC_WEAK_FUNC(sub_82F946CC);
PPC_FUNC_IMPL(__imp__sub_82F946CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F946D0"))) PPC_WEAK_FUNC(sub_82F946D0);
PPC_FUNC_IMPL(__imp__sub_82F946D0) {
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
	// bl 0x82f0afc8
	ctx.lr = 0x82F946F0;
	sub_82F0AFC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f94700
	if (ctx.cr0.eq) goto loc_82F94700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F94700;
	sub_82EF6F38(ctx, base);
loc_82F94700:
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

__attribute__((alias("__imp__sub_82F9471C"))) PPC_WEAK_FUNC(sub_82F9471C);
PPC_FUNC_IMPL(__imp__sub_82F9471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94720"))) PPC_WEAK_FUNC(sub_82F94720);
PPC_FUNC_IMPL(__imp__sub_82F94720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F94728;
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
	// bl 0x82f94528
	ctx.lr = 0x82F9473C;
	sub_82F94528(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16360
	ctx.r11.s64 = ctx.r11.s64 + 16360;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15576
	ctx.r5.s64 = ctx.r11.s64 + 15576;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82F9476C;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F94778"))) PPC_WEAK_FUNC(sub_82F94778);
PPC_FUNC_IMPL(__imp__sub_82F94778) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f6a870
	sub_82F6A870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F94780"))) PPC_WEAK_FUNC(sub_82F94780);
PPC_FUNC_IMPL(__imp__sub_82F94780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f947a8
	if (ctx.cr0.eq) goto loc_82F947A8;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f947a8
	if (!ctx.cr6.eq) goto loc_82F947A8;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82F947A8:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82f947d4
	if (ctx.cr6.lt) goto loc_82F947D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f947c0
	if (ctx.cr6.eq) goto loc_82F947C0;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// b 0x82f947c4
	goto loc_82F947C4;
loc_82F947C0:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
loc_82F947C4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82F947D4:
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F947DC"))) PPC_WEAK_FUNC(sub_82F947DC);
PPC_FUNC_IMPL(__imp__sub_82F947DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F947E0"))) PPC_WEAK_FUNC(sub_82F947E0);
PPC_FUNC_IMPL(__imp__sub_82F947E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwa r10,16(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f947fc
	if (ctx.cr0.eq) goto loc_82F947FC;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94804
	goto loc_82F94804;
loc_82F947FC:
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94804:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f94880
	if (ctx.cr6.lt) goto loc_82F94880;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f94824
	if (ctx.cr6.eq) goto loc_82F94824;
	// lhz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// b 0x82f94828
	goto loc_82F94828;
loc_82F94824:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_82F94828:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9483c
	if (ctx.cr6.eq) goto loc_82F9483C;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82f94840
	goto loc_82F94840;
loc_82F9483C:
	// lha r11,40(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 40));
loc_82F94840:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82f94880
	if (!ctx.cr6.lt) goto loc_82F94880;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F94880:
	// fsubs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94894"))) PPC_WEAK_FUNC(sub_82F94894);
PPC_FUNC_IMPL(__imp__sub_82F94894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94898"))) PPC_WEAK_FUNC(sub_82F94898);
PPC_FUNC_IMPL(__imp__sub_82F94898) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F948BC;
	sub_82EF6EF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwimi r10,r11,0,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f948fc
	if (!ctx.cr6.eq) goto loc_82F948FC;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r10,r9,30,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// b 0x82f94920
	goto loc_82F94920;
loc_82F948FC:
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,30,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82F94920:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F94944"))) PPC_WEAK_FUNC(sub_82F94944);
PPC_FUNC_IMPL(__imp__sub_82F94944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94948"))) PPC_WEAK_FUNC(sub_82F94948);
PPC_FUNC_IMPL(__imp__sub_82F94948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,30
	ctx.r10.s64 = ctx.r3.s64 + 30;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f9495c
	if (!ctx.cr0.eq) goto loc_82F9495C;
	// addi r10,r3,42
	ctx.r10.s64 = ctx.r3.s64 + 42;
loc_82F9495C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9496c
	if (ctx.cr6.eq) goto loc_82F9496C;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// b 0x82f94970
	goto loc_82F94970;
loc_82F9496C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82F94970:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94984"))) PPC_WEAK_FUNC(sub_82F94984);
PPC_FUNC_IMPL(__imp__sub_82F94984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94988"))) PPC_WEAK_FUNC(sub_82F94988);
PPC_FUNC_IMPL(__imp__sub_82F94988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f9499c
	if (ctx.cr0.eq) goto loc_82F9499C;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// b 0x82f949a0
	goto loc_82F949A0;
loc_82F9499C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82F949A0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f94a04
	if (ctx.cr0.eq) goto loc_82F94A04;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r3,30
	ctx.r10.s64 = ctx.r3.s64 + 30;
	// bne cr6,0x82f949b8
	if (!ctx.cr6.eq) goto loc_82F949B8;
	// addi r10,r3,42
	ctx.r10.s64 = ctx.r3.s64 + 42;
loc_82F949B8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f949f8
	if (ctx.cr0.eq) goto loc_82F949F8;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f949e8
	if (ctx.cr0.eq) goto loc_82F949E8;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82f949ec
	if (ctx.cr0.eq) goto loc_82F949EC;
loc_82F949E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F949EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82f949fc
	if (ctx.cr0.eq) goto loc_82F949FC;
loc_82F949F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F949FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82F94A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94A0C"))) PPC_WEAK_FUNC(sub_82F94A0C);
PPC_FUNC_IMPL(__imp__sub_82F94A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94A10"))) PPC_WEAK_FUNC(sub_82F94A10);
PPC_FUNC_IMPL(__imp__sub_82F94A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94A3C"))) PPC_WEAK_FUNC(sub_82F94A3C);
PPC_FUNC_IMPL(__imp__sub_82F94A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94A40"))) PPC_WEAK_FUNC(sub_82F94A40);
PPC_FUNC_IMPL(__imp__sub_82F94A40) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f94a68
	if (ctx.cr6.eq) goto loc_82F94A68;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82f5e028
	ctx.lr = 0x82F94A68;
	sub_82F5E028(ctx, base);
loc_82F94A68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F94A84"))) PPC_WEAK_FUNC(sub_82F94A84);
PPC_FUNC_IMPL(__imp__sub_82F94A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94A88"))) PPC_WEAK_FUNC(sub_82F94A88);
PPC_FUNC_IMPL(__imp__sub_82F94A88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lbz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94AA0"))) PPC_WEAK_FUNC(sub_82F94AA0);
PPC_FUNC_IMPL(__imp__sub_82F94AA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94AA8"))) PPC_WEAK_FUNC(sub_82F94AA8);
PPC_FUNC_IMPL(__imp__sub_82F94AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F94AB0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82f94b10
	if (!ctx.cr6.gt) goto loc_82F94B10;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F94AD0:
	// srawi r30,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x82f94780
	ctx.lr = 0x82F94AEC;
	sub_82F94780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f94b04
	if (!ctx.cr0.lt) goto loc_82F94B04;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x82f94b08
	goto loc_82F94B08;
loc_82F94B04:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F94B08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82f94ad0
	if (ctx.cr6.gt) goto loc_82F94AD0;
loc_82F94B10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F94B1C"))) PPC_WEAK_FUNC(sub_82F94B1C);
PPC_FUNC_IMPL(__imp__sub_82F94B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94B20"))) PPC_WEAK_FUNC(sub_82F94B20);
PPC_FUNC_IMPL(__imp__sub_82F94B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F94B28;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82f94b8c
	if (!ctx.cr6.gt) goto loc_82F94B8C;
	// lfs f31,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F94B4C:
	// srawi r30,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82f947e0
	ctx.lr = 0x82F94B68;
	sub_82F947E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f94b80
	if (!ctx.cr0.lt) goto loc_82F94B80;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x82f94b84
	goto loc_82F94B84;
loc_82F94B80:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F94B84:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82f94b4c
	if (ctx.cr6.gt) goto loc_82F94B4C;
loc_82F94B8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F94B9C"))) PPC_WEAK_FUNC(sub_82F94B9C);
PPC_FUNC_IMPL(__imp__sub_82F94B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94BA0"))) PPC_WEAK_FUNC(sub_82F94BA0);
PPC_FUNC_IMPL(__imp__sub_82F94BA0) {
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
	// bl 0x82f5b1e8
	ctx.lr = 0x82F94BC0;
	sub_82F5B1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f94c10
	if (ctx.cr0.eq) goto loc_82F94C10;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82f5b1e8
	ctx.lr = 0x82F94BD4;
	sub_82F5B1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f94c10
	if (ctx.cr0.eq) goto loc_82F94C10;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f94c10
	if (!ctx.cr6.eq) goto loc_82F94C10;
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// lhz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f94c10
	if (!ctx.cr6.eq) goto loc_82F94C10;
	// lhz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f94c14
	if (ctx.cr6.eq) goto loc_82F94C14;
loc_82F94C10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F94C14:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82F94C30"))) PPC_WEAK_FUNC(sub_82F94C30);
PPC_FUNC_IMPL(__imp__sub_82F94C30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f94c48
	if (ctx.cr6.lt) goto loc_82F94C48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F94C48:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,152(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stb r10,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94C68"))) PPC_WEAK_FUNC(sub_82F94C68);
PPC_FUNC_IMPL(__imp__sub_82F94C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82f94d24
	if (ctx.cr6.eq) goto loc_82F94D24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f94c94
	if (!ctx.cr6.lt) goto loc_82F94C94;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f94c98
	if (!ctx.cr6.lt) goto loc_82F94C98;
loc_82F94C94:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F94C98:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f94d24
	if (!ctx.cr0.eq) goto loc_82F94D24;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f94d24
	if (!ctx.cr0.eq) goto loc_82F94D24;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f94ce0
	if (ctx.cr0.eq) goto loc_82F94CE0;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94ce8
	goto loc_82F94CE8;
loc_82F94CE0:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94CE8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f94d10
	if (ctx.cr0.eq) goto loc_82F94D10;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94d18
	goto loc_82F94D18;
loc_82F94D10:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94D18:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82F94D24:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94D34"))) PPC_WEAK_FUNC(sub_82F94D34);
PPC_FUNC_IMPL(__imp__sub_82F94D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94D38"))) PPC_WEAK_FUNC(sub_82F94D38);
PPC_FUNC_IMPL(__imp__sub_82F94D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bne cr6,0x82f94da0
	if (!ctx.cr6.eq) goto loc_82F94DA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f94d6c
	if (ctx.cr0.eq) goto loc_82F94D6C;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94d74
	goto loc_82F94D74;
loc_82F94D6C:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94D74:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// b 0x82f94e1c
	goto loc_82F94E1C;
loc_82F94DA0:
	// ble cr6,0x82f94e24
	if (!ctx.cr6.gt) goto loc_82F94E24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwa r9,16(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f94dc0
	if (ctx.cr0.eq) goto loc_82F94DC0;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94dc8
	goto loc_82F94DC8;
loc_82F94DC0:
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94DC8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82f94de0
	if (ctx.cr6.eq) goto loc_82F94DE0;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f94de4
	goto loc_82F94DE4;
loc_82F94DE0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F94DE4:
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f0,2756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
loc_82F94E1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f94e28
	if (!ctx.cr6.gt) goto loc_82F94E28;
loc_82F94E24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F94E28:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94E30"))) PPC_WEAK_FUNC(sub_82F94E30);
PPC_FUNC_IMPL(__imp__sub_82F94E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f94f24
	if (!ctx.cr6.lt) goto loc_82F94F24;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f94e60
	if (ctx.cr0.eq) goto loc_82F94E60;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x82f94e64
	goto loc_82F94E64;
loc_82F94E60:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82F94E64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f94f24
	if (ctx.cr6.eq) goto loc_82F94F24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f94e7c
	if (ctx.cr6.eq) goto loc_82F94E7C;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f94e80
	goto loc_82F94E80;
loc_82F94E7C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F94E80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f94f24
	if (ctx.cr6.eq) goto loc_82F94F24;
	// lwa r10,16(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f94ea0
	if (ctx.cr6.eq) goto loc_82F94EA0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82f94ea8
	goto loc_82F94EA8;
loc_82F94EA0:
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82F94EA8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,2756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82f94f24
	if (ctx.cr6.gt) goto loc_82F94F24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f94ee8
	if (ctx.cr6.eq) goto loc_82F94EE8;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f94eec
	goto loc_82F94EEC;
loc_82F94EE8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F94EEC:
	// lfs f12,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82F94F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94F2C"))) PPC_WEAK_FUNC(sub_82F94F2C);
PPC_FUNC_IMPL(__imp__sub_82F94F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F94F30"))) PPC_WEAK_FUNC(sub_82F94F30);
PPC_FUNC_IMPL(__imp__sub_82F94F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f94f44
	if (!ctx.cr6.eq) goto loc_82F94F44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F94F44:
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
loc_82F94F50:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82f94f64
	if (!ctx.cr6.lt) goto loc_82F94F64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f94f68
	if (!ctx.cr6.lt) goto loc_82F94F68;
loc_82F94F64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F94F68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f94fb0
	if (!ctx.cr0.eq) goto loc_82F94FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f94f90
	if (ctx.cr0.eq) goto loc_82F94F90;
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f94f94
	goto loc_82F94F94;
loc_82F94F90:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F94F94:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82f94fa0
	if (!ctx.cr6.lt) goto loc_82F94FA0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82F94FA0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82f94f64
	if (!ctx.cr6.lt) goto loc_82F94F64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82f94f50
	goto loc_82F94F50;
loc_82F94FB0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F94FB8"))) PPC_WEAK_FUNC(sub_82F94FB8);
PPC_FUNC_IMPL(__imp__sub_82F94FB8) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f13,3092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3092);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f8,f11,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f12,f7,f12,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f29,f12,f11
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82f95058
	if (!ctx.cr6.gt) goto loc_82F95058;
	// fmuls f1,f29,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82F95058:
	// lfs f12,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82f95074
	if (!ctx.cr6.gt) goto loc_82F95074;
	// fmuls f4,f30,f13
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82F95074:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F95094;
	sub_82F65E78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f66008
	ctx.lr = 0x82F950A0;
	sub_82F66008(ctx, base);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F950D4"))) PPC_WEAK_FUNC(sub_82F950D4);
PPC_FUNC_IMPL(__imp__sub_82F950D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F950D8"))) PPC_WEAK_FUNC(sub_82F950D8);
PPC_FUNC_IMPL(__imp__sub_82F950D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F95138;
	sub_82F65E78(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F95158;
	sub_82F65E78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82F9519C"))) PPC_WEAK_FUNC(sub_82F9519C);
PPC_FUNC_IMPL(__imp__sub_82F9519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F951A0"))) PPC_WEAK_FUNC(sub_82F951A0);
PPC_FUNC_IMPL(__imp__sub_82F951A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F951A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F951D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65e60
	ctx.lr = 0x82F951E0;
	sub_82F65E60(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f94fb8
	ctx.lr = 0x82F951F0;
	sub_82F94FB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// sth r8,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r8.u16);
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// sth r8,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r8.u16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F952B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-5992
	ctx.r4.s64 = ctx.r11.s64 + -5992;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F952E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9532C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F95370"))) PPC_WEAK_FUNC(sub_82F95370);
PPC_FUNC_IMPL(__imp__sub_82F95370) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r5,r11,-27504
	ctx.r5.s64 = ctx.r11.s64 + -27504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94aa8
	ctx.lr = 0x82F953A4;
	sub_82F94AA8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f953b4
	if (!ctx.cr6.eq) goto loc_82F953B4;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82F953B4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f95438
	if (ctx.cr6.eq) goto loc_82F95438;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq 0x82f953f0
	if (ctx.cr0.eq) goto loc_82F953F0;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f953f0
	if (!ctx.cr6.eq) goto loc_82F953F0;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82F953F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f95400
	if (ctx.cr6.eq) goto loc_82F95400;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x82f95404
	goto loc_82F95404;
loc_82F95400:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_82F95404:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f95438
	if (ctx.cr6.gt) goto loc_82F95438;
	// lbz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f95454
	goto loc_82F95454;
loc_82F95438:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82F95454:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82F95474"))) PPC_WEAK_FUNC(sub_82F95474);
PPC_FUNC_IMPL(__imp__sub_82F95474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F95478"))) PPC_WEAK_FUNC(sub_82F95478);
PPC_FUNC_IMPL(__imp__sub_82F95478) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94b20
	ctx.lr = 0x82F954B0;
	sub_82F94B20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f954c0
	if (!ctx.cr6.eq) goto loc_82F954C0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82F954C0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f95594
	if (ctx.cr6.eq) goto loc_82F95594;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwa r9,16(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f954f0
	if (ctx.cr0.eq) goto loc_82F954F0;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82f954f8
	goto loc_82F954F8;
loc_82F954F0:
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82F954F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82f95594
	if (ctx.cr6.lt) goto loc_82F95594;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f95518
	if (ctx.cr6.eq) goto loc_82F95518;
	// lhz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// b 0x82f9551c
	goto loc_82F9551C;
loc_82F95518:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F9551C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f95530
	if (ctx.cr6.eq) goto loc_82F95530;
	// lbz r11,29(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82f95534
	goto loc_82F95534;
loc_82F95530:
	// lha r11,40(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 40));
loc_82F95534:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82f95594
	if (!ctx.cr6.lt) goto loc_82F95594;
	// lbz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f955b0
	goto loc_82F955B0;
loc_82F95594:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82F955B0:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82F955D4"))) PPC_WEAK_FUNC(sub_82F955D4);
PPC_FUNC_IMPL(__imp__sub_82F955D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F955D8"))) PPC_WEAK_FUNC(sub_82F955D8);
PPC_FUNC_IMPL(__imp__sub_82F955D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F955E0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f95684
	if (ctx.cr6.eq) goto loc_82F95684;
	// addi r30,r3,6
	ctx.r30.s64 = ctx.r3.s64 + 6;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_82F955F8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f95678
	if (ctx.cr0.eq) goto loc_82F95678;
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f9563c
	if (ctx.cr0.eq) goto loc_82F9563C;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f95638
	if (!ctx.cr0.eq) goto loc_82F95638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F95630;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F95638;
	sub_82EF6F38(ctx, base);
loc_82F95638:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82F9563C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r11,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f95650
	if (ctx.cr0.eq) goto loc_82F95650;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82F95650:
	// rlwinm r11,r11,21,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95678
	if (ctx.cr0.eq) goto loc_82F95678;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82F95678:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82f955f8
	if (!ctx.cr0.eq) goto loc_82F955F8;
loc_82F95684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F9568C"))) PPC_WEAK_FUNC(sub_82F9568C);
PPC_FUNC_IMPL(__imp__sub_82F9568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F95690"))) PPC_WEAK_FUNC(sub_82F95690);
PPC_FUNC_IMPL(__imp__sub_82F95690) {
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
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82f956f0
	if (!ctx.cr6.lt) goto loc_82F956F0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f956f0
	if (!ctx.cr6.gt) goto loc_82F956F0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f955d8
	ctx.lr = 0x82F956F0;
	sub_82F955D8(ctx, base);
loc_82F956F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F95730"))) PPC_WEAK_FUNC(sub_82F95730);
PPC_FUNC_IMPL(__imp__sub_82F95730) {
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
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f957c8
	if (ctx.cr0.eq) goto loc_82F957C8;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bne 0x82f95760
	if (!ctx.cr0.eq) goto loc_82F95760;
	// addi r3,r31,42
	ctx.r3.s64 = ctx.r31.s64 + 42;
loc_82F95760:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f95770
	if (ctx.cr6.eq) goto loc_82F95770;
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// b 0x82f95774
	goto loc_82F95774;
loc_82F95770:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82F95774:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r31,30
	ctx.r10.s64 = ctx.r31.s64 + 30;
	// bne cr6,0x82f95788
	if (!ctx.cr6.eq) goto loc_82F95788;
	// addi r10,r31,42
	ctx.r10.s64 = ctx.r31.s64 + 42;
	// beq cr6,0x82f95790
	if (ctx.cr6.eq) goto loc_82F95790;
loc_82F95788:
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// b 0x82f95794
	goto loc_82F95794;
loc_82F95790:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82F95794:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82f955d8
	ctx.lr = 0x82F957A8;
	sub_82F955D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f957c0
	if (ctx.cr0.eq) goto loc_82F957C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// b 0x82f957c8
	goto loc_82F957C8;
loc_82F957C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F957C8:
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

__attribute__((alias("__imp__sub_82F957DC"))) PPC_WEAK_FUNC(sub_82F957DC);
PPC_FUNC_IMPL(__imp__sub_82F957DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F957E0"))) PPC_WEAK_FUNC(sub_82F957E0);
PPC_FUNC_IMPL(__imp__sub_82F957E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f9580c
	if (ctx.cr6.eq) goto loc_82F9580C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95730
	ctx.lr = 0x82F95804;
	sub_82F95730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F9580C;
	sub_82EF6F38(ctx, base);
loc_82F9580C:
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

__attribute__((alias("__imp__sub_82F95820"))) PPC_WEAK_FUNC(sub_82F95820);
PPC_FUNC_IMPL(__imp__sub_82F95820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F95828;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f95850
	if (ctx.cr6.eq) goto loc_82F95850;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F95850:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f95874
	if (ctx.cr6.eq) goto loc_82F95874;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x82f95878
	if (ctx.cr6.lt) goto loc_82F95878;
loc_82F95874:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F95878:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f95a00
	if (!ctx.cr0.eq) goto loc_82F95A00;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f95984
	if (ctx.cr0.eq) goto loc_82F95984;
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f958f4
	if (ctx.cr0.eq) goto loc_82F958F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f958b8
	if (ctx.cr6.eq) goto loc_82F958B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F958B8:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f958e4
	if (ctx.cr6.eq) goto loc_82F958E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x82f958e4
	if (!ctx.cr0.eq) goto loc_82F958E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F958DC;
	sub_82F04C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F958E4;
	sub_82EF6F38(ctx, base);
loc_82F958E4:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F958F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95920
	if (ctx.cr0.eq) goto loc_82F95920;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82F95920:
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95984
	if (ctx.cr0.eq) goto loc_82F95984;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f95954
	if (ctx.cr6.eq) goto loc_82F95954;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F95954:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f95974
	if (ctx.cr6.eq) goto loc_82F95974;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F95974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F95974:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F95984:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82fc2580
	ctx.lr = 0x82F9598C;
	sub_82FC2580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f95a00
	if (!ctx.cr0.eq) goto loc_82F95A00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f959b8
	if (!ctx.cr0.eq) goto loc_82F959B8;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f959f8
	if (ctx.cr0.eq) goto loc_82F959F8;
loc_82F959B8:
	// lbz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f959f8
	if (ctx.cr0.eq) goto loc_82F959F8;
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f959dc
	if (ctx.cr0.eq) goto loc_82F959DC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82f959f0
	goto loc_82F959F0;
loc_82F959DC:
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_82F959F0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f959fc
	goto loc_82F959FC;
loc_82F959F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_82F959FC:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82F95A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F95A08"))) PPC_WEAK_FUNC(sub_82F95A08);
PPC_FUNC_IMPL(__imp__sub_82F95A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F95A10;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82f57778
	ctx.lr = 0x82F95A2C;
	sub_82F57778(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f95a5c
	if (!ctx.cr6.lt) goto loc_82F95A5C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82F95A5C;
	sub_82CAA2E0(ctx, base);
loc_82F95A5C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95a74
	if (ctx.cr0.eq) goto loc_82F95A74;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F95A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F95A7C"))) PPC_WEAK_FUNC(sub_82F95A7C);
PPC_FUNC_IMPL(__imp__sub_82F95A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F95A80"))) PPC_WEAK_FUNC(sub_82F95A80);
PPC_FUNC_IMPL(__imp__sub_82F95A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F95A88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r29,216
	ctx.r3.s64 = ctx.r29.s64 + 216;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f94898
	ctx.lr = 0x82F95ACC;
	sub_82F94898(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne 0x82f95ae0
	if (!ctx.cr0.eq) goto loc_82F95AE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f95b0c
	goto loc_82F95B0C;
loc_82F95AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95af4
	if (ctx.cr0.eq) goto loc_82F95AF4;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// b 0x82f95af8
	goto loc_82F95AF8;
loc_82F95AF4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F95AF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f95a08
	ctx.lr = 0x82F95B08;
	sub_82F95A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F95B0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F95B14"))) PPC_WEAK_FUNC(sub_82F95B14);
PPC_FUNC_IMPL(__imp__sub_82F95B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F95B18"))) PPC_WEAK_FUNC(sub_82F95B18);
PPC_FUNC_IMPL(__imp__sub_82F95B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F95B20;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74e4
	ctx.lr = 0x82F95B28;
	sub_82CA74E4(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lhz r5,28(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 28);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r28,20(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f30,2916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	ctx.f30.f64 = double(temp.f32);
	// lhz r8,30(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 30);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r27,0(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// sth r5,188(r1)
	PPC_STORE_U16(ctx.r1.u32 + 188, ctx.r5.u16);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// sth r8,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r8.u16);
	// lwz r21,20(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r23,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r23.u32);
	// stw r22,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r22.u32);
	// beq cr6,0x82f95bd8
	if (ctx.cr6.eq) goto loc_82F95BD8;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f30,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// lbz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82f95bdc
	goto loc_82F95BDC;
loc_82F95BD8:
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
loc_82F95BDC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f65e60
	ctx.lr = 0x82F95BE8;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f22,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f9,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// lfs f8,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f11,f10,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,408(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// bl 0x82f94c68
	ctx.lr = 0x82F95C48;
	sub_82F94C68(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f21,f0
	ctx.f21.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82f65e60
	ctx.lr = 0x82F95C6C;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f22,488(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f22,504(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stfs f22,368(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f20,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f20.f64 = double(temp.f32);
	// stfs f20,372(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82F95C94;
	sub_82F661F0(ctx, base);
	// stfs f20,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f22,436(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82f661f0
	ctx.lr = 0x82F95CAC;
	sub_82F661F0(ctx, base);
	// lfs f0,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f12,f22
	ctx.cr6.compare(ctx.f12.f64, ctx.f22.f64);
	// bne cr6,0x82f95ce0
	if (!ctx.cr6.eq) goto loc_82F95CE0;
	// lfs f0,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x82f95cfc
	goto loc_82F95CFC;
loc_82F95CE0:
	// lfs f11,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f0,f10,f0,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_82F95CFC:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,68(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f25,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f31,f0,f25
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// beq cr6,0x82f95e34
	if (ctx.cr6.eq) goto loc_82F95E34;
	// lbz r11,167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x82f95e34
	if (!ctx.cr0.eq) goto loc_82F95E34;
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95d90
	if (!ctx.cr6.eq) goto loc_82F95D90;
	// lfs f0,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95d90
	if (!ctx.cr6.eq) goto loc_82F95D90;
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95d90
	if (!ctx.cr6.eq) goto loc_82F95D90;
	// lfs f0,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95d90
	if (!ctx.cr6.eq) goto loc_82F95D90;
	// lfs f0,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95d90
	if (!ctx.cr6.eq) goto loc_82F95D90;
	// lfs f0,24(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f95d94
	if (ctx.cr6.eq) goto loc_82F95D94;
loc_82F95D90:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F95D94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95dcc
	if (ctx.cr0.eq) goto loc_82F95DCC;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// stw r16,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r16.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95dec
	if (ctx.cr0.eq) goto loc_82F95DEC;
	// lbz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// b 0x82f95dec
	goto loc_82F95DEC;
loc_82F95DCC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95dec
	if (ctx.cr0.eq) goto loc_82F95DEC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82f95dec
	if (!ctx.cr6.gt) goto loc_82F95DEC;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_82F95DEC:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f95e34
	if (ctx.cr6.lt) goto loc_82F95E34;
	// lbz r11,179(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 179);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lbz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r10,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r10.u8);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r11.u8);
	// bne 0x82f95e34
	if (!ctx.cr0.eq) goto loc_82F95E34;
	// lbz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
loc_82F95E34:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f65e60
	ctx.lr = 0x82F95E40;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f19,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f19.f64 = double(temp.f32);
	// lbz r11,167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95f70
	if (ctx.cr0.eq) goto loc_82F95F70;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95f08
	if (!ctx.cr6.eq) goto loc_82F95F08;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95f08
	if (!ctx.cr6.eq) goto loc_82F95F08;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95f08
	if (!ctx.cr6.eq) goto loc_82F95F08;
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95f08
	if (!ctx.cr6.eq) goto loc_82F95F08;
	// lfs f0,48(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f95ef8
	if (!ctx.cr6.eq) goto loc_82F95EF8;
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95ef8
	if (!ctx.cr6.eq) goto loc_82F95EF8;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95ef8
	if (!ctx.cr6.eq) goto loc_82F95EF8;
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95ef8
	if (!ctx.cr6.eq) goto loc_82F95EF8;
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95ef8
	if (!ctx.cr6.eq) goto loc_82F95EF8;
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lfs f13,72(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f95efc
	if (ctx.cr6.eq) goto loc_82F95EFC;
loc_82F95EF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F95EFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq 0x82f95f0c
	if (ctx.cr0.eq) goto loc_82F95F0C;
loc_82F95F08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F95F0C:
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f95ff8
	if (!ctx.cr0.eq) goto loc_82F95FF8;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,24(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,48(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f28,f13,f12
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f27,68(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f0,f29,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f19.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F95F3C;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f28,f27,f19
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f19.f64));
	// fdivs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,696(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// bl 0x8222c3e8
	ctx.lr = 0x82F95F58;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,712(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// b 0x82f95ff8
	goto loc_82F95FF8;
loc_82F95F70:
	// lfs f0,48(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f95fd4
	if (!ctx.cr6.eq) goto loc_82F95FD4;
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95fd4
	if (!ctx.cr6.eq) goto loc_82F95FD4;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95fd4
	if (!ctx.cr6.eq) goto loc_82F95FD4;
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95fd4
	if (!ctx.cr6.eq) goto loc_82F95FD4;
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f95fd4
	if (!ctx.cr6.eq) goto loc_82F95FD4;
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lfs f13,72(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f95fd8
	if (ctx.cr6.eq) goto loc_82F95FD8;
loc_82F95FD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F95FD8:
	// lbz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f95ff8
	if (ctx.cr0.eq) goto loc_82F95FF8;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82f95ff8
	if (ctx.cr6.eq) goto loc_82F95FF8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F95FF8:
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f65e60
	ctx.lr = 0x82F96008;
	sub_82F65E60(ctx, base);
	// addi r14,r18,48
	ctx.r14.s64 = ctx.r18.s64 + 48;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82F96018;
	sub_82F65E60(ctx, base);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f9603c
	if (!ctx.cr0.eq) goto loc_82F9603C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f9603c
	if (!ctx.cr0.eq) goto loc_82F9603C;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f96060
	if (ctx.cr6.eq) goto loc_82F96060;
loc_82F9603C:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9605c
	if (ctx.cr6.eq) goto loc_82F9605C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9605C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F9605C:
	// stw r16,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r16.u32);
loc_82F96060:
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f960e4
	if (!ctx.cr0.eq) goto loc_82F960E4;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f94ba0
	ctx.lr = 0x82F96078;
	sub_82F94BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f960e4
	if (ctx.cr0.eq) goto loc_82F960E4;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f960e4
	if (!ctx.cr0.eq) goto loc_82F960E4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f960e4
	if (ctx.cr6.eq) goto loc_82F960E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f960e4
	if (ctx.cr6.eq) goto loc_82F960E4;
	// lwz r11,80(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82f960e4
	if (ctx.cr6.gt) goto loc_82F960E4;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f960e4
	if (!ctx.cr6.eq) goto loc_82F960E4;
	// lbz r11,167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f960d0
	if (ctx.cr0.eq) goto loc_82F960D0;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// b 0x82f960d4
	goto loc_82F960D4;
loc_82F960D0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82F960D4:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82f5e250
	ctx.lr = 0x82F960DC;
	sub_82F5E250(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f960fc
	if (!ctx.cr0.eq) goto loc_82F960FC;
loc_82F960E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f94a40
	ctx.lr = 0x82F960EC;
	sub_82F94A40(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
loc_82F960FC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r17,-1
	ctx.r17.s64 = -1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// bne cr6,0x82f96448
	if (!ctx.cr6.eq) goto loc_82F96448;
	// lwz r11,80(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f96448
	if (!ctx.cr6.eq) goto loc_82F96448;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stfs f21,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r16,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// stb r11,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r11.u8);
	// b 0x82f9634c
	goto loc_82F9634C;
loc_82F96164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82f5d9d8
	ctx.lr = 0x82F96178;
	sub_82F5D9D8(ctx, base);
loc_82F96178:
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f96194
	if (ctx.cr6.eq) goto loc_82F96194;
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// blt cr6,0x82f96198
	if (ctx.cr6.lt) goto loc_82F96198;
loc_82F96194:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F96198:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f9632c
	if (!ctx.cr0.eq) goto loc_82F9632C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r26,r11,6
	ctx.r26.s64 = ctx.r11.s64 + 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f961d0
	if (ctx.cr0.eq) goto loc_82F961D0;
	// lbz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r11.u8);
loc_82F961D0:
	// lhz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x82f961e4
	if (ctx.cr6.lt) goto loc_82F961E4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82F961E4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f96320
	if (ctx.cr6.eq) goto loc_82F96320;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96320
	if (!ctx.cr0.eq) goto loc_82F96320;
	// lwz r11,864(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f96320
	if (!ctx.cr6.eq) goto loc_82F96320;
	// lwz r11,860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9621c
	if (ctx.cr6.eq) goto loc_82F9621C;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82f96220
	goto loc_82F96220;
loc_82F9621C:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82F96220:
	// bl 0x82f5b278
	ctx.lr = 0x82F96224;
	sub_82F5B278(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f96320
	if (ctx.cr6.eq) goto loc_82F96320;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f962a0
	if (ctx.cr6.eq) goto loc_82F962A0;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82fb4af8
	ctx.lr = 0x82F96268;
	sub_82FB4AF8(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82f96288
	if (!ctx.cr6.gt) goto loc_82F96288;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq 0x82f9628c
	if (ctx.cr0.eq) goto loc_82F9628C;
loc_82F96288:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F9628C:
	// lbz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// stb r11,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r11.u8);
	// b 0x82f962f8
	goto loc_82F962F8;
loc_82F962A0:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f962f8
	if (ctx.cr0.eq) goto loc_82F962F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f962f8
	if (ctx.cr6.eq) goto loc_82F962F8;
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// blt cr6,0x82f962c4
	if (ctx.cr6.lt) goto loc_82F962C4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82F962C4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,928
	ctx.r5.s64 = ctx.r1.s64 + 928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F962DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f5b440
	ctx.lr = 0x82F962F8;
	sub_82F5B440(ctx, base);
loc_82F962F8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f96314
	if (ctx.cr0.eq) goto loc_82F96314;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// b 0x82f96320
	goto loc_82F96320;
loc_82F96314:
	// lbz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r11.u8);
loc_82F96320:
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F96328;
	sub_82F5B2C8(ctx, base);
	// b 0x82f96178
	goto loc_82F96178;
loc_82F9632C:
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82f5d010
	ctx.lr = 0x82F96334;
	sub_82F5D010(ctx, base);
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f96350
	if (!ctx.cr6.lt) goto loc_82F96350;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F9634C:
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
loc_82F96350:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f5b648
	ctx.lr = 0x82F96358;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96164
	if (!ctx.cr0.eq) goto loc_82F96164;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f21,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lhz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 188);
	// lhz r27,190(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 190);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// sth r29,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r29.u16);
	// sth r27,190(r31)
	PPC_STORE_U16(ctx.r31.u32 + 190, ctx.r27.u16);
	// lbz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// rlwinm r8,r8,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stb r8,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r8.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82F963DC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82f963dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F963DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f21.f64));
	// stfs f13,360(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f0,364(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// beq cr6,0x82f96438
	if (ctx.cr6.eq) goto loc_82F96438;
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82f5ffa8
	ctx.lr = 0x82F96434;
	sub_82F5FFA8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82F96438:
	// lfs f0,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,24(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_82F96448:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9646c
	if (ctx.cr6.eq) goto loc_82F9646C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82f5d2e0
	ctx.lr = 0x82F9646C;
	sub_82F5D2E0(ctx, base);
loc_82F9646C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f964b8
	if (ctx.cr6.eq) goto loc_82F964B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f964a4
	if (ctx.cr6.eq) goto loc_82F964A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9649c
	if (ctx.cr6.eq) goto loc_82F9649C;
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f964a4
	if (!ctx.cr0.eq) goto loc_82F964A4;
loc_82F9649C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x82f964a8
	goto loc_82F964A8;
loc_82F964A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F964A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f96b50
	if (ctx.cr0.eq) goto loc_82F96B50;
	// lwz r23,1268(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1268);
	// lwz r22,1276(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
loc_82F964B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82f94e30
	ctx.lr = 0x82F964C4;
	sub_82F94E30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f964f0
	if (ctx.cr0.eq) goto loc_82F964F0;
	// lwz r11,88(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 88);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82f951a0
	ctx.lr = 0x82F964EC;
	sub_82F951A0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_82F964F0:
	// ld r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// stfs f21,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r7,24(r22)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r22.u32 + 24);
	// lbz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// lwz r23,32(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// rlwinm r11,r6,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// bl 0x82f5b648
	ctx.lr = 0x82F9653C;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f96b50
	if (ctx.cr0.eq) goto loc_82F96B50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r24,r31,36
	ctx.r24.s64 = ctx.r31.s64 + 36;
	// addi r22,r11,16388
	ctx.r22.s64 = ctx.r11.s64 + 16388;
	// lfs f26,2960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2960);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,31284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31284);
	ctx.f27.f64 = double(temp.f32);
loc_82F96560:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f5bfd8
	ctx.lr = 0x82F96578;
	sub_82F5BFD8(ctx, base);
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// beq 0x82f965b4
	if (ctx.cr0.eq) goto loc_82F965B4;
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// b 0x82f965c4
	goto loc_82F965C4;
loc_82F965B4:
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
loc_82F965C4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f28,f0,f21
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f21.f64));
	// stfs f28,108(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82f5da38
	ctx.lr = 0x82F965E8;
	sub_82F5DA38(ctx, base);
loc_82F965E8:
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f96604
	if (ctx.cr6.eq) goto loc_82F96604;
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x82f96608
	if (ctx.cr6.lt) goto loc_82F96608;
loc_82F96604:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F96608:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96b24
	if (!ctx.cr0.eq) goto loc_82F96B24;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r26,r3,6
	ctx.r26.s64 = ctx.r3.s64 + 6;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f9662c
	if (!ctx.cr0.eq) goto loc_82F9662C;
	// lhz r25,2(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// b 0x82f96634
	goto loc_82F96634;
loc_82F9662C:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// neg r25,r10
	ctx.r25.s64 = -ctx.r10.s64;
loc_82F96634:
	// rlwinm. r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f96afc
	if (!ctx.cr0.eq) goto loc_82F96AFC;
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f96654
	if (ctx.cr0.eq) goto loc_82F96654;
	// rlwinm r11,r11,22,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f96afc
	if (ctx.cr0.eq) goto loc_82F96AFC;
loc_82F96654:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// fmr f30,f20
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f20.f64;
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// blt cr6,0x82f96670
	if (ctx.cr6.lt) goto loc_82F96670;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82F96670:
	// lwz r11,608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f966a4
	if (ctx.cr6.eq) goto loc_82F966A4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// b 0x82f96790
	goto loc_82F96790;
loc_82F966A4:
	// bl 0x82f5b278
	ctx.lr = 0x82F966A8;
	sub_82F5B278(ctx, base);
	// fmuls f0,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f25.f64));
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// beq cr6,0x82f966c4
	if (ctx.cr6.eq) goto loc_82F966C4;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82f966c8
	goto loc_82F966C8;
loc_82F966C4:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82F966C8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f96730
	if (ctx.cr6.eq) goto loc_82F96730;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f96790
	if (ctx.cr6.eq) goto loc_82F96790;
	// lwz r9,20(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f966f4
	if (ctx.cr6.eq) goto loc_82F966F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f966f8
	goto loc_82F966F8;
loc_82F966F4:
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_82F966F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9670c
	if (ctx.cr6.eq) goto loc_82F9670C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82f96710
	goto loc_82F96710;
loc_82F9670C:
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
loc_82F96710:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f5e8a8
	ctx.lr = 0x82F96720;
	sub_82F5E8A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f96790
	if (ctx.cr0.eq) goto loc_82F96790;
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82f96784
	goto loc_82F96784;
loc_82F96730:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f96758
	if (ctx.cr6.eq) goto loc_82F96758;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F96758:
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f9678c
	if (!ctx.cr0.eq) goto loc_82F9678C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_82F96784:
	// fmuls f31,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// b 0x82f96790
	goto loc_82F96790;
loc_82F9678C:
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f22.f64;
loc_82F96790:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lbz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// bne 0x82f967d0
	if (!ctx.cr0.eq) goto loc_82F967D0;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f96afc
	if (ctx.cr6.lt) goto loc_82F96AFC;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f96b24
	if (!ctx.cr6.lt) goto loc_82F96B24;
loc_82F967D0:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rlwinm r9,r11,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f967fc
	if (ctx.cr0.eq) goto loc_82F967FC;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f967f0
	if (!ctx.cr0.eq) goto loc_82F967F0;
	// li r15,1
	ctx.r15.s64 = 1;
loc_82F967F0:
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96afc
	if (!ctx.cr0.eq) goto loc_82F96AFC;
loc_82F967FC:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96860
	if (!ctx.cr0.eq) goto loc_82F96860;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f96860
	if (!ctx.cr6.eq) goto loc_82F96860;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f96824
	if (!ctx.cr6.lt) goto loc_82F96824;
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82f9683c
	if (ctx.cr6.gt) goto loc_82F9683C;
loc_82F96824:
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f96860
	if (!ctx.cr6.lt) goto loc_82F96860;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82f96860
	if (!ctx.cr6.gt) goto loc_82F96860;
loc_82F9683C:
	// lwz r11,88(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 88);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,1268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1268);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82f951a0
	ctx.lr = 0x82F9685C;
	sub_82F951A0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_82F96860:
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f65e60
	ctx.lr = 0x82F9686C;
	sub_82F65E60(ctx, base);
	// lfs f0,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f12,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f10,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f28,f12,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f29,f11,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// beq cr6,0x82f968f0
	if (ctx.cr6.eq) goto loc_82F968F0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f96afc
	if (ctx.cr6.eq) goto loc_82F96AFC;
	// addi r4,r27,48
	ctx.r4.s64 = ctx.r27.s64 + 48;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f66008
	ctx.lr = 0x82F968C4;
	sub_82F66008(ctx, base);
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82f44ac8
	ctx.lr = 0x82F968EC;
	sub_82F44AC8(ctx, base);
	// b 0x82f96afc
	goto loc_82F96AFC;
loc_82F968F0:
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82f969b8
	if (ctx.cr6.eq) goto loc_82F969B8;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82f97968
	ctx.lr = 0x82F96908;
	sub_82F97968(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// addi r9,r1,656
	ctx.r9.s64 = ctx.r1.s64 + 656;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lbz r7,115(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r30,1276(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f11,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r10,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r10.u64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfd f13,288(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r10.u64);
	// lfd f0,272(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// std r8,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r8.u64);
	// std r7,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r7.u64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// stfs f13,448(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// lfd f12,304(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// stfs f13,456(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,472(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// stfs f12,464(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// bl 0x82f97858
	ctx.lr = 0x82F969B4;
	sub_82F97858(ctx, base);
	// b 0x82f969bc
	goto loc_82F969BC;
loc_82F969B8:
	// lwz r30,1276(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
loc_82F969BC:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// fmr f6,f22
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f22.f64;
	// fmr f5,f22
	ctx.f5.f64 = ctx.f22.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82F969DC;
	sub_82F65E78(ctx, base);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f66008
	ctx.lr = 0x82F969E8;
	sub_82F66008(ctx, base);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82f96ac0
	if (!ctx.cr6.eq) goto loc_82F96AC0;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82f97e90
	ctx.lr = 0x82F96A38;
	sub_82F97E90(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f96afc
	goto loc_82F96AFC;
loc_82F96AC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f96afc
	if (ctx.cr6.eq) goto loc_82F96AFC;
	// lbz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,68(r29)
	PPC_STORE_U8(ctx.r29.u32 + 68, ctx.r11.u8);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f44ac8
	ctx.lr = 0x82F96AFC;
	sub_82F44AC8(ctx, base);
loc_82F96AFC:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F96B04;
	sub_82F5B2C8(ctx, base);
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82f965e8
	goto loc_82F965E8;
loc_82F96B24:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f5d010
	ctx.lr = 0x82F96B2C;
	sub_82F5D010(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f96b40
	if (!ctx.cr6.lt) goto loc_82F96B40;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
loc_82F96B40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5b648
	ctx.lr = 0x82F96B48;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96560
	if (!ctx.cr0.eq) goto loc_82F96560;
loc_82F96B50:
	// clrlwi. r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96b64
	if (!ctx.cr0.eq) goto loc_82F96B64;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f971e0
	if (ctx.cr0.eq) goto loc_82F971E0;
loc_82F96B64:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f971e0
	if (!ctx.cr6.eq) goto loc_82F971E0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f21,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lbz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r22,32(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfs f25,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// stb r10,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// lfs f24,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f24.f64 = double(temp.f32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f26,f0,f12
	ctx.f26.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f23,f12,f13
	ctx.f23.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// bl 0x82f5b648
	ctx.lr = 0x82F96BC4;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f971e0
	if (ctx.cr0.eq) goto loc_82F971E0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r20,r11,7817
	ctx.r20.u64 = ctx.r11.u64 | 7817;
	// ori r21,r10,9034
	ctx.r21.u64 = ctx.r10.u64 | 9034;
loc_82F96BDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f5bfd8
	ctx.lr = 0x82F96BF4;
	sub_82F5BFD8(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
	// fmr f27,f22
	ctx.f27.f64 = ctx.f22.f64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// bl 0x82f5d9d8
	ctx.lr = 0x82F96C38;
	sub_82F5D9D8(ctx, base);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
loc_82F96C3C:
	// lwz r10,720(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f96c58
	if (ctx.cr6.eq) goto loc_82F96C58;
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x82f96c5c
	if (ctx.cr6.lt) goto loc_82F96C5C;
loc_82F96C58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F96C5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f97040
	if (!ctx.cr0.eq) goto loc_82F97040;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f96c7c
	if (!ctx.cr0.eq) goto loc_82F96C7C;
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// b 0x82f96c84
	goto loc_82F96C84;
loc_82F96C7C:
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// neg r26,r10
	ctx.r26.s64 = -ctx.r10.s64;
loc_82F96C84:
	// rlwinm r10,r11,22,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f97010
	if (ctx.cr0.eq) goto loc_82F97010;
	// lwz r10,784(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f97010
	if (!ctx.cr6.eq) goto loc_82F97010;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f97010
	if (!ctx.cr0.eq) goto loc_82F97010;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f97040
	if (!ctx.cr6.lt) goto loc_82F97040;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f12,240(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82f97010
	if (ctx.cr6.lt) goto loc_82F97010;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f96e6c
	if (ctx.cr0.eq) goto loc_82F96E6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f96d10
	if (ctx.cr0.eq) goto loc_82F96D10;
	// lhz r11,22(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 22);
	// b 0x82f96d14
	goto loc_82F96D14;
loc_82F96D10:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
loc_82F96D14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f96d30
	if (ctx.cr6.eq) goto loc_82F96D30;
	// lhz r9,26(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 26);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r9.u64);
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// b 0x82f96d40
	goto loc_82F96D40;
loc_82F96D30:
	// lhz r9,38(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// lfd f0,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_82F96D40:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq cr6,0x82f96d7c
	if (ctx.cr6.eq) goto loc_82F96D7C;
	// lhz r11,26(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// b 0x82f96d8c
	goto loc_82F96D8C;
loc_82F96D7C:
	// lhz r11,38(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
loc_82F96D8C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f13,f19,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f19.f64 + ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f21.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82F96DB4;
	sub_82F65E60(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82f66090
	ctx.lr = 0x82F96DC0;
	sub_82F66090(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82f65e60
	ctx.lr = 0x82F96DCC;
	sub_82F65E60(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82f65e60
	ctx.lr = 0x82F96DD8;
	sub_82F65E60(ctx, base);
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82f66280
	ctx.lr = 0x82F96DE4;
	sub_82F66280(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82f661f0
	ctx.lr = 0x82F96DF8;
	sub_82F661F0(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82F96E04;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82f661f0
	ctx.lr = 0x82F96E1C;
	sub_82F661F0(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
	// lfs f12,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82F96E48;
	sub_82F661F0(ctx, base);
	// lfs f0,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82f96e70
	goto loc_82F96E70;
loc_82F96E6C:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
loc_82F96E70:
	// lwz r11,772(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq cr6,0x82f97004
	if (ctx.cr6.eq) goto loc_82F97004;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f96e94
	if (!ctx.cr6.eq) goto loc_82F96E94;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f97004
	if (ctx.cr6.eq) goto loc_82F97004;
loc_82F96E94:
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// blt cr6,0x82f96ea4
	if (ctx.cr6.lt) goto loc_82F96EA4;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// b 0x82f96eb8
	goto loc_82F96EB8;
loc_82F96EA4:
	// fcmpu cr6,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// bgt cr6,0x82f96eb4
	if (ctx.cr6.gt) goto loc_82F96EB4;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
	// b 0x82f96eb8
	goto loc_82F96EB8;
loc_82F96EB4:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_82F96EB8:
	// fcmpu cr6,f25,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// blt cr6,0x82f96ec8
	if (ctx.cr6.lt) goto loc_82F96EC8;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// b 0x82f96edc
	goto loc_82F96EDC;
loc_82F96EC8:
	// fcmpu cr6,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bgt cr6,0x82f96ed8
	if (ctx.cr6.gt) goto loc_82F96ED8;
	// fmr f29,f24
	ctx.f29.f64 = ctx.f24.f64;
	// b 0x82f96edc
	goto loc_82F96EDC;
loc_82F96ED8:
	// fmr f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f13.f64;
loc_82F96EDC:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fadds f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f0,296(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x82f96f08
	if (ctx.cr6.lt) goto loc_82F96F08;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// b 0x82f96f1c
	goto loc_82F96F1C;
loc_82F96F08:
	// fcmpu cr6,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bgt cr6,0x82f96f18
	if (ctx.cr6.gt) goto loc_82F96F18;
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// b 0x82f96f1c
	goto loc_82F96F1C;
loc_82F96F18:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_82F96F1C:
	// fcmpu cr6,f25,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// blt cr6,0x82f96f2c
	if (ctx.cr6.lt) goto loc_82F96F2C;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// b 0x82f96f40
	goto loc_82F96F40;
loc_82F96F2C:
	// fcmpu cr6,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bgt cr6,0x82f96f3c
	if (ctx.cr6.gt) goto loc_82F96F3C;
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// b 0x82f96f40
	goto loc_82F96F40;
loc_82F96F3C:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f13.f64;
loc_82F96F40:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f96f98
	if (!ctx.cr6.eq) goto loc_82F96F98;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F96F54;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f96f70
	if (ctx.cr0.eq) goto loc_82F96F70;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// bl 0x82fc2258
	ctx.lr = 0x82F96F68;
	sub_82FC2258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f96f74
	goto loc_82F96F74;
loc_82F96F70:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82F96F74:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f96f94
	if (ctx.cr6.eq) goto loc_82F96F94;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F96F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F96F94:
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
loc_82F96F98:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82fc21d0
	ctx.lr = 0x82F96FA4;
	sub_82FC21D0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1dc8
	ctx.lr = 0x82F96FB4;
	sub_82FC1DC8(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F96FC4;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F96FD4;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F96FE4;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F96FF4;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82fc1f60
	ctx.lr = 0x82F96FFC;
	sub_82FC1F60(ctx, base);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
loc_82F97004:
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82F97010:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F97018;
	sub_82F5B2C8(ctx, base);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f13,256(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82f96c3c
	goto loc_82F96C3C;
loc_82F97040:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f971b4
	if (ctx.cr6.eq) goto loc_82F971B4;
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// blt cr6,0x82f97058
	if (ctx.cr6.lt) goto loc_82F97058;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// b 0x82f9706c
	goto loc_82F9706C;
loc_82F97058:
	// fcmpu cr6,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// bgt cr6,0x82f97068
	if (ctx.cr6.gt) goto loc_82F97068;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
	// b 0x82f9706c
	goto loc_82F9706C;
loc_82F97068:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_82F9706C:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82f97080
	if (ctx.cr6.lt) goto loc_82F97080;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// b 0x82f97094
	goto loc_82F97094;
loc_82F97080:
	// fcmpu cr6,f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// bgt cr6,0x82f97090
	if (ctx.cr6.gt) goto loc_82F97090;
	// fmr f29,f24
	ctx.f29.f64 = ctx.f24.f64;
	// b 0x82f97094
	goto loc_82F97094;
loc_82F97090:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
loc_82F97094:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fadds f13,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x82f970c0
	if (ctx.cr6.lt) goto loc_82F970C0;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// b 0x82f970d4
	goto loc_82F970D4;
loc_82F970C0:
	// fcmpu cr6,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bgt cr6,0x82f970d0
	if (ctx.cr6.gt) goto loc_82F970D0;
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// b 0x82f970d4
	goto loc_82F970D4;
loc_82F970D0:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_82F970D4:
	// fcmpu cr6,f25,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// blt cr6,0x82f970e4
	if (ctx.cr6.lt) goto loc_82F970E4;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// b 0x82f970f8
	goto loc_82F970F8;
loc_82F970E4:
	// fcmpu cr6,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bgt cr6,0x82f970f4
	if (ctx.cr6.gt) goto loc_82F970F4;
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// b 0x82f970f8
	goto loc_82F970F8;
loc_82F970F4:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f13.f64;
loc_82F970F8:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f97150
	if (!ctx.cr6.eq) goto loc_82F97150;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F9710C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f97128
	if (ctx.cr0.eq) goto loc_82F97128;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// bl 0x82fc2258
	ctx.lr = 0x82F97120;
	sub_82FC2258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f9712c
	goto loc_82F9712C;
loc_82F97128:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82F9712C:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9714c
	if (ctx.cr6.eq) goto loc_82F9714C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F9714C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F9714C:
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
loc_82F97150:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82fc21d0
	ctx.lr = 0x82F9715C;
	sub_82FC21D0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1dc8
	ctx.lr = 0x82F9716C;
	sub_82FC1DC8(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F9717C;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F9718C;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F9719C;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fc1e08
	ctx.lr = 0x82F971AC;
	sub_82FC1E08(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82fc1f60
	ctx.lr = 0x82F971B4;
	sub_82FC1F60(ctx, base);
loc_82F971B4:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82f5d010
	ctx.lr = 0x82F971BC;
	sub_82F5D010(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f971d0
	if (!ctx.cr6.lt) goto loc_82F971D0;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
loc_82F971D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f5b648
	ctx.lr = 0x82F971D8;
	sub_82F5B648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f96bdc
	if (!ctx.cr0.eq) goto loc_82F96BDC;
loc_82F971E0:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f97204
	if (ctx.cr6.eq) goto loc_82F97204;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,1276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82fc2460
	ctx.lr = 0x82F97204;
	sub_82FC2460(ctx, base);
loc_82F97204:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f97248
	if (ctx.cr0.eq) goto loc_82F97248;
	// lwz r11,88(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f97234
	if (!ctx.cr6.eq) goto loc_82F97234;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F97230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f97248
	goto loc_82F97248;
loc_82F97234:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,1268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1268);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82f951a0
	ctx.lr = 0x82F97248;
	sub_82F951A0(ctx, base);
loc_82F97248:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7530
	ctx.lr = 0x82F97254;
	sub_82CA7530(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F97258"))) PPC_WEAK_FUNC(sub_82F97258);
PPC_FUNC_IMPL(__imp__sub_82F97258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F97260;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F97274:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f97294
	if (ctx.cr6.eq) goto loc_82F97294;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f97294
	if (!ctx.cr6.lt) goto loc_82F97294;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f97298
	if (!ctx.cr6.lt) goto loc_82F97298;
loc_82F97294:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F97298:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f97540
	if (!ctx.cr0.eq) goto loc_82F97540;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f972c4
	if (ctx.cr0.eq) goto loc_82F972C4;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82f972c8
	goto loc_82F972C8;
loc_82F972C4:
	// lha r11,40(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 40));
loc_82F972C8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x82f972f0
	if (ctx.cr6.eq) goto loc_82F972F0;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// b 0x82f972f4
	goto loc_82F972F4;
loc_82F972F0:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_82F972F4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// beq cr6,0x82f9731c
	if (ctx.cr6.eq) goto loc_82F9731C;
	// lhz r11,22(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// b 0x82f97320
	goto loc_82F97320;
loc_82F9731C:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_82F97320:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f0,168(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x82f97354
	if (ctx.cr6.eq) goto loc_82F97354;
	// stb r11,29(r4)
	PPC_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
	// b 0x82f97358
	goto loc_82F97358;
loc_82F97354:
	// sth r11,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, ctx.r11.u16);
loc_82F97358:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82f97384
	if (ctx.cr6.eq) goto loc_82F97384;
	// sth r11,20(r4)
	PPC_STORE_U16(ctx.r4.u32 + 20, ctx.r11.u16);
	// sth r10,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r10.u16);
	// b 0x82f9738c
	goto loc_82F9738C;
loc_82F97384:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
loc_82F9738C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f973ac
	if (ctx.cr0.eq) goto loc_82F973AC;
	// lhz r10,26(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// b 0x82f973bc
	goto loc_82F973BC;
loc_82F973AC:
	// lhz r10,38(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82F973BC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// beq cr6,0x82f973e4
	if (ctx.cr6.eq) goto loc_82F973E4;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,26(r4)
	PPC_STORE_U16(ctx.r4.u32 + 26, ctx.r10.u16);
	// b 0x82f973f0
	goto loc_82F973F0;
loc_82F973E4:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r10.u16);
loc_82F973F0:
	// lwa r10,12(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 12));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f97408
	if (ctx.cr6.eq) goto loc_82F97408;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82f97410
	goto loc_82F97410;
loc_82F97408:
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82F97410:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwa r10,16(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 16));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,12
	ctx.r12.s64 = 12;
	// stfiwx f0,r4,r12
	PPC_STORE_U32(ctx.r4.u32 + ctx.r12.u32, ctx.f0.u32);
	// beq cr6,0x82f97444
	if (ctx.cr6.eq) goto loc_82F97444;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x82f9744c
	goto loc_82F9744C;
loc_82F97444:
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
loc_82F9744C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,16
	ctx.r12.s64 = 16;
	// stfiwx f0,r4,r12
	PPC_STORE_U32(ctx.r4.u32 + ctx.r12.u32, ctx.f0.u32);
	// bl 0x82f5d9d8
	ctx.lr = 0x82F97470;
	sub_82F5D9D8(ctx, base);
loc_82F97470:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9748c
	if (ctx.cr6.eq) goto loc_82F9748C;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x82f97490
	if (ctx.cr6.lt) goto loc_82F97490;
loc_82F9748C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F97490:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f97524
	if (!ctx.cr0.eq) goto loc_82F97524;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// beq 0x82f974b8
	if (ctx.cr0.eq) goto loc_82F974B8;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_82F974B8:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82f974f0
	if (ctx.cr6.lt) goto loc_82F974F0;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// andi. r8,r8,65471
	ctx.r8.u64 = ctx.r8.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// b 0x82f974fc
	goto loc_82F974FC;
loc_82F974F0:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// ori r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 64;
loc_82F974FC:
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// bl 0x82f5b278
	ctx.lr = 0x82F9750C;
	sub_82F5B278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x82f6d248
	ctx.lr = 0x82F97518;
	sub_82F6D248(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5b2c8
	ctx.lr = 0x82F97520;
	sub_82F5B2C8(ctx, base);
	// b 0x82f97470
	goto loc_82F97470;
loc_82F97524:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f5d010
	ctx.lr = 0x82F9752C;
	sub_82F5D010(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f97274
	if (!ctx.cr6.lt) goto loc_82F97274;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82f97274
	goto loc_82F97274;
loc_82F97540:
	// lbz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r11.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F9755C"))) PPC_WEAK_FUNC(sub_82F9755C);
PPC_FUNC_IMPL(__imp__sub_82F9755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97560"))) PPC_WEAK_FUNC(sub_82F97560);
PPC_FUNC_IMPL(__imp__sub_82F97560) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f97594
	if (!ctx.cr6.eq) goto loc_82F97594;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	ctx.lr = 0x82F97590;
	sub_82F57778(ctx, base);
	// b 0x82f975c8
	goto loc_82F975C8;
loc_82F97594:
	// subf r8,r4,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r4,r30
	ctx.r9.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82F975BC;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F975C8:
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

__attribute__((alias("__imp__sub_82F975E0"))) PPC_WEAK_FUNC(sub_82F975E0);
PPC_FUNC_IMPL(__imp__sub_82F975E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F975E8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f97674
	if (ctx.cr6.eq) goto loc_82F97674;
loc_82F97608:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f97628
	if (ctx.cr6.eq) goto loc_82F97628;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f97628
	if (!ctx.cr6.lt) goto loc_82F97628;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82f9762c
	if (!ctx.cr6.lt) goto loc_82F9762C;
loc_82F97628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F9762C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f97674
	if (!ctx.cr0.eq) goto loc_82F97674;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f97658
	if (ctx.cr6.eq) goto loc_82F97658;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f95730
	ctx.lr = 0x82F97650;
	sub_82F95730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F97658;
	sub_82EF6F38(ctx, base);
loc_82F97658:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f97668
	if (!ctx.cr6.lt) goto loc_82F97668;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F97668:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f97608
	if (ctx.cr6.lt) goto loc_82F97608;
loc_82F97674:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f97560
	ctx.lr = 0x82F97684;
	sub_82F97560(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F9768C"))) PPC_WEAK_FUNC(sub_82F9768C);
PPC_FUNC_IMPL(__imp__sub_82F9768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97690"))) PPC_WEAK_FUNC(sub_82F97690);
PPC_FUNC_IMPL(__imp__sub_82F97690) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82f950d8
	ctx.lr = 0x82F976C0;
	sub_82F950D8(ctx, base);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// sth r30,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r30.u16);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// stb r30,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r30.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r30.u8);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// stb r30,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r30.u8);
	// stb r30,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r30.u8);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// sth r30,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r30.u16);
	// stb r30,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r30.u8);
	// stb r30,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r30.u8);
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
	// stb r30,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r30.u8);
	// stb r30,183(r31)
	PPC_STORE_U8(ctx.r31.u32 + 183, ctx.r30.u8);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// sth r30,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r30.u16);
	// sth r30,190(r31)
	PPC_STORE_U16(ctx.r31.u32 + 190, ctx.r30.u16);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// bl 0x82f43978
	ctx.lr = 0x82F97738;
	sub_82F43978(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F97784"))) PPC_WEAK_FUNC(sub_82F97784);
PPC_FUNC_IMPL(__imp__sub_82F97784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97788"))) PPC_WEAK_FUNC(sub_82F97788);
PPC_FUNC_IMPL(__imp__sub_82F97788) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f977b0
	if (ctx.cr6.eq) goto loc_82F977B0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82f5e028
	ctx.lr = 0x82F977B0;
	sub_82F5E028(ctx, base);
loc_82F977B0:
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f975e0
	ctx.lr = 0x82F977D0;
	sub_82F975E0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f977f0
	if (ctx.cr6.eq) goto loc_82F977F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F977F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F977F0:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f43a70
	ctx.lr = 0x82F977FC;
	sub_82F43A70(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f9780c
	if (ctx.cr6.eq) goto loc_82F9780C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F9780C;
	sub_82EF6F38(ctx, base);
loc_82F9780C:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f43978
	ctx.lr = 0x82F97818;
	sub_82F43978(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f97828
	if (ctx.cr6.eq) goto loc_82F97828;
	// bl 0x82ef6f38
	ctx.lr = 0x82F97828;
	sub_82EF6F38(ctx, base);
loc_82F97828:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f57778
	ctx.lr = 0x82F97834;
	sub_82F57778(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f97844
	if (ctx.cr6.eq) goto loc_82F97844;
	// bl 0x82ef6f38
	ctx.lr = 0x82F97844;
	sub_82EF6F38(ctx, base);
loc_82F97844:
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

__attribute__((alias("__imp__sub_82F97858"))) PPC_WEAK_FUNC(sub_82F97858);
PPC_FUNC_IMPL(__imp__sub_82F97858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F978DC"))) PPC_WEAK_FUNC(sub_82F978DC);
PPC_FUNC_IMPL(__imp__sub_82F978DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F978E0"))) PPC_WEAK_FUNC(sub_82F978E0);
PPC_FUNC_IMPL(__imp__sub_82F978E0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,16408
	ctx.r5.s64 = ctx.r10.s64 + 16408;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f5,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// bl 0x82ef0a78
	ctx.lr = 0x82F97958;
	sub_82EF0A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97968"))) PPC_WEAK_FUNC(sub_82F97968);
PPC_FUNC_IMPL(__imp__sub_82F97968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9799C"))) PPC_WEAK_FUNC(sub_82F9799C);
PPC_FUNC_IMPL(__imp__sub_82F9799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F979A0"))) PPC_WEAK_FUNC(sub_82F979A0);
PPC_FUNC_IMPL(__imp__sub_82F979A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f97a14
	if (!ctx.cr6.eq) goto loc_82F97A14;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82f97a18
	if (ctx.cr6.eq) goto loc_82F97A18;
loc_82F97A14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F97A18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97A20"))) PPC_WEAK_FUNC(sub_82F97A20);
PPC_FUNC_IMPL(__imp__sub_82F97A20) {
	PPC_FUNC_PROLOGUE();
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// twllei r6,0
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r6
	ctx.r8.s32 = ctx.r9.s32 / ctx.r6.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r8,r6
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// divw r10,r9,r6
	ctx.r10.s32 = ctx.r9.s32 / ctx.r6.s32;
	// andc r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// andc r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// twllei r6,0
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// twlgei r9,-1
	// twlgei r8,-1
	// bgt 0x82f97a88
	if (ctx.cr0.gt) goto loc_82F97A88;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82F97A88:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97A98"))) PPC_WEAK_FUNC(sub_82F97A98);
PPC_FUNC_IMPL(__imp__sub_82F97A98) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F97AA0;
	sub_82CA2BB0(ctx, base);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lbz r28,2(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// subfic r10,r30,256
	ctx.xer.ca = ctx.r30.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r30.s64;
	// lbz r17,1(r7)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// subfic r9,r29,256
	ctx.xer.ca = ctx.r29.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r29.s64;
	// lbz r16,2(r7)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r27,r9,r10
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r20,2(r6)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r19,3(r6)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r18,0(r7)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r15,3(r7)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r21,1(r6)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r25,1(r5)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r23,3(r5)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r24,2(r5)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lbz r4,3(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// mullw r14,r9,r30
	ctx.r14.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mullw r6,r3,r27
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mullw r28,r28,r27
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r26,r14
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r14.s32);
	// add r6,r28,r5
	ctx.r6.u64 = ctx.r28.u64 + ctx.r5.u64;
	// mullw r7,r25,r14
	ctx.r7.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r14.s32);
	// mullw r27,r10,r29
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r24,r14
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r14.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r3,r23,r14
	ctx.r3.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r14.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r10,r22,r27
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r21,r27
	ctx.r6.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r27.s32);
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mullw r5,r20,r27
	ctx.r5.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r27.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r4,r19,r27
	ctx.r4.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r27.s32);
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mullw r7,r18,r3
	ctx.r7.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r17,r3
	ctx.r6.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r3.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mullw r5,r16,r3
	ctx.r5.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r15,r3
	ctx.r7.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r3.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F97BBC"))) PPC_WEAK_FUNC(sub_82F97BBC);
PPC_FUNC_IMPL(__imp__sub_82F97BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97BC0"))) PPC_WEAK_FUNC(sub_82F97BC0);
PPC_FUNC_IMPL(__imp__sub_82F97BC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82F97BC8;
	sub_82CA2BC4(ctx, base);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lbz r29,1(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subfic r10,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r31.s64;
	// lbz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subfic r9,r30,256
	ctx.xer.ca = ctx.r30.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r30.s64;
	// lbz r20,2(r7)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r21,1(r7)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mullw r28,r9,r10
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r24,1(r6)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r23,2(r6)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r26,1(r5)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mullw r19,r9,r31
	ctx.r19.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mullw r7,r29,r28
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r27,r19
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r19.s32);
	// mullw r29,r10,r30
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r7,r26,r19
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r19.s32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r5,r5,r19
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r19.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r10,r25,r29
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r7,r24,r29
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// mullw r6,r23,r29
	ctx.r6.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r5,r31,r30
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r22,r5
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r21,r5
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r20,r5
	ctx.r6.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82F97CA4"))) PPC_WEAK_FUNC(sub_82F97CA4);
PPC_FUNC_IMPL(__imp__sub_82F97CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97CA8"))) PPC_WEAK_FUNC(sub_82F97CA8);
PPC_FUNC_IMPL(__imp__sub_82F97CA8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82F97CB0;
	sub_82CA2BC4(ctx, base);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lbz r29,1(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subfic r10,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r31.s64;
	// lbz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subfic r9,r30,256
	ctx.xer.ca = ctx.r30.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r30.s64;
	// lbz r20,2(r7)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r21,1(r7)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mullw r28,r9,r10
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r24,1(r6)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r23,2(r6)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r26,1(r5)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mullw r19,r9,r31
	ctx.r19.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mullw r7,r29,r28
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r27,r19
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r19.s32);
	// mullw r29,r10,r30
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r7,r26,r19
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r19.s32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r5,r5,r19
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r19.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r10,r25,r29
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r7,r24,r29
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// mullw r6,r23,r29
	ctx.r6.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r5,r31,r30
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r22,r5
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r21,r5
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r20,r5
	ctx.r6.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82F97D94"))) PPC_WEAK_FUNC(sub_82F97D94);
PPC_FUNC_IMPL(__imp__sub_82F97D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97D98"))) PPC_WEAK_FUNC(sub_82F97D98);
PPC_FUNC_IMPL(__imp__sub_82F97D98) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subfic r11,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r31.s64;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subfic r10,r30,256
	ctx.xer.ca = ctx.r30.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r30.s64;
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r9,r5,r30
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r7,r31
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97E08"))) PPC_WEAK_FUNC(sub_82F97E08);
PPC_FUNC_IMPL(__imp__sub_82F97E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f11,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97E8C"))) PPC_WEAK_FUNC(sub_82F97E8C);
PPC_FUNC_IMPL(__imp__sub_82F97E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97E90"))) PPC_WEAK_FUNC(sub_82F97E90);
PPC_FUNC_IMPL(__imp__sub_82F97E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,2784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2784);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f97ec4
	if (ctx.cr6.lt) goto loc_82F97EC4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82F97EC4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,3(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lfs f11,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fsel f9,f13,f13,f12
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f13,f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f97efc
	if (ctx.cr6.lt) goto loc_82F97EFC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82F97EFC:
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// fsel f10,f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f13,f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f97f2c
	if (ctx.cr6.lt) goto loc_82F97F2C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82F97F2C:
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// fsel f11,f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f13,f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82f97f5c
	if (!ctx.cr6.lt) goto loc_82F97F5C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82F97F5C:
	// fctidz f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r10,-1(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lbz r9,-1(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F97FA4"))) PPC_WEAK_FUNC(sub_82F97FA4);
PPC_FUNC_IMPL(__imp__sub_82F97FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F97FA8"))) PPC_WEAK_FUNC(sub_82F97FA8);
PPC_FUNC_IMPL(__imp__sub_82F97FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F97FB0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r14,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r27.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x82fc7c58
	ctx.lr = 0x82F97FF8;
	sub_82FC7C58(ctx, base);
	// rlwinm r9,r30,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r4,r9,r28
	ctx.r4.s32 = ctx.r9.s32 / ctx.r28.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// twllei r28,0
	// twlgei r11,-1
	// bl 0x82f97a20
	ctx.lr = 0x82F98028;
	sub_82F97A20(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82f98074
	if (!ctx.cr6.gt) goto loc_82F98074;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F98040:
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// ble 0x82f98068
	if (!ctx.cr0.gt) goto loc_82F98068;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_82F98068:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f98040
	if (!ctx.cr0.eq) goto loc_82F98040;
loc_82F98074:
	// rlwinm r9,r27,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r27,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r4,r9,r31
	ctx.r4.s32 = ctx.r9.s32 / ctx.r31.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// andc r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// twllei r31,0
	// twlgei r11,-1
	// bl 0x82f97a20
	ctx.lr = 0x82F980A4;
	sub_82F97A20(ctx, base);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82f98258
	if (!ctx.cr6.gt) goto loc_82F98258;
	// lwz r23,364(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r16,r30,-1
	ctx.r16.s64 = ctx.r30.s64 + -1;
	// lwz r24,372(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// lwz r21,356(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r17,r16,r23
	ctx.r17.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r23.s32);
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82f980dc
	goto loc_82F980DC;
loc_82F980D4:
	// lwz r27,348(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,332(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82F980DC:
	// addi r10,r20,-128
	ctx.r10.s64 = ctx.r20.s64 + -128;
	// srawi. r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// blt 0x82f980f4
	if (ctx.cr0.lt) goto loc_82F980F4;
	// mullw r10,r11,r21
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82F980F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82f98104
	if (ctx.cr6.lt) goto loc_82F98104;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
loc_82F98104:
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82f98168
	if (!ctx.cr6.gt) goto loc_82F98168;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82F98124:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82f98168
	if (!ctx.cr0.lt) goto loc_82F98168;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82F98154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82f98124
	if (ctx.cr6.lt) goto loc_82F98124;
loc_82F98168:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82f981d0
	if (!ctx.cr6.lt) goto loc_82F981D0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82F9817C:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82f981d0
	if (!ctx.cr6.lt) goto loc_82F981D0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82F981BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82f9817c
	if (ctx.cr6.lt) goto loc_82F9817C;
loc_82F981D0:
	// add r27,r17,r26
	ctx.r27.u64 = ctx.r17.u64 + ctx.r26.u64;
	// add r26,r17,r29
	ctx.r26.u64 = ctx.r17.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82f98228
	if (!ctx.cr6.lt) goto loc_82F98228;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82F981F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82F98218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82f981f0
	if (!ctx.cr0.eq) goto loc_82F981F0;
loc_82F98228:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ble 0x82f98248
	if (!ctx.cr0.gt) goto loc_82F98248;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// subf r19,r11,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r11.s64;
loc_82F98248:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// bne 0x82f980d4
	if (!ctx.cr0.eq) goto loc_82F980D4;
loc_82F98258:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f98268
	if (ctx.cr6.eq) goto loc_82F98268;
	// bl 0x82ef6f38
	ctx.lr = 0x82F98268;
	sub_82EF6F38(ctx, base);
loc_82F98268:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F98270"))) PPC_WEAK_FUNC(sub_82F98270);
PPC_FUNC_IMPL(__imp__sub_82F98270) {
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
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f9832c
	if (ctx.cr6.lt) goto loc_82F9832C;
	// beq cr6,0x82f982fc
	if (ctx.cr6.eq) goto loc_82F982FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82f982cc
	if (ctx.cr6.lt) goto loc_82F982CC;
	// bne cr6,0x82f98358
	if (!ctx.cr6.eq) goto loc_82F98358;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,32152
	ctx.r11.s64 = ctx.r11.s64 + 32152;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82f97fa8
	ctx.lr = 0x82F982C8;
	sub_82F97FA8(ctx, base);
	// b 0x82f98358
	goto loc_82F98358;
loc_82F982CC:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,31912
	ctx.r11.s64 = ctx.r11.s64 + 31912;
	// li r31,3
	ctx.r31.s64 = 3;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82f97fa8
	ctx.lr = 0x82F982F8;
	sub_82F97FA8(ctx, base);
	// b 0x82f98358
	goto loc_82F98358;
loc_82F982FC:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r31,-32007
	ctx.r31.s64 = -2097610752;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r31,31384
	ctx.r11.s64 = ctx.r31.s64 + 31384;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82f97fa8
	ctx.lr = 0x82F98328;
	sub_82F97FA8(ctx, base);
	// b 0x82f98358
	goto loc_82F98358;
loc_82F9832C:
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,31680
	ctx.r11.s64 = ctx.r11.s64 + 31680;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// bl 0x82f97fa8
	ctx.lr = 0x82F98358;
	sub_82F97FA8(ctx, base);
loc_82F98358:
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

__attribute__((alias("__imp__sub_82F9836C"))) PPC_WEAK_FUNC(sub_82F9836C);
PPC_FUNC_IMPL(__imp__sub_82F9836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98370"))) PPC_WEAK_FUNC(sub_82F98370);
PPC_FUNC_IMPL(__imp__sub_82F98370) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,10933
	ctx.r8.s64 = 716505088;
	// ori r7,r8,9310
	ctx.r7.u64 = ctx.r8.u64 | 9310;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mulld r10,r10,r7
	ctx.r10.s64 = ctx.r10.s64 * ctx.r7.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r10,r9,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f983c4
	if (!ctx.cr6.lt) goto loc_82F983C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82F983C4:
	// subfic r3,r9,-2
	ctx.xer.ca = ctx.r9.u32 <= 4294967294;
	ctx.r3.s64 = -2 - ctx.r9.s64;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F983D0"))) PPC_WEAK_FUNC(sub_82F983D0);
PPC_FUNC_IMPL(__imp__sub_82F983D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27500
	ctx.r3.s64 = ctx.r11.s64 + -27500;
	// b 0x82f98370
	sub_82F98370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F983DC"))) PPC_WEAK_FUNC(sub_82F983DC);
PPC_FUNC_IMPL(__imp__sub_82F983DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F983E0"))) PPC_WEAK_FUNC(sub_82F983E0);
PPC_FUNC_IMPL(__imp__sub_82F983E0) {
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
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r10,7
	ctx.r10.s64 = 7;
	// ori r11,r11,34756
	ctx.r11.u64 = ctx.r11.u64 | 34756;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82ef8c08
	ctx.lr = 0x82F9840C;
	sub_82EF8C08(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82F98418:
	// rlwinm r8,r11,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r8,r11,15,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f98418
	if (!ctx.cr0.eq) goto loc_82F98418;
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

__attribute__((alias("__imp__sub_82F98458"))) PPC_WEAK_FUNC(sub_82F98458);
PPC_FUNC_IMPL(__imp__sub_82F98458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,16556(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98464"))) PPC_WEAK_FUNC(sub_82F98464);
PPC_FUNC_IMPL(__imp__sub_82F98464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98468"))) PPC_WEAK_FUNC(sub_82F98468);
PPC_FUNC_IMPL(__imp__sub_82F98468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,16564(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98474"))) PPC_WEAK_FUNC(sub_82F98474);
PPC_FUNC_IMPL(__imp__sub_82F98474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98478"))) PPC_WEAK_FUNC(sub_82F98478);
PPC_FUNC_IMPL(__imp__sub_82F98478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,16572(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98484"))) PPC_WEAK_FUNC(sub_82F98484);
PPC_FUNC_IMPL(__imp__sub_82F98484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98488"))) PPC_WEAK_FUNC(sub_82F98488);
PPC_FUNC_IMPL(__imp__sub_82F98488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,16580(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16580);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98494"))) PPC_WEAK_FUNC(sub_82F98494);
PPC_FUNC_IMPL(__imp__sub_82F98494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98498"))) PPC_WEAK_FUNC(sub_82F98498);
PPC_FUNC_IMPL(__imp__sub_82F98498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,16588(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16588);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F984A4"))) PPC_WEAK_FUNC(sub_82F984A4);
PPC_FUNC_IMPL(__imp__sub_82F984A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F984A8"))) PPC_WEAK_FUNC(sub_82F984A8);
PPC_FUNC_IMPL(__imp__sub_82F984A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r10,16604
	ctx.r10.s64 = ctx.r10.s64 + 16604;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82F984BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f984dc
	if (!ctx.cr0.eq) goto loc_82F984DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f984bc
	if (!ctx.cr6.eq) goto loc_82F984BC;
loc_82F984DC:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F984E8"))) PPC_WEAK_FUNC(sub_82F984E8);
PPC_FUNC_IMPL(__imp__sub_82F984E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r10,16596
	ctx.r10.s64 = ctx.r10.s64 + 16596;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82F984FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f9851c
	if (!ctx.cr0.eq) goto loc_82F9851C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f984fc
	if (!ctx.cr6.eq) goto loc_82F984FC;
loc_82F9851C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98528"))) PPC_WEAK_FUNC(sub_82F98528);
PPC_FUNC_IMPL(__imp__sub_82F98528) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82f98564
	if (!ctx.cr6.gt) goto loc_82F98564;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3920
	ctx.r5.s64 = ctx.r11.s64 + 3920;
	// b 0x82f98590
	goto loc_82F98590;
loc_82F98564:
	// cmpwi cr6,r8,-14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -14, ctx.xer);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// bge cr6,0x82f98574
	if (!ctx.cr6.lt) goto loc_82F98574;
	// li r6,14
	ctx.r6.s64 = 14;
loc_82F98574:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,16716
	ctx.r5.s64 = ctx.r11.s64 + 16716;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef0a78
	ctx.lr = 0x82F98588;
	sub_82EF0A78(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r8,10
	ctx.r8.s64 = 10;
loc_82F98590:
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r7,r11,r12
	ctx.r7.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpld cr6,r7,r10
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f985c8
	if (!ctx.cr6.eq) goto loc_82F985C8;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f985cc
	if (!ctx.cr6.eq) goto loc_82F985CC;
loc_82F985C8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82F985CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f985e0
	if (ctx.cr0.eq) goto loc_82F985E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F985E0:
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f985f8
	if (ctx.cr6.eq) goto loc_82F985F8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82F985F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f9860c
	if (ctx.cr0.eq) goto loc_82F9860C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,16704
	ctx.r4.s64 = ctx.r11.s64 + 16704;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F9860C:
	// li r11,4095
	ctx.r11.s64 = 4095;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f9862c
	if (ctx.cr6.eq) goto loc_82F9862C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82F9862C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f98640
	if (ctx.cr0.eq) goto loc_82F98640;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,16692
	ctx.r4.s64 = ctx.r11.s64 + 16692;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F98640:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82f986b8
	if (ctx.cr6.eq) goto loc_82F986B8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x82f986a0
	if (ctx.cr6.eq) goto loc_82F986A0;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x82f98684
	if (ctx.cr6.eq) goto loc_82F98684;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bne cr6,0x82f98718
	if (!ctx.cr6.eq) goto loc_82F98718;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,16688
	ctx.r5.s64 = ctx.r11.s64 + 16688;
loc_82F98674:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x82ef0a78
	ctx.lr = 0x82F98680;
	sub_82EF0A78(ctx, base);
	// b 0x82f98718
	goto loc_82F98718;
loc_82F98684:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,129
	ctx.r4.s64 = 129;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ef0a78
	ctx.lr = 0x82F9869C;
	sub_82EF0A78(ctx, base);
	// b 0x82f98718
	goto loc_82F98718;
loc_82F986A0:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,16684
	ctx.r5.s64 = ctx.r11.s64 + 16684;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82f98674
	goto loc_82F98674;
loc_82F986B8:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stb r9,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82F986D4:
	// and. r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq 0x82f986ec
	if (ctx.cr0.eq) goto loc_82F986EC;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82f986f0
	goto loc_82F986F0;
loc_82F986EC:
	// li r6,48
	ctx.r6.s64 = 48;
loc_82F986F0:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// rlwinm. r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f98700
	if (!ctx.cr0.eq) goto loc_82F98700;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F98700:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82f986d4
	if (!ctx.cr0.eq) goto loc_82F986D4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r1,255
	ctx.r31.s64 = ctx.r1.s64 + 255;
	// beq cr6,0x82f98718
	if (ctx.cr6.eq) goto loc_82F98718;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82F98718:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F9871C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7c30
	ctx.lr = 0x82F98724;
	sub_82EF7C30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_82F98748"))) PPC_WEAK_FUNC(sub_82F98748);
PPC_FUNC_IMPL(__imp__sub_82F98748) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F98764;
	sub_82F6B480(ctx, base);
	// stfd f1,48(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.f1.u64);
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

__attribute__((alias("__imp__sub_82F9877C"))) PPC_WEAK_FUNC(sub_82F9877C);
PPC_FUNC_IMPL(__imp__sub_82F9877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98780"))) PPC_WEAK_FUNC(sub_82F98780);
PPC_FUNC_IMPL(__imp__sub_82F98780) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,48(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98794"))) PPC_WEAK_FUNC(sub_82F98794);
PPC_FUNC_IMPL(__imp__sub_82F98794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98798"))) PPC_WEAK_FUNC(sub_82F98798);
PPC_FUNC_IMPL(__imp__sub_82F98798) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f987c4
	if (!ctx.cr6.eq) goto loc_82F987C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F987C4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F987DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F987E4;
	sub_82F6B480(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f04200
	ctx.lr = 0x82F987EC;
	sub_82F04200(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98800
	if (ctx.cr6.lt) goto loc_82F98800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98800;
	sub_82F6BAA0(ctx, base);
loc_82F98800:
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

__attribute__((alias("__imp__sub_82F98818"))) PPC_WEAK_FUNC(sub_82F98818);
PPC_FUNC_IMPL(__imp__sub_82F98818) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f98848
	if (!ctx.cr6.eq) goto loc_82F98848;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82f98860
	goto loc_82F98860;
loc_82F98848:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F98858;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F98860;
	sub_82F6B480(ctx, base);
loc_82F98860:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f04200
	ctx.lr = 0x82F98868;
	sub_82F04200(ctx, base);
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

__attribute__((alias("__imp__sub_82F98880"))) PPC_WEAK_FUNC(sub_82F98880);
PPC_FUNC_IMPL(__imp__sub_82F98880) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F988A8;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f68378
	ctx.lr = 0x82F988B4;
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F988BC;
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// bl 0x82f88220
	ctx.lr = 0x82F988E8;
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f988fc
	if (ctx.cr6.lt) goto loc_82F988FC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F988FC;
	sub_82F6BAA0(ctx, base);
loc_82F988FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82F98918"))) PPC_WEAK_FUNC(sub_82F98918);
PPC_FUNC_IMPL(__imp__sub_82F98918) {
	PPC_FUNC_PROLOGUE();
	// lfd f1,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// b 0x82f98528
	sub_82F98528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F98928"))) PPC_WEAK_FUNC(sub_82F98928);
PPC_FUNC_IMPL(__imp__sub_82F98928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F98930;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9894c
	if (!ctx.cr6.eq) goto loc_82F9894C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F9894C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,10
	ctx.r31.s64 = 10;
	// bl 0x82ef7600
	ctx.lr = 0x82F98958;
	sub_82EF7600(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f98988
	if (!ctx.cr6.gt) goto loc_82F98988;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F98974;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F9897C;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F98988:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfd f1,48(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f98528
	ctx.lr = 0x82F98998;
	sub_82F98528(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// bl 0x82f67308
	ctx.lr = 0x82F989AC;
	sub_82F67308(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F989CC;
	sub_82F041A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f989e4
	if (!ctx.cr0.eq) goto loc_82F989E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F989E4;
	sub_82F670F0(ctx, base);
loc_82F989E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F989F4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f989f4
	if (!ctx.cr0.eq) goto loc_82F989F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f98a20
	if (!ctx.cr0.eq) goto loc_82F98A20;
	// bl 0x82ef6f38
	ctx.lr = 0x82F98A20;
	sub_82EF6F38(ctx, base);
loc_82F98A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F98A28"))) PPC_WEAK_FUNC(sub_82F98A28);
PPC_FUNC_IMPL(__imp__sub_82F98A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F98A30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	ctx.r11.s64 = -2097545216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-30696
	ctx.r4.s64 = ctx.r11.s64 + -30696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F98A48;
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,16724
	ctx.r10.s64 = ctx.r10.s64 + 16724;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,16636
	ctx.r31.s64 = ctx.r11.s64 + 16636;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f98aec
	if (ctx.cr6.eq) goto loc_82F98AEC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F98A84:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F98A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F98AC0;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98ad4
	if (ctx.cr6.lt) goto loc_82F98AD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98AD4;
	sub_82F6BAA0(ctx, base);
loc_82F98AD4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f98a84
	if (!ctx.cr6.eq) goto loc_82F98A84;
loc_82F98AEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F98AF8"))) PPC_WEAK_FUNC(sub_82F98AF8);
PPC_FUNC_IMPL(__imp__sub_82F98AF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98B00"))) PPC_WEAK_FUNC(sub_82F98B00);
PPC_FUNC_IMPL(__imp__sub_82F98B00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f99000
	sub_82F99000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F98B08"))) PPC_WEAK_FUNC(sub_82F98B08);
PPC_FUNC_IMPL(__imp__sub_82F98B08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F98B24;
	sub_82F87FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,16864
	ctx.r10.s64 = ctx.r10.s64 + 16864;
	// addi r9,r9,16784
	ctx.r9.s64 = ctx.r9.s64 + 16784;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfd f0,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.f0.u64);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82ef7600
	ctx.lr = 0x82F98B50;
	sub_82EF7600(ctx, base);
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

__attribute__((alias("__imp__sub_82F98B68"))) PPC_WEAK_FUNC(sub_82F98B68);
PPC_FUNC_IMPL(__imp__sub_82F98B68) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F98B88:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f98b88
	if (!ctx.cr0.eq) goto loc_82F98B88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f98bb4
	if (!ctx.cr0.eq) goto loc_82F98BB4;
	// bl 0x82ef6f38
	ctx.lr = 0x82F98BB4;
	sub_82EF6F38(ctx, base);
loc_82F98BB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F98BBC;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F98BD0"))) PPC_WEAK_FUNC(sub_82F98BD0);
PPC_FUNC_IMPL(__imp__sub_82F98BD0) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F98BE4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f98c0c
	if (ctx.cr0.eq) goto loc_82F98C0C;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f98b08
	ctx.lr = 0x82F98C08;
	sub_82F98B08(ctx, base);
	// b 0x82f98c10
	goto loc_82F98C10;
loc_82F98C0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F98C10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F98C20"))) PPC_WEAK_FUNC(sub_82F98C20);
PPC_FUNC_IMPL(__imp__sub_82F98C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F98C28;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f98b08
	ctx.lr = 0x82F98C40;
	sub_82F98B08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16968
	ctx.r11.s64 = ctx.r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F98C70;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F98C7C;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,76
	ctx.r28.s64 = ctx.r31.s64 + 76;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F98C90;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F98C9C;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F98CB0;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f98880
	ctx.lr = 0x82F98CC0;
	sub_82F98880(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98cd4
	if (ctx.cr6.lt) goto loc_82F98CD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98CD4;
	sub_82F6BAA0(ctx, base);
loc_82F98CD4:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F98D00;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F98D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98d34
	if (ctx.cr6.lt) goto loc_82F98D34;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98D34;
	sub_82F6BAA0(ctx, base);
loc_82F98D34:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F98D44;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F98D50"))) PPC_WEAK_FUNC(sub_82F98D50);
PPC_FUNC_IMPL(__imp__sub_82F98D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f98fb0
	sub_82F98FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F98D58"))) PPC_WEAK_FUNC(sub_82F98D58);
PPC_FUNC_IMPL(__imp__sub_82F98D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F98D60;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82F98D94;
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82f98ddc
	if (!ctx.cr0.eq) goto loc_82F98DDC;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82F98DBC;
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f98ddc
	if (!ctx.cr0.eq) goto loc_82F98DDC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f87920
	ctx.lr = 0x82F98DD8;
	sub_82F87920(ctx, base);
	// b 0x82f98f38
	goto loc_82F98F38;
loc_82F98DDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f884e8
	ctx.lr = 0x82F98E04;
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f98e18
	if (ctx.cr0.eq) goto loc_82F98E18;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F98E18;
	sub_82F6BBB0(ctx, base);
loc_82F98E18:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f98e34
	if (ctx.cr6.eq) goto loc_82F98E34;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F98E30;
	sub_82F6BBB0(ctx, base);
	// b 0x82f98f0c
	goto loc_82F98F0C;
loc_82F98E34:
	// addi r27,r29,48
	ctx.r27.s64 = ctx.r29.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	ctx.lr = 0x82F98E48;
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f98e60
	if (ctx.cr6.eq) goto loc_82F98E60;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82F98E5C;
	sub_82F68378(ctx, base);
	// b 0x82f98e84
	goto loc_82F98E84;
loc_82F98E60:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	ctx.lr = 0x82F98E70;
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82F98E7C;
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	ctx.lr = 0x82F98E84;
	sub_82F67F08(ctx, base);
loc_82F98E84:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f98ef8
	if (!ctx.cr6.eq) goto loc_82F98EF8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f98ef8
	if (ctx.cr6.eq) goto loc_82F98EF8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F98EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F98EC8;
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98edc
	if (ctx.cr6.lt) goto loc_82F98EDC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98EDC;
	sub_82F6BAA0(ctx, base);
loc_82F98EDC:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98ef0
	if (ctx.cr6.lt) goto loc_82F98EF0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98EF0;
	sub_82F6BAA0(ctx, base);
loc_82F98EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f98f38
	goto loc_82F98F38;
loc_82F98EF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bea0
	ctx.lr = 0x82F98F04;
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F98F0C;
	sub_82F67F08(ctx, base);
loc_82F98F0C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98f20
	if (ctx.cr6.lt) goto loc_82F98F20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98F20;
	sub_82F6BAA0(ctx, base);
loc_82F98F20:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f98f34
	if (ctx.cr6.lt) goto loc_82F98F34;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F98F34;
	sub_82F6BAA0(ctx, base);
loc_82F98F34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F98F38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F98F40"))) PPC_WEAK_FUNC(sub_82F98F40);
PPC_FUNC_IMPL(__imp__sub_82F98F40) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16968
	ctx.r11.s64 = ctx.r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f98f80
	if (ctx.cr6.eq) goto loc_82F98F80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F98F80;
	sub_82F0A3F0(ctx, base);
loc_82F98F80:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82f67f08
	ctx.lr = 0x82F98F88;
	sub_82F67F08(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f67f08
	ctx.lr = 0x82F98F90;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f98b68
	ctx.lr = 0x82F98F98;
	sub_82F98B68(ctx, base);
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

__attribute__((alias("__imp__sub_82F98FAC"))) PPC_WEAK_FUNC(sub_82F98FAC);
PPC_FUNC_IMPL(__imp__sub_82F98FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F98FB0"))) PPC_WEAK_FUNC(sub_82F98FB0);
PPC_FUNC_IMPL(__imp__sub_82F98FB0) {
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
	// bl 0x82f98f40
	ctx.lr = 0x82F98FD0;
	sub_82F98F40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f98fe0
	if (ctx.cr0.eq) goto loc_82F98FE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F98FE0;
	sub_82EF6F38(ctx, base);
loc_82F98FE0:
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

__attribute__((alias("__imp__sub_82F98FFC"))) PPC_WEAK_FUNC(sub_82F98FFC);
PPC_FUNC_IMPL(__imp__sub_82F98FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99000"))) PPC_WEAK_FUNC(sub_82F99000);
PPC_FUNC_IMPL(__imp__sub_82F99000) {
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
	// bl 0x82f98b68
	ctx.lr = 0x82F99020;
	sub_82F98B68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f99030
	if (ctx.cr0.eq) goto loc_82F99030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F99030;
	sub_82EF6F38(ctx, base);
loc_82F99030:
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

__attribute__((alias("__imp__sub_82F9904C"))) PPC_WEAK_FUNC(sub_82F9904C);
PPC_FUNC_IMPL(__imp__sub_82F9904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99050"))) PPC_WEAK_FUNC(sub_82F99050);
PPC_FUNC_IMPL(__imp__sub_82F99050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F99058;
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
	// bl 0x82f98c20
	ctx.lr = 0x82F9906C;
	sub_82F98C20(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16968
	ctx.r11.s64 = ctx.r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16612
	ctx.r5.s64 = ctx.r11.s64 + 16612;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82F9909C;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F990A8"))) PPC_WEAK_FUNC(sub_82F990A8);
PPC_FUNC_IMPL(__imp__sub_82F990A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F990B4"))) PPC_WEAK_FUNC(sub_82F990B4);
PPC_FUNC_IMPL(__imp__sub_82F990B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F990B8"))) PPC_WEAK_FUNC(sub_82F990B8);
PPC_FUNC_IMPL(__imp__sub_82F990B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F990C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,532
	ctx.r3.s64 = ctx.r11.s64 + 532;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82F990F4;
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq 0x82f99150
	if (ctx.cr0.eq) goto loc_82F99150;
	// bl 0x82f87920
	ctx.lr = 0x82F99110;
	sub_82F87920(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f99124
	if (ctx.cr0.eq) goto loc_82F99124;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82f99148
	if (!ctx.cr6.eq) goto loc_82F99148;
loc_82F99124:
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x82f667f8
	ctx.lr = 0x82F9912C;
	sub_82F667F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82F99148;
	sub_82F04200(ctx, base);
loc_82F99148:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f99164
	goto loc_82F99164;
loc_82F99150:
	// bl 0x82f87920
	ctx.lr = 0x82F99154;
	sub_82F87920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82F99164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F9916C"))) PPC_WEAK_FUNC(sub_82F9916C);
PPC_FUNC_IMPL(__imp__sub_82F9916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99170"))) PPC_WEAK_FUNC(sub_82F99170);
PPC_FUNC_IMPL(__imp__sub_82F99170) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	ctx.lr = 0x82F9919C;
	sub_82F6B390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f67758
	ctx.lr = 0x82F991AC;
	sub_82F67758(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f991d4
	if (!ctx.cr6.eq) goto loc_82F991D4;
	// bl 0x82f670f0
	ctx.lr = 0x82F991D4;
	sub_82F670F0(ctx, base);
loc_82F991D4:
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

__attribute__((alias("__imp__sub_82F991E8"))) PPC_WEAK_FUNC(sub_82F991E8);
PPC_FUNC_IMPL(__imp__sub_82F991E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F99208"))) PPC_WEAK_FUNC(sub_82F99208);
PPC_FUNC_IMPL(__imp__sub_82F99208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F99210;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9922c
	if (!ctx.cr6.eq) goto loc_82F9922C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F9922C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82f99298
	if (ctx.cr6.lt) goto loc_82F99298;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F9924C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99254;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f99298
	if (ctx.cr6.lt) goto loc_82F99298;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f667f8
	ctx.lr = 0x82F99270;
	sub_82F667F8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82f99298
	if (!ctx.cr6.lt) goto loc_82F99298;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f66868
	ctx.lr = 0x82F99284;
	sub_82F66868(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x82f9929c
	goto loc_82F9929C;
loc_82F99298:
	// bl 0x82f98458
	ctx.lr = 0x82F9929C;
	sub_82F98458(ctx, base);
loc_82F9929C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f04200
	ctx.lr = 0x82F992A4;
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F992AC"))) PPC_WEAK_FUNC(sub_82F992AC);
PPC_FUNC_IMPL(__imp__sub_82F992AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F992B0"))) PPC_WEAK_FUNC(sub_82F992B0);
PPC_FUNC_IMPL(__imp__sub_82F992B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F992B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f992d4
	if (!ctx.cr6.eq) goto loc_82F992D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F992D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82f992f4
	if (!ctx.cr6.lt) goto loc_82F992F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
	// bl 0x82f04200
	ctx.lr = 0x82F992F0;
	sub_82F04200(ctx, base);
	// b 0x82f99440
	goto loc_82F99440;
loc_82F992F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99304;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F99318;
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f667f8
	ctx.lr = 0x82F99320;
	sub_82F667F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f99334
	if (!ctx.cr0.eq) goto loc_82F99334;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82f99410
	goto loc_82F99410;
loc_82F99334:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82f99380
	if (!ctx.cr6.gt) goto loc_82F99380;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F9936C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99374;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82F99380:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99388;
	sub_82EFDFA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82f993f8
	goto loc_82F993F8;
loc_82F99394:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82f993f4
	if (ctx.cr6.lt) goto loc_82F993F4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f993f4
	if (!ctx.cr6.eq) goto loc_82F993F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82f993c8
	goto loc_82F993C8;
loc_82F993B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f99448
	if (ctx.cr6.eq) goto loc_82F99448;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f993e4
	if (!ctx.cr6.eq) goto loc_82F993E4;
loc_82F993C8:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	ctx.lr = 0x82F993D0;
	sub_82EFDFA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82efdfa8
	ctx.lr = 0x82F993DC;
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f993b8
	if (!ctx.cr6.eq) goto loc_82F993B8;
loc_82F993E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f99448
	if (ctx.cr6.eq) goto loc_82F99448;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f99408
	if (ctx.cr6.eq) goto loc_82F99408;
loc_82F993F4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82F993F8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99400;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f99394
	if (!ctx.cr0.eq) goto loc_82F99394;
loc_82F99408:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
loc_82F99410:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f04200
	ctx.lr = 0x82F99418;
	sub_82F04200(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99440
	if (!ctx.cr6.eq) goto loc_82F99440;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F99440;
	sub_82F670F0(ctx, base);
loc_82F99440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82F99448:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x82f99410
	goto loc_82F99410;
}

__attribute__((alias("__imp__sub_82F9945C"))) PPC_WEAK_FUNC(sub_82F9945C);
PPC_FUNC_IMPL(__imp__sub_82F9945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99460"))) PPC_WEAK_FUNC(sub_82F99460);
PPC_FUNC_IMPL(__imp__sub_82F99460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F99468;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f99484
	if (!ctx.cr6.eq) goto loc_82F99484;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F99484:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82f994a4
	if (!ctx.cr6.lt) goto loc_82F994A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
	// bl 0x82f04200
	ctx.lr = 0x82F994A0;
	sub_82F04200(ctx, base);
	// b 0x82f9964c
	goto loc_82F9964C;
loc_82F994A4:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F994C8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F994DC;
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f667f8
	ctx.lr = 0x82F994E4;
	sub_82F667F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f99504
	if (!ctx.cr0.eq) goto loc_82F99504;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f667f8
	ctx.lr = 0x82F994F4;
	sub_82F667F8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82f995f0
	goto loc_82F995F0;
loc_82F99504:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r26,2047
	ctx.r26.s64 = 134152192;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ble cr6,0x82f99554
	if (!ctx.cr6.gt) goto loc_82F99554;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99540;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99548;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F99554:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	ctx.lr = 0x82F9955C;
	sub_82EFDFA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82f995d4
	goto loc_82F995D4;
loc_82F9956C:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82f995d0
	if (ctx.cr6.gt) goto loc_82F995D0;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f995d0
	if (!ctx.cr6.eq) goto loc_82F995D0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82f995a0
	goto loc_82F995A0;
loc_82F99590:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f995c4
	if (ctx.cr6.eq) goto loc_82F995C4;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f995bc
	if (!ctx.cr6.eq) goto loc_82F995BC;
loc_82F995A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82efdfa8
	ctx.lr = 0x82F995A8;
	sub_82EFDFA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82efdfa8
	ctx.lr = 0x82F995B4;
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f99590
	if (!ctx.cr6.eq) goto loc_82F99590;
loc_82F995BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f995c8
	if (!ctx.cr6.eq) goto loc_82F995C8;
loc_82F995C4:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F995C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f995e4
	if (ctx.cr6.eq) goto loc_82F995E4;
loc_82F995D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82F995D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82efdfa8
	ctx.lr = 0x82F995DC;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f9956c
	if (!ctx.cr0.eq) goto loc_82F9956C;
loc_82F995E4:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82F995F0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82F995FC;
	sub_82F04200(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99624
	if (!ctx.cr6.eq) goto loc_82F99624;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F99624;
	sub_82F670F0(ctx, base);
loc_82F99624:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f9964c
	if (!ctx.cr6.eq) goto loc_82F9964C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F9964C;
	sub_82F670F0(ctx, base);
loc_82F9964C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F99654"))) PPC_WEAK_FUNC(sub_82F99654);
PPC_FUNC_IMPL(__imp__sub_82F99654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99658"))) PPC_WEAK_FUNC(sub_82F99658);
PPC_FUNC_IMPL(__imp__sub_82F99658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F99660;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f9969c
	if (!ctx.cr6.eq) goto loc_82F9969C;
loc_82F9967C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82f996e4
	goto loc_82F996E4;
loc_82F9969C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f996a8
	if (!ctx.cr6.lt) goto loc_82F996A8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F996A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f667f8
	ctx.lr = 0x82F996B0;
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82f9967c
	if (!ctx.cr6.lt) goto loc_82F9967C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f996cc
	if (ctx.cr6.lt) goto loc_82F996CC;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82f996d0
	if (!ctx.cr6.gt) goto loc_82F996D0;
loc_82F996CC:
	// subf r29,r31,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82F996D0:
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f675a0
	ctx.lr = 0x82F996E4;
	sub_82F675A0(ctx, base);
loc_82F996E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F996F0"))) PPC_WEAK_FUNC(sub_82F996F0);
PPC_FUNC_IMPL(__imp__sub_82F996F0) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82f99730
	if (!ctx.cr6.eq) goto loc_82F99730;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F99710:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f99710
	if (!ctx.cr6.eq) goto loc_82F99710;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82f99734
	goto loc_82F99734;
loc_82F99730:
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82F99734:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82f99744
	if (!ctx.cr6.lt) goto loc_82F99744;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
loc_82F99744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x82f99758
	if (!ctx.cr6.gt) goto loc_82F99758;
	// bl 0x82f11500
	ctx.lr = 0x82F99750;
	sub_82F11500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f99770
	goto loc_82F99770;
loc_82F99758:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82F99770:
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

__attribute__((alias("__imp__sub_82F99784"))) PPC_WEAK_FUNC(sub_82F99784);
PPC_FUNC_IMPL(__imp__sub_82F99784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99788"))) PPC_WEAK_FUNC(sub_82F99788);
PPC_FUNC_IMPL(__imp__sub_82F99788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F99790;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f997ac
	if (!ctx.cr6.eq) goto loc_82F997AC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F997AC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f997f8
	if (ctx.cr6.lt) goto loc_82F997F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F997D0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F997D8;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82f997f8
	if (!ctx.cr6.lt) goto loc_82F997F8;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x82f667f8
	ctx.lr = 0x82F997F4;
	sub_82F667F8(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82F997F8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f99834
	if (ctx.cr6.lt) goto loc_82F99834;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99814;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F9981C;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82f99834
	if (!ctx.cr6.lt) goto loc_82F99834;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F99834:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	ctx.lr = 0x82F99848;
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99854;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f9987c
	if (!ctx.cr6.eq) goto loc_82F9987C;
	// bl 0x82f670f0
	ctx.lr = 0x82F9987C;
	sub_82F670F0(ctx, base);
loc_82F9987C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F99884"))) PPC_WEAK_FUNC(sub_82F99884);
PPC_FUNC_IMPL(__imp__sub_82F99884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99888"))) PPC_WEAK_FUNC(sub_82F99888);
PPC_FUNC_IMPL(__imp__sub_82F99888) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f998b0
	if (!ctx.cr6.eq) goto loc_82F998B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F998B0:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67bc8
	ctx.lr = 0x82F998BC;
	sub_82F67BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F998C8;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f998f0
	if (!ctx.cr6.eq) goto loc_82F998F0;
	// bl 0x82f670f0
	ctx.lr = 0x82F998F0;
	sub_82F670F0(ctx, base);
loc_82F998F0:
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

__attribute__((alias("__imp__sub_82F99904"))) PPC_WEAK_FUNC(sub_82F99904);
PPC_FUNC_IMPL(__imp__sub_82F99904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99908"))) PPC_WEAK_FUNC(sub_82F99908);
PPC_FUNC_IMPL(__imp__sub_82F99908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9991c
	if (!ctx.cr6.eq) goto loc_82F9991C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F9991C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x82f041a0
	sub_82F041A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F99928"))) PPC_WEAK_FUNC(sub_82F99928);
PPC_FUNC_IMPL(__imp__sub_82F99928) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f99950
	if (!ctx.cr6.eq) goto loc_82F99950;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F99950:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67678
	ctx.lr = 0x82F9995C;
	sub_82F67678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99968;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99990
	if (!ctx.cr6.eq) goto loc_82F99990;
	// bl 0x82f670f0
	ctx.lr = 0x82F99990;
	sub_82F670F0(ctx, base);
loc_82F99990:
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

__attribute__((alias("__imp__sub_82F999A4"))) PPC_WEAK_FUNC(sub_82F999A4);
PPC_FUNC_IMPL(__imp__sub_82F999A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F999A8"))) PPC_WEAK_FUNC(sub_82F999A8);
PPC_FUNC_IMPL(__imp__sub_82F999A8) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f999e4
	if (!ctx.cr6.eq) goto loc_82F999E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f041a0
	ctx.lr = 0x82F999E0;
	sub_82F041A0(ctx, base);
	// b 0x82f99a3c
	goto loc_82F99A3C;
loc_82F999E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F999F4;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F99A08;
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99A14;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99a3c
	if (!ctx.cr6.eq) goto loc_82F99A3C;
	// bl 0x82f670f0
	ctx.lr = 0x82F99A3C;
	sub_82F670F0(ctx, base);
loc_82F99A3C:
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

__attribute__((alias("__imp__sub_82F99A54"))) PPC_WEAK_FUNC(sub_82F99A54);
PPC_FUNC_IMPL(__imp__sub_82F99A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99A58"))) PPC_WEAK_FUNC(sub_82F99A58);
PPC_FUNC_IMPL(__imp__sub_82F99A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F99A60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f99a7c
	if (!ctx.cr6.eq) goto loc_82F99A7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F99A7C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99AAC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99AB4;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f99b2c
	if (ctx.cr6.lt) goto loc_82F99B2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f667f8
	ctx.lr = 0x82F99AD0;
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82f99b2c
	if (!ctx.cr6.lt) goto loc_82F99B2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f66868
	ctx.lr = 0x82F99AE4;
	sub_82F66868(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f67520
	ctx.lr = 0x82F99AF4;
	sub_82F67520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F99B04;
	sub_82F0B778(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99b2c
	if (!ctx.cr6.eq) goto loc_82F99B2C;
	// bl 0x82f670f0
	ctx.lr = 0x82F99B2C;
	sub_82F670F0(ctx, base);
loc_82F99B2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99B38;
	sub_82F041A0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99b60
	if (!ctx.cr6.eq) goto loc_82F99B60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F99B60;
	sub_82F670F0(ctx, base);
loc_82F99B60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F99B68"))) PPC_WEAK_FUNC(sub_82F99B68);
PPC_FUNC_IMPL(__imp__sub_82F99B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F99B70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f99b8c
	if (!ctx.cr6.eq) goto loc_82F99B8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F99B8C:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7700
	ctx.lr = 0x82F99BA0;
	sub_82EF7700(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f99c1c
	if (!ctx.cr6.gt) goto loc_82F99C1C;
loc_82F99BB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99BC0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F99BD4;
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F99BE4;
	sub_82EF8018(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99c0c
	if (!ctx.cr6.eq) goto loc_82F99C0C;
	// bl 0x82f670f0
	ctx.lr = 0x82F99C0C;
	sub_82F670F0(ctx, base);
loc_82F99C0C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f99bb0
	if (ctx.cr6.lt) goto loc_82F99BB0;
loc_82F99C1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f040d8
	ctx.lr = 0x82F99C34;
	sub_82F040D8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99C40;
	sub_82F041A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f99c58
	if (!ctx.cr0.eq) goto loc_82F99C58;
	// bl 0x82f670f0
	ctx.lr = 0x82F99C58;
	sub_82F670F0(ctx, base);
loc_82F99C58:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F99C68:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f99c68
	if (!ctx.cr0.eq) goto loc_82F99C68;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f99c94
	if (!ctx.cr0.eq) goto loc_82F99C94;
	// bl 0x82ef6f38
	ctx.lr = 0x82F99C94;
	sub_82EF6F38(ctx, base);
loc_82F99C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F99C9C"))) PPC_WEAK_FUNC(sub_82F99C9C);
PPC_FUNC_IMPL(__imp__sub_82F99C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F99CA0"))) PPC_WEAK_FUNC(sub_82F99CA0);
PPC_FUNC_IMPL(__imp__sub_82F99CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F99CA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f99cc4
	if (!ctx.cr6.eq) goto loc_82F99CC4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F99CC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f99cfc
	if (ctx.cr6.lt) goto loc_82F99CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99CE8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99CF0;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F99CFC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f99d50
	if (ctx.cr6.lt) goto loc_82F99D50;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F99D18;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F99D20;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82f99d4c
	if (!ctx.cr6.lt) goto loc_82F99D4C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f041a0
	ctx.lr = 0x82F99D48;
	sub_82F041A0(ctx, base);
	// b 0x82f99d98
	goto loc_82F99D98;
loc_82F99D4C:
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82F99D50:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	ctx.lr = 0x82F99D64;
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F99D70;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f99d98
	if (!ctx.cr6.eq) goto loc_82F99D98;
	// bl 0x82f670f0
	ctx.lr = 0x82F99D98;
	sub_82F670F0(ctx, base);
loc_82F99D98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F99DA0"))) PPC_WEAK_FUNC(sub_82F99DA0);
PPC_FUNC_IMPL(__imp__sub_82F99DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F99DA8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r4,120
	ctx.r24.s64 = ctx.r4.s64 + 120;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x82f1c070
	ctx.lr = 0x82F99DD8;
	sub_82F1C070(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f99df8
	if (ctx.cr6.eq) goto loc_82F99DF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F99DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F99DF8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f99e1c
	if (ctx.cr6.eq) goto loc_82F99E1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F99E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F99E1C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82f99e34
	if (!ctx.cr6.lt) goto loc_82F99E34;
	// li r22,0
	ctx.r22.s64 = 0;
loc_82F99E34:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82f99e7c
	if (!ctx.cr6.eq) goto loc_82F99E7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	ctx.lr = 0x82F99E64;
	sub_82F9CB58(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9a0f0
	if (ctx.cr6.lt) goto loc_82F9A0F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F99E78;
	sub_82F6BAA0(ctx, base);
	// b 0x82f9a0f0
	goto loc_82F9A0F0;
loc_82F99E7C:
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f99f70
	if (!ctx.cr6.eq) goto loc_82F99F70;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7600
	ctx.lr = 0x82F99E90;
	sub_82EF7600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99E98;
	sub_82EFDFA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f99f30
	if (ctx.cr0.eq) goto loc_82F99F30;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82F99EA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef85e0
	ctx.lr = 0x82F99EAC;
	sub_82EF85E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef78a0
	ctx.lr = 0x82F99EB8;
	sub_82EF78A0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,520
	ctx.r4.s64 = ctx.r11.s64 + 520;
	// bl 0x82f040d8
	ctx.lr = 0x82F99ED0;
	sub_82F040D8(ctx, base);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82f9cb58
	ctx.lr = 0x82F99EF4;
	sub_82F9CB58(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f99f08
	if (ctx.cr6.lt) goto loc_82F99F08;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F99F08;
	sub_82F6BAA0(ctx, base);
loc_82F99F08:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x82f99f20
	if (!ctx.cr0.eq) goto loc_82F99F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F99F20;
	sub_82F670F0(ctx, base);
loc_82F99F20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99F28;
	sub_82EFDFA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82f99ea4
	if (!ctx.cr0.eq) goto loc_82F99EA4;
loc_82F99F30:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F99F40:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f99f40
	if (!ctx.cr0.eq) goto loc_82F99F40;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f9a0f0
	if (!ctx.cr0.eq) goto loc_82F9A0F0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F99F6C;
	sub_82EF6F38(ctx, base);
	// b 0x82f9a0f0
	goto loc_82F9A0F0;
loc_82F99F70:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82F99F7C:
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F99F88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99F94;
	sub_82EFDFA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	ctx.lr = 0x82F99FA0;
	sub_82EFDFA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f99fb0
	if (!ctx.cr6.eq) goto loc_82F99FB0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F99FB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f99fd0
	if (ctx.cr6.eq) goto loc_82F99FD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f99fd8
	if (ctx.cr6.eq) goto loc_82F99FD8;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f99f88
	if (ctx.cr6.eq) goto loc_82F99F88;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82F99FD0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f9a068
	if (!ctx.cr6.eq) goto loc_82F9A068;
loc_82F99FD8:
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x82f9a0f0
	if (!ctx.cr6.lt) goto loc_82F9A0F0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f996f0
	ctx.lr = 0x82F99FF4;
	sub_82F996F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	ctx.lr = 0x82F9A01C;
	sub_82F9CB58(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9a030
	if (ctx.cr6.lt) goto loc_82F9A030;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9A030;
	sub_82F6BAA0(ctx, base);
loc_82F9A030:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f9a058
	if (!ctx.cr6.eq) goto loc_82F9A058;
	// bl 0x82f670f0
	ctx.lr = 0x82F9A058;
	sub_82F670F0(ctx, base);
loc_82F9A058:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82F9A068:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f99f7c
	if (!ctx.cr6.eq) goto loc_82F99F7C;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x82f9a0f0
	if (!ctx.cr6.lt) goto loc_82F9A0F0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82f996f0
	ctx.lr = 0x82F9A08C;
	sub_82F996F0(ctx, base);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	ctx.lr = 0x82F9A0B4;
	sub_82F9CB58(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9a0c8
	if (ctx.cr6.lt) goto loc_82F9A0C8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9A0C8;
	sub_82F6BAA0(ctx, base);
loc_82F9A0C8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f9a0f0
	if (!ctx.cr6.eq) goto loc_82F9A0F0;
	// bl 0x82f670f0
	ctx.lr = 0x82F9A0F0;
	sub_82F670F0(ctx, base);
loc_82F9A0F0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F9A0FC"))) PPC_WEAK_FUNC(sub_82F9A0FC);
PPC_FUNC_IMPL(__imp__sub_82F9A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9A100"))) PPC_WEAK_FUNC(sub_82F9A100);
PPC_FUNC_IMPL(__imp__sub_82F9A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F9A108;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9a124
	if (!ctx.cr6.eq) goto loc_82F9A124;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F9A124:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f9a15c
	if (ctx.cr6.lt) goto loc_82F9A15C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F9A148;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F9A150;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82F9A15C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f9a1d8
	if (ctx.cr6.lt) goto loc_82F9A1D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F9A178;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F9A180;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82f9a1c8
	if (!ctx.cr6.lt) goto loc_82F9A1C8;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x82f667f8
	ctx.lr = 0x82F9A19C;
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82f9a1bc
	if (ctx.cr6.lt) goto loc_82F9A1BC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f041a0
	ctx.lr = 0x82F9A1B8;
	sub_82F041A0(ctx, base);
	// b 0x82f9a220
	goto loc_82F9A220;
loc_82F9A1BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82F9A1C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f9a1d4
	if (!ctx.cr6.lt) goto loc_82F9A1D4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F9A1D4:
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82F9A1D8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	ctx.lr = 0x82F9A1EC;
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F9A1F8;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f9a220
	if (!ctx.cr6.eq) goto loc_82F9A220;
	// bl 0x82f670f0
	ctx.lr = 0x82F9A220;
	sub_82F670F0(ctx, base);
loc_82F9A220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F9A228"))) PPC_WEAK_FUNC(sub_82F9A228);
PPC_FUNC_IMPL(__imp__sub_82F9A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F9A230;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	ctx.r11.s64 = -2097545216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-26200
	ctx.r4.s64 = ctx.r11.s64 + -26200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F9A248;
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,17080
	ctx.r10.s64 = ctx.r10.s64 + 17080;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,17064
	ctx.r31.s64 = ctx.r11.s64 + 17064;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9a2e4
	if (ctx.cr6.eq) goto loc_82F9A2E4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F9A284:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F9A2A0;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F9A2B8;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9a2cc
	if (ctx.cr6.lt) goto loc_82F9A2CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9A2CC;
	sub_82F6BAA0(ctx, base);
loc_82F9A2CC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f9a284
	if (!ctx.cr6.eq) goto loc_82F9A284;
loc_82F9A2E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

