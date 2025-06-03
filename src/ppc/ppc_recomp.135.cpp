#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82D48A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mflr r12
	// bl 0x82ca2bd8
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5784) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d48db4
	if (cr6.eq) goto loc_82D48DB4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r11,7864
	r28.s64 = r11.s64 + 7864;
	// addi r31,r10,6256
	r31.s64 = ctx.r10.s64 + 6256;
	// addi r30,r9,8376
	r30.s64 = ctx.r9.s64 + 8376;
loc_82D48A5C:
	// lwz r11,5788(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5788) );
	// lwz r10,5776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5776) );
	// lhzx r6,r27,r11
	ctx.r6.u64 = PPC_LOAD_U16(r27.u32 + r11.u32);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// lbzx r7,r29,r10
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x82d48b1c
	if (!cr0.eq) goto loc_82D48B1C;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82d48b04
	if (!cr6.gt) goto loc_82D48B04;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82D48AD8:
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82d48da4
	goto loc_82D48DA4;
loc_82D48B04:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// b 0x82d48da8
	goto loc_82D48DA8;
loc_82D48B1C:
	// lbzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r30.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = rotl32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lhz r26,5808(r3)
	r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82d48bb0
	if (!cr6.gt) goto loc_82D48BB0;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r25,20(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// lwz r24,8(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r24,r25
	PPC_STORE_U8(r24.u32 + r25.u32, r11.u8);
	// lwz r25,8(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(r11.u32 + r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r25,r11,16
	xer.ca = r11.u32 <= 16;
	r25.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x82d48bc4
	goto loc_82D48BC4;
loc_82D48BB0:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D48BC4:
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d48c68
	if (cr6.eq) goto loc_82D48C68;
	// addi r10,r31,2376
	ctx.r10.s64 = r31.s64 + 2376;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x82d48c54
	if (!cr6.gt) goto loc_82D48C54;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82d48c64
	goto loc_82D48C64;
loc_82D48C54:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82D48C64:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
loc_82D48C68:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// bge cr6,0x82d48c7c
	if (!cr6.lt) goto loc_82D48C7C;
	// lbzx r11,r7,r28
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + r28.u32);
	// b 0x82d48c88
	goto loc_82D48C88;
loc_82D48C7C:
	// rlwinm r11,r7,25,7,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_82D48C88:
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3FC;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lhz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82d48d14
	if (!cr6.gt) goto loc_82D48D14;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r26,20(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r6,r26
	PPC_STORE_U8(ctx.r6.u32 + r26.u32, r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lbz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stbx r6,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r6,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r6.s64 = 16 - r11.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x82d48d28
	goto loc_82D48D28;
loc_82D48D14:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D48D28:
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d48da8
	if (cr6.eq) goto loc_82D48DA8;
	// addi r10,r31,2496
	ctx.r10.s64 = r31.s64 + 2496;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x82d48d94
	if (!cr6.gt) goto loc_82D48D94;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x82d48ad8
	goto loc_82D48AD8;
loc_82D48D94:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82D48DA4:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
loc_82D48DA8:
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5784) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82d48a5c
	if (cr6.lt) goto loc_82D48A5C;
loc_82D48DB4:
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x82d48e34
	if (!cr6.gt) goto loc_82D48E34;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r8,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82d48e48
	goto loc_82D48E48;
loc_82D48E34:
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D48E48:
	// lhz r11,1026(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, r11.u32);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D48A28) {
	__imp__sub_82D48A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D48E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8912
	r11.s64 = r11.s64 + 8912;
	// addi r9,r3,140
	ctx.r9.s64 = ctx.r3.s64 + 140;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// addi r7,r11,-40
	ctx.r7.s64 = r11.s64 + -40;
	// stw r11,2864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2864, r11.u32);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// stw r9,2832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2832, ctx.r9.u32);
	// stw r7,2840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2840, ctx.r7.u32);
	// addi r8,r3,2432
	ctx.r8.s64 = ctx.r3.s64 + 2432;
	// addi r7,r3,2676
	ctx.r7.s64 = ctx.r3.s64 + 2676;
	// stw r11,2852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2852, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,2844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2844, ctx.r8.u32);
	// stw r7,2856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2856, ctx.r7.u32);
	// li r11,286
	r11.s64 = 286;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// stw r6,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r6.u32);
loc_82D48EA4:
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d48ea4
	if (!cr0.eq) goto loc_82D48EA4;
	// li r11,30
	r11.s64 = 30;
loc_82D48EB8:
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d48eb8
	if (!cr0.eq) goto loc_82D48EB8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r11,19
	r11.s64 = 19;
loc_82D48ED0:
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d48ed0
	if (!cr0.eq) goto loc_82D48ED0;
	// li r11,1
	r11.s64 = 1;
	// stw r10,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, ctx.r10.u32);
	// stw r10,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// sth r11,1164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1164, r11.u16);
	// stw r10,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r10.u32);
	// stw r10,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D48E58) {
	__imp__sub_82D48E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D48F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// li r26,-1
	r26.s64 = -1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r28,12(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r25,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r25.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r9,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r9.u32);
	// ble cr6,0x82d48f8c
	if (!cr6.gt) goto loc_82D48F8C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82D48F44:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82d48f78
	if (cr0.eq) goto loc_82D48F78;
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// stb r25,5200(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5200, r25.u8);
	// b 0x82d48f7c
	goto loc_82D48F7C;
loc_82D48F78:
	// sth r25,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, r25.u16);
loc_82D48F7C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x82d48f44
	if (cr6.lt) goto loc_82D48F44;
loc_82D48F8C:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82d49010
	if (!cr6.lt) goto loc_82D49010;
	// addi r8,r3,5200
	ctx.r8.s64 = ctx.r3.s64 + 5200;
loc_82D48F9C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bge cr6,0x82d48fb0
	if (!cr6.lt) goto loc_82D48FB0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82d48fb4
	goto loc_82D48FB4;
loc_82D48FB0:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82D48FB4:
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r5,r10,725
	ctx.r5.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// sthx r6,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r6.u16);
	// stbx r25,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, r25.u8);
	// lwz r11,5792(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5792) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r11.u32);
	// beq cr6,0x82d49004
	if (cr6.eq) goto loc_82D49004;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5796) );
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r11.u32);
loc_82D49004:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82d48f9c
	if (cr6.lt) goto loc_82D48F9C;
loc_82D49010:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// b 0x82d49034
	goto loc_82D49034;
loc_82D49024:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d47dc0
	sub_82D47DC0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82D49034:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bge cr6,0x82d49024
	if (!cr6.lt) goto loc_82D49024;
	// rlwinm r11,r28,2,0,29
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r3,5200
	r31.s64 = ctx.r3.s64 + 5200;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
loc_82D49048:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2904(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2904) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,725
	ctx.r10.s64 = r11.s64 + 725;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r11.u32);
	// stw r10,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x82d47dc0
	sub_82D47DC0(ctx, base);
	// rlwinm r11,r24,2,0,29
	r11.u64 = rotl64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,2904(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2904) );
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5196) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r24.u32);
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5196) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbzx r11,r31,r7
	r11.u64 = PPC_LOAD_U8(r31.u32 + ctx.r7.u32);
	// lbzx r8,r31,r24
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + r24.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82d490e4
	if (cr6.lt) goto loc_82D490E4;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82D490E4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r28,16
	ctx.r8.u64 = r28.u32 & 0xFFFF;
	// stbx r11,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, r28.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x82d47dc0
	sub_82D47DC0(ctx, base);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5192) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82d49048
	if (!cr6.lt) goto loc_82D49048;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5196) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2904) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = r11.s64 + 725;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82d47eb0
	sub_82D47EB0(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// li r11,15
	r11.s64 = 15;
loc_82D49150:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,1,16,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFE;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x82d49150
	if (!cr0.eq) goto loc_82D49150;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x82d491d4
	if (cr6.lt) goto loc_82D491D4;
	// addi r6,r26,1
	ctx.r6.s64 = r26.s64 + 1;
loc_82D49180:
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82d491c8
	if (cr0.eq) goto loc_82D491C8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lhzx r11,r10,r9
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// sthx r5,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u16);
loc_82D491A8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt 0x82d491a8
	if (cr0.gt) goto loc_82D491A8;
	// rlwinm r11,r7,31,16,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_82D491C8:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82d49180
	if (!cr0.eq) goto loc_82D49180;
loc_82D491D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D48F00) {
	__imp__sub_82D48F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D491E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x82d49258
	if (!cr6.gt) goto loc_82D49258;
	// slw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// b 0x82d49268
	goto loc_82D49268;
loc_82D49258:
	// slw r8,r6,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82D49268:
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82d492a8
	if (!cr6.gt) goto loc_82D492A8;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r7.u8);
	// b 0x82d492c0
	goto loc_82D492C0;
loc_82D492A8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d492cc
	if (!cr6.gt) goto loc_82D492CC;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
loc_82D492C0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_82D492CC:
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// li r11,0
	r11.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r6,8
	ctx.r6.s64 = 8;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// rlwinm r31,r5,24,24,31
	r31.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r6,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r6.u32);
	// not r6,r5
	ctx.r6.u64 = ~ctx.r5.u64;
	// stbx r5,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r6,r6,24,24,31
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r31,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, r31.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// beq cr6,0x82d49370
	if (cr6.eq) goto loc_82D49370;
loc_82D4934C:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r8.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bne 0x82d4934c
	if (!cr0.eq) goto loc_82D4934C;
loc_82D49370:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D491E0) {
	__imp__sub_82D491E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// li r8,2
	ctx.r8.s64 = 2;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x82d493f0
	if (!cr6.gt) goto loc_82D493F0;
	// slw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r9,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r9.s64 = 16 - r11.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82d49404
	goto loc_82D49404;
loc_82D493F0:
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// slw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D49404:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// li r11,0
	r11.s64 = 0;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x82d4947c
	if (!cr6.gt) goto loc_82D4947C;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r7,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r10.s64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// b 0x82d49490
	goto loc_82D49490;
loc_82D4947C:
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82D49490:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x82d494d0
	if (!cr6.eq) goto loc_82D494D0;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// b 0x82d494fc
	goto loc_82D494FC;
loc_82D494D0:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x82d49508
	if (cr6.lt) goto loc_82D49508;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,5812(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r7,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
loc_82D494FC:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82D49508:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// lwz r9,5804(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5804) );
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bge cr6,0x82d49698
	if (!cr6.lt) goto loc_82D49698;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// ble cr6,0x82d4958c
	if (!cr6.gt) goto loc_82D4958C;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lbz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r7,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r10.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r10,-13
	ctx.r10.s64 = ctx.r10.s64 + -13;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// b 0x82d4959c
	goto loc_82D4959C;
loc_82D4958C:
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
loc_82D4959C:
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x82d49610
	if (!cr6.gt) goto loc_82D49610;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// sth r8,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r8.u16);
	// b 0x82d49620
	goto loc_82D49620;
loc_82D49610:
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
loc_82D49620:
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x82d49660
	if (!cr6.eq) goto loc_82D49660;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// b 0x82d49688
	goto loc_82D49688;
loc_82D49660:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x82d49698
	if (cr6.lt) goto loc_82D49698;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
loc_82D49688:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82D49698:
	// li r11,7
	r11.s64 = 7;
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D49378) {
	__imp__sub_82D49378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D496A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r28,r11,6372
	r28.s64 = r11.s64 + 6372;
	// ble cr6,0x82d497e4
	if (!cr6.gt) goto loc_82D497E4;
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82d49758
	if (!cr6.eq) goto loc_82D49758;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// li r11,7
	r11.s64 = 7;
loc_82D496F8:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x82d496f8
	if (!cr0.eq) goto loc_82D496F8;
	// addi r10,r3,168
	ctx.r10.s64 = ctx.r3.s64 + 168;
	// li r11,121
	r11.s64 = 121;
loc_82D49714:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne 0x82d49714
	if (!cr0.eq) goto loc_82D49714;
	// addi r10,r3,652
	ctx.r10.s64 = ctx.r3.s64 + 652;
	// li r11,128
	r11.s64 = 128;
loc_82D49730:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x82d49730
	if (!cr0.eq) goto loc_82D49730;
	// rlwinm r11,r7,30,2,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
loc_82D49758:
	// addi r4,r3,2832
	ctx.r4.s64 = ctx.r3.s64 + 2832;
	// bl 0x82d48f00
	sub_82D48F00(ctx, base);
	// addi r4,r3,2844
	ctx.r4.s64 = ctx.r3.s64 + 2844;
	// bl 0x82d48f00
	sub_82D48F00(ctx, base);
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// lwz r5,2836(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2836) );
	// bl 0x82d480f8
	sub_82D480F8(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// lwz r5,2848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2848) );
	// bl 0x82d480f8
	sub_82D480F8(ctx, base);
	// addi r4,r3,2856
	ctx.r4.s64 = ctx.r3.s64 + 2856;
	// bl 0x82d48f00
	sub_82D48F00(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
loc_82D4978C:
	// lbzx r11,r10,r28
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r28.u32);
	// rotlwi r11,r11,2
	r11.u64 = rotl32(r11.u32, 2);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lhz r11,2678(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2678);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82d497b0
	if (!cr0.eq) goto loc_82D497B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82d4978c
	if (!cr6.lt) goto loc_82D4978C;
loc_82D497B0:
	// lwz r8,5792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5792) );
	// mulli r11,r10,3
	r11.s64 = ctx.r10.s64 * 3;
	// lwz r9,5796(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5796) );
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,10
	ctx.r8.s64 = r11.s64 + 10;
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r11.u32);
	// rlwinm r11,r8,29,3,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bgt cr6,0x82d497ec
	if (cr6.gt) goto loc_82D497EC;
	// b 0x82d497e8
	goto loc_82D497E8;
loc_82D497E4:
	// addi r9,r31,5
	ctx.r9.s64 = r31.s64 + 5;
loc_82D497E8:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D497EC:
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bgt cr6,0x82d49814
	if (cr6.gt) goto loc_82D49814;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d49814
	if (cr6.eq) goto loc_82D49814;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d491e0
	sub_82D491E0(ctx, base);
	// b 0x82d49964
	goto loc_82D49964;
loc_82D49814:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82d498b4
	if (!cr6.eq) goto loc_82D498B4;
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// ble cr6,0x82d49894
	if (!cr6.gt) goto loc_82D49894;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r8,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r8.s64 = 16 - r11.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82d498a8
	goto loc_82D498A8;
loc_82D49894:
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r8,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D498A8:
	// addi r5,r28,1372
	ctx.r5.s64 = r28.s64 + 1372;
	// addi r4,r28,220
	ctx.r4.s64 = r28.s64 + 220;
	// b 0x82d49960
	goto loc_82D49960;
loc_82D498B4:
	// lwz r9,5812(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// ble cr6,0x82d4992c
	if (!cr6.gt) goto loc_82D4992C;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// subfic r9,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r9.s64 = 16 - r11.s64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r9,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82d49940
	goto loc_82D49940;
loc_82D4992C:
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r7,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82D49940:
	// lwz r9,2848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2848) );
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r11,2836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(2836) );
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82d48770
	sub_82D48770(ctx, base);
	// addi r5,r3,2432
	ctx.r5.s64 = ctx.r3.s64 + 2432;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
loc_82D49960:
	// bl 0x82d48a28
	sub_82D48A28(ctx, base);
loc_82D49964:
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// li r11,286
	r11.s64 = 286;
loc_82D4996C:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d4996c
	if (!cr0.eq) goto loc_82D4996C;
	// addi r10,r3,2432
	ctx.r10.s64 = ctx.r3.s64 + 2432;
	// li r11,30
	r11.s64 = 30;
loc_82D49984:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d49984
	if (!cr0.eq) goto loc_82D49984;
	// addi r10,r3,2676
	ctx.r10.s64 = ctx.r3.s64 + 2676;
	// li r11,19
	r11.s64 = 19;
loc_82D4999C:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d4999c
	if (!cr0.eq) goto loc_82D4999C;
	// li r11,1
	r11.s64 = 1;
	// stw r27,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r27.u32);
	// stw r27,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// sth r11,1164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1164, r11.u16);
	// stw r27,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, r27.u32);
	// stw r27,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, r27.u32);
	// beq cr6,0x82d49a30
	if (cr6.eq) goto loc_82D49A30;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(5812) );
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82d49a04
	if (!cr6.gt) goto loc_82D49A04;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x82d49a1c
	goto loc_82D49A1C;
loc_82D49A04:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d49a28
	if (!cr6.gt) goto loc_82D49A28;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
loc_82D49A1C:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_82D49A28:
	// sth r27,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r27.u16);
	// stw r27,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r27.u32);
loc_82D49A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D496A8) {
	__imp__sub_82D496A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mullw r29,r4,r30
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f4d88
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82d49a88
	if (cr0.eq) goto loc_82D49A88;
	// divwu r11,r31,r30
	r11.u32 = r31.u32 / r30.u32;
	// twllei r30,0
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82d49a78
	if (cr0.eq) goto loc_82D49A78;
	// twi 31,r0,22
loc_82D49A78:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82D49A88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D49A38) {
	__imp__sub_82D49A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49A98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D49A98) {
	__imp__sub_82D49A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49AA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d49ad4
	if (cr6.eq) goto loc_82D49AD4;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_82D49AD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82d49ae8
	if (cr6.eq) goto loc_82D49AE8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82d49afc
	if (!cr6.eq) goto loc_82D49AFC;
loc_82D49AE8:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D49AFC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82d49b14
	if (!cr6.eq) goto loc_82D49B14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82d4d670
	sub_82D4D670(ctx, base);
loc_82D49B14:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x82d49b58
	if (cr6.eq) goto loc_82D49B58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82D49B58:
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

PPC_WEAK_FUNC(sub_82D49AA8) {
	__imp__sub_82D49AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82d49bb0
	if (!cr0.eq) goto loc_82D49BB0;
loc_82D49BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d49c50
	goto loc_82D49C50;
loc_82D49BB0:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// li r5,1440
	ctx.r5.s64 = 1440;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// bne 0x82d49bec
	if (!cr0.eq) goto loc_82D49BEC;
loc_82D49BD8:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d49ba8
	goto loc_82D49BA8;
loc_82D49BEC:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82d49c28
	if (!cr0.eq) goto loc_82D49C28;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// b 0x82d49bd8
	goto loc_82D49BD8;
loc_82D49C28:
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d49aa8
	sub_82D49AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82D49C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D49B70) {
	__imp__sub_82D49B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D49C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r24,4(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// lwz r27,32(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bge cr6,0x82d49c9c
	if (!cr6.lt) goto loc_82D49C9C;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x82d49ca4
	goto loc_82D49CA4;
loc_82D49C9C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// subf r23,r26,r11
	r23.s64 = r11.s64 - r26.s64;
loc_82D49CA4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x82d4a394
	if (cr6.gt) goto loc_82D4A394;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r21,0
	r21.s64 = 0;
	// li r18,6
	r18.s64 = 6;
	// li r16,7
	r16.s64 = 7;
	// li r20,9
	r20.s64 = 9;
	// addi r19,r11,14224
	r19.s64 = r11.s64 + 14224;
	// addi r17,r10,8976
	r17.s64 = ctx.r10.s64 + 8976;
loc_82D49CD0:
	// lis r12,-32254
	r12.s64 = -2113798144;
	// addi r12,r12,9056
	r12.s64 = r12.s64 + 9056;
	// rlwinm r0,r9,1,0,30
	r0.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32043
	r12.s64 = -2099970048;
	// addi r12,r12,-25352
	r12.s64 = r12.s64 + -25352;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82D49D1C;
	case 1:
		goto loc_82D49E10;
	case 2:
		goto loc_82D49E64;
	case 3:
		goto loc_82D49F9C;
	case 4:
		goto loc_82D4A060;
	case 5:
		goto loc_82D4A0DC;
	case 6:
		goto loc_82D4A2F0;
	case 7:
		goto loc_82D4A468;
	case 8:
		goto loc_82D4A498;
	case 9:
		goto loc_82D4A4A0;
	default:
		__builtin_unreachable();
	}
loc_82D49CF8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D49D1C:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x82d49cf8
	if (cr6.lt) goto loc_82D49CF8;
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// rlwinm r11,r27,31,30,31
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 31) & 0x3;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82d49dcc
	if (cr6.lt) goto loc_82D49DCC;
	// beq cr6,0x82d49d80
	if (cr6.eq) goto loc_82D49D80;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82d49d70
	if (cr6.lt) goto loc_82D49D70;
	// bne cr6,0x82d4a388
	if (!cr6.eq) goto loc_82D4A388;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
	// addi r10,r28,-3
	ctx.r10.s64 = r28.s64 + -3;
	// addi r11,r11,-25576
	r11.s64 = r11.s64 + -25576;
	// rlwinm r9,r27,29,3,31
	ctx.r9.u64 = rotl64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// b 0x82d4a3a0
	goto loc_82D4A3A0;
loc_82D49D70:
	// li r11,3
	r11.s64 = 3;
	// rlwinm r27,r27,29,3,31
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x82d49e5c
	goto loc_82D49E5C;
loc_82D49D80:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82d4de00
	sub_82D4DE00(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// bl 0x82d4cfe0
	sub_82D4CFE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82d4a3e8
	if (cr0.eq) goto loc_82D4A3E8;
	// rlwinm r27,r27,29,3,31
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x82d4a388
	goto loc_82D4A388;
loc_82D49DCC:
	// addi r11,r28,-3
	r11.s64 = r28.s64 + -3;
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// srw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r28,r9,r11
	r28.s64 = r11.s64 - ctx.r9.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x82d4a388
	goto loc_82D4A388;
loc_82D49DEC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D49E10:
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(r28.u32, 32, xer);
	// blt cr6,0x82d49dec
	if (cr6.lt) goto loc_82D49DEC;
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// clrlwi r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82d4a3f0
	if (!cr6.eq) goto loc_82D4A3F0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d49e4c
	if (cr6.eq) goto loc_82D49E4C;
	// li r11,2
	r11.s64 = 2;
	// b 0x82d49e5c
	goto loc_82D49E5C;
loc_82D49E4C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
loc_82D49E5C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d4a388
	goto loc_82D4A388;
loc_82D49E64:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82d49f24
	if (!cr6.eq) goto loc_82D49F24;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d49eb0
	if (!cr6.eq) goto loc_82D49EB0;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82d49eb0
	if (cr6.eq) goto loc_82D49EB0;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x82d49ea4
	if (!cr6.lt) goto loc_82D49EA4;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x82d49ea8
	goto loc_82D49EA8;
loc_82D49EA4:
	// subf r23,r26,r9
	r23.s64 = ctx.r9.s64 - r26.s64;
loc_82D49EA8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82d49f24
	if (!cr6.eq) goto loc_82D49F24;
loc_82D49EB0:
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82d49ee4
	if (!cr6.lt) goto loc_82D49EE4;
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// addi r23,r10,-1
	r23.s64 = ctx.r10.s64 + -1;
	// b 0x82d49eec
	goto loc_82D49EEC;
loc_82D49EE4:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// subf r23,r26,r10
	r23.s64 = ctx.r10.s64 - r26.s64;
loc_82D49EEC:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d49f1c
	if (!cr6.eq) goto loc_82D49F1C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82d49f1c
	if (cr6.eq) goto loc_82D49F1C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x82d49f18
	if (!cr6.lt) goto loc_82D49F18;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x82d49f1c
	goto loc_82D49F1C;
loc_82D49F18:
	// subf r23,r26,r9
	r23.s64 = ctx.r9.s64 - r26.s64;
loc_82D49F1C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82d4a398
	if (cr6.eq) goto loc_82D4A398;
loc_82D49F24:
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(r25.u32, r24.u32, xer);
	// ble cr6,0x82d49f38
	if (!cr6.gt) goto loc_82D49F38;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_82D49F38:
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(r25.u32, r23.u32, xer);
	// ble cr6,0x82d49f44
	if (!cr6.gt) goto loc_82D49F44;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82D49F44:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
	// subf. r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r24,r25,r24
	r24.s64 = r24.s64 - r25.s64;
	// add r26,r25,r26
	r26.u64 = r25.u64 + r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// subf r23,r25,r23
	r23.s64 = r23.s64 - r25.s64;
	// bne 0x82d4a388
	if (!cr0.eq) goto loc_82D4A388;
	// b 0x82d49e4c
	goto loc_82D49E4C;
loc_82D49F78:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D49F9C:
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(r28.u32, 14, xer);
	// blt cr6,0x82d49f78
	if (cr6.lt) goto loc_82D49F78;
	// clrlwi r10,r27,18
	ctx.r10.u64 = r27.u32 & 0x3FFF;
	// clrlwi r11,r27,27
	r11.u64 = r27.u32 & 0x1F;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(r11.u32, 29, xer);
	// bgt cr6,0x82d4a408
	if (cr6.gt) goto loc_82D4A408;
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// bgt cr6,0x82d4a408
	if (cr6.gt) goto loc_82D4A408;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,258
	ctx.r4.s64 = r11.s64 + 258;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82d4a3e8
	if (cr0.eq) goto loc_82D4A3E8;
	// li r11,4
	r11.s64 = 4;
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
	// rlwinm r27,r27,18,14,31
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 18) & 0x3FFFF;
	// addi r28,r28,-14
	r28.s64 = r28.s64 + -14;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82d4a060
	goto loc_82D4A060;
loc_82D4A004:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D4A028:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x82d4a004
	if (cr6.lt) goto loc_82D4A004;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// clrlwi r10,r27,29
	ctx.r10.u64 = r27.u32 & 0x7;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r27,r27,29,3,31
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D4A060:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r11,r11,22,10,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82d4a028
	if (cr6.lt) goto loc_82D4A028;
	// b 0x82d4a0a0
	goto loc_82D4A0A0;
loc_82D4A07C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r21.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82D4A0A0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// blt cr6,0x82d4a07c
	if (cr6.lt) goto loc_82D4A07C;
	// stw r16,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r16.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82d4db60
	sub_82D4DB60(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x82d4a414
	if (!cr0.eq) goto loc_82D4A414;
	// li r11,5
	r11.s64 = 5;
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82D4A0DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82d4a25c
	goto loc_82D4A25C;
loc_82D4A0F0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// b 0x82d4a11c
	goto loc_82D4A11C;
loc_82D4A0F8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r10,r10,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r10,r27
	r27.u64 = ctx.r10.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D4A11C:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82d4a0f8
	if (cr6.lt) goto loc_82D4A0F8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r10,r10,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r19.u32);
	// and r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & r27.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x82d4a170
	if (!cr6.lt) goto loc_82D4A170;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r10,r28
	r28.s64 = r28.s64 - ctx.r10.s64;
	// stwx r5,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82d4a248
	goto loc_82D4A248;
loc_82D4A170:
	// cmplwi cr6,r5,18
	cr6.compare<uint32_t>(ctx.r5.u32, 18, xer);
	// bne cr6,0x82d4a184
	if (!cr6.eq) goto loc_82D4A184;
	// mr r11,r16
	r11.u64 = r16.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x82d4a18c
	goto loc_82D4A18C;
loc_82D4A184:
	// addi r11,r5,-14
	r11.s64 = ctx.r5.s64 + -14;
	// li r6,3
	ctx.r6.s64 = 3;
loc_82D4A18C:
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82d4a1b8
	goto loc_82D4A1B8;
loc_82D4A194:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4a3d4
	if (cr6.eq) goto loc_82D4A3D4;
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r8,r8,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r8,r27
	r27.u64 = ctx.r8.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82D4A1B8:
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d4a194
	if (cr6.lt) goto loc_82D4A194;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// srw r4,r27,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r19
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r19.u32);
	// rlwinm r8,r7,27,27,31
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1F;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = r28.s64 - r11.s64;
	// srw r27,r4,r11
	r27.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r8,r8,258
	ctx.r8.s64 = ctx.r8.s64 + 258;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// subf r28,r10,r3
	r28.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d4a43c
	if (cr6.gt) goto loc_82D4A43C;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bne cr6,0x82d4a228
	if (!cr6.eq) goto loc_82D4A228;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82d4a43c
	if (cr6.lt) goto loc_82D4A43C;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4) );
	// b 0x82d4a22c
	goto loc_82D4A22C;
loc_82D4A228:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_82D4A22C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D4A230:
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d4a230
	if (!cr0.eq) goto loc_82D4A230;
loc_82D4A248:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r10,27,27,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82D4A25C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,258
	r11.s64 = r11.s64 + 258;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82d4a0f0
	if (cr6.lt) goto loc_82D4A0F0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// clrlwi r11,r6,27
	r11.u64 = ctx.r6.u32 & 0x1F;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r4,r6,27,27,31
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r21,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r21.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r3,r11,257
	ctx.r3.s64 = r11.s64 + 257;
	// bl 0x82d4dc40
	sub_82D4DC40(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x82d4a45c
	if (!cr0.eq) goto loc_82D4A45C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// bl 0x82d4cfe0
	sub_82D4CFE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82d4a3e8
	if (cr0.eq) goto loc_82D4A3E8;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
loc_82D4A2F0:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// bl 0x82d4d040
	sub_82D4D040(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82d4a3c4
	if (!cr6.eq) goto loc_82D4A3C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r22,r21
	r22.u64 = r21.u64;
	// bl 0x82d4d670
	sub_82D4D670(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r24,4(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// lwz r27,32(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r28,28(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bge cr6,0x82d4a370
	if (!cr6.lt) goto loc_82D4A370;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
	// b 0x82d4a378
	goto loc_82D4A378;
loc_82D4A370:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// subf r23,r26,r11
	r23.s64 = r11.s64 - r26.s64;
loc_82D4A378:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4a464
	if (!cr6.eq) goto loc_82D4A464;
	// stw r21,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r21.u32);
loc_82D4A388:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// ble cr6,0x82d49cd0
	if (!cr6.gt) goto loc_82D49CD0;
loc_82D4A394:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_82D4A398:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
loc_82D4A3A0:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
loc_82D4A3A4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
loc_82D4A3C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c08
	return;
loc_82D4A3D4:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r21,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r21.u32);
	// b 0x82d4a3a4
	goto loc_82D4A3A4;
loc_82D4A3E8:
	// li r5,-4
	ctx.r5.s64 = -4;
	// b 0x82d4a398
	goto loc_82D4A398;
loc_82D4A3F0:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,-25556
	r11.s64 = r11.s64 + -25556;
loc_82D4A3F8:
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x82d4a398
	goto loc_82D4A398;
loc_82D4A408:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,-25524
	r11.s64 = r11.s64 + -25524;
	// b 0x82d4a3f8
	goto loc_82D4A3F8;
loc_82D4A414:
	// cmpwi cr6,r25,-3
	cr6.compare<int32_t>(r25.s32, -3, xer);
loc_82D4A418:
	// bne cr6,0x82d4a434
	if (!cr6.eq) goto loc_82D4A434;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
loc_82D4A434:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x82d4a398
	goto loc_82D4A398;
loc_82D4A43C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r11,r11,-25460
	r11.s64 = r11.s64 + -25460;
	// b 0x82d4a3f8
	goto loc_82D4A3F8;
loc_82D4A45C:
	// cmpwi cr6,r25,-3
	cr6.compare<int32_t>(r25.s32, -3, xer);
	// b 0x82d4a418
	goto loc_82D4A418;
loc_82D4A464:
	// stw r16,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r16.u32);
loc_82D4A468:
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82d4a398
	if (!cr6.eq) goto loc_82D4A398;
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82D4A498:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82d4a398
	goto loc_82D4A398;
loc_82D4A4A0:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x82d4a398
	goto loc_82D4A398;
}

PPC_WEAK_FUNC(sub_82D49C58) {
	__imp__sub_82D49C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4A4A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d49aa8
	sub_82D49AA8(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82D4A4A8) {
	__imp__sub_82D4A4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4A528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lis r30,-32254
	r30.s64 = -2113798144;
	// addi r11,r1,-352
	r11.s64 = ctx.r1.s64 + -352;
	// lfs f11,9088(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9088);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lfs f12,9084(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9084);
	ctx.f12.f64 = double(temp.f32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f13,9080(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 9080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9076(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 9076);
	f0.f64 = double(temp.f32);
loc_82D4A574:
	// lhz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4a60c
	if (!cr6.eq) goto loc_82D4A60C;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-368(r1)
	PPC_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// lfd f9,-368(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f6,96(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// stfs f6,128(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 128, temp.u32);
	// stfs f6,160(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 160, temp.u32);
	// stfs f6,192(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// stfs f6,224(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 224, temp.u32);
	// b 0x82d4a79c
	goto loc_82D4A79C;
loc_82D4A60C:
	// lhz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// lhz r31,0(r10)
	r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f10,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r28,80(r10)
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// lhz r30,64(r10)
	r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// lfs f5,192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// std r6,-376(r1)
	PPC_STORE_U64(ctx.r1.u32 + -376, ctx.r6.u64);
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// lhz r31,32(r10)
	r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// std r6,-384(r1)
	PPC_STORE_U64(ctx.r1.u32 + -384, ctx.r6.u64);
	// extsh r6,r28
	ctx.r6.s64 = r28.s16;
	// lhz r29,48(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// lfd f8,-384(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// std r6,-408(r1)
	PPC_STORE_U64(ctx.r1.u32 + -408, ctx.r6.u64);
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// std r4,-424(r1)
	PPC_STORE_U64(ctx.r1.u32 + -424, ctx.r4.u64);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// std r6,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.r6.u64);
	// lfd f26,-432(r1)
	f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -432);
	// std r30,-400(r1)
	PPC_STORE_U64(ctx.r1.u32 + -400, r30.u64);
	// lfd f7,-400(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// std r4,-416(r1)
	PPC_STORE_U64(ctx.r1.u32 + -416, ctx.r4.u64);
	// lfd f2,-416(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -416);
	// lfd f1,-408(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -408);
	// lhz r27,112(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// lfd f6,-424(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -424);
	// lfd f9,-376(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r4,-392(r1)
	PPC_STORE_U64(ctx.r1.u32 + -392, ctx.r4.u64);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// lfd f27,-392(r1)
	f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -392);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// lfs f3,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfs f31,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	f31.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f30,160(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	f30.f64 = double(temp.f32);
	// fcfid f27,f27
	f27.f64 = double(f27.s64);
	// lfs f29,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	f29.f64 = double(temp.f32);
	// frsp f26,f26
	f26.f64 = double(float(f26.f64));
	// lfs f28,224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	f28.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// frsp f27,f27
	f27.f64 = double(float(f27.f64));
	// fmuls f10,f26,f10
	ctx.f10.f64 = double(float(f26.f64 * ctx.f10.f64));
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * f31.f64));
	// fmuls f9,f29,f6
	ctx.f9.f64 = double(float(f29.f64 * ctx.f6.f64));
	// fmuls f8,f27,f28
	ctx.f8.f64 = double(float(f27.f64 * f28.f64));
	// fadds f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fsubs f6,f10,f5
	ctx.f6.f64 = static_cast<float>(ctx.f10.f64 - ctx.f5.f64);
	// fadds f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f4,f4,f3
	ctx.f4.f64 = static_cast<float>(ctx.f4.f64 - ctx.f3.f64);
	// fadds f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f1,f2
	ctx.f2.f64 = static_cast<float>(ctx.f1.f64 - ctx.f2.f64);
	// fmsubs f1,f6,f0,f7
	ctx.f1.f64 = double(std::fma(float(ctx.f6.f64), float(f0.f64), -float(ctx.f7.f64)));
	// fadds f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = static_cast<float>(ctx.f5.f64 - ctx.f7.f64);
	// fadds f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fsubs f5,f4,f1
	ctx.f5.f64 = static_cast<float>(ctx.f4.f64 - ctx.f1.f64);
	// fsubs f4,f9,f8
	ctx.f4.f64 = static_cast<float>(ctx.f9.f64 - ctx.f8.f64);
	// fadds f1,f8,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f8,f1,f3
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fsubs f3,f1,f3
	ctx.f3.f64 = static_cast<float>(ctx.f1.f64 - ctx.f3.f64);
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f9,f8,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fnmsubs f9,f2,f12,f1
	ctx.f9.f64 = -double(std::fma(float(ctx.f2.f64), float(ctx.f12.f64), -float(ctx.f1.f64)));
	// fmsubs f4,f4,f11,f1
	ctx.f4.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f11.f64), -float(ctx.f1.f64)));
	// fsubs f10,f10,f8
	ctx.f10.f64 = static_cast<float>(ctx.f10.f64 - ctx.f8.f64);
	// stfs f10,224(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 224, temp.u32);
	// fsubs f2,f9,f8
	ctx.f2.f64 = static_cast<float>(ctx.f9.f64 - ctx.f8.f64);
	// fmsubs f1,f3,f0,f2
	ctx.f1.f64 = double(std::fma(float(ctx.f3.f64), float(f0.f64), -float(ctx.f2.f64)));
	// fadds f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// fsubs f9,f6,f2
	ctx.f9.f64 = static_cast<float>(ctx.f6.f64 - ctx.f2.f64);
	// stfs f9,192(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// fadds f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f6,f1,f5
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = static_cast<float>(ctx.f5.f64 - ctx.f1.f64);
	// stfs f5,160(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 160, temp.u32);
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f4,128(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 128, temp.u32);
	// fsubs f3,f7,f8
	ctx.f3.f64 = static_cast<float>(ctx.f7.f64 - ctx.f8.f64);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
loc_82D4A79C:
	// stfs f6,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82d4a574
	if (cr0.gt) goto loc_82D4A574;
	// addi r11,r1,-344
	r11.s64 = ctx.r1.s64 + -344;
	// li r6,8
	ctx.r6.s64 = 8;
loc_82D4A7BC:
	// lfs f10,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = static_cast<float>(ctx.f10.f64 - ctx.f9.f64);
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f4,f6,f8
	ctx.f4.f64 = static_cast<float>(ctx.f6.f64 - ctx.f8.f64);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f2,f3
	ctx.f6.f64 = static_cast<float>(ctx.f2.f64 - ctx.f3.f64);
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// fsubs f2,f8,f10
	ctx.f2.f64 = static_cast<float>(ctx.f8.f64 - ctx.f10.f64);
	// fadds f10,f4,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = static_cast<float>(ctx.f1.f64 - ctx.f5.f64);
	// fmsubs f1,f6,f0,f9
	ctx.f1.f64 = double(std::fma(float(ctx.f6.f64), float(f0.f64), -float(ctx.f9.f64)));
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fsubs f3,f3,f9
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - ctx.f9.f64);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f31,f8,f6
	f31.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fsubs f2,f2,f1
	ctx.f2.f64 = static_cast<float>(ctx.f2.f64 - ctx.f1.f64);
	// fsubs f6,f6,f8
	ctx.f6.f64 = static_cast<float>(ctx.f6.f64 - ctx.f8.f64);
	// fnmsubs f1,f7,f12,f10
	ctx.f1.f64 = -double(std::fma(float(ctx.f7.f64), float(ctx.f12.f64), -float(ctx.f10.f64)));
	// fmsubs f10,f4,f11,f10
	ctx.f10.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f11.f64), -float(ctx.f10.f64)));
	// fctiwz f7,f31
	ctx.f7.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfd f7,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f7.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// srawi r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// fsubs f4,f1,f8
	ctx.f4.f64 = static_cast<float>(ctx.f1.f64 - ctx.f8.f64);
	// fctiwz f1,f6
	ctx.f1.u64 = uint64_t(int32_t(std::trunc(ctx.f6.f64)));
	// stfd f1,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f1.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// srawi r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fadds f8,f4,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// fsubs f7,f9,f4
	ctx.f7.f64 = static_cast<float>(ctx.f9.f64 - ctx.f4.f64);
	// fmsubs f6,f5,f0,f4
	ctx.f6.f64 = double(std::fma(float(ctx.f5.f64), float(f0.f64), -float(ctx.f4.f64)));
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// fctiwz f5,f8
	ctx.f5.u64 = uint64_t(int32_t(std::trunc(ctx.f8.f64)));
	// stfd f5,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// srawi r5,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// fctiwz f4,f7
	ctx.f4.u64 = uint64_t(int32_t(std::trunc(ctx.f7.f64)));
	// stfd f4,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f4.u64);
	// lwz r4,-428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// fadds f1,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fsubs f9,f2,f6
	ctx.f9.f64 = static_cast<float>(ctx.f2.f64 - ctx.f6.f64);
	// fadds f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fctiwz f7,f1
	ctx.f7.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f7,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f7.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// fctiwz f6,f9
	ctx.f6.u64 = uint64_t(int32_t(std::trunc(ctx.f9.f64)));
	// stfd f6,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// srawi r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// srawi r3,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r3.s64 = r31.s32 >> 3;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r4,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r4.u8);
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fadds f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fsubs f4,f3,f8
	ctx.f4.f64 = static_cast<float>(ctx.f3.f64 - ctx.f8.f64);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// srawi r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r5,r3,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r5,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r5.u8);
	// fctiwz f3,f5
	ctx.f3.u64 = uint64_t(int32_t(std::trunc(ctx.f5.f64)));
	// stfd f3,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f3.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// fctiwz f2,f4
	ctx.f2.u64 = uint64_t(int32_t(std::trunc(ctx.f4.f64)));
	// srawi r3,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// stfd f2,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f2.u64);
	// clrlwi r5,r3,22
	ctx.r5.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lwz r4,-428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-428) );
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// srawi r5,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// bne 0x82d4a7bc
	if (!cr0.eq) goto loc_82D4A7BC;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D4A528) {
	__imp__sub_82D4A528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4A978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mflr r12
	// bl 0x82ca2bc4
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// addi r11,r1,-368
	r11.s64 = ctx.r1.s64 + -368;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// li r26,8
	r26.s64 = 8;
loc_82D4A998:
	// lhz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// lhz r5,32(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// lhz r31,48(r8)
	r31.u64 = PPC_LOAD_U16(ctx.r8.u32 + 48);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r4,64(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 64);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhz r29,80(r8)
	r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 80);
	// or r28,r3,r5
	r28.u64 = ctx.r3.u64 | ctx.r5.u64;
	// lhz r27,96(r8)
	r27.u64 = PPC_LOAD_U16(ctx.r8.u32 + 96);
	// extsh r30,r4
	r30.s64 = ctx.r4.s16;
	// lhz r25,112(r8)
	r25.u64 = PPC_LOAD_U16(ctx.r8.u32 + 112);
	// or r4,r28,r31
	ctx.r4.u64 = r28.u64 | r31.u64;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// or r28,r4,r30
	r28.u64 = ctx.r4.u64 | r30.u64;
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// or r27,r28,r29
	r27.u64 = r28.u64 | r29.u64;
	// extsh r28,r25
	r28.s64 = r25.s16;
	// or r27,r27,r4
	r27.u64 = r27.u64 | ctx.r4.u64;
	// or r27,r27,r28
	r27.u64 = r27.u64 | r28.u64;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82d4aa28
	if (!cr6.eq) goto loc_82D4AA28;
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r3,r5
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// stw r4,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r4.u32);
	// stw r4,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r4.u32);
	// stw r4,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r4.u32);
	// stw r4,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r4.u32);
	// stw r4,224(r11)
	PPC_STORE_U32(r11.u32 + 224, ctx.r4.u32);
	// b 0x82d4abbc
	goto loc_82D4ABBC;
loc_82D4AA28:
	// lhz r27,32(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r25,96(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// lhz r24,0(r8)
	r24.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lhz r23,0(r10)
	r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r5,r27,r5
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lhz r22,16(r10)
	r22.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r21,48(r10)
	r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// lhz r27,64(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// lhz r20,80(r10)
	r20.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// lhz r19,112(r10)
	r19.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// mullw r25,r25,r4
	r25.s64 = int64_t(r25.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r25
	ctx.r5.s64 = r25.s16;
	// extsh r25,r24
	r25.s64 = r24.s16;
	// extsh r24,r23
	r24.s64 = r23.s16;
	// extsh r23,r22
	r23.s64 = r22.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// extsh r22,r21
	r22.s64 = r21.s16;
	// extsh r21,r20
	r21.s64 = r20.s16;
	// extsh r20,r19
	r20.s64 = r19.s16;
	// mullw r27,r27,r30
	r27.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// add r19,r4,r5
	r19.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mullw r3,r23,r3
	ctx.r3.s64 = int64_t(r23.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r21,r29
	r30.s64 = int64_t(r21.s32) * int64_t(r29.s32);
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mullw r29,r20,r28
	r29.s64 = int64_t(r20.s32) * int64_t(r28.s32);
	// mullw r23,r22,r31
	r23.s64 = int64_t(r22.s32) * int64_t(r31.s32);
	// mullw r28,r25,r24
	r28.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// extsh r31,r30
	r31.s64 = r30.s16;
	// mulli r25,r4,362
	r25.s64 = ctx.r4.s64 * 362;
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// extsh r30,r23
	r30.s64 = r23.s16;
	// extsh r28,r24
	r28.s64 = r24.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// srawi r27,r25,8
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r27.s64 = r25.s32 >> 8;
	// extsh r5,r19
	ctx.r5.s64 = r19.s16;
	// add r24,r30,r31
	r24.u64 = r30.u64 + r31.u64;
	// subf r23,r30,r31
	r23.s64 = r31.s64 - r30.s64;
	// add r25,r3,r4
	r25.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// subf r22,r29,r28
	r22.s64 = r28.s64 - r29.s64;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r28,r5,r27
	r28.s64 = r27.s64 - ctx.r5.s64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// extsh r28,r22
	r28.s64 = r22.s16;
	// extsh r27,r23
	r27.s64 = r23.s16;
	// extsh r29,r24
	r29.s64 = r24.s16;
	// add r24,r27,r28
	r24.u64 = r27.u64 + r28.u64;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r31,r25
	r31.s64 = r25.s16;
	// add r25,r4,r5
	r25.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r23,r5,r4
	r23.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mulli r4,r24,473
	ctx.r4.s64 = r24.s64 * 473;
	// add r22,r31,r3
	r22.u64 = r31.u64 + ctx.r3.u64;
	// subf r21,r3,r31
	r21.s64 = r31.s64 - ctx.r3.s64;
	// add r5,r29,r30
	ctx.r5.u64 = r29.u64 + r30.u64;
	// mulli r31,r27,-669
	r31.s64 = r27.s64 * -669;
	// srawi r3,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r5,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r5.s64 = r31.s32 >> 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsh r5,r31
	ctx.r5.s64 = r31.s16;
	// subf r31,r29,r30
	r31.s64 = r30.s64 - r29.s64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mulli r31,r31,362
	r31.s64 = r31.s64 * 362;
	// mulli r30,r28,277
	r30.s64 = r28.s64 * 277;
	// srawi r31,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// srawi r30,r30,8
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// subf r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	// subf r30,r5,r30
	r30.s64 = r30.s64 - ctx.r5.s64;
	// extsh r5,r31
	ctx.r5.s64 = r31.s16;
	// extsh r31,r25
	r31.s64 = r25.s16;
	// add r28,r30,r5
	r28.u64 = r30.u64 + ctx.r5.u64;
	// extsh r30,r22
	r30.s64 = r22.s16;
	// add r25,r4,r31
	r25.u64 = ctx.r4.u64 + r31.u64;
	// subf r4,r4,r31
	ctx.r4.s64 = r31.s64 - ctx.r4.s64;
	// add r31,r3,r30
	r31.u64 = ctx.r3.u64 + r30.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// extsh r27,r28
	r27.s64 = r28.s16;
	// stw r4,224(r11)
	PPC_STORE_U32(r11.u32 + 224, ctx.r4.u32);
	// extsh r29,r21
	r29.s64 = r21.s16;
	// stw r31,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r31.u32);
	// subf r3,r3,r30
	ctx.r3.s64 = r30.s64 - ctx.r3.s64;
	// extsh r28,r23
	r28.s64 = r23.s16;
	// add r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 + r29.u64;
	// stw r3,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r3.u32);
	// subf r5,r5,r29
	ctx.r5.s64 = r29.s64 - ctx.r5.s64;
	// add r3,r27,r28
	ctx.r3.u64 = r27.u64 + r28.u64;
	// stw r4,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r4.u32);
	// subf r4,r27,r28
	ctx.r4.s64 = r28.s64 - r27.s64;
	// stw r5,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r5.u32);
	// stw r3,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r3.u32);
loc_82D4ABBC:
	// stw r4,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r4.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bgt 0x82d4a998
	if (cr0.gt) goto loc_82D4A998;
	// addi r10,r1,-368
	ctx.r10.s64 = ctx.r1.s64 + -368;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r27,8
	r27.s64 = 8;
loc_82D4ABE0:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// or r11,r6,r8
	r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lwz r29,16(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// or r5,r11,r4
	ctx.r5.u64 = r11.u64 | ctx.r4.u64;
	// lwz r31,24(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// lwz r30,28(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | r29.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | r30.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82d4ac58
	if (!cr6.eq) goto loc_82D4AC58;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// srawi r6,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 5;
	// clrlwi r5,r6,22
	ctx.r5.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// stb r4,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r4.u8);
	// stb r4,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r4.u8);
	// stb r4,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r4.u8);
	// stb r4,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r4.u8);
	// stb r4,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r4.u8);
	// stb r4,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r4.u8);
	// stb r4,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r4.u8);
	// b 0x82d4addc
	goto loc_82D4ADDC;
loc_82D4AC58:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r23,r8,r31
	r23.u64 = ctx.r8.u64 + r31.u64;
	// add r25,r4,r3
	r25.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r24,r5,r29
	r24.u64 = ctx.r5.u64 + r29.u64;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r22,r30,r6
	r22.s64 = ctx.r6.s64 - r30.s64;
	// add r26,r6,r30
	r26.u64 = ctx.r6.u64 + r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// extsh r6,r26
	ctx.r6.s64 = r26.s16;
	// extsh r3,r25
	ctx.r3.s64 = r25.s16;
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r25,r31
	r25.s64 = r31.s16;
	// extsh r26,r24
	r26.s64 = r24.s16;
	// extsh r30,r23
	r30.s64 = r23.s16;
	// extsh r31,r22
	r31.s64 = r22.s16;
	// subf r26,r25,r26
	r26.s64 = r26.s64 - r25.s64;
	// add r25,r30,r31
	r25.u64 = r30.u64 + r31.u64;
	// add r24,r3,r6
	r24.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r23,r4,r8
	r23.u64 = ctx.r4.u64 + ctx.r8.u64;
	// subf r22,r3,r6
	r22.s64 = ctx.r6.s64 - ctx.r3.s64;
	// mulli r26,r26,362
	r26.s64 = r26.s64 * 362;
	// mulli r25,r25,473
	r25.s64 = r25.s64 * 473;
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// mulli r30,r30,-669
	r30.s64 = r30.s64 * -669;
	// extsh r3,r23
	ctx.r3.s64 = r23.s16;
	// srawi r26,r26,8
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r26.s64 = r26.s32 >> 8;
	// mulli r24,r22,362
	r24.s64 = r22.s64 * 362;
	// srawi r25,r25,8
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r25.s64 = r25.s32 >> 8;
	// mulli r31,r31,277
	r31.s64 = r31.s64 * 277;
	// add r23,r6,r3
	r23.u64 = ctx.r6.u64 + ctx.r3.u64;
	// srawi r30,r30,8
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// srawi r24,r24,8
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xFF) != 0);
	r24.s64 = r24.s32 >> 8;
	// srawi r22,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r22.s64 = r31.s32 >> 8;
	// srawi r31,r23,5
	xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1F) != 0);
	r31.s64 = r23.s32 >> 5;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - r29.s64;
	// clrlwi r31,r31,22
	r31.u64 = r31.u32 & 0x3FF;
	// subf r29,r8,r26
	r29.s64 = r26.s64 - ctx.r8.s64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// subf r5,r6,r30
	ctx.r5.s64 = r30.s64 - ctx.r6.s64;
	// extsh r30,r26
	r30.s64 = r26.s16;
	// lbzx r23,r31,r9
	r23.u64 = PPC_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r31,r29
	r31.s64 = r29.s16;
	// extsh r29,r25
	r29.s64 = r25.s16;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r26,r30,r31
	r26.u64 = r30.u64 + r31.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// srawi r5,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 5;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r26
	ctx.r3.s64 = r26.s16;
	// clrlwi r26,r5,22
	r26.u64 = ctx.r5.u32 & 0x3FF;
	// add r25,r6,r3
	r25.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r5,r6,r24
	ctx.r5.s64 = r24.s64 - ctx.r6.s64;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r8,r31,r30
	ctx.r8.s64 = r30.s64 - r31.s64;
	// srawi r25,r25,5
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1F) != 0);
	r25.s64 = r25.s32 >> 5;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r3,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r25,r25,22
	r25.u64 = r25.u32 & 0x3FF;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r29,r29,r22
	r29.s64 = r22.s64 - r29.s64;
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// add r31,r29,r5
	r31.u64 = r29.u64 + ctx.r5.u64;
	// srawi r6,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// lbzx r30,r26,r9
	r30.u64 = PPC_LOAD_U8(r26.u32 + ctx.r9.u32);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// clrlwi r8,r6,22
	ctx.r8.u64 = ctx.r6.u32 & 0x3FF;
	// srawi r5,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// stb r30,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r30.u8);
	// lbzx r30,r25,r9
	r30.u64 = PPC_LOAD_U8(r25.u32 + ctx.r9.u32);
	// stb r30,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r30.u8);
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r3,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r3.u8);
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stb r3,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r3.u8);
	// subf r3,r6,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r8,r4,5
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r5,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r5.u8);
	// srawi r6,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 5;
	// clrlwi r5,r8,22
	ctx.r5.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r4,r6,22
	ctx.r4.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r3,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r3.u8);
	// lbzx r8,r4,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r8,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r8.u8);
loc_82D4ADDC:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82d4abe0
	if (!cr0.eq) goto loc_82D4ABE0;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82D4A978) {
	__imp__sub_82D4A978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mflr r12
	// bl 0x82ca2bbc
	// lwz r8,328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// addi r11,r1,-384
	r11.s64 = ctx.r1.s64 + -384;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// li r19,8
	r19.s64 = 8;
loc_82D4AE10:
	// lhz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,64(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,80(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,96(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,112(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4aea0
	if (!cr6.eq) goto loc_82D4AEA0;
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r3,r5
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r3.u32);
	// stw r3,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r3.u32);
	// stw r3,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r3.u32);
	// stw r3,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r3.u32);
	// stw r3,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r3.u32);
	// stw r3,224(r11)
	PPC_STORE_U32(r11.u32 + 224, ctx.r3.u32);
	// b 0x82d4b04c
	goto loc_82D4B04C;
loc_82D4AEA0:
	// lhz r5,112(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// lhz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// lhz r29,48(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r28,48(r9)
	r28.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r27,16(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// lhz r31,80(r10)
	r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// lhz r30,80(r9)
	r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r26,32(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r25,32(r9)
	r25.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r24,96(r10)
	r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// lhz r23,96(r9)
	r23.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// lhz r22,0(r9)
	r22.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r21,0(r10)
	r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r20,64(r10)
	r20.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// lhz r18,64(r9)
	r18.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// mullw r3,r27,r3
	ctx.r3.s64 = int64_t(r27.s32) * int64_t(ctx.r3.s32);
	// extsh r26,r25
	r26.s64 = r25.s16;
	// mullw r31,r31,r30
	r31.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// extsh r25,r23
	r25.s64 = r23.s16;
	// extsh r27,r24
	r27.s64 = r24.s16;
	// mullw r28,r28,r26
	r28.s64 = int64_t(r28.s32) * int64_t(r26.s32);
	// add r30,r31,r3
	r30.u64 = r31.u64 + ctx.r3.u64;
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// add r29,r4,r5
	r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r25,r21
	r25.s64 = r21.s16;
	// extsh r26,r22
	r26.s64 = r22.s16;
	// extsh r24,r20
	r24.s64 = r20.s16;
	// extsh r23,r18
	r23.s64 = r18.s16;
	// add r22,r30,r29
	r22.u64 = r30.u64 + r29.u64;
	// add r21,r27,r28
	r21.u64 = r27.u64 + r28.u64;
	// mullw r26,r26,r25
	r26.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r25,r24,r23
	r25.s64 = int64_t(r24.s32) * int64_t(r23.s32);
	// mulli r18,r22,9633
	r18.s64 = r22.s64 * 9633;
	// mulli r23,r30,3196
	r23.s64 = r30.s64 * 3196;
	// mulli r24,r21,4433
	r24.s64 = r21.s64 * 4433;
	// mulli r28,r28,6270
	r28.s64 = r28.s64 * 6270;
	// add r22,r25,r26
	r22.u64 = r25.u64 + r26.u64;
	// add r30,r4,r3
	r30.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r21,r3,12299
	r21.s64 = ctx.r3.s64 * 12299;
	// subf r23,r23,r18
	r23.s64 = r18.s64 - r23.s64;
	// add r3,r28,r24
	ctx.r3.u64 = r28.u64 + r24.u64;
	// rlwinm r28,r22,13,0,18
	r28.u64 = rotl64(r22.u32 | (r22.u64 << 32), 13) & 0xFFFFE000;
	// add r20,r21,r23
	r20.u64 = r21.u64 + r23.u64;
	// mulli r22,r30,-7373
	r22.s64 = r30.s64 * -7373;
	// add r30,r28,r3
	r30.u64 = r28.u64 + ctx.r3.u64;
	// subf r21,r3,r28
	r21.s64 = r28.s64 - ctx.r3.s64;
	// add r3,r20,r22
	ctx.r3.u64 = r20.u64 + r22.u64;
	// mulli r29,r29,16069
	r29.s64 = r29.s64 * 16069;
	// add r20,r30,r3
	r20.u64 = r30.u64 + ctx.r3.u64;
	// subf r25,r25,r26
	r25.s64 = r26.s64 - r25.s64;
	// mulli r17,r27,15137
	r17.s64 = r27.s64 * 15137;
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// mulli r27,r4,2446
	r27.s64 = ctx.r4.s64 * 2446;
	// mulli r26,r31,16819
	r26.s64 = r31.s64 * 16819;
	// subf r29,r29,r18
	r29.s64 = r18.s64 - r29.s64;
	// mulli r5,r5,25172
	ctx.r5.s64 = ctx.r5.s64 * 25172;
	// addi r20,r20,1024
	r20.s64 = r20.s64 + 1024;
	// subf r4,r17,r24
	ctx.r4.s64 = r24.s64 - r17.s64;
	// rlwinm r31,r25,13,0,18
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 13) & 0xFFFFE000;
	// add r25,r27,r22
	r25.u64 = r27.u64 + r22.u64;
	// add r26,r26,r23
	r26.u64 = r26.u64 + r23.u64;
	// mulli r28,r28,-20995
	r28.s64 = r28.s64 * -20995;
	// add r24,r5,r29
	r24.u64 = ctx.r5.u64 + r29.u64;
	// srawi r23,r20,11
	xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7FF) != 0);
	r23.s64 = r20.s32 >> 11;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// subf r27,r4,r31
	r27.s64 = r31.s64 - ctx.r4.s64;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// add r4,r25,r29
	ctx.r4.u64 = r25.u64 + r29.u64;
	// add r31,r26,r28
	r31.u64 = r26.u64 + r28.u64;
	// add r29,r24,r28
	r29.u64 = r24.u64 + r28.u64;
	// subf r3,r3,r30
	ctx.r3.s64 = r30.s64 - ctx.r3.s64;
	// add r30,r5,r29
	r30.u64 = ctx.r5.u64 + r29.u64;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - r29.s64;
	// addi r29,r3,1024
	r29.s64 = ctx.r3.s64 + 1024;
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// srawi r29,r29,11
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FF) != 0);
	r29.s64 = r29.s32 >> 11;
	// addi r30,r30,1024
	r30.s64 = r30.s64 + 1024;
	// addi r28,r5,1024
	r28.s64 = ctx.r5.s64 + 1024;
	// stw r29,224(r11)
	PPC_STORE_U32(r11.u32 + 224, r29.u32);
	// subf r31,r31,r27
	r31.s64 = r27.s64 - r31.s64;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// add r5,r21,r4
	ctx.r5.u64 = r21.u64 + ctx.r4.u64;
	// srawi r30,r30,11
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	r30.s64 = r30.s32 >> 11;
	// srawi r29,r28,11
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FF) != 0);
	r29.s64 = r28.s32 >> 11;
	// subf r4,r4,r21
	ctx.r4.s64 = r21.s64 - ctx.r4.s64;
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
	// srawi r3,r3,11
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 11;
	// stw r29,192(r11)
	PPC_STORE_U32(r11.u32 + 192, r29.u32);
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// addi r5,r5,1024
	ctx.r5.s64 = ctx.r5.s64 + 1024;
	// stw r3,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r3.u32);
	// addi r4,r4,1024
	ctx.r4.s64 = ctx.r4.s64 + 1024;
	// srawi r31,r31,11
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	r31.s64 = r31.s32 >> 11;
	// srawi r3,r5,11
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 11;
	// srawi r5,r4,11
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 11;
	// stw r31,160(r11)
	PPC_STORE_U32(r11.u32 + 160, r31.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r5.u32);
loc_82D4B04C:
	// stw r3,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// bgt 0x82d4ae10
	if (cr0.gt) goto loc_82D4AE10;
	// addi r11,r1,-384
	r11.s64 = ctx.r1.s64 + -384;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r20,8
	r20.s64 = 8;
	// lis r9,2
	ctx.r9.s64 = 131072;
loc_82D4B074:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4b108
	if (!cr6.eq) goto loc_82D4B108;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// srawi r5,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// b 0x82d4b27c
	goto loc_82D4B27C;
loc_82D4B108:
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mulli r28,r3,12299
	r28.s64 = ctx.r3.s64 * 12299;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r24,24(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r23,16(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r31,r4,r3
	r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r24,r29
	r27.u64 = r24.u64 + r29.u64;
	// add r26,r31,r30
	r26.u64 = r31.u64 + r30.u64;
	// mulli r19,r31,3196
	r19.s64 = r31.s64 * 3196;
	// mulli r18,r26,9633
	r18.s64 = r26.s64 * 9633;
	// mulli r25,r27,4433
	r25.s64 = r27.s64 * 4433;
	// mulli r29,r29,6270
	r29.s64 = r29.s64 * 6270;
	// add r27,r22,r23
	r27.u64 = r22.u64 + r23.u64;
	// add r31,r5,r3
	r31.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// subf r26,r19,r18
	r26.s64 = r18.s64 - r19.s64;
	// rlwinm r29,r27,13,0,18
	r29.u64 = rotl64(r27.u32 | (r27.u64 << 32), 13) & 0xFFFFE000;
	// mulli r27,r31,-7373
	r27.s64 = r31.s64 * -7373;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// add r31,r29,r3
	r31.u64 = r29.u64 + ctx.r3.u64;
	// subf r29,r3,r29
	r29.s64 = r29.s64 - ctx.r3.s64;
	// add r3,r28,r27
	ctx.r3.u64 = r28.u64 + r27.u64;
	// mulli r30,r30,16069
	r30.s64 = r30.s64 * 16069;
	// add r28,r31,r3
	r28.u64 = r31.u64 + ctx.r3.u64;
	// subf r3,r3,r31
	ctx.r3.s64 = r31.s64 - ctx.r3.s64;
	// add r31,r28,r9
	r31.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r31,r31,18
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// srawi r3,r3,18
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// clrlwi r31,r31,22
	r31.u64 = r31.u32 & 0x3FF;
	// clrlwi r19,r3,22
	r19.u64 = ctx.r3.u32 & 0x3FF;
	// add r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mulli r6,r6,25172
	ctx.r6.s64 = ctx.r6.s64 * 25172;
	// lbzx r31,r31,r8
	r31.u64 = PPC_LOAD_U8(r31.u32 + ctx.r8.u32);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// mulli r31,r24,15137
	r31.s64 = r24.s64 * 15137;
	// subf r24,r23,r22
	r24.s64 = r22.s64 - r23.s64;
	// subf r28,r30,r18
	r28.s64 = r18.s64 - r30.s64;
	// mulli r30,r3,-20995
	r30.s64 = ctx.r3.s64 * -20995;
	// subf r25,r31,r25
	r25.s64 = r25.s64 - r31.s64;
	// lbzx r23,r19,r8
	r23.u64 = PPC_LOAD_U8(r19.u32 + ctx.r8.u32);
	// add r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 + r28.u64;
	// rlwinm r31,r24,13,0,18
	r31.u64 = rotl64(r24.u32 | (r24.u64 << 32), 13) & 0xFFFFE000;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// add r6,r31,r25
	ctx.r6.u64 = r31.u64 + r25.u64;
	// mulli r4,r4,16819
	ctx.r4.s64 = ctx.r4.s64 * 16819;
	// stb r23,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, r23.u8);
	// add r24,r6,r3
	r24.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + r26.u64;
	// add r26,r24,r9
	r26.u64 = r24.u64 + ctx.r9.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// srawi r30,r26,18
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3FFFF) != 0);
	r30.s64 = r26.s32 >> 18;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = r30.u32 & 0x3FF;
	// subf r31,r25,r31
	r31.s64 = r31.s64 - r25.s64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r30,r31,r4
	r30.u64 = r31.u64 + ctx.r4.u64;
	// srawi r6,r6,18
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 18;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// clrlwi r26,r6,22
	r26.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// srawi r30,r30,18
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FFFF) != 0);
	r30.s64 = r30.s32 >> 18;
	// mulli r6,r5,2446
	ctx.r6.s64 = ctx.r5.s64 * 2446;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbzx r5,r26,r8
	ctx.r5.u64 = PPC_LOAD_U8(r26.u32 + ctx.r8.u32);
	// stb r5,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// subf r4,r4,r31
	ctx.r4.s64 = r31.s64 - ctx.r4.s64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = r30.u32 & 0x3FF;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// srawi r4,r5,18
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// add r5,r29,r6
	ctx.r5.u64 = r29.u64 + ctx.r6.u64;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// subf r3,r6,r29
	ctx.r3.s64 = r29.s64 - ctx.r6.s64;
	// clrlwi r6,r4,22
	ctx.r6.u64 = ctx.r4.u32 & 0x3FF;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r6,r5,18
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r3,18
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
	// clrlwi r3,r6,22
	ctx.r3.u64 = ctx.r6.u32 & 0x3FF;
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lbzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
loc_82D4B27C:
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// bne 0x82d4b074
	if (!cr0.eq) goto loc_82D4B074;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82D4ADF0) {
	__imp__sub_82D4ADF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4B290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mflr r12
	// bl 0x82ca2bc8
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// li r29,8
	r29.s64 = 8;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r30,r11,128
	r30.s64 = r11.s64 + 128;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r8,96
	r11.s64 = ctx.r8.s64 + 96;
loc_82D4B2B4:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x82d4b448
	if (cr6.eq) goto loc_82D4B448;
	// lhz r8,-80(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -80);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r5,-64(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b334
	if (!cr6.eq) goto loc_82D4B334;
	// lhz r8,-96(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -96);
	// lhz r5,-96(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r5.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r5,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r5.u32);
	// stw r5,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r5.u32);
	// b 0x82d4b448
	goto loc_82D4B448;
loc_82D4B334:
	// lhz r3,-80(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + -80);
	// lhz r5,-48(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + -48);
	// lhz r4,-48(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r31,-16(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + -16);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,-16(r10)
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// mullw r24,r3,r8
	r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r27,-64(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + -64);
	// lhz r26,-64(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// lhz r25,0(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r23,-96(r10)
	r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// lhz r3,-96(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + -96);
	// lhz r21,16(r10)
	r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r22,16(r11)
	r22.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// extsh r20,r8
	r20.s64 = ctx.r8.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mulli r8,r4,7373
	ctx.r8.s64 = ctx.r4.s64 * 7373;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// mulli r5,r24,20995
	ctx.r5.s64 = r24.s64 * 20995;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r28,r23
	r28.s64 = r23.s16;
	// mullw r27,r27,r26
	r27.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// extsh r23,r21
	r23.s64 = r21.s16;
	// add r21,r5,r8
	r21.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mullw r26,r25,r20
	r26.s64 = int64_t(r25.s32) * int64_t(r20.s32);
	// mullw r5,r3,r28
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// extsh r25,r22
	r25.s64 = r22.s16;
	// mulli r4,r4,17799
	ctx.r4.s64 = ctx.r4.s64 * 17799;
	// mulli r22,r31,11893
	r22.s64 = r31.s64 * 11893;
	// mulli r28,r27,15137
	r28.s64 = r27.s64 * 15137;
	// mulli r27,r26,6270
	r27.s64 = r26.s64 * 6270;
	// mulli r31,r31,4926
	r31.s64 = r31.s64 * 4926;
	// mullw r25,r25,r23
	r25.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// subf r3,r4,r22
	ctx.r3.s64 = r22.s64 - ctx.r4.s64;
	// subf r4,r27,r28
	ctx.r4.s64 = r28.s64 - r27.s64;
	// mulli r8,r24,8697
	ctx.r8.s64 = r24.s64 * 8697;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// subf r31,r31,r21
	r31.s64 = r21.s64 - r31.s64;
	// mulli r28,r25,4176
	r28.s64 = r25.s64 * 4176;
	// add r27,r3,r8
	r27.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r3,r28,r31
	ctx.r3.s64 = r31.s64 - r28.s64;
	// mulli r26,r25,1730
	r26.s64 = r25.s64 * 1730;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r31,r8,r3
	r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r5,r26,r27
	ctx.r5.s64 = r27.s64 - r26.s64;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r31,r31,2048
	r31.s64 = r31.s64 + 2048;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r4,r8,2048
	ctx.r4.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r31,12
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 12;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// addi r5,r5,2048
	ctx.r5.s64 = ctx.r5.s64 + 2048;
	// stw r8,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// srawi r4,r4,12
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 12;
	// srawi r3,r3,12
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 12;
	// srawi r8,r5,12
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 12;
	// stw r4,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r4.u32);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
loc_82D4B448:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bgt 0x82d4b2b4
	if (cr0.gt) goto loc_82D4B2B4;
	// addi r11,r1,-240
	r11.s64 = ctx.r1.s64 + -240;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,4
	r28.s64 = 4;
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_82D4B46C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4b4e0
	if (!cr6.eq) goto loc_82D4B4E0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r6,r8,22
	ctx.r6.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + r30.u32);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// b 0x82d4b5a4
	goto loc_82D4B5A4;
loc_82D4B4E0:
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mulli r8,r3,20995
	ctx.r8.s64 = ctx.r3.s64 * 20995;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r27,20(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r26,28(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mulli r9,r31,7373
	ctx.r9.s64 = r31.s64 * 7373;
	// mulli r5,r5,6270
	ctx.r5.s64 = ctx.r5.s64 * 6270;
	// mulli r6,r6,15137
	ctx.r6.s64 = ctx.r6.s64 * 15137;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r24,r27,4926
	r24.s64 = r27.s64 * 4926;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r8,r25,14,0,17
	ctx.r8.u64 = rotl64(r25.u32 | (r25.u64 << 32), 14) & 0xFFFFC000;
	// subf r5,r24,r9
	ctx.r5.s64 = ctx.r9.s64 - r24.s64;
	// mulli r25,r26,4176
	r25.s64 = r26.s64 * 4176;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r5,r25,r5
	ctx.r5.s64 = ctx.r5.s64 - r25.s64;
	// mulli r31,r31,17799
	r31.s64 = r31.s64 * 17799;
	// mulli r27,r27,11893
	r27.s64 = r27.s64 * 11893;
	// add r25,r9,r5
	r25.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mulli r3,r3,8697
	ctx.r3.s64 = ctx.r3.s64 * 8697;
	// subf r31,r31,r27
	r31.s64 = r27.s64 - r31.s64;
	// add r27,r25,r4
	r27.u64 = r25.u64 + ctx.r4.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// mulli r31,r26,1730
	r31.s64 = r26.s64 * 1730;
	// subf r9,r6,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r6,r27,19
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFF) != 0);
	ctx.r6.s64 = r27.s32 >> 19;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - r31.s64;
	// clrlwi r3,r6,22
	ctx.r3.u64 = ctx.r6.u32 & 0x3FF;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r6,r5,19
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 19;
	// lbzx r5,r3,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + r30.u32);
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r9,r8,19
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 19;
	// clrlwi r8,r6,22
	ctx.r8.u64 = ctx.r6.u32 & 0x3FF;
	// srawi r6,r3,19
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 19;
	// clrlwi r3,r9,22
	ctx.r3.u64 = ctx.r9.u32 & 0x3FF;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// clrlwi r9,r6,22
	ctx.r9.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r30.u32);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbzx r6,r3,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + r30.u32);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lbzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
loc_82D4B5A4:
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82d4b46c
	if (!cr0.eq) goto loc_82D4B46C;
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_82D4B290) {
	__imp__sub_82D4B290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bdc
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// addi r9,r1,-124
	ctx.r9.s64 = ctx.r1.s64 + -124;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// addi r11,r5,48
	r11.s64 = ctx.r5.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82D4B5E4:
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// beq cr6,0x82d4b6f4
	if (cr6.eq) goto loc_82D4B6F4;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x82d4b6f4
	if (cr6.eq) goto loc_82D4B6F4;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82d4b6f4
	if (cr6.eq) goto loc_82D4B6F4;
	// lhz r8,-32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d4b658
	if (!cr6.eq) goto loc_82D4B658;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b658
	if (!cr6.eq) goto loc_82D4B658;
	// lhz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b658
	if (!cr6.eq) goto loc_82D4B658;
	// lhz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b658
	if (!cr6.eq) goto loc_82D4B658;
	// lhz r8,-48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -48);
	// lhz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r4.u32);
	// stw r4,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r4.u32);
	// b 0x82d4b6f4
	goto loc_82D4B6F4;
loc_82D4B658:
	// lhz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// lhz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r30,64(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 64);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r29,64(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r28,-32(r10)
	r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + -32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r27,0(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r26,0(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r4,-48(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + -48);
	// lhz r25,-48(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// extsh r29,r28
	r29.s64 = r28.s16;
	// mulli r5,r5,6967
	ctx.r5.s64 = ctx.r5.s64 * 6967;
	// mulli r30,r30,5906
	r30.s64 = r30.s64 * 5906;
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - r30.s64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r25
	r30.s64 = r25.s16;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mullw r4,r4,r30
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mulli r30,r29,10426
	r30.s64 = r29.s64 * 10426;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - r30.s64;
	// rlwinm r8,r4,15,0,16
	ctx.r8.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r5,r4,4096
	ctx.r5.s64 = ctx.r4.s64 + 4096;
	// addi r4,r8,4096
	ctx.r4.s64 = ctx.r8.s64 + 4096;
	// srawi r8,r5,13
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 13;
	// srawi r5,r4,13
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// stw r5,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r5.u32);
loc_82D4B6F4:
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// beq cr6,0x82d4b800
	if (cr6.eq) goto loc_82D4B800;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x82d4b800
	if (cr6.eq) goto loc_82D4B800;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82d4b800
	if (cr6.eq) goto loc_82D4B800;
	// lhz r8,-30(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -30);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d4b764
	if (!cr6.eq) goto loc_82D4B764;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b764
	if (!cr6.eq) goto loc_82D4B764;
	// lhz r5,34(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 34);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b764
	if (!cr6.eq) goto loc_82D4B764;
	// lhz r5,66(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 66);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b764
	if (!cr6.eq) goto loc_82D4B764;
	// lhz r8,-46(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -46);
	// lhz r5,-46(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -46);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// b 0x82d4b7fc
	goto loc_82D4B7FC;
loc_82D4B764:
	// lhz r30,34(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 34);
	// lhz r29,34(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 34);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r28,66(r11)
	r28.u64 = PPC_LOAD_U16(r11.u32 + 66);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r27,66(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 66);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// lhz r26,-30(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + -30);
	// lhz r25,-46(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + -46);
	// extsh r29,r28
	r29.s64 = r28.s16;
	// extsh r28,r27
	r28.s64 = r27.s16;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r4,-46(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + -46);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mulli r5,r5,10426
	ctx.r5.s64 = ctx.r5.s64 * 10426;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// mulli r30,r30,6967
	r30.s64 = r30.s64 * 6967;
	// extsh r27,r4
	r27.s64 = ctx.r4.s16;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// subf r5,r5,r30
	ctx.r5.s64 = r30.s64 - ctx.r5.s64;
	// mulli r4,r29,5906
	ctx.r4.s64 = r29.s64 * 5906;
	// extsh r28,r25
	r28.s64 = r25.s16;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r27,r28
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_82D4B7FC:
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
loc_82D4B800:
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82d4b908
	if (cr6.eq) goto loc_82D4B908;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82d4b908
	if (cr6.eq) goto loc_82D4B908;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82d4b908
	if (cr6.eq) goto loc_82D4B908;
	// lhz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -28);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d4b86c
	if (!cr6.eq) goto loc_82D4B86C;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b86c
	if (!cr6.eq) goto loc_82D4B86C;
	// lhz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b86c
	if (!cr6.eq) goto loc_82D4B86C;
	// lhz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 68);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b86c
	if (!cr6.eq) goto loc_82D4B86C;
	// lhz r8,-44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -44);
	// lhz r5,-44(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -44);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// b 0x82d4b904
	goto loc_82D4B904;
loc_82D4B86C:
	// lhz r30,36(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// lhz r29,36(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r28,68(r11)
	r28.u64 = PPC_LOAD_U16(r11.u32 + 68);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r27,68(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// lhz r26,-28(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + -28);
	// lhz r25,-44(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + -44);
	// extsh r29,r28
	r29.s64 = r28.s16;
	// extsh r28,r27
	r28.s64 = r27.s16;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r4,-44(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + -44);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mulli r5,r5,10426
	ctx.r5.s64 = ctx.r5.s64 * 10426;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// mulli r30,r30,6967
	r30.s64 = r30.s64 * 6967;
	// extsh r27,r4
	r27.s64 = ctx.r4.s16;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// subf r5,r5,r30
	ctx.r5.s64 = r30.s64 - ctx.r5.s64;
	// mulli r4,r29,5906
	ctx.r4.s64 = r29.s64 * 5906;
	// extsh r28,r25
	r28.s64 = r25.s16;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r27,r28
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
loc_82D4B904:
	// stw r4,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r4.u32);
loc_82D4B908:
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// beq cr6,0x82d4ba14
	if (cr6.eq) goto loc_82D4BA14;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x82d4ba14
	if (cr6.eq) goto loc_82D4BA14;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82d4ba14
	if (cr6.eq) goto loc_82D4BA14;
	// lhz r8,-26(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -26);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d4b978
	if (!cr6.eq) goto loc_82D4B978;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b978
	if (!cr6.eq) goto loc_82D4B978;
	// lhz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b978
	if (!cr6.eq) goto loc_82D4B978;
	// lhz r5,70(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 70);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4b978
	if (!cr6.eq) goto loc_82D4B978;
	// lhz r8,-42(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -42);
	// lhz r5,-42(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -42);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// b 0x82d4ba10
	goto loc_82D4BA10;
loc_82D4B978:
	// lhz r30,38(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// lhz r29,38(r10)
	r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 38);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhz r28,70(r11)
	r28.u64 = PPC_LOAD_U16(r11.u32 + 70);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r27,70(r10)
	r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 70);
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// lhz r26,-26(r10)
	r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + -26);
	// lhz r25,-42(r10)
	r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + -42);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r29,r28
	r29.s64 = r28.s16;
	// extsh r28,r27
	r28.s64 = r27.s16;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r4,-42(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + -42);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// extsh r28,r26
	r28.s64 = r26.s16;
	// mulli r5,r5,10426
	ctx.r5.s64 = ctx.r5.s64 * 10426;
	// mulli r30,r30,6967
	r30.s64 = r30.s64 * 6967;
	// extsh r27,r4
	r27.s64 = ctx.r4.s16;
	// mullw r4,r28,r8
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// subf r5,r5,r30
	ctx.r5.s64 = r30.s64 - ctx.r5.s64;
	// extsh r8,r25
	ctx.r8.s64 = r25.s16;
	// mulli r30,r29,5906
	r30.s64 = r29.s64 * 5906;
	// mullw r29,r27,r8
	r29.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// mulli r4,r4,29692
	ctx.r4.s64 = ctx.r4.s64 * 29692;
	// subf r8,r30,r5
	ctx.r8.s64 = ctx.r5.s64 - r30.s64;
	// rlwinm r5,r29,15,0,16
	ctx.r5.u64 = rotl64(r29.u32 | (r29.u64 << 32), 15) & 0xFFFF8000;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
loc_82D4BA10:
	// stw r4,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r4.u32);
loc_82D4BA14:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addic. r8,r3,2
	xer.ca = ctx.r3.u32 > 4294967293;
	ctx.r8.s64 = ctx.r3.s64 + 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bgt 0x82d4b5e4
	if (cr0.gt) goto loc_82D4B5E4;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lwz r10,-124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-124) );
	// lwz r5,-100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-100) );
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r9,-108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-108) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r4,-116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-116) );
	// bne cr6,0x82d4ba88
	if (!cr6.eq) goto loc_82D4BA88;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82d4ba88
	if (!cr6.eq) goto loc_82D4BA88;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d4ba88
	if (!cr6.eq) goto loc_82D4BA88;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82d4ba88
	if (!cr6.eq) goto loc_82D4BA88;
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-128) );
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r5,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + r31.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r3.u8);
	// stb r3,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r3.u8);
	// b 0x82d4badc
	goto loc_82D4BADC;
loc_82D4BA88:
	// mulli r10,r10,29692
	ctx.r10.s64 = ctx.r10.s64 * 29692;
	// lwz r3,-128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-128) );
	// mulli r4,r4,10426
	ctx.r4.s64 = ctx.r4.s64 * 10426;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// mulli r9,r9,6967
	ctx.r9.s64 = ctx.r9.s64 * 6967;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r5,5906
	ctx.r5.s64 = ctx.r5.s64 * 5906;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r9,r3,15,0,16
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r5,r10,20
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 20;
	// srawi r4,r9,20
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r10,r4,22
	ctx.r10.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r9,r3,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + r31.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// lbzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + r31.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r5.u8);
loc_82D4BADC:
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// lwz r9,-92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-92) );
	// lwz r6,-68(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-68) );
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-76) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r5,-84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-84) );
	// bne cr6,0x82d4bb34
	if (!cr6.eq) goto loc_82D4BB34;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82d4bb34
	if (!cr6.eq) goto loc_82D4BB34;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d4bb34
	if (!cr6.eq) goto loc_82D4BB34;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82d4bb34
	if (!cr6.eq) goto loc_82D4BB34;
	// lwz r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-96) );
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,22
	ctx.r7.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + r31.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r6.u8);
	// b 0x82ca2c2c
	return;
loc_82D4BB34:
	// mulli r10,r10,6967
	ctx.r10.s64 = ctx.r10.s64 * 6967;
	// lwz r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-96) );
	// mulli r9,r9,29692
	ctx.r9.s64 = ctx.r9.s64 * 29692;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r3,r6,5906
	ctx.r3.s64 = ctx.r6.s64 * 5906;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mulli r6,r5,10426
	ctx.r6.s64 = ctx.r5.s64 * 10426;
	// rlwinm r9,r7,15,0,16
	ctx.r9.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r9,r3,20
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 20;
	// srawi r8,r10,20
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 20;
	// clrlwi r7,r9,22
	ctx.r7.u64 = ctx.r9.u32 & 0x3FF;
	// clrlwi r6,r8,22
	ctx.r6.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + r31.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// lbzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + r31.u32);
	// stb r4,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r4.u8);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D4B5C0) {
	__imp__sub_82D4B5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4BB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(328) );
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r11,r4,r8
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// clrlwi r11,r11,22
	r11.u64 = r11.u32 & 0x3FF;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 128);
	// stbx r9,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4BB90) {
	__imp__sub_82D4BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4BBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74d0
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f11
	ctx.f8.f64 = static_cast<float>(ctx.f10.f64 - ctx.f11.f64);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f9
	ctx.f4.f64 = static_cast<float>(ctx.f7.f64 - ctx.f9.f64);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f5
	ctx.f2.f64 = static_cast<float>(ctx.f13.f64 - ctx.f5.f64);
	// fsubs f1,f3,f12
	ctx.f1.f64 = static_cast<float>(ctx.f3.f64 - ctx.f12.f64);
	// lfs f30,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f30.f64 = double(temp.f32);
	// fadds f10,f13,f5
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f27,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f27.f64 = double(temp.f32);
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fadds f28,f30,f7
	f28.f64 = double(float(f30.f64 + ctx.f7.f64));
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f30,f7
	ctx.f7.f64 = static_cast<float>(f30.f64 - ctx.f7.f64);
	// lfs f29,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f29.f64 = double(temp.f32);
	// fadds f31,f9,f11
	f31.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f23,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f23.f64 = double(temp.f32);
	// lfs f26,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f26.f64 = double(temp.f32);
	// fsubs f25,f27,f29
	f25.f64 = static_cast<float>(f27.f64 - f29.f64);
	// fadds f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9104);
	f0.f64 = double(temp.f32);
	// fadds f29,f27,f29
	f29.f64 = double(float(f27.f64 + f29.f64));
	// lfs f13,9100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f24,f1,f2
	f24.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f12,9096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9096);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// lfs f22,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	f22.f64 = double(temp.f32);
	// fsubs f8,f5,f6
	ctx.f8.f64 = static_cast<float>(ctx.f5.f64 - ctx.f6.f64);
	// lfs f20,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	f20.f64 = double(temp.f32);
	// fsubs f21,f10,f3
	f21.f64 = static_cast<float>(ctx.f10.f64 - ctx.f3.f64);
	// stfs f0,-228(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f5,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f23,f26
	f27.f64 = double(float(f23.f64 + f26.f64));
	// stfs f13,-232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = static_cast<float>(ctx.f9.f64 - ctx.f11.f64);
	// lfs f11,9092(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9092);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f26,f23,f26
	f26.f64 = static_cast<float>(f23.f64 - f26.f64);
	// stfs f12,-240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fsubs f23,f31,f28
	f23.f64 = static_cast<float>(f31.f64 - f28.f64);
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fsubs f30,f4,f24
	f30.f64 = static_cast<float>(ctx.f4.f64 - f24.f64);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fadds f31,f28,f31
	f31.f64 = double(float(f28.f64 + f31.f64));
	// fadds f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 + f21.f64));
	// fadds f28,f6,f3
	f28.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f28,0(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f6,f3,f6
	ctx.f6.f64 = static_cast<float>(ctx.f3.f64 - ctx.f6.f64);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f6,f25,f9
	ctx.f6.f64 = double(float(f25.f64 + ctx.f9.f64));
	// fadds f28,f26,f25
	f28.f64 = double(float(f26.f64 + f25.f64));
	// fadds f3,f27,f29
	ctx.f3.f64 = double(float(f27.f64 + f29.f64));
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fsubs f25,f2,f1
	f25.f64 = static_cast<float>(ctx.f2.f64 - ctx.f1.f64);
	// fadds f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmadds f8,f4,f12,f30
	ctx.f8.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f12.f64), float(f30.f64)));
	// fmadds f4,f24,f11,f30
	ctx.f4.f64 = double(std::fma(float(f24.f64), float(ctx.f11.f64), float(f30.f64)));
	// fadds f30,f1,f21
	f30.f64 = double(float(ctx.f1.f64 + f21.f64));
	// stfs f30,8(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f1,f21,f1
	ctx.f1.f64 = static_cast<float>(f21.f64 - ctx.f1.f64);
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f1,f25,f8
	ctx.f1.f64 = double(float(f25.f64 + ctx.f8.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f8,f25,f8
	ctx.f8.f64 = static_cast<float>(f25.f64 - ctx.f8.f64);
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f8,f10,f5
	ctx.f8.f64 = static_cast<float>(ctx.f10.f64 - ctx.f5.f64);
	// lfs f1,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f24,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f24.f64 = double(temp.f32);
	// lfs f30,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	f30.f64 = double(temp.f32);
	// fsubs f19,f24,f1
	f19.f64 = static_cast<float>(f24.f64 - ctx.f1.f64);
	// lfs f10,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f25,f22,f30
	f25.f64 = static_cast<float>(f22.f64 - f30.f64);
	// fsubs f21,f10,f20
	f21.f64 = static_cast<float>(ctx.f10.f64 - f20.f64);
	// lfs f18,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	f18.f64 = double(temp.f32);
	// fadds f30,f22,f30
	f30.f64 = double(float(f22.f64 + f30.f64));
	// lfs f22,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	f22.f64 = double(temp.f32);
	// fadds f1,f24,f1
	ctx.f1.f64 = double(float(f24.f64 + ctx.f1.f64));
	// lfs f24,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	f24.f64 = double(temp.f32);
	// fadds f10,f10,f20
	ctx.f10.f64 = double(float(ctx.f10.f64 + f20.f64));
	// lfs f20,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	f20.f64 = double(temp.f32);
	// fadds f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 + f26.f64));
	// lfs f26,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	f26.f64 = double(temp.f32);
	// fadds f16,f2,f4
	f16.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f16,4(r3)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f4,f2,f4
	ctx.f4.f64 = static_cast<float>(ctx.f2.f64 - ctx.f4.f64);
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * f0.f64));
	// lfs f17,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	f17.f64 = double(temp.f32);
	// fadds f4,f19,f8
	ctx.f4.f64 = double(float(f19.f64 + ctx.f8.f64));
	// lfs f15,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	f15.f64 = double(temp.f32);
	// fsubs f29,f29,f27
	f29.f64 = static_cast<float>(f29.f64 - f27.f64);
	// lfs f27,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	f27.f64 = double(temp.f32);
	// fadds f2,f21,f25
	ctx.f2.f64 = double(float(f21.f64 + f25.f64));
	// fadds f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 + f21.f64));
	// fsubs f19,f30,f1
	f19.f64 = static_cast<float>(f30.f64 - ctx.f1.f64);
	// fsubs f21,f10,f5
	f21.f64 = static_cast<float>(ctx.f10.f64 - ctx.f5.f64);
	// fsubs f16,f7,f6
	f16.f64 = static_cast<float>(ctx.f7.f64 - ctx.f6.f64);
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fadds f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f10,f28,f9
	ctx.f10.f64 = double(float(f28.f64 + ctx.f9.f64));
	// fsubs f9,f9,f28
	ctx.f9.f64 = static_cast<float>(ctx.f9.f64 - f28.f64);
	// fadds f28,f3,f31
	f28.f64 = double(float(ctx.f3.f64 + f31.f64));
	// stfs f28,32(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f30,f4,f2
	f30.f64 = static_cast<float>(ctx.f4.f64 - ctx.f2.f64);
	// fadds f29,f29,f23
	f29.f64 = double(float(f29.f64 + f23.f64));
	// fsubs f3,f31,f3
	ctx.f3.f64 = static_cast<float>(f31.f64 - ctx.f3.f64);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f28,f21,f19
	f28.f64 = double(float(f21.f64 + f19.f64));
	// fmuls f21,f16,f13
	f21.f64 = double(float(f16.f64 * ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fadds f3,f22,f18
	ctx.f3.f64 = double(float(f22.f64 + f18.f64));
	// fsubs f31,f22,f18
	f31.f64 = static_cast<float>(f22.f64 - f18.f64);
	// fadds f22,f5,f1
	f22.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f22,64(r3)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f1,f1,f5
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - ctx.f5.f64);
	// stfs f1,80(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * f0.f64));
	// fmuls f5,f28,f0
	ctx.f5.f64 = double(float(f28.f64 * f0.f64));
	// fmadds f1,f7,f12,f21
	ctx.f1.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f12.f64), float(f21.f64)));
	// fmadds f7,f6,f11,f21
	ctx.f7.f64 = double(std::fma(float(ctx.f6.f64), float(ctx.f11.f64), float(f21.f64)));
	// fsubs f22,f25,f8
	f22.f64 = static_cast<float>(f25.f64 - ctx.f8.f64);
	// fadds f8,f8,f25
	ctx.f8.f64 = double(float(ctx.f8.f64 + f25.f64));
	// fadds f28,f27,f26
	f28.f64 = double(float(f27.f64 + f26.f64));
	// fmadds f4,f4,f12,f30
	ctx.f4.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f12.f64), float(f30.f64)));
	// fadds f6,f29,f23
	ctx.f6.f64 = double(float(f29.f64 + f23.f64));
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f6,f23,f29
	ctx.f6.f64 = static_cast<float>(f23.f64 - f29.f64);
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f25,f5,f19
	f25.f64 = double(float(ctx.f5.f64 + f19.f64));
	// stfs f25,72(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fadds f25,f9,f1
	f25.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f25,52(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f1,f9,f1
	ctx.f1.f64 = static_cast<float>(ctx.f9.f64 - ctx.f1.f64);
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fadds f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f7,f10,f7
	ctx.f7.f64 = static_cast<float>(ctx.f10.f64 - ctx.f7.f64);
	// stfs f7,60(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f5,f19,f5
	ctx.f5.f64 = static_cast<float>(f19.f64 - ctx.f5.f64);
	// stfs f5,88(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f6,f24,f20
	ctx.f6.f64 = double(float(f24.f64 + f20.f64));
	// fsubs f29,f24,f20
	f29.f64 = static_cast<float>(f24.f64 - f20.f64);
	// fmadds f2,f2,f11,f30
	ctx.f2.f64 = double(std::fma(float(ctx.f2.f64), float(ctx.f11.f64), float(f30.f64)));
	// fadds f1,f22,f4
	ctx.f1.f64 = double(float(f22.f64 + ctx.f4.f64));
	// fsubs f11,f27,f26
	ctx.f11.f64 = static_cast<float>(f27.f64 - f26.f64);
	// stfd f13,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f13.u64);
	// fsubs f9,f15,f17
	ctx.f9.f64 = static_cast<float>(f15.f64 - f17.f64);
	// stfd f12,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f12.u64);
	// fadds f5,f15,f17
	ctx.f5.f64 = double(float(f15.f64 + f17.f64));
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f29,f31
	f27.f64 = double(float(f29.f64 + f31.f64));
	// lfs f7,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f25,f6,f28
	f25.f64 = static_cast<float>(ctx.f6.f64 - f28.f64);
	// lfs f30,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	f30.f64 = double(temp.f32);
	// lfs f24,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	f24.f64 = double(temp.f32);
	// fadds f21,f10,f30
	f21.f64 = double(float(ctx.f10.f64 + f30.f64));
	// lfs f20,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	f20.f64 = double(temp.f32);
	// fsubs f10,f10,f30
	ctx.f10.f64 = static_cast<float>(ctx.f10.f64 - f30.f64);
	// lfs f18,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	f18.f64 = double(temp.f32);
	// fadds f6,f28,f6
	ctx.f6.f64 = double(float(f28.f64 + ctx.f6.f64));
	// lfs f26,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	f26.f64 = double(temp.f32);
	// fadds f16,f18,f7
	f16.f64 = double(float(f18.f64 + ctx.f7.f64));
	// lfs f23,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f23.f64 = double(temp.f32);
	// fadds f19,f24,f26
	f19.f64 = double(float(f24.f64 + f26.f64));
	// fadds f29,f11,f29
	f29.f64 = double(float(ctx.f11.f64 + f29.f64));
	// lfs f30,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	f30.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f13,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f3,f5
	ctx.f12.f64 = static_cast<float>(ctx.f3.f64 - ctx.f5.f64);
	// stfs f12,-224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fadds f17,f20,f23
	f17.f64 = double(float(f20.f64 + f23.f64));
	// stfs f1,84(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f7,f18,f7
	ctx.f7.f64 = static_cast<float>(f18.f64 - ctx.f7.f64);
	// stfs f30,-216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f13,-220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fsubs f4,f22,f4
	ctx.f4.f64 = static_cast<float>(f22.f64 - ctx.f4.f64);
	// stfs f4,76(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f26,f24,f26
	f26.f64 = static_cast<float>(f24.f64 - f26.f64);
	// lfs f15,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	f15.f64 = double(temp.f32);
	// fadds f1,f16,f21
	ctx.f1.f64 = double(float(f16.f64 + f21.f64));
	// lfs f24,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	f24.f64 = double(temp.f32);
	// fsubs f23,f20,f23
	f23.f64 = static_cast<float>(f20.f64 - f23.f64);
	// lfs f9,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * f0.f64));
	// fsubs f18,f11,f27
	f18.f64 = static_cast<float>(ctx.f11.f64 - f27.f64);
	// lfs f14,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	f14.f64 = double(temp.f32);
	// fadds f25,f25,f12
	f25.f64 = double(float(f25.f64 + ctx.f12.f64));
	// lfd f12,-176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fadds f30,f17,f19
	f30.f64 = double(float(f17.f64 + f19.f64));
	// stfs f9,-208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fadds f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f2,f8,f2
	ctx.f2.f64 = static_cast<float>(ctx.f8.f64 - ctx.f2.f64);
	// stfs f2,92(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = static_cast<float>(ctx.f5.f64 - ctx.f6.f64);
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fsubs f19,f19,f17
	f19.f64 = static_cast<float>(f19.f64 - f17.f64);
	// stfs f19,-212(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// lfs f20,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f20.f64 = double(temp.f32);
	// fadds f17,f23,f26
	f17.f64 = double(float(f23.f64 + f26.f64));
	// lfs f28,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	f28.f64 = double(temp.f32);
	// fadds f19,f24,f15
	f19.f64 = double(float(f24.f64 + f15.f64));
	// fmuls f22,f18,f13
	f22.f64 = double(float(f18.f64 * ctx.f13.f64));
	// lfs f3,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	f25.f64 = double(float(f25.f64 * f0.f64));
	// fsubs f2,f1,f30
	ctx.f2.f64 = static_cast<float>(ctx.f1.f64 - f30.f64);
	// stfs f2,144(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(f30.f64 + ctx.f1.f64));
	// lfs f2,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f2.f64 = double(temp.f32);
	// stfs f5,128(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fadds f9,f14,f9
	ctx.f9.f64 = double(float(f14.f64 + ctx.f9.f64));
	// fsubs f21,f21,f16
	f21.f64 = static_cast<float>(f21.f64 - f16.f64);
	// fsubs f4,f31,f29
	ctx.f4.f64 = static_cast<float>(f31.f64 - f29.f64);
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(f29.f64 + f31.f64));
	// fadds f8,f26,f10
	ctx.f8.f64 = double(float(f26.f64 + ctx.f10.f64));
	// fsubs f6,f24,f15
	ctx.f6.f64 = static_cast<float>(f24.f64 - f15.f64);
	// fmadds f5,f11,f12,f22
	ctx.f5.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f12.f64), float(f22.f64)));
	// fadds f12,f25,f2
	ctx.f12.f64 = double(float(f25.f64 + ctx.f2.f64));
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f11,f2,f25
	ctx.f11.f64 = static_cast<float>(ctx.f2.f64 - f25.f64);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f2,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f2.f64 = double(temp.f32);
	// fadds f31,f3,f20
	f31.f64 = double(float(ctx.f3.f64 + f20.f64));
	// fadds f11,f2,f28
	ctx.f11.f64 = double(float(ctx.f2.f64 + f28.f64));
	// lfs f30,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	f30.f64 = double(temp.f32);
	// fadds f7,f7,f23
	ctx.f7.f64 = double(float(ctx.f7.f64 + f23.f64));
	// lfs f16,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	f16.f64 = double(temp.f32);
	// fadds f26,f4,f5
	f26.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f18,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	f18.f64 = double(temp.f32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = static_cast<float>(ctx.f4.f64 - ctx.f5.f64);
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fsubs f4,f2,f28
	ctx.f4.f64 = static_cast<float>(ctx.f2.f64 - f28.f64);
	// lfs f28,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	f28.f64 = double(temp.f32);
	// fmadds f30,f27,f30,f22
	f30.f64 = double(std::fma(float(f27.f64), float(f30.f64), float(f22.f64)));
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	f27.f64 = double(temp.f32);
	// fsubs f28,f14,f28
	f28.f64 = static_cast<float>(f14.f64 - f28.f64);
	// lfs f2,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f29,f19,f9
	f29.f64 = static_cast<float>(f19.f64 - ctx.f9.f64);
	// stfs f26,116(r3)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f3,f3,f20
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - f20.f64);
	// lfs f20,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	f20.f64 = double(temp.f32);
	// fadds f27,f27,f21
	f27.f64 = double(float(f27.f64 + f21.f64));
	// lfs f26,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	f26.f64 = double(temp.f32);
	// fsubs f24,f11,f31
	f24.f64 = static_cast<float>(ctx.f11.f64 - f31.f64);
	// lfs f25,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f25.f64 = double(temp.f32);
	// fsubs f22,f7,f8
	f22.f64 = static_cast<float>(ctx.f7.f64 - ctx.f8.f64);
	// lfs f23,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	f23.f64 = double(temp.f32);
	// fmuls f12,f17,f0
	ctx.f12.f64 = double(float(f17.f64 * f0.f64));
	// lfs f15,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	f15.f64 = double(temp.f32);
	// fadds f31,f31,f11
	f31.f64 = double(float(f31.f64 + ctx.f11.f64));
	// fadds f14,f6,f4
	f14.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f9,f9,f19
	ctx.f9.f64 = double(float(ctx.f9.f64 + f19.f64));
	// lfs f19,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	f19.f64 = double(temp.f32);
	// fadds f6,f28,f6
	ctx.f6.f64 = double(float(f28.f64 + ctx.f6.f64));
	// fadds f5,f16,f18
	ctx.f5.f64 = double(float(f16.f64 + f18.f64));
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + f28.f64));
	// lfs f28,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	f28.f64 = double(temp.f32);
	// fmuls f27,f27,f0
	f27.f64 = double(float(f27.f64 * f0.f64));
	// stfs f28,-216(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f29,f29,f24
	f29.f64 = double(float(f29.f64 + f24.f64));
	// lfs f28,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	f28.f64 = double(temp.f32);
	// fmuls f22,f22,f13
	f22.f64 = double(float(f22.f64 * ctx.f13.f64));
	// lfs f13,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// fadds f17,f12,f10
	f17.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f28,-224(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = static_cast<float>(ctx.f10.f64 - ctx.f12.f64);
	// lfs f12,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f18,f16,f18
	f18.f64 = static_cast<float>(f16.f64 - f18.f64);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// stfd f11,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f11,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-212(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f28,f20,f23
	f28.f64 = double(float(f20.f64 + f23.f64));
	// fsubs f16,f3,f14
	f16.f64 = static_cast<float>(ctx.f3.f64 - f14.f64);
	// lfs f11,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f11,f25,f26
	ctx.f11.f64 = double(float(f25.f64 + f26.f64));
	// fmuls f0,f29,f0
	f0.f64 = double(float(f29.f64 * f0.f64));
	// stfs f11,-208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmadds f7,f7,f2,f22
	ctx.f7.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f2.f64), float(f22.f64)));
	// lfs f11,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fadds f29,f1,f30
	f29.f64 = double(float(ctx.f1.f64 + f30.f64));
	// stfs f29,100(r3)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f1,f1,f30
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - f30.f64);
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f1,f27,f21
	ctx.f1.f64 = double(float(f27.f64 + f21.f64));
	// stfs f1,136(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fsubs f1,f21,f27
	ctx.f1.f64 = static_cast<float>(f21.f64 - f27.f64);
	// stfs f1,152(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fadds f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 + f31.f64));
	// stfs f1,160(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fsubs f9,f31,f9
	ctx.f9.f64 = static_cast<float>(f31.f64 - ctx.f9.f64);
	// stfs f9,176(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fsubs f23,f20,f23
	f23.f64 = static_cast<float>(f20.f64 - f23.f64);
	// fmadds f2,f8,f13,f22
	ctx.f2.f64 = double(std::fma(float(ctx.f8.f64), float(ctx.f13.f64), float(f22.f64)));
	// fadds f20,f19,f15
	f20.f64 = double(float(f19.f64 + f15.f64));
	// fadds f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// fsubs f8,f25,f26
	ctx.f8.f64 = static_cast<float>(f25.f64 - f26.f64);
	// fmuls f1,f16,f12
	ctx.f1.f64 = double(float(f16.f64 * ctx.f12.f64));
	// fsubs f7,f10,f7
	ctx.f7.f64 = static_cast<float>(ctx.f10.f64 - ctx.f7.f64);
	// stfs f11,-204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f10,f17,f2
	ctx.f10.f64 = double(float(f17.f64 + ctx.f2.f64));
	// fsubs f9,f17,f2
	ctx.f9.f64 = static_cast<float>(f17.f64 - ctx.f2.f64);
	// lfd f11,-168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stfs f9,156(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fsubs f9,f4,f6
	ctx.f9.f64 = static_cast<float>(ctx.f4.f64 - ctx.f6.f64);
	// stfs f10,132(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f7,140(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// fmadds f4,f3,f11,f1
	ctx.f4.f64 = double(std::fma(float(ctx.f3.f64), float(ctx.f11.f64), float(ctx.f1.f64)));
	// fadds f7,f0,f24
	ctx.f7.f64 = double(float(f0.f64 + f24.f64));
	// stfs f7,168(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// fsubs f2,f24,f0
	ctx.f2.f64 = static_cast<float>(f24.f64 - f0.f64);
	// stfs f2,184(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// fmadds f3,f14,f13,f1
	ctx.f3.f64 = double(std::fma(float(f14.f64), float(ctx.f13.f64), float(ctx.f1.f64)));
	// lfs f1,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f19,f15
	ctx.f7.f64 = static_cast<float>(f19.f64 - f15.f64);
	// lfs f27,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	f27.f64 = double(temp.f32);
	// fadds f6,f5,f28
	ctx.f6.f64 = double(float(ctx.f5.f64 + f28.f64));
	// lfs f24,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	f24.f64 = double(temp.f32);
	// fsubs f2,f28,f5
	ctx.f2.f64 = static_cast<float>(f28.f64 - ctx.f5.f64);
	// lfs f29,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	f29.f64 = double(temp.f32);
	// fadds f5,f20,f1
	ctx.f5.f64 = double(float(f20.f64 + ctx.f1.f64));
	// lfs f28,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	f28.f64 = double(temp.f32);
	// fsubs f1,f1,f20
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - f20.f64);
	// lfs f21,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	f21.f64 = double(temp.f32);
	// fadds f30,f23,f8
	f30.f64 = double(float(f23.f64 + ctx.f8.f64));
	// lfs f25,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	f25.f64 = double(temp.f32);
	// fadds f31,f18,f23
	f31.f64 = double(float(f18.f64 + f23.f64));
	// lfs f23,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	f23.f64 = double(temp.f32);
	// fsubs f26,f27,f28
	f26.f64 = static_cast<float>(f27.f64 - f28.f64);
	// lfs f0,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	f0.f64 = double(temp.f32);
	// fsubs f22,f23,f24
	f22.f64 = static_cast<float>(f23.f64 - f24.f64);
	// fsubs f17,f21,f25
	f17.f64 = static_cast<float>(f21.f64 - f25.f64);
	// fadds f28,f27,f28
	f28.f64 = double(float(f27.f64 + f28.f64));
	// fadds f27,f23,f24
	f27.f64 = double(float(f23.f64 + f24.f64));
	// lfs f20,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	f20.f64 = double(temp.f32);
	// fadds f25,f21,f25
	f25.f64 = double(float(f21.f64 + f25.f64));
	// fsubs f19,f29,f20
	f19.f64 = static_cast<float>(f29.f64 - f20.f64);
	// fadds f29,f29,f20
	f29.f64 = double(float(f29.f64 + f20.f64));
	// fadds f7,f7,f18
	ctx.f7.f64 = double(float(ctx.f7.f64 + f18.f64));
	// fadds f21,f9,f4
	f21.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f21,180(r3)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// fsubs f9,f9,f4
	ctx.f9.f64 = static_cast<float>(ctx.f9.f64 - ctx.f4.f64);
	// stfs f9,172(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// fadds f24,f22,f26
	f24.f64 = double(float(f22.f64 + f26.f64));
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// fadds f20,f10,f3
	f20.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f20,164(r3)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fsubs f21,f28,f25
	f21.f64 = static_cast<float>(f28.f64 - f25.f64);
	// fadds f23,f19,f22
	f23.f64 = double(float(f19.f64 + f22.f64));
	// fadds f22,f17,f19
	f22.f64 = double(float(f17.f64 + f19.f64));
	// fsubs f4,f7,f30
	ctx.f4.f64 = static_cast<float>(ctx.f7.f64 - f30.f64);
	// fsubs f9,f27,f29
	ctx.f9.f64 = static_cast<float>(f27.f64 - f29.f64);
	// fsubs f3,f10,f3
	ctx.f3.f64 = static_cast<float>(ctx.f10.f64 - ctx.f3.f64);
	// stfs f3,188(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// fadds f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f10,192(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = static_cast<float>(ctx.f5.f64 - ctx.f6.f64);
	// stfs f6,208(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fadds f2,f31,f8
	ctx.f2.f64 = double(float(f31.f64 + ctx.f8.f64));
	// fsubs f8,f8,f31
	ctx.f8.f64 = static_cast<float>(ctx.f8.f64 - f31.f64);
	// fmuls f3,f23,f0
	ctx.f3.f64 = double(float(f23.f64 * f0.f64));
	// fsubs f10,f22,f24
	ctx.f10.f64 = static_cast<float>(f22.f64 - f24.f64);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f9,f9,f21
	ctx.f9.f64 = double(float(ctx.f9.f64 + f21.f64));
	// fadds f6,f29,f27
	ctx.f6.f64 = double(float(f29.f64 + f27.f64));
	// fadds f31,f25,f28
	f31.f64 = double(float(f25.f64 + f28.f64));
	// fadds f29,f3,f26
	f29.f64 = double(float(ctx.f3.f64 + f26.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f10,f26,f3
	ctx.f10.f64 = static_cast<float>(f26.f64 - ctx.f3.f64);
	// fadds f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f3,200(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// fmadds f7,f7,f11,f4
	ctx.f7.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f11.f64), float(ctx.f4.f64)));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fsubs f1,f1,f5
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - ctx.f5.f64);
	// stfs f1,216(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// fmadds f4,f30,f13,f4
	ctx.f4.f64 = double(std::fma(float(f30.f64), float(ctx.f13.f64), float(ctx.f4.f64)));
	// fadds f9,f6,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 + f31.f64));
	// fmadds f1,f24,f13,f12
	ctx.f1.f64 = double(std::fma(float(f24.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// stfs f9,224(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// fmadds f5,f22,f11,f12
	ctx.f5.f64 = double(std::fma(float(f22.f64), float(ctx.f11.f64), float(ctx.f12.f64)));
	// lfs f15,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	f15.f64 = double(temp.f32);
	// fadds f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = static_cast<float>(ctx.f8.f64 - ctx.f7.f64);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fsubs f6,f31,f6
	ctx.f6.f64 = static_cast<float>(f31.f64 - ctx.f6.f64);
	// stfs f6,240(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fadds f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f11,196(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fsubs f9,f2,f4
	ctx.f9.f64 = static_cast<float>(ctx.f2.f64 - ctx.f4.f64);
	// stfs f9,220(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// fadds f8,f3,f21
	ctx.f8.f64 = double(float(ctx.f3.f64 + f21.f64));
	// stfs f8,232(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// fsubs f7,f21,f3
	ctx.f7.f64 = static_cast<float>(f21.f64 - ctx.f3.f64);
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fmr f30,f20
	f30.f64 = f20.f64;
	// fadds f4,f29,f1
	ctx.f4.f64 = double(float(f29.f64 + ctx.f1.f64));
	// stfs f4,228(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// fadds f6,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f6,244(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fsubs f2,f10,f5
	ctx.f2.f64 = static_cast<float>(ctx.f10.f64 - ctx.f5.f64);
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// fsubs f3,f29,f1
	ctx.f3.f64 = static_cast<float>(f29.f64 - ctx.f1.f64);
	// stfs f3,252(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	f31.f64 = double(temp.f32);
	// lfs f28,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	f28.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f26,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	f26.f64 = double(temp.f32);
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f22,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	f22.f64 = double(temp.f32);
	// fadds f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// lfs f20,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f20.f64 = double(temp.f32);
	// fsubs f1,f10,f1
	ctx.f1.f64 = static_cast<float>(ctx.f10.f64 - ctx.f1.f64);
	// lfs f10,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f5
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - ctx.f5.f64);
	// lfs f5,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f18,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	f18.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = static_cast<float>(ctx.f13.f64 - ctx.f9.f64);
	// lfs f13,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f27,f12,f31
	f27.f64 = double(float(ctx.f12.f64 + f31.f64));
	// lfs f17,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	f17.f64 = double(temp.f32);
	// fadds f19,f1,f11
	f19.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f25,f28,f30
	f25.f64 = double(float(f28.f64 + f30.f64));
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f29,f2,f10
	f29.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fsubs f24,f8,f6
	f24.f64 = static_cast<float>(ctx.f8.f64 - ctx.f6.f64);
	// fsubs f21,f3,f4
	f21.f64 = static_cast<float>(ctx.f3.f64 - ctx.f4.f64);
	// fadds f23,f26,f5
	f23.f64 = double(float(f26.f64 + ctx.f5.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f2,f10
	ctx.f10.f64 = static_cast<float>(ctx.f2.f64 - ctx.f10.f64);
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f6,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f31.f64);
	// lfs f31,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	f31.f64 = double(temp.f32);
	// fadds f16,f25,f27
	f16.f64 = double(float(f25.f64 + f27.f64));
	// fsubs f30,f28,f30
	f30.f64 = static_cast<float>(f28.f64 - f30.f64);
	// lfs f28,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	f28.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fadds f24,f24,f21
	f24.f64 = double(float(f24.f64 + f21.f64));
	// fadds f14,f23,f29
	f14.f64 = double(float(f23.f64 + f29.f64));
	// fsubs f5,f26,f5
	ctx.f5.f64 = static_cast<float>(f26.f64 - ctx.f5.f64);
	// fsubs f1,f9,f19
	ctx.f1.f64 = static_cast<float>(ctx.f9.f64 - f19.f64);
	// fsubs f27,f27,f25
	f27.f64 = static_cast<float>(f27.f64 - f25.f64);
	// fadds f26,f8,f4
	f26.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f26,0(r3)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f8,f4,f8
	ctx.f8.f64 = static_cast<float>(ctx.f4.f64 - ctx.f8.f64);
	// stfs f8,128(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fmuls f8,f24,f0
	ctx.f8.f64 = double(float(f24.f64 * f0.f64));
	// fadds f4,f16,f14
	ctx.f4.f64 = double(float(f16.f64 + f14.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f29,f29,f23
	f29.f64 = static_cast<float>(f29.f64 - f23.f64);
	// stfs f29,-204(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f4,f14,f16
	ctx.f4.f64 = static_cast<float>(f14.f64 - f16.f64);
	// stfs f4,132(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f14,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	f14.f64 = double(temp.f32);
	// fadds f24,f2,f11
	f24.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f14,-216(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fsubs f11,f11,f2
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - ctx.f2.f64);
	// lfs f16,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	f16.f64 = double(temp.f32);
	// fadds f26,f18,f6
	f26.f64 = double(float(f18.f64 + ctx.f6.f64));
	// fadds f4,f20,f22
	ctx.f4.f64 = double(float(f20.f64 + f22.f64));
	// fadds f2,f12,f10
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f23,f8,f21
	f23.f64 = double(float(ctx.f8.f64 + f21.f64));
	// stfs f23,64(r3)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f8,f21,f8
	ctx.f8.f64 = static_cast<float>(f21.f64 - ctx.f8.f64);
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fadds f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 + f30.f64));
	// lfs f21,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	f21.f64 = double(temp.f32);
	// fadds f25,f30,f12
	f25.f64 = double(float(f30.f64 + ctx.f12.f64));
	// fadds f8,f7,f17
	ctx.f8.f64 = double(float(ctx.f7.f64 + f17.f64));
	// fadds f12,f3,f31
	ctx.f12.f64 = double(float(ctx.f3.f64 + f31.f64));
	// fmadds f9,f9,f15,f1
	ctx.f9.f64 = double(std::fma(float(ctx.f9.f64), float(f15.f64), float(ctx.f1.f64)));
	// fsubs f23,f20,f22
	f23.f64 = static_cast<float>(f20.f64 - f22.f64);
	// lfs f20,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	f20.f64 = double(temp.f32);
	// fmadds f1,f19,f28,f1
	ctx.f1.f64 = double(std::fma(float(f19.f64), float(f28.f64), float(ctx.f1.f64)));
	// lfs f19,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f19.f64 = double(temp.f32);
	// fadds f22,f26,f4
	f22.f64 = double(float(f26.f64 + ctx.f4.f64));
	// stfs f22,-208(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fsubs f6,f18,f6
	ctx.f6.f64 = static_cast<float>(f18.f64 - ctx.f6.f64);
	// lfs f18,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	f18.f64 = double(temp.f32);
	// fsubs f4,f4,f26
	ctx.f4.f64 = static_cast<float>(ctx.f4.f64 - f26.f64);
	// lfs f26,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	f26.f64 = double(temp.f32);
	// fsubs f28,f5,f2
	f28.f64 = static_cast<float>(ctx.f5.f64 - ctx.f2.f64);
	// fsubs f3,f3,f31
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - f31.f64);
	// lfs f31,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	f31.f64 = double(temp.f32);
	// fsubs f7,f7,f17
	ctx.f7.f64 = static_cast<float>(ctx.f7.f64 - f17.f64);
	// lfs f17,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	f17.f64 = double(temp.f32);
	// fsubs f22,f12,f8
	f22.f64 = static_cast<float>(ctx.f12.f64 - ctx.f8.f64);
	// stfs f22,-224(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f25,f25,f0
	f25.f64 = double(float(f25.f64 * f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f30,f27,f29
	f30.f64 = double(float(f27.f64 + f29.f64));
	// lfs f27,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f27.f64 = double(temp.f32);
	// fmr f29,f15
	f29.f64 = f15.f64;
	// fadds f14,f19,f20
	f14.f64 = double(float(f19.f64 + f20.f64));
	// fadds f15,f27,f21
	f15.f64 = double(float(f27.f64 + f21.f64));
	// fmuls f8,f28,f13
	ctx.f8.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f6,f23
	f28.f64 = double(float(ctx.f6.f64 + f23.f64));
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f4,f22
	ctx.f4.f64 = double(float(ctx.f4.f64 + f22.f64));
	// lfs f22,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f22.f64 = double(temp.f32);
	// fadds f23,f23,f3
	f23.f64 = double(float(f23.f64 + ctx.f3.f64));
	// stfs f22,-220(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f22,f25,f10
	f22.f64 = double(float(f25.f64 + ctx.f10.f64));
	// stfs f6,-212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fsubs f10,f10,f25
	ctx.f10.f64 = static_cast<float>(ctx.f10.f64 - f25.f64);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fadds f25,f13,f18
	f25.f64 = double(float(ctx.f13.f64 + f18.f64));
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * f0.f64));
	// fsubs f13,f13,f18
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f18.f64);
	// fmadds f2,f2,f31,f8
	ctx.f2.f64 = double(std::fma(float(ctx.f2.f64), float(f31.f64), float(ctx.f8.f64)));
	// fmuls f31,f28,f0
	f31.f64 = double(float(f28.f64 * f0.f64));
	// fmadds f5,f5,f29,f8
	ctx.f5.f64 = double(std::fma(float(ctx.f5.f64), float(f29.f64), float(ctx.f8.f64)));
	// lfs f29,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	f29.f64 = double(temp.f32);
	// fsubs f28,f19,f20
	f28.f64 = static_cast<float>(f19.f64 - f20.f64);
	// lfs f20,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	f20.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f0,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	f0.f64 = double(temp.f32);
	// fadds f8,f17,f26
	ctx.f8.f64 = double(float(f17.f64 + f26.f64));
	// fsubs f19,f7,f23
	f19.f64 = static_cast<float>(ctx.f7.f64 - f23.f64);
	// fadds f18,f11,f9
	f18.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - ctx.f9.f64);
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f9,f24,f1
	ctx.f9.f64 = static_cast<float>(f24.f64 - ctx.f1.f64);
	// stfs f9,224(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// fadds f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f9,164(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fsubs f5,f10,f5
	ctx.f5.f64 = static_cast<float>(ctx.f10.f64 - ctx.f5.f64);
	// stfs f18,160(r3)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fadds f10,f20,f12
	ctx.f10.f64 = double(float(f20.f64 + ctx.f12.f64));
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f9,f12,f20
	ctx.f9.f64 = static_cast<float>(ctx.f12.f64 - f20.f64);
	// stfs f9,136(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fsubs f11,f29,f30
	ctx.f11.f64 = static_cast<float>(f29.f64 - f30.f64);
	// stfs f11,196(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fsubs f12,f17,f26
	ctx.f12.f64 = static_cast<float>(f17.f64 - f26.f64);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f18,f24,f1
	f18.f64 = double(float(f24.f64 + ctx.f1.f64));
	// lfs f24,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	f24.f64 = double(temp.f32);
	// fadds f1,f30,f29
	ctx.f1.f64 = double(float(f30.f64 + f29.f64));
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f11,f22,f2
	ctx.f11.f64 = static_cast<float>(f22.f64 - ctx.f2.f64);
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// fsubs f9,f27,f21
	ctx.f9.f64 = static_cast<float>(f27.f64 - f21.f64);
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	f27.f64 = double(temp.f32);
	// fmuls f30,f19,f0
	f30.f64 = double(float(f19.f64 * f0.f64));
	// lfs f19,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	f19.f64 = double(temp.f32);
	// fadds f1,f22,f2
	ctx.f1.f64 = double(float(f22.f64 + ctx.f2.f64));
	// lfs f22,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	f22.f64 = double(temp.f32);
	// fsubs f11,f14,f25
	ctx.f11.f64 = static_cast<float>(f14.f64 - f25.f64);
	// lfs f29,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	f29.f64 = double(temp.f32);
	// fadds f5,f25,f14
	ctx.f5.f64 = double(float(f25.f64 + f14.f64));
	// lfs f25,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	f25.f64 = double(temp.f32);
	// fadds f26,f27,f16
	f26.f64 = double(float(f27.f64 + f16.f64));
	// stfs f18,32(r3)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f27,f27,f16
	f27.f64 = static_cast<float>(f27.f64 - f16.f64);
	// lfs f20,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	f20.f64 = double(temp.f32);
	// fadds f21,f6,f22
	f21.f64 = double(float(ctx.f6.f64 + f22.f64));
	// lfs f17,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f17.f64 = double(temp.f32);
	// fadds f16,f24,f25
	f16.f64 = double(float(f24.f64 + f25.f64));
	// lfs f14,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	f14.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f8,f15
	ctx.f2.f64 = double(float(ctx.f8.f64 + f15.f64));
	// fsubs f8,f15,f8
	ctx.f8.f64 = static_cast<float>(f15.f64 - ctx.f8.f64);
	// lfs f15,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	f15.f64 = double(temp.f32);
	// fadds f18,f29,f19
	f18.f64 = double(float(f29.f64 + f19.f64));
	// stfs f8,-196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fsubs f6,f6,f22
	ctx.f6.f64 = static_cast<float>(ctx.f6.f64 - f22.f64);
	// lfs f22,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	f22.f64 = double(temp.f32);
	// fsubs f29,f29,f19
	f29.f64 = static_cast<float>(f29.f64 - f19.f64);
	// stfs f6,-200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fsubs f25,f24,f25
	f25.f64 = static_cast<float>(f24.f64 - f25.f64);
	// lfs f24,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	f24.f64 = double(temp.f32);
	// fadds f28,f28,f9
	f28.f64 = double(float(f28.f64 + ctx.f9.f64));
	// lfs f19,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	f19.f64 = double(temp.f32);
	// fmadds f7,f7,f13,f30
	ctx.f7.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f13.f64), float(f30.f64)));
	// lfs f13,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f13,f21,f16
	ctx.f13.f64 = static_cast<float>(f21.f64 - f16.f64);
	// stfs f13,-204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f1,f3,f31
	ctx.f1.f64 = static_cast<float>(ctx.f3.f64 - f31.f64);
	// fadds f3,f31,f3
	ctx.f3.f64 = double(float(f31.f64 + ctx.f3.f64));
	// stfs f3,-208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// stfd f13,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f13.u64);
	// fmadds f3,f23,f20,f30
	ctx.f3.f64 = double(std::fma(float(f23.f64), float(f20.f64), float(f30.f64)));
	// stfs f3,-212(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f13,f22,f15
	ctx.f13.f64 = double(float(f22.f64 + f15.f64));
	// lfs f3,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f30,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f30.f64 = double(temp.f32);
	// fsubs f22,f22,f15
	f22.f64 = static_cast<float>(f22.f64 - f15.f64);
	// lfs f20,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	f20.f64 = double(temp.f32);
	// lfs f8,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f31,f12,f28
	f31.f64 = static_cast<float>(ctx.f12.f64 - f28.f64);
	// fsubs f23,f26,f18
	f23.f64 = static_cast<float>(f26.f64 - f18.f64);
	// fadds f6,f27,f6
	ctx.f6.f64 = double(float(f27.f64 + ctx.f6.f64));
	// fadds f25,f25,f29
	f25.f64 = double(float(f25.f64 + f29.f64));
	// fadds f15,f17,f24
	f15.f64 = double(float(f17.f64 + f24.f64));
	// fadds f29,f29,f27
	f29.f64 = double(float(f29.f64 + f27.f64));
	// lfs f27,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	f27.f64 = double(temp.f32);
	// stfs f30,-220(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// stfs f20,-204(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f23,f23,f27
	f23.f64 = double(float(f23.f64 + f27.f64));
	// stfs f15,-216(r1)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f15,f3,f19
	f15.f64 = double(float(ctx.f3.f64 + f19.f64));
	// stfs f27,-192(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fsubs f3,f3,f19
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - f19.f64);
	// lfs f27,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	f27.f64 = double(temp.f32);
	// fsubs f19,f25,f6
	f19.f64 = static_cast<float>(f25.f64 - ctx.f6.f64);
	// stfs f25,-224(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fadds f25,f4,f27
	f25.f64 = double(float(ctx.f4.f64 + f27.f64));
	// stfs f6,-188(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fsubs f4,f27,f4
	ctx.f4.f64 = static_cast<float>(f27.f64 - ctx.f4.f64);
	// lfs f6,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f6.f64 = double(temp.f32);
	// fadds f27,f5,f2
	f27.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f30,f20,f30
	f30.f64 = double(float(f20.f64 + f30.f64));
	// stfs f13,-208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// lfs f20,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	f20.f64 = double(temp.f32);
	// fsubs f2,f2,f5
	ctx.f2.f64 = static_cast<float>(ctx.f2.f64 - ctx.f5.f64);
	// stfs f2,140(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// fadds f2,f6,f20
	ctx.f2.f64 = double(float(ctx.f6.f64 + f20.f64));
	// stfs f4,200(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// fsubs f4,f1,f7
	ctx.f4.f64 = static_cast<float>(ctx.f1.f64 - ctx.f7.f64);
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmadds f2,f28,f8,f31
	ctx.f2.f64 = double(std::fma(float(f28.f64), float(ctx.f8.f64), float(f31.f64)));
	// stfs f4,104(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f8,f17,f24
	ctx.f8.f64 = static_cast<float>(f17.f64 - f24.f64);
	// fmadds f4,f12,f14,f31
	ctx.f4.f64 = double(std::fma(float(ctx.f12.f64), float(f14.f64), float(f31.f64)));
	// stfs f25,72(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fsubs f12,f15,f13
	ctx.f12.f64 = static_cast<float>(f15.f64 - ctx.f13.f64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fadds f5,f1,f7
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f0,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	f0.f64 = double(temp.f32);
	// fadds f7,f18,f26
	ctx.f7.f64 = double(float(f18.f64 + f26.f64));
	// stfs f27,12(r3)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f26,f19,f13
	f26.f64 = double(float(f19.f64 * ctx.f13.f64));
	// lfs f18,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f18.f64 = double(temp.f32);
	// fadds f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,168(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f25,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	f25.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = static_cast<float>(ctx.f9.f64 - ctx.f10.f64);
	// lfs f24,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	f24.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fsubs f25,f24,f25
	f25.f64 = static_cast<float>(f24.f64 - f25.f64);
	// stfd f13,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f13.u64);
	// fmr f24,f14
	f24.f64 = f14.f64;
	// lfs f14,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	f14.f64 = double(temp.f32);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(f29.f64 * f0.f64));
	// lfs f29,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	f29.f64 = double(temp.f32);
	// fadds f31,f22,f3
	f31.f64 = double(float(f22.f64 + ctx.f3.f64));
	// lfs f19,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	f19.f64 = double(temp.f32);
	// fmuls f27,f23,f0
	f27.f64 = double(float(f23.f64 * f0.f64));
	// lfs f13,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f29,f30
	f28.f64 = static_cast<float>(f29.f64 - f30.f64);
	// lfs f23,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	f23.f64 = double(temp.f32);
	// fadds f5,f16,f21
	ctx.f5.f64 = double(float(f16.f64 + f21.f64));
	// fadds f23,f23,f15
	f23.f64 = double(float(f23.f64 + f15.f64));
	// lfs f16,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	f16.f64 = double(temp.f32);
	// fadds f30,f30,f29
	f30.f64 = double(float(f30.f64 + f29.f64));
	// stfs f23,-204(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// stfs f30,-208(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fsubs f6,f6,f20
	ctx.f6.f64 = static_cast<float>(ctx.f6.f64 - f20.f64);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f30.f64 = double(temp.f32);
	// fadds f25,f25,f22
	f25.f64 = double(float(f25.f64 + f22.f64));
	// fmadds f24,f19,f24,f26
	f24.f64 = double(std::fma(float(f19.f64), float(f24.f64), float(f26.f64)));
	// lfs f19,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	f19.f64 = double(temp.f32);
	// fadds f15,f18,f19
	f15.f64 = double(float(f18.f64 + f19.f64));
	// lfs f23,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	f23.f64 = double(temp.f32);
	// lfs f20,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	f20.f64 = double(temp.f32);
	// fsubs f19,f18,f19
	f19.f64 = static_cast<float>(f18.f64 - f19.f64);
	// fadds f18,f14,f16
	f18.f64 = double(float(f14.f64 + f16.f64));
	// lfs f29,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	f29.f64 = double(temp.f32);
	// lfs f22,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	f22.f64 = double(temp.f32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsubs f21,f23,f11
	f21.f64 = static_cast<float>(f23.f64 - ctx.f11.f64);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// fadds f17,f30,f20
	f17.f64 = double(float(f30.f64 + f20.f64));
	// fsubs f16,f14,f16
	f16.f64 = static_cast<float>(f14.f64 - f16.f64);
	// stfs f17,-200(r1)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fadds f17,f22,f29
	f17.f64 = double(float(f22.f64 + f29.f64));
	// fsubs f29,f22,f29
	f29.f64 = static_cast<float>(f22.f64 - f29.f64);
	// lfs f22,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	f22.f64 = double(temp.f32);
	// stfs f17,-212(r1)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f22,-224(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fsubs f30,f30,f20
	f30.f64 = static_cast<float>(f30.f64 - f20.f64);
	// lfs f22,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	f22.f64 = double(temp.f32);
	// fadds f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 + f23.f64));
	// stfs f29,-216(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f29,f9,f22
	f29.f64 = double(float(ctx.f9.f64 + f22.f64));
	// stfs f16,-196(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fsubs f9,f22,f9
	ctx.f9.f64 = static_cast<float>(f22.f64 - ctx.f9.f64);
	// lfs f22,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f22.f64 = double(temp.f32);
	// lfs f16,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	f16.f64 = double(temp.f32);
	// stfs f22,-220(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// stfs f16,-184(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f16,f10,f4
	f16.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f6,232(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// fsubs f4,f10,f4
	ctx.f4.f64 = static_cast<float>(ctx.f10.f64 - ctx.f4.f64);
	// lfs f6,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f6.f64 = double(temp.f32);
	// stfs f3,-176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fsubs f3,f25,f3
	ctx.f3.f64 = static_cast<float>(f25.f64 - ctx.f3.f64);
	// stfs f25,-204(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f25,f1,f2
	f25.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f1,f2
	ctx.f2.f64 = static_cast<float>(ctx.f1.f64 - ctx.f2.f64);
	// stfs f9,204(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fadds f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f9,f5,f7
	ctx.f9.f64 = static_cast<float>(ctx.f5.f64 - ctx.f7.f64);
	// lfs f7,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f27,f7
	ctx.f5.f64 = double(float(f27.f64 + ctx.f7.f64));
	// stfs f4,108(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fsubs f4,f7,f27
	ctx.f4.f64 = static_cast<float>(ctx.f7.f64 - f27.f64);
	// stfs f11,-188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f7,f21,f24
	ctx.f7.f64 = double(float(f21.f64 + f24.f64));
	// lfs f11,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	f27.f64 = double(temp.f32);
	// stfs f9,144(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fmadds f9,f1,f13,f26
	ctx.f9.f64 = double(std::fma(float(ctx.f1.f64), float(ctx.f13.f64), float(f26.f64)));
	// fsubs f26,f11,f27
	f26.f64 = static_cast<float>(ctx.f11.f64 - f27.f64);
	// stfs f5,80(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f10,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f27,f11
	f27.f64 = double(float(f27.f64 + ctx.f11.f64));
	// lfs f12,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f31,f8
	ctx.f1.f64 = double(float(f31.f64 + ctx.f8.f64));
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// fadds f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f29,76(r3)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fadds f29,f12,f19
	f29.f64 = double(float(ctx.f12.f64 + f19.f64));
	// stfs f4,208(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// fsubs f4,f8,f31
	ctx.f4.f64 = static_cast<float>(ctx.f8.f64 - f31.f64);
	// fadds f23,f11,f12
	f23.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f25,44(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f22,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	f22.f64 = double(temp.f32);
	// fsubs f31,f15,f18
	f31.f64 = static_cast<float>(f15.f64 - f18.f64);
	// lfs f12,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f18,f15
	f25.f64 = double(float(f18.f64 + f15.f64));
	// stfs f28,-168(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f16,172(r3)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f2,f19,f30
	ctx.f2.f64 = double(float(f19.f64 + f30.f64));
	// lfs f14,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	f14.f64 = double(temp.f32);
	// fadds f19,f12,f22
	f19.f64 = double(float(ctx.f12.f64 + f22.f64));
	// lfs f17,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	f17.f64 = double(temp.f32);
	// fsubs f22,f12,f22
	f22.f64 = static_cast<float>(ctx.f12.f64 - f22.f64);
	// lfs f28,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	f28.f64 = double(temp.f32);
	// fadds f8,f17,f14
	ctx.f8.f64 = double(float(f17.f64 + f14.f64));
	// lfs f20,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	f20.f64 = double(temp.f32);
	// lfd f13,-160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfs f18,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	f18.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f16,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	f16.f64 = double(temp.f32);
	// stfs f7,176(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fadds f7,f20,f28
	ctx.f7.f64 = double(float(f20.f64 + f28.f64));
	// lfs f11,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f11.f64 = double(temp.f32);
	// fadds f15,f16,f18
	f15.f64 = double(float(f16.f64 + f18.f64));
	// fsubs f17,f17,f14
	f17.f64 = static_cast<float>(f17.f64 - f14.f64);
	// stfs f4,-184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fsubs f28,f20,f28
	f28.f64 = static_cast<float>(f20.f64 - f28.f64);
	// lfs f20,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	f20.f64 = double(temp.f32);
	// fsubs f18,f16,f18
	f18.f64 = static_cast<float>(f16.f64 - f18.f64);
	// stfs f26,-192(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fsubs f14,f23,f2
	f14.f64 = static_cast<float>(f23.f64 - ctx.f2.f64);
	// stfs f1,-188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * f0.f64));
	// lfs f13,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f31,f26
	f31.f64 = double(float(f31.f64 + f26.f64));
	// lfs f12,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f16,f8,f7
	f16.f64 = static_cast<float>(ctx.f8.f64 - ctx.f7.f64);
	// lfs f26,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	f26.f64 = double(temp.f32);
	// lfs f4,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f1,f19,f15
	ctx.f1.f64 = static_cast<float>(f19.f64 - f15.f64);
	// fmadds f4,f4,f12,f3
	ctx.f4.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f12.f64), float(ctx.f3.f64)));
	// fmadds f26,f26,f13,f3
	f26.f64 = double(std::fma(float(f26.f64), float(ctx.f13.f64), float(ctx.f3.f64)));
	// fadds f3,f17,f22
	ctx.f3.f64 = double(float(f17.f64 + f22.f64));
	// fadds f17,f28,f17
	f17.f64 = double(float(f28.f64 + f17.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f28,f18,f28
	f28.f64 = double(float(f18.f64 + f28.f64));
	// fmuls f7,f14,f11
	ctx.f7.f64 = double(float(f14.f64 * ctx.f11.f64));
	// fadds f18,f29,f30
	f18.f64 = double(float(f29.f64 + f30.f64));
	// fsubs f30,f30,f29
	f30.f64 = static_cast<float>(f30.f64 - f29.f64);
	// fadds f29,f16,f1
	f29.f64 = double(float(f16.f64 + ctx.f1.f64));
	// fsubs f6,f10,f6
	ctx.f6.f64 = static_cast<float>(ctx.f10.f64 - ctx.f6.f64);
	// stfs f6,148(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// fsubs f24,f21,f24
	f24.f64 = static_cast<float>(f21.f64 - f24.f64);
	// stfs f24,112(r3)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f10,f17,f0
	ctx.f10.f64 = double(float(f17.f64 * f0.f64));
	// fadds f19,f15,f19
	f19.f64 = double(float(f15.f64 + f19.f64));
	// fsubs f6,f28,f3
	ctx.f6.f64 = static_cast<float>(f28.f64 - ctx.f3.f64);
	// fmadds f24,f23,f13,f7
	f24.f64 = double(std::fma(float(f23.f64), float(ctx.f13.f64), float(ctx.f7.f64)));
	// fmadds f2,f2,f12,f7
	ctx.f2.f64 = double(std::fma(float(ctx.f2.f64), float(ctx.f12.f64), float(ctx.f7.f64)));
	// fadds f7,f20,f9
	ctx.f7.f64 = double(float(f20.f64 + ctx.f9.f64));
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fsubs f9,f20,f9
	ctx.f9.f64 = static_cast<float>(f20.f64 - ctx.f9.f64);
	// stfs f9,240(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f9,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(f29.f64 * f0.f64));
	// fadds f0,f5,f9
	f0.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = static_cast<float>(ctx.f9.f64 - ctx.f5.f64);
	// stfs f9,212(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f9,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f25,f27
	ctx.f5.f64 = double(float(f25.f64 + f27.f64));
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f5,f9,f26
	ctx.f5.f64 = static_cast<float>(ctx.f9.f64 - f26.f64);
	// fmuls f0,f6,f11
	f0.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f5,116(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fadds f6,f9,f26
	ctx.f6.f64 = double(float(ctx.f9.f64 + f26.f64));
	// lfs f9,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f9.f64 = double(temp.f32);
	// stfs f6,180(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// fadds f6,f9,f4
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fsubs f5,f9,f4
	ctx.f5.f64 = static_cast<float>(ctx.f9.f64 - ctx.f4.f64);
	// lfs f4,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f27,f25
	ctx.f11.f64 = static_cast<float>(f27.f64 - f25.f64);
	// stfs f11,152(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fadds f11,f31,f4
	ctx.f11.f64 = double(float(f31.f64 + ctx.f4.f64));
	// fsubs f9,f4,f31
	ctx.f9.f64 = static_cast<float>(ctx.f4.f64 - f31.f64);
	// stfs f5,244(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fadds f6,f8,f19
	ctx.f6.f64 = double(float(ctx.f8.f64 + f19.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fsubs f5,f19,f8
	ctx.f5.f64 = static_cast<float>(f19.f64 - ctx.f8.f64);
	// stfs f9,216(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fadds f4,f30,f24
	ctx.f4.f64 = double(float(f30.f64 + f24.f64));
	// stfs f5,156(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fsubs f11,f30,f24
	ctx.f11.f64 = static_cast<float>(f30.f64 - f24.f64);
	// fadds f9,f18,f2
	ctx.f9.f64 = double(float(f18.f64 + ctx.f2.f64));
	// stfs f4,184(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// fsubs f8,f18,f2
	ctx.f8.f64 = static_cast<float>(f18.f64 - ctx.f2.f64);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,248(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fsubs f5,f1,f7
	ctx.f5.f64 = static_cast<float>(ctx.f1.f64 - ctx.f7.f64);
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fmadds f1,f28,f13,f0
	ctx.f1.f64 = double(std::fma(float(f28.f64), float(ctx.f13.f64), float(f0.f64)));
	// stfs f5,220(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// fsubs f2,f22,f10
	ctx.f2.f64 = static_cast<float>(f22.f64 - ctx.f10.f64);
	// fmadds f0,f3,f12,f0
	f0.f64 = double(std::fma(float(ctx.f3.f64), float(ctx.f12.f64), float(f0.f64)));
	// fadds f4,f10,f22
	ctx.f4.f64 = double(float(ctx.f10.f64 + f22.f64));
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f13,188(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// fsubs f12,f2,f1
	ctx.f12.f64 = static_cast<float>(ctx.f2.f64 - ctx.f1.f64);
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 + f0.f64));
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f10,f4,f0
	ctx.f10.f64 = static_cast<float>(ctx.f4.f64 - f0.f64);
	// stfs f10,252(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca751c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4BBD0) {
	__imp__sub_82D4BBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4CA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bd8
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82D4CA28:
	// lhz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r29,2(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r26,r29,r30
	r26.u64 = r29.u64 + r30.u64;
	// add r25,r5,r6
	r25.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r24,r31,r4
	r24.u64 = r31.u64 + ctx.r4.u64;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// extsh r26,r24
	r26.s64 = r24.s16;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r10,r28,r27
	ctx.r10.s64 = r27.s64 - r28.s64;
	// subf r24,r26,r25
	r24.s64 = r25.s64 - r26.s64;
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r6,r31,r4
	ctx.r6.s64 = ctx.r4.s64 - r31.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subf r4,r30,r29
	ctx.r4.s64 = r29.s64 - r30.s64;
	// extsh r24,r24
	r24.s64 = r24.s16;
	// extsh r30,r4
	r30.s64 = ctx.r4.s16;
	// add r5,r24,r10
	ctx.r5.u64 = r24.u64 + ctx.r10.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r31,r6
	r31.s64 = ctx.r6.s16;
	// mulli r5,r5,181
	ctx.r5.s64 = ctx.r5.s64 * 181;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r6,r27,r28
	ctx.r6.u64 = r27.u64 + r28.u64;
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// add r28,r9,r4
	r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r29,r7,r31
	r29.u64 = ctx.r7.u64 + r31.u64;
	// srawi r5,r5,8
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r7,r30
	ctx.r7.s64 = r30.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mr r30,r28
	r30.u64 = r28.u64;
	// add r28,r6,r7
	r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// sth r28,-4(r11)
	PPC_STORE_U16(r11.u32 + -4, r28.u16);
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// sth r7,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r7.u16);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r6.u16);
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// sth r5,8(r11)
	PPC_STORE_U16(r11.u32 + 8, ctx.r5.u16);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// subf r7,r10,r29
	ctx.r7.s64 = r29.s64 - ctx.r10.s64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mulli r5,r7,98
	ctx.r5.s64 = ctx.r7.s64 * 98;
	// mulli r7,r29,139
	ctx.r7.s64 = r29.s64 * 139;
	// mulli r10,r10,334
	ctx.r10.s64 = ctx.r10.s64 * 334;
	// srawi r31,r5,8
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	r31.s64 = ctx.r5.s32 >> 8;
	// mulli r4,r4,181
	ctx.r4.s64 = ctx.r4.s64 * 181;
	// srawi r6,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r5,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 8;
	// srawi r4,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r10,r31
	ctx.r10.s64 = r31.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r5,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r5.u16);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
	// sth r10,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r10.u16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r9,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r9.u16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bge 0x82d4ca28
	if (!cr0.lt) goto loc_82D4CA28;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
loc_82D4CB9C:
	// lhz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + -32);
	// lhz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 64);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// extsh r31,r3
	r31.s64 = ctx.r3.s16;
	// lhz r5,-16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + -16);
	// lhz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 48);
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r27,r30,r31
	r27.u64 = r30.u64 + r31.u64;
	// add r26,r5,r6
	r26.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r25,r3,r4
	r25.u64 = ctx.r3.u64 + ctx.r4.u64;
	// extsh r29,r27
	r29.s64 = r27.s16;
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// extsh r27,r25
	r27.s64 = r25.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r10,r29,r28
	ctx.r10.s64 = r28.s64 - r29.s64;
	// subf r25,r27,r26
	r25.s64 = r26.s64 - r27.s64;
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subf r4,r31,r30
	ctx.r4.s64 = r30.s64 - r31.s64;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// extsh r31,r4
	r31.s64 = ctx.r4.s16;
	// add r5,r25,r10
	ctx.r5.u64 = r25.u64 + ctx.r10.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// mulli r5,r5,181
	ctx.r5.s64 = ctx.r5.s64 * 181;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// add r6,r28,r29
	ctx.r6.u64 = r28.u64 + r29.u64;
	// add r31,r26,r27
	r31.u64 = r26.u64 + r27.u64;
	// add r30,r7,r3
	r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r29,r9,r4
	r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r5,r5,8
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r7,r31
	ctx.r7.s64 = r31.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mr r31,r29
	r31.u64 = r29.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// sth r29,-32(r11)
	PPC_STORE_U16(r11.u32 + -32, r29.u16);
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// sth r7,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r7.u16);
	// extsh r10,r31
	ctx.r10.s64 = r31.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r6.u16);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// sth r5,64(r11)
	PPC_STORE_U16(r11.u32 + 64, ctx.r5.u16);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r3,r10,r30
	ctx.r3.s64 = r30.s64 - ctx.r10.s64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mulli r6,r3,98
	ctx.r6.s64 = ctx.r3.s64 * 98;
	// mulli r4,r30,139
	ctx.r4.s64 = r30.s64 * 139;
	// mulli r3,r10,334
	ctx.r3.s64 = ctx.r10.s64 * 334;
	// srawi r10,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// mulli r7,r5,181
	ctx.r7.s64 = ctx.r5.s64 * 181;
	// srawi r6,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// srawi r5,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// srawi r4,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sth r3,48(r11)
	PPC_STORE_U16(r11.u32 + 48, ctx.r3.u16);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// sth r10,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r10.u16);
	// sth r9,-16(r11)
	PPC_STORE_U16(r11.u32 + -16, ctx.r9.u16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r7,80(r11)
	PPC_STORE_U16(r11.u32 + 80, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bge 0x82d4cb9c
	if (!cr0.lt) goto loc_82D4CB9C;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D4CA18) {
	__imp__sub_82D4CA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4CD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// mflr r12
	// bl 0x82ca2bcc
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82D4CD20:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// extsh r30,r7
	r30.s64 = ctx.r7.s16;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lhz r29,2(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// extsh r24,r29
	r24.s64 = r29.s16;
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// add r30,r24,r25
	r30.u64 = r24.u64 + r25.u64;
	// add r31,r26,r27
	r31.u64 = r26.u64 + r27.u64;
	// subf r7,r26,r27
	ctx.r7.s64 = r27.s64 - r26.s64;
	// subf r9,r25,r24
	ctx.r9.s64 = r24.s64 - r25.s64;
	// subf r27,r30,r5
	r27.s64 = ctx.r5.s64 - r30.s64;
	// subf r26,r31,r4
	r26.s64 = ctx.r4.s64 - r31.s64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r7,r8
	r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r25,r26,r27
	r25.u64 = r26.u64 + r27.u64;
	// add r23,r28,r29
	r23.u64 = r28.u64 + r29.u64;
	// add r22,r9,r8
	r22.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r24,r9,2446
	r24.s64 = ctx.r9.s64 * 2446;
	// mulli r9,r25,4433
	ctx.r9.s64 = r25.s64 * 4433;
	// mulli r25,r27,6270
	r25.s64 = r27.s64 * 6270;
	// mulli r23,r23,9633
	r23.s64 = r23.s64 * 9633;
	// mulli r29,r29,16069
	r29.s64 = r29.s64 * 16069;
	// mulli r27,r26,15137
	r27.s64 = r26.s64 * 15137;
	// add r26,r25,r9
	r26.u64 = r25.u64 + ctx.r9.u64;
	// subf r29,r29,r23
	r29.s64 = r23.s64 - r29.s64;
	// subf r25,r27,r9
	r25.s64 = ctx.r9.s64 - r27.s64;
	// mulli r21,r28,3196
	r21.s64 = r28.s64 * 3196;
	// add r9,r30,r5
	ctx.r9.u64 = r30.u64 + ctx.r5.u64;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// add r28,r24,r29
	r28.u64 = r24.u64 + r29.u64;
	// add r24,r7,r10
	r24.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r4,r21,r23
	ctx.r4.s64 = r23.s64 - r21.s64;
	// mulli r30,r7,16819
	r30.s64 = ctx.r7.s64 * 16819;
	// mulli r27,r22,-7373
	r27.s64 = r22.s64 * -7373;
	// add r23,r5,r9
	r23.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r22,r5,r9
	r22.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r9,r30,r4
	ctx.r9.u64 = r30.u64 + ctx.r4.u64;
	// mulli r7,r24,-20995
	ctx.r7.s64 = r24.s64 * -20995;
	// mulli r5,r10,25172
	ctx.r5.s64 = ctx.r10.s64 * 25172;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulli r9,r8,12299
	ctx.r9.s64 = ctx.r8.s64 * 12299;
	// add r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 + r29.u64;
	// add r31,r28,r27
	r31.u64 = r28.u64 + r27.u64;
	// addi r5,r10,1024
	ctx.r5.s64 = ctx.r10.s64 + 1024;
	// addi r30,r26,1024
	r30.s64 = r26.s64 + 1024;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r28,r25,1024
	r28.s64 = r25.s64 + 1024;
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// srawi r30,r30,11
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	r30.s64 = r30.s32 >> 11;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r28,r28,11
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FF) != 0);
	r28.s64 = r28.s32 >> 11;
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// srawi r31,r31,11
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	r31.s64 = r31.s32 >> 11;
	// sth r28,8(r11)
	PPC_STORE_U16(r11.u32 + 8, r28.u16);
	// srawi r8,r5,11
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 11;
	// addi r7,r9,1024
	ctx.r7.s64 = ctx.r9.s64 + 1024;
	// sth r31,10(r11)
	PPC_STORE_U16(r11.u32 + 10, r31.u16);
	// addi r5,r10,1024
	ctx.r5.s64 = ctx.r10.s64 + 1024;
	// sth r8,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r8.u16);
	// rlwinm r26,r23,2,0,29
	r26.u64 = rotl64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r22,2,0,29
	r25.u64 = rotl64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r7,11
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 11;
	// sth r26,-4(r11)
	PPC_STORE_U16(r11.u32 + -4, r26.u16);
	// srawi r10,r5,11
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 11;
	// sth r25,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r25.u16);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
	// sth r10,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r10.u16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bge 0x82d4cd20
	if (!cr0.lt) goto loc_82D4CD20;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
loc_82D4CE7C:
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// lhz r9,-32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -32);
	// lhz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 64);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
	// lhz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -16);
	// lhz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 48);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// extsh r31,r7
	r31.s64 = ctx.r7.s16;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r7,r3,r27
	ctx.r7.s64 = r27.s64 - ctx.r3.s64;
	// subf r8,r28,r31
	ctx.r8.s64 = r31.s64 - r28.s64;
	// subf r10,r25,r26
	ctx.r10.s64 = r26.s64 - r25.s64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r8,r7
	r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r27,r3
	ctx.r4.u64 = r27.u64 + ctx.r3.u64;
	// add r3,r25,r26
	ctx.r3.u64 = r25.u64 + r26.u64;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r26,r29,r30
	r26.u64 = r29.u64 + r30.u64;
	// subf r28,r3,r4
	r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r27,r31,r5
	r27.s64 = ctx.r5.s64 - r31.s64;
	// mulli r25,r26,9633
	r25.s64 = r26.s64 * 9633;
	// mulli r30,r30,16069
	r30.s64 = r30.s64 * 16069;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r28,r27
	ctx.r3.u64 = r28.u64 + r27.u64;
	// add r24,r8,r9
	r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r26,r8,2446
	r26.s64 = ctx.r8.s64 * 2446;
	// subf r31,r30,r25
	r31.s64 = r25.s64 - r30.s64;
	// mulli r23,r28,15137
	r23.s64 = r28.s64 * 15137;
	// subf r30,r4,r5
	r30.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r8,r3,4433
	ctx.r8.s64 = ctx.r3.s64 * 4433;
	// mulli r27,r27,6270
	r27.s64 = r27.s64 * 6270;
	// mulli r3,r24,-7373
	ctx.r3.s64 = r24.s64 * -7373;
	// add r5,r26,r31
	ctx.r5.u64 = r26.u64 + r31.u64;
	// add r4,r27,r8
	ctx.r4.u64 = r27.u64 + ctx.r8.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - r23.s64;
	// mulli r29,r29,3196
	r29.s64 = r29.s64 * 3196;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r27,r8,16384
	r27.s64 = ctx.r8.s64 + 16384;
	// addi r26,r5,16384
	r26.s64 = ctx.r5.s64 + 16384;
	// addi r4,r4,16384
	ctx.r4.s64 = ctx.r4.s64 + 16384;
	// mulli r5,r10,16819
	ctx.r5.s64 = ctx.r10.s64 * 16819;
	// subf r8,r29,r25
	ctx.r8.s64 = r25.s64 - r29.s64;
	// srawi r28,r28,2
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// srawi r29,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r29.s64 = r30.s32 >> 2;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r28,-32(r11)
	PPC_STORE_U16(r11.u32 + -32, r28.u16);
	// srawi r25,r4,15
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	r25.s64 = ctx.r4.s32 >> 15;
	// sth r29,32(r11)
	PPC_STORE_U16(r11.u32 + 32, r29.u16);
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mulli r4,r7,25172
	ctx.r4.s64 = ctx.r7.s64 * 25172;
	// sth r25,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r25.u16);
	// mulli r5,r9,12299
	ctx.r5.s64 = ctx.r9.s64 * 12299;
	// mulli r10,r10,-20995
	ctx.r10.s64 = ctx.r10.s64 * -20995;
	// add r9,r4,r31
	ctx.r9.u64 = ctx.r4.u64 + r31.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r30,r10
	ctx.r7.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r7,16384
	ctx.r3.s64 = ctx.r7.s64 + 16384;
	// srawi r27,r27,15
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFF) != 0);
	r27.s64 = r27.s32 >> 15;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// srawi r26,r26,15
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFF) != 0);
	r26.s64 = r26.s32 >> 15;
	// sth r27,64(r11)
	PPC_STORE_U16(r11.u32 + 64, r27.u16);
	// addi r8,r10,16384
	ctx.r8.s64 = ctx.r10.s64 + 16384;
	// srawi r7,r3,15
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 15;
	// sth r26,80(r11)
	PPC_STORE_U16(r11.u32 + 80, r26.u16);
	// srawi r5,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 15;
	// srawi r4,r8,15
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 15;
	// sth r7,48(r11)
	PPC_STORE_U16(r11.u32 + 48, ctx.r7.u16);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r5,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r5.u16);
	// sth r4,-16(r11)
	PPC_STORE_U16(r11.u32 + -16, ctx.r4.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bge 0x82d4ce7c
	if (!cr0.lt) goto loc_82D4CE7C;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82D4CD10) {
	__imp__sub_82D4CD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(40) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,32(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(32) );
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82d4d034
	if (cr0.eq) goto loc_82D4D034;
	// li r11,0
	r11.s64 = 0;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r31.u8);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r30.u8);
loc_82D4D034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4CFE0) {
	__imp__sub_82D4CFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4D040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r26,4(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r24,4(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r27,32(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// bge cr6,0x82d4d084
	if (!cr6.lt) goto loc_82D4D084;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d08c
	goto loc_82D4D08C;
loc_82D4D084:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
loc_82D4D08C:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x82d4d5b8
	if (cr6.gt) goto loc_82D4D5B8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r21,9
	r21.s64 = 9;
	// li r23,0
	r23.s64 = 0;
	// addi r22,r10,14224
	r22.s64 = ctx.r10.s64 + 14224;
loc_82D4D0A8:
	// lis r12,-32254
	r12.s64 = -2113798144;
	// addi r12,r12,9112
	r12.s64 = r12.s64 + 9112;
	// rlwinm r0,r9,1,0,30
	r0.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32043
	r12.s64 = -2099970048;
	// addi r12,r12,-12080
	r12.s64 = r12.s64 + -12080;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82D4D0D0;
	case 1:
		goto loc_82D4D194;
	case 2:
		goto loc_82D4D25C;
	case 3:
		goto loc_82D4D2C8;
	case 4:
		goto loc_82D4D35C;
	case 5:
		goto loc_82D4D3B8;
	case 6:
		goto loc_82D4D4E0;
	case 7:
		goto loc_82D4D620;
	case 8:
		goto loc_82D4D660;
	case 9:
		goto loc_82D4D668;
	default:
		__builtin_unreachable();
	}
loc_82D4D0D0:
	// cmplwi cr6,r7,258
	cr6.compare<uint32_t>(ctx.r7.u32, 258, xer);
	// blt cr6,0x82d4d17c
	if (cr6.lt) goto loc_82D4D17C;
	// cmplwi cr6,r24,10
	cr6.compare<uint32_t>(r24.u32, 10, xer);
	// blt cr6,0x82d4d17c
	if (cr6.lt) goto loc_82D4D17C;
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subf r9,r9,r28
	ctx.r9.s64 = r28.s64 - ctx.r9.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// lbz r4,17(r26)
	ctx.r4.u64 = PPC_LOAD_U8(r26.u32 + 17);
	// lbz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// bl 0x82d4df90
	sub_82D4DF90(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r24,4(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r27,32(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// bge cr6,0x82d4d154
	if (!cr6.lt) goto loc_82D4D154;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d15c
	goto loc_82D4D15C;
loc_82D4D154:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
loc_82D4D15C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82d4d17c
	if (cr6.eq) goto loc_82D4D17C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// li r10,7
	ctx.r10.s64 = 7;
	// beq cr6,0x82d4d174
	if (cr6.eq) goto loc_82D4D174;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82D4D174:
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82d4d5ac
	goto loc_82D4D5AC;
loc_82D4D17C:
	// lbz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// stw r8,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r8.u32);
loc_82D4D194:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// b 0x82d4d1c0
	goto loc_82D4D1C0;
loc_82D4D19C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4d5f8
	if (cr6.eq) goto loc_82D4D5F8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82D4D1C0:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d4d19c
	if (cr6.lt) goto loc_82D4D19C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r29,r8,r29
	r29.s64 = r29.s64 - ctx.r8.s64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82d4d20c
	if (!cr0.eq) goto loc_82D4D20C;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
loc_82D4D204:
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// b 0x82d4d5ac
	goto loc_82D4D5AC;
loc_82D4D20C:
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82d4d230
	if (cr0.eq) goto loc_82D4D230;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// b 0x82d4d5ac
	goto loc_82D4D5AC;
loc_82D4D230:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82d4d24c
	if (!cr0.eq) goto loc_82D4D24C;
loc_82D4D238:
	// stw r9,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82d4d204
	goto loc_82D4D204;
loc_82D4D24C:
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d4d608
	if (cr0.eq) goto loc_82D4D608;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82d4d174
	goto loc_82D4D174;
loc_82D4D25C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// b 0x82d4d288
	goto loc_82D4D288;
loc_82D4D264:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4d5f8
	if (cr6.eq) goto loc_82D4D5F8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82D4D288:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d4d264
	if (cr6.lt) goto loc_82D4D264;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lbz r6,17(r26)
	ctx.r6.u64 = PPC_LOAD_U8(r26.u32 + 17);
	// subf r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// li r4,3
	ctx.r4.s64 = 3;
	// lwzx r8,r8,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r22.u32);
	// stw r6,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r6.u32);
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r4,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r4.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_82D4D2C8:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// b 0x82d4d2f4
	goto loc_82D4D2F4;
loc_82D4D2D0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4d5f8
	if (cr6.eq) goto loc_82D4D5F8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82D4D2F4:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d4d2d0
	if (cr6.lt) goto loc_82D4D2D0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm. r6,r9,0,27,27
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf r29,r8,r29
	r29.s64 = r29.s64 - ctx.r8.s64;
	// beq 0x82d4d348
	if (cr0.eq) goto loc_82D4D348;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// b 0x82d4d5ac
	goto loc_82D4D5AC;
loc_82D4D348:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82d4d238
	if (cr0.eq) goto loc_82D4D238;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,-25352
	ctx.r10.s64 = ctx.r10.s64 + -25352;
	// b 0x82d4d610
	goto loc_82D4D610;
loc_82D4D35C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// b 0x82d4d388
	goto loc_82D4D388;
loc_82D4D364:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82d4d5f8
	if (cr6.eq) goto loc_82D4D5F8;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82D4D388:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d4d364
	if (cr6.lt) goto loc_82D4D364;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// subf r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	// stw r6,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
loc_82D4D3B8:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// subf r25,r9,r11
	r25.s64 = r11.s64 - ctx.r9.s64;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d4d4d0
	if (!cr6.lt) goto loc_82D4D4D0;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// rotlwi r9,r10,0
	ctx.r9.u64 = rotl32(ctx.r10.u32, 0);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_82D4D3D8:
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d4d3d8
	if (cr6.lt) goto loc_82D4D3D8;
	// b 0x82d4d4d0
	goto loc_82D4D4D0;
loc_82D4D3E8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d49c
	if (!cr6.eq) goto loc_82D4D49C;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d4d42c
	if (!cr6.eq) goto loc_82D4D42C;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4d42c
	if (cr6.eq) goto loc_82D4D42C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d4d420
	if (!cr6.lt) goto loc_82D4D420;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d424
	goto loc_82D4D424;
loc_82D4D420:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_82D4D424:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d49c
	if (!cr6.eq) goto loc_82D4D49C;
loc_82D4D42C:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d4d45c
	if (!cr6.lt) goto loc_82D4D45C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x82d4d464
	goto loc_82D4D464;
loc_82D4D45C:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
loc_82D4D464:
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d4d494
	if (!cr6.eq) goto loc_82D4D494;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4d494
	if (cr6.eq) goto loc_82D4D494;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d4d490
	if (!cr6.lt) goto loc_82D4D490;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d494
	goto loc_82D4D494;
loc_82D4D490:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_82D4D494:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d4d5bc
	if (cr6.eq) goto loc_82D4D5BC;
loc_82D4D49C:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4d4c4
	if (!cr6.eq) goto loc_82D4D4C4;
	// lwz r25,40(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
loc_82D4D4C4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_82D4D4D0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4d3e8
	if (!cr6.eq) goto loc_82D4D3E8;
	// b 0x82d4d5a8
	goto loc_82D4D5A8;
loc_82D4D4E0:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d594
	if (!cr6.eq) goto loc_82D4D594;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d4d524
	if (!cr6.eq) goto loc_82D4D524;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4d524
	if (cr6.eq) goto loc_82D4D524;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d4d518
	if (!cr6.lt) goto loc_82D4D518;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d51c
	goto loc_82D4D51C;
loc_82D4D518:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_82D4D51C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d594
	if (!cr6.eq) goto loc_82D4D594;
loc_82D4D524:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d4d554
	if (!cr6.lt) goto loc_82D4D554;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x82d4d55c
	goto loc_82D4D55C;
loc_82D4D554:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
loc_82D4D55C:
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d4d58c
	if (!cr6.eq) goto loc_82D4D58C;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4d58c
	if (cr6.eq) goto loc_82D4D58C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d4d588
	if (!cr6.lt) goto loc_82D4D588;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x82d4d58c
	goto loc_82D4D58C;
loc_82D4D588:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
loc_82D4D58C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d4d5bc
	if (cr6.eq) goto loc_82D4D5BC;
loc_82D4D594:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82D4D5A8:
	// stw r23,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r23.u32);
loc_82D4D5AC:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// ble cr6,0x82d4d0a8
	if (!cr6.gt) goto loc_82D4D0A8;
loc_82D4D5B8:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_82D4D5BC:
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
loc_82D4D5C8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	return;
loc_82D4D5F8:
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r23.u32);
	// b 0x82d4d5c8
	goto loc_82D4D5C8;
loc_82D4D608:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,-25380
	ctx.r10.s64 = ctx.r10.s64 + -25380;
loc_82D4D610:
	// stw r21,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r21.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82d4d5bc
	goto loc_82D4D5BC;
loc_82D4D620:
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(r29.u32, 7, xer);
	// ble cr6,0x82d4d634
	if (!cr6.gt) goto loc_82D4D634;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82D4D634:
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d4de30
	sub_82D4DE30(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82d4d5bc
	if (!cr6.eq) goto loc_82D4D5BC;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82D4D660:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82d4d5bc
	goto loc_82D4D5BC;
loc_82D4D668:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x82d4d5bc
	goto loc_82D4D5BC;
}

PPC_WEAK_FUNC(sub_82D4D040) {
	__imp__sub_82D4D040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4D670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D4D670) {
	__imp__sub_82D4D670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4D690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x82ca2bb0
	// li r27,0
	r27.s64 = 0;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r8,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// stw r10,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r27,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, r27.u32);
	// stw r27,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, r27.u32);
	// stw r27,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, r27.u32);
	// stw r27,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, r27.u32);
	// stw r27,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, r27.u32);
	// stw r27,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, r27.u32);
	// stw r27,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, r27.u32);
	// stw r27,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, r27.u32);
	// stw r27,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// stw r27,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, r27.u32);
	// stw r27,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, r27.u32);
	// stw r27,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, r27.u32);
	// stw r27,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, r27.u32);
	// stw r27,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, r27.u32);
	// stw r27,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, r27.u32);
	// stw r27,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, r27.u32);
loc_82D4D6F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r1,-384
	r30.s64 = ctx.r1.s64 + -384;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r29,r10,2,0,29
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r28,r29,r30
	r28.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// stwx r10,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, ctx.r10.u32);
	// bne 0x82d4d6f8
	if (!cr0.eq) goto loc_82D4D6F8;
	// lwz r11,-384(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-384) );
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82d4d738
	if (!cr6.eq) goto loc_82D4D738;
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// b 0x82d4db58
	goto loc_82D4DB58;
loc_82D4D738:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,0(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r31,r1,-380
	r31.s64 = ctx.r1.s64 + -380;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82D4D748:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d764
	if (!cr6.eq) goto loc_82D4D764;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82d4d748
	if (!cr6.gt) goto loc_82D4D748;
loc_82D4D764:
	// mr r17,r11
	r17.u64 = r11.u64;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82d4d774
	if (!cr6.lt) goto loc_82D4D774;
	// mr r22,r11
	r22.u64 = r11.u64;
loc_82D4D774:
	// li r31,15
	r31.s64 = 15;
	// addi r30,r1,-324
	r30.s64 = ctx.r1.s64 + -324;
loc_82D4D77C:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d4d794
	if (!cr6.eq) goto loc_82D4D794;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x82d4d77c
	if (!cr0.eq) goto loc_82D4D77C;
loc_82D4D794:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplw cr6,r22,r31
	cr6.compare<uint32_t>(r22.u32, r31.u32, xer);
	// stw r6,-400(r1)
	PPC_STORE_U32(ctx.r1.u32 + -400, ctx.r6.u32);
	// ble cr6,0x82d4d7a8
	if (!cr6.gt) goto loc_82D4D7A8;
	// mr r22,r31
	r22.u64 = r31.u64;
loc_82D4D7A8:
	// stw r22,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r22.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// slw r30,r10,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// bge cr6,0x82d4d7e4
	if (!cr6.lt) goto loc_82D4D7E4;
	// rlwinm r29,r11,2,0,29
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-384
	ctx.r9.s64 = ctx.r1.s64 + -384;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
loc_82D4D7C4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// subf. r30,r7,r30
	r30.s64 = r30.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82d4d8c8
	if (cr0.lt) goto loc_82D4D8C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r30,1,0,30
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82d4d7c4
	if (cr6.lt) goto loc_82D4D7C4;
loc_82D4D7E4:
	// rlwinm r29,r31,2,0,29
	r29.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-384
	ctx.r9.s64 = ctx.r1.s64 + -384;
	// lwzx r11,r29,r9
	r11.u64 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	// subf. r7,r11,r30
	ctx.r7.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r7,-404(r1)
	PPC_STORE_U32(ctx.r1.u32 + -404, ctx.r7.u32);
	// blt 0x82d4d8c8
	if (cr0.lt) goto loc_82D4D8C8;
	// add r30,r11,r7
	r30.u64 = r11.u64 + ctx.r7.u64;
	// stw r27,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, r27.u32);
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r30,r29,r9
	PPC_STORE_U32(r29.u32 + ctx.r9.u32, r30.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// beq 0x82d4d838
	if (cr0.eq) goto loc_82D4D838;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82D4D818:
	// addi r30,r1,-380
	r30.s64 = ctx.r1.s64 + -380;
	// addi r28,r1,-280
	r28.s64 = ctx.r1.s64 + -280;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwzx r30,r31,r30
	r30.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stwx r9,r31,r28
	PPC_STORE_U32(r31.u32 + r28.u32, ctx.r9.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82d4d818
	if (!cr0.eq) goto loc_82D4D818;
loc_82D4D838:
	// lwz r15,92(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82D4D844:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4d870
	if (cr6.eq) goto loc_82D4D870;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,-288
	ctx.r3.s64 = ctx.r1.s64 + -288;
	// lwzx r11,r9,r3
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// stwx r31,r28,r15
	PPC_STORE_U32(r28.u32 + r15.u32, r31.u32);
loc_82D4D870:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82d4d844
	if (cr6.lt) goto loc_82D4D844;
	// addi r11,r1,-288
	r11.s64 = ctx.r1.s64 + -288;
	// stw r27,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r27.u32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// mr r20,r15
	r20.u64 = r15.u64;
	// li r24,-1
	r24.s64 = -1;
	// neg r30,r22
	r30.s64 = -r22.s64;
	// lwzx r14,r29,r11
	r14.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, r27.u32);
	// mr r23,r27
	r23.u64 = r27.u64;
	// cmpw cr6,r17,r6
	cr6.compare<int32_t>(r17.s32, ctx.r6.s32, xer);
	// bgt cr6,0x82d4db40
	if (cr6.gt) goto loc_82D4DB40;
	// rlwinm r11,r17,2,0,29
	r11.u64 = rotl64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,84(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r9,r1,-384
	ctx.r9.s64 = ctx.r1.s64 + -384;
	// addi r16,r17,-1
	r16.s64 = r17.s64 + -1;
	// add r19,r11,r9
	r19.u64 = r11.u64 + ctx.r9.u64;
loc_82D4D8C0:
	// lwz r21,0(r19)
	r21.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// b 0x82d4db24
	goto loc_82D4DB24;
loc_82D4D8C8:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82d4db58
	goto loc_82D4DB58;
loc_82D4D8D0:
	// add r11,r30,r22
	r11.u64 = r30.u64 + r22.u64;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// cmpw cr6,r17,r11
	cr6.compare<int32_t>(r17.s32, r11.s32, xer);
	// ble cr6,0x82d4da14
	if (!cr6.gt) goto loc_82D4DA14;
	// addi r25,r21,1
	r25.s64 = r21.s64 + 1;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r29,r22,r30
	r29.s64 = r30.s64 - r22.s64;
loc_82D4D8EC:
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// subf r9,r30,r6
	ctx.r9.s64 = ctx.r6.s64 - r30.s64;
	// add r29,r29,r22
	r29.u64 = r29.u64 + r22.u64;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// cmplw cr6,r9,r22
	cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, xer);
	// ble cr6,0x82d4d90c
	if (!cr6.gt) goto loc_82D4D90C;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_82D4D90C:
	// subf r11,r30,r17
	r11.s64 = r17.s64 - r30.s64;
	// slw r4,r10,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// cmplw cr6,r4,r25
	cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, xer);
	// ble cr6,0x82d4d958
	if (!cr6.gt) goto loc_82D4D958;
	// subf r4,r21,r4
	ctx.r4.s64 = ctx.r4.s64 - r21.s64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d4d958
	if (!cr6.lt) goto loc_82D4D958;
	// b 0x82d4d94c
	goto loc_82D4D94C;
loc_82D4D934:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// ble cr6,0x82d4d958
	if (!cr6.gt) goto loc_82D4D958;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - r31.s64;
loc_82D4D94C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d4d934
	if (cr6.lt) goto loc_82D4D934;
loc_82D4D958:
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// slw r23,r10,r11
	r23.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// add r3,r4,r23
	ctx.r3.u64 = ctx.r4.u64 + r23.u64;
	// cmplwi cr6,r3,1440
	cr6.compare<uint32_t>(ctx.r3.u32, 1440, xer);
	// bgt cr6,0x82d4d8c8
	if (cr6.gt) goto loc_82D4D8C8;
	// stw r3,0(r18)
	PPC_STORE_U32(r18.u32 + 0, ctx.r3.u32);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// lwz r3,76(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(76) );
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = rotl64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r3,-408(r1)
	PPC_STORE_U32(ctx.r1.u32 + -408, ctx.r3.u32);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + r31.u64;
	// lwz r31,-408(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-408) );
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// beq cr6,0x82d4da08
	if (cr6.eq) goto loc_82D4DA08;
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-4) );
	// srw r3,r26,r29
	ctx.r3.u64 = r29.u8 & 0x20 ? 0 : (r26.u32 >> (r29.u8 & 0x3F));
	// subf r7,r4,r31
	ctx.r7.s64 = r31.s64 - ctx.r4.s64;
	// std r10,-320(r1)
	PPC_STORE_U64(ctx.r1.u32 + -320, ctx.r10.u64);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// srawi r7,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// lwz r8,60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(60) );
	// addi r6,r1,-288
	ctx.r6.s64 = ctx.r1.s64 + -288;
	// stb r11,-416(r1)
	PPC_STORE_U8(ctx.r1.u32 + -416, r11.u8);
	// stw r7,-408(r1)
	PPC_STORE_U32(ctx.r1.u32 + -408, ctx.r7.u32);
	// lwz r7,-404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-404) );
	// stw r6,-396(r1)
	PPC_STORE_U32(ctx.r1.u32 + -396, ctx.r6.u32);
	// stb r22,-415(r1)
	PPC_STORE_U8(ctx.r1.u32 + -415, r22.u8);
	// lwz r6,-400(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-400) );
	// std r8,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.r8.u64);
	// std r7,-312(r1)
	PPC_STORE_U64(ctx.r1.u32 + -312, ctx.r7.u64);
	// lwz r7,-408(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-408) );
	// subf r3,r3,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r3.s64;
	// stw r3,-412(r1)
	PPC_STORE_U32(ctx.r1.u32 + -412, ctx.r3.u32);
	// lwz r3,-396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-396) );
	// ld r11,-416(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -416);
	// stdx r11,r10,r4
	PPC_STORE_U64(ctx.r10.u32 + ctx.r4.u32, r11.u64);
	// ld r10,-320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r7,-312(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// stwx r26,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r26.u32);
	// b 0x82d4da0c
	goto loc_82D4DA0C;
loc_82D4DA08:
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
loc_82D4DA0C:
	// cmpw cr6,r17,r28
	cr6.compare<int32_t>(r17.s32, r28.s32, xer);
	// bgt cr6,0x82d4d8ec
	if (cr6.gt) goto loc_82D4D8EC;
loc_82D4DA14:
	// rlwinm r11,r14,2,0,29
	r11.u64 = rotl64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r17
	ctx.r9.s64 = r17.s64 - r30.s64;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// stb r9,-415(r1)
	PPC_STORE_U8(ctx.r1.u32 + -415, ctx.r9.u8);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x82d4da34
	if (cr6.lt) goto loc_82D4DA34;
	// li r11,192
	r11.s64 = 192;
	// b 0x82d4da84
	goto loc_82D4DA84;
loc_82D4DA34:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82d4da64
	if (!cr6.lt) goto loc_82D4DA64;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,-412(r1)
	PPC_STORE_U32(ctx.r1.u32 + -412, r11.u32);
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,26,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// b 0x82d4da84
	goto loc_82D4DA84;
loc_82D4DA64:
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(52) );
	// lwz r4,44(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(44) );
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stw r9,-412(r1)
	PPC_STORE_U32(ctx.r1.u32 + -412, ctx.r9.u32);
loc_82D4DA84:
	// stb r11,-416(r1)
	PPC_STORE_U8(ctx.r1.u32 + -416, r11.u8);
	// subf r9,r30,r17
	ctx.r9.s64 = r17.s64 - r30.s64;
	// srw r11,r26,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 >> (r30.u8 & 0x3F));
	// slw r4,r10,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82d4dac0
	if (!cr6.lt) goto loc_82D4DAC0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
loc_82D4DAA8:
	// ld r29,-416(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -416);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// blt cr6,0x82d4daa8
	if (cr6.lt) goto loc_82D4DAA8;
loc_82D4DAC0:
	// slw r11,r10,r16
	r11.u64 = r16.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r16.u8 & 0x3F));
	// b 0x82d4dacc
	goto loc_82D4DACC;
loc_82D4DAC8:
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82D4DACC:
	// and. r9,r11,r26
	ctx.r9.u64 = r11.u64 & r26.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// xor r26,r11,r26
	r26.u64 = r11.u64 ^ r26.u64;
	// bne 0x82d4dac8
	if (!cr0.eq) goto loc_82D4DAC8;
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = rotl64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// slw r4,r10,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r11,r11,r26
	r11.u64 = r11.u64 & r26.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d4db24
	if (cr6.eq) goto loc_82D4DB24;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D4DB00:
	// subf r30,r22,r30
	r30.s64 = r30.s64 - r22.s64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// slw r9,r10,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & r26.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x82d4db00
	if (!cr6.eq) goto loc_82D4DB00;
loc_82D4DB24:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82d4d8d0
	if (!cr6.eq) goto loc_82D4D8D0;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmpw cr6,r17,r6
	cr6.compare<int32_t>(r17.s32, ctx.r6.s32, xer);
	// ble cr6,0x82d4d8c0
	if (!cr6.gt) goto loc_82D4D8C0;
loc_82D4DB40:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82d4db54
	if (cr6.eq) goto loc_82D4DB54;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// bne cr6,0x82d4db58
	if (!cr6.eq) goto loc_82D4DB58;
loc_82D4DB54:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82D4DB58:
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82D4D690) {
	__imp__sub_82D4D690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4DB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82d4dbb0
	if (!cr0.eq) goto loc_82D4DBB0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82d4dc34
	goto loc_82D4DC34;
loc_82D4DBB0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d4d690
	sub_82D4D690(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-3
	cr6.compare<int32_t>(r30.s32, -3, xer);
	// bne cr6,0x82d4dbf8
	if (!cr6.eq) goto loc_82D4DBF8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14020
	r11.s64 = r11.s64 + 14020;
	// b 0x82d4dc18
	goto loc_82D4DC18;
loc_82D4DBF8:
	// cmpwi cr6,r30,-5
	cr6.compare<int32_t>(r30.s32, -5, xer);
	// beq cr6,0x82d4dc0c
	if (cr6.eq) goto loc_82D4DC0C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4dc1c
	if (!cr6.eq) goto loc_82D4DC1C;
loc_82D4DC0C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,-3
	r30.s64 = -3;
	// addi r11,r11,13984
	r11.s64 = r11.s64 + 13984;
loc_82D4DC18:
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82D4DC1C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82D4DC34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D4DB60) {
	__imp__sub_82D4DB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4DC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,292(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(292) );
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(32) );
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,288
	ctx.r4.s64 = 288;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82d4dca0
	if (!cr0.eq) goto loc_82D4DCA0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82d4ddf8
	goto loc_82D4DDF8;
loc_82D4DCA0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,9136
	r31.s64 = r11.s64 + 9136;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d4d690
	sub_82D4D690(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82d4ddb4
	if (!cr0.eq) goto loc_82D4DDB4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4ddd0
	if (cr6.eq) goto loc_82D4DDD0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,376
	ctx.r7.s64 = r31.s64 + 376;
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82d4d690
	sub_82D4D690(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82d4dd58
	if (!cr0.eq) goto loc_82D4DD58;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4dd3c
	if (!cr6.eq) goto loc_82D4DD3C;
	// cmplwi cr6,r29,257
	cr6.compare<uint32_t>(r29.u32, 257, xer);
	// bgt cr6,0x82d4dd88
	if (cr6.gt) goto loc_82D4DD88;
loc_82D4DD3C:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d4ddf8
	goto loc_82D4DDF8;
loc_82D4DD58:
	// cmpwi cr6,r31,-3
	cr6.compare<int32_t>(r31.s32, -3, xer);
	// bne cr6,0x82d4dd6c
	if (!cr6.eq) goto loc_82D4DD6C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14192
	r11.s64 = r11.s64 + 14192;
	// b 0x82d4dd94
	goto loc_82D4DD94;
loc_82D4DD6C:
	// cmpwi cr6,r31,-5
	cr6.compare<int32_t>(r31.s32, -5, xer);
	// bne cr6,0x82d4dd80
	if (!cr6.eq) goto loc_82D4DD80;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14164
	r11.s64 = r11.s64 + 14164;
	// b 0x82d4dd90
	goto loc_82D4DD90;
loc_82D4DD80:
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// beq cr6,0x82d4dd98
	if (cr6.eq) goto loc_82D4DD98;
loc_82D4DD88:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14128
	r11.s64 = r11.s64 + 14128;
loc_82D4DD90:
	// li r31,-3
	r31.s64 = -3;
loc_82D4DD94:
	// stw r11,24(r24)
	PPC_STORE_U32(r24.u32 + 24, r11.u32);
loc_82D4DD98:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82d4ddf8
	goto loc_82D4DDF8;
loc_82D4DDB4:
	// cmpwi cr6,r26,-3
	cr6.compare<int32_t>(r26.s32, -3, xer);
	// bne cr6,0x82d4ddc8
	if (!cr6.eq) goto loc_82D4DDC8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14092
	r11.s64 = r11.s64 + 14092;
	// b 0x82d4dddc
	goto loc_82D4DDDC;
loc_82D4DDC8:
	// cmpwi cr6,r26,-4
	cr6.compare<int32_t>(r26.s32, -4, xer);
	// beq cr6,0x82d4dde0
	if (cr6.eq) goto loc_82D4DDE0;
loc_82D4DDD0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r26,-3
	r26.s64 = -3;
	// addi r11,r11,14060
	r11.s64 = r11.s64 + 14060;
loc_82D4DDDC:
	// stw r11,24(r24)
	PPC_STORE_U32(r24.u32 + 24, r11.u32);
loc_82D4DDE0:
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82D4DDF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82D4DC40) {
	__imp__sub_82D4DC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4DE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,13728
	r11.s64 = r11.s64 + 13728;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-4096
	ctx.r10.s64 = r11.s64 + -4096;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4DE00) {
	__imp__sub_82D4DE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4DE30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x82d4de60
	if (!cr6.gt) goto loc_82D4DE60;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
loc_82D4DE60:
	// subf r30,r28,r11
	r30.s64 = r11.s64 - r28.s64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82d4de74
	if (!cr6.gt) goto loc_82D4DE74;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82D4DE74:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d4de88
	if (cr6.eq) goto loc_82D4DE88;
	// cmpwi cr6,r26,-5
	cr6.compare<int32_t>(r26.s32, -5, xer);
	// bne cr6,0x82d4de88
	if (!cr6.eq) goto loc_82D4DE88;
	// li r26,0
	r26.s64 = 0;
loc_82D4DE88:
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4dec4
	if (cr6.eq) goto loc_82D4DEC4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_82D4DEC4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4df7c
	if (!cr6.eq) goto loc_82D4DF7C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4defc
	if (!cr6.eq) goto loc_82D4DEFC;
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
loc_82D4DEFC:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// subf r30,r28,r10
	r30.s64 = ctx.r10.s64 - r28.s64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82d4df14
	if (!cr6.gt) goto loc_82D4DF14;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82D4DF14:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d4df28
	if (cr6.eq) goto loc_82D4DF28;
	// cmpwi cr6,r26,-5
	cr6.compare<int32_t>(r26.s32, -5, xer);
	// bne cr6,0x82d4df28
	if (!cr6.eq) goto loc_82D4DF28;
	// li r26,0
	r26.s64 = 0;
loc_82D4DF28:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4df64
	if (cr6.eq) goto loc_82D4DF64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_82D4DF64:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
loc_82D4DF7C:
	// stw r27,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D4DE30) {
	__imp__sub_82D4DE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4DF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mflr r12
	// bl 0x82ca2bd0
	// lwz r11,48(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(48) );
	// lwz r31,52(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(52) );
	// lwz r24,0(r8)
	r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r25,4(r8)
	r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r29,32(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(32) );
	// lwz r30,28(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(28) );
	// bge cr6,0x82d4dfc4
	if (!cr6.lt) goto loc_82D4DFC4;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// b 0x82d4dfcc
	goto loc_82D4DFCC;
loc_82D4DFC4:
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(44) );
	// subf r26,r31,r11
	r26.s64 = r11.s64 - r31.s64;
loc_82D4DFCC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,14224
	r27.s64 = r11.s64 + 14224;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r23,r11,r27
	r23.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// b 0x82d4e000
	goto loc_82D4E000;
loc_82D4DFE8:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// or r29,r11,r29
	r29.u64 = r11.u64 | r29.u64;
loc_82D4E000:
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(r30.u32, 20, xer);
	// blt cr6,0x82d4dfe8
	if (cr6.lt) goto loc_82D4DFE8;
	// and r11,r22,r29
	r11.u64 = r22.u64 & r29.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x82d4e038
	if (!cr0.eq) goto loc_82D4E038;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// srw r29,r29,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// b 0x82d4e264
	goto loc_82D4E264;
loc_82D4E038:
	// srw r11,r29,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm. r3,r4,0,27,27
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// bne 0x82d4e08c
	if (!cr0.eq) goto loc_82D4E08C;
loc_82D4E048:
	// rlwinm. r3,r4,0,25,25
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82d4e32c
	if (!cr0.eq) goto loc_82D4E32C;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82d4e250
	if (cr0.eq) goto loc_82D4E250;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm. r30,r4,0,27,27
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// beq 0x82d4e048
	if (cr0.eq) goto loc_82D4E048;
loc_82D4E08C:
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwzx r4,r4,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r27.u32);
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & r11.u64;
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// add r28,r4,r9
	r28.u64 = ctx.r4.u64 + ctx.r9.u64;
	// b 0x82d4e0c8
	goto loc_82D4E0C8;
loc_82D4E0B0:
	// lbz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_82D4E0C8:
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82d4e0b0
	if (cr6.lt) goto loc_82D4E0B0;
	// and r9,r23,r11
	ctx.r9.u64 = r23.u64 & r11.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x82d4e104
	goto loc_82D4E104;
loc_82D4E0E0:
	// rlwinm. r3,r4,0,25,25
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82d4e2cc
	if (!cr0.eq) goto loc_82D4E2CC;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_82D4E104:
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srw r11,r11,r3
	r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm. r30,r4,0,27,27
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82d4e0e0
	if (cr0.eq) goto loc_82D4E0E0;
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// b 0x82d4e13c
	goto loc_82D4E13C;
loc_82D4E124:
	// lbz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
loc_82D4E13C:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x82d4e124
	if (cr6.lt) goto loc_82D4E124;
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// srw r29,r11,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwzx r9,r30,r27
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r27.u32);
	// subf r30,r4,r10
	r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(40) );
	// subf r26,r28,r26
	r26.s64 = r26.s64 - r28.s64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & r11.u64;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d4e210
	if (!cr6.lt) goto loc_82D4E210;
	// lwz r9,44(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(44) );
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82D4E17C:
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d4e17c
	if (cr6.lt) goto loc_82D4E17C;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d4e1d0
	if (!cr6.gt) goto loc_82D4E1D0;
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
loc_82D4E198:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82d4e198
	if (!cr0.eq) goto loc_82D4E198;
	// lwz r11,40(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(40) );
loc_82D4E1B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82d4e1b4
	if (!cr0.eq) goto loc_82D4E1B4;
	// b 0x82d4e26c
	goto loc_82D4E26C;
loc_82D4E1D0:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
loc_82D4E1F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82d4e1f4
	if (!cr0.eq) goto loc_82D4E1F4;
	// b 0x82d4e26c
	goto loc_82D4E26C;
loc_82D4E210:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r4,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
loc_82D4E234:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82d4e234
	if (!cr0.eq) goto loc_82D4E234;
	// b 0x82d4e26c
	goto loc_82D4E26C;
loc_82D4E250:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// srw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stb r4,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// subf r30,r9,r10
	r30.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82D4E264:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_82D4E26C:
	// cmplwi cr6,r26,258
	cr6.compare<uint32_t>(r26.u32, 258, xer);
	// blt cr6,0x82d4e27c
	if (cr6.lt) goto loc_82D4E27C;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(r25.u32, 10, xer);
	// bge cr6,0x82d4e000
	if (!cr6.lt) goto loc_82D4E000;
loc_82D4E27C:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82d4e294
	if (!cr6.lt) goto loc_82D4E294;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82D4E294:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r29.u32);
	// subf r10,r11,r24
	ctx.r10.s64 = r24.s64 - r11.s64;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x82d4e324
	goto loc_82D4E324;
loc_82D4E2CC:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r5,r5,-25352
	ctx.r5.s64 = ctx.r5.s64 + -25352;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// stw r5,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d4e2f0
	if (!cr6.lt) goto loc_82D4E2F0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82D4E2F0:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_82D4E2F4:
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r11.u32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r24
	r11.s64 = r24.s64 - ctx.r9.s64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82D4E324:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// b 0x82d4e3a0
	goto loc_82D4E3A0;
loc_82D4E32C:
	// rlwinm. r9,r4,0,26,26
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq 0x82d4e354
	if (cr0.eq) goto loc_82D4E354;
	// bge cr6,0x82d4e34c
	if (!cr6.lt) goto loc_82D4E34C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82D4E34C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d4e2f4
	goto loc_82D4E2F4;
loc_82D4E354:
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r5,r5,-25380
	ctx.r5.s64 = ctx.r5.s64 + -25380;
	// stw r5,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// bge cr6,0x82d4e368
	if (!cr6.lt) goto loc_82D4E368;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82D4E368:
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, r11.u32);
	// subf r11,r9,r24
	r11.s64 = r24.s64 - ctx.r9.s64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82D4E3A0:
	// stw r31,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, r31.u32);
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D4DF90) {
	__imp__sub_82D4DF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E3A8) {
	__imp__sub_82D4E3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14300
	r11.s64 = r11.s64 + 14300;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E3B0) {
	__imp__sub_82D4E3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83000de0
	sub_83000DE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4E3C0) {
	__imp__sub_82D4E3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83000dc8
	sub_83000DC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4E3C8) {
	__imp__sub_82D4E3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E3D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d4e3fc
	if (cr6.eq) goto loc_82D4E3FC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82D4E3FC:
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lwz r3,29252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(29252) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e438
	if (cr6.eq) goto loc_82D4E438;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d4e438
	if (!cr6.eq) goto loc_82D4E438;
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
loc_82D4E438:
	// stw r31,29252(r30)
	PPC_STORE_U32(r30.u32 + 29252, r31.u32);
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

PPC_WEAK_FUNC(sub_82D4E3D0) {
	__imp__sub_82D4E3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// ble cr6,0x82d4e470
	if (!cr6.gt) goto loc_82D4E470;
	// addi r11,r4,15
	r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
loc_82D4E470:
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E458) {
	__imp__sub_82D4E458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E478) {
	__imp__sub_82D4E478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14300
	r11.s64 = r11.s64 + 14300;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E488) {
	__imp__sub_82D4E488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E4B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14300
	r11.s64 = r11.s64 + 14300;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d4e4f8
	if (cr6.eq) goto loc_82D4E4F8;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,27688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27688) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82D4E4F8:
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

PPC_WEAK_FUNC(sub_82D4E4B8) {
	__imp__sub_82D4E4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D4E510) {
	__imp__sub_82D4E510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E534) {
	__imp__sub_82D4E534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E538) {
	__imp__sub_82D4E538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E548) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r28,r10,r29
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82d4e604
	if (!cr6.gt) goto loc_82D4E604;
loc_82D4E57C:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x82d4e58c
	if (!cr6.gt) goto loc_82D4E58C;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82d4e598
	goto loc_82D4E598;
loc_82D4E58C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82d4e5dc
	if (!cr6.gt) goto loc_82D4E5DC;
loc_82D4E598:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82D4E5A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4e5c4
	if (cr6.eq) goto loc_82D4E5C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82d4e5c8
	goto loc_82D4E5C8;
loc_82D4E5C4:
	// li r11,0
	r11.s64 = 0;
loc_82D4E5C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4e5a0
	if (!cr6.eq) goto loc_82D4E5A0;
loc_82D4E5DC:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// subf r30,r5,r30
	r30.s64 = r30.s64 - ctx.r5.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82d4e57c
	if (cr6.gt) goto loc_82D4E57C;
loc_82D4E604:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4E548) {
	__imp__sub_82D4E548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D4E610) {
	__imp__sub_82D4E610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// clrlwi r11,r4,28
	r11.u64 = ctx.r4.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// beq cr6,0x82d4e664
	if (cr6.eq) goto loc_82D4E664;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
loc_82D4E664:
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4E630) {
	__imp__sub_82D4E630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82d4e69c
	if (cr6.eq) goto loc_82D4E69C;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
loc_82D4E69C:
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r31,4
	r31.s64 = 4;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e6d4
	if (cr6.eq) goto loc_82D4E6D4;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bne 0x82d4e6d4
	if (!cr0.eq) goto loc_82D4E6D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4E6D4:
	// stwx r29,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4E678) {
	__imp__sub_82D4E678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E6E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,14424
	r11.s64 = r11.s64 + 14424;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,20(r28)
	PPC_STORE_U32(r28.u32 + 20, ctx.r10.u32);
	// addi r11,r28,56
	r11.s64 = r28.s64 + 56;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r31.u32);
	// stw r31,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r31.u32);
	// stw r9,40(r28)
	PPC_STORE_U32(r28.u32 + 40, ctx.r9.u32);
	// stw r31,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r31.u32);
loc_82D4E72C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82d4e72c
	if (!cr6.lt) goto loc_82D4E72C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4e768
	if (cr6.eq) goto loc_82D4E768;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82D4E768:
	// lis r11,4095
	r11.s64 = 268369920;
	// stw r29,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r29.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82d4e780
	if (!cr6.lt) goto loc_82D4E780;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82D4E780:
	// addi r10,r28,260
	ctx.r10.s64 = r28.s64 + 260;
	// stw r11,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r11.u32);
loc_82D4E788:
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bgt cr6,0x82d4e798
	if (cr6.gt) goto loc_82D4E798;
	// li r11,1
	r11.s64 = 1;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E798:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// bgt cr6,0x82d4e7a8
	if (cr6.gt) goto loc_82D4E7A8;
	// li r11,2
	r11.s64 = 2;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7A8:
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// bgt cr6,0x82d4e7b8
	if (cr6.gt) goto loc_82D4E7B8;
	// li r11,3
	r11.s64 = 3;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7B8:
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// bgt cr6,0x82d4e7c8
	if (cr6.gt) goto loc_82D4E7C8;
	// li r11,4
	r11.s64 = 4;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7C8:
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// bgt cr6,0x82d4e7d8
	if (cr6.gt) goto loc_82D4E7D8;
	// li r11,5
	r11.s64 = 5;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7D8:
	// cmpwi cr6,r31,96
	cr6.compare<int32_t>(r31.s32, 96, xer);
	// bgt cr6,0x82d4e7e8
	if (cr6.gt) goto loc_82D4E7E8;
	// li r11,6
	r11.s64 = 6;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7E8:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bgt cr6,0x82d4e7f8
	if (cr6.gt) goto loc_82D4E7F8;
	// li r11,7
	r11.s64 = 7;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E7F8:
	// cmpwi cr6,r31,160
	cr6.compare<int32_t>(r31.s32, 160, xer);
	// bgt cr6,0x82d4e808
	if (cr6.gt) goto loc_82D4E808;
	// li r11,8
	r11.s64 = 8;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E808:
	// cmpwi cr6,r31,192
	cr6.compare<int32_t>(r31.s32, 192, xer);
	// bgt cr6,0x82d4e818
	if (cr6.gt) goto loc_82D4E818;
	// li r11,9
	r11.s64 = 9;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E818:
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// bgt cr6,0x82d4e828
	if (cr6.gt) goto loc_82D4E828;
	// li r11,10
	r11.s64 = 10;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E828:
	// cmpwi cr6,r31,320
	cr6.compare<int32_t>(r31.s32, 320, xer);
	// bgt cr6,0x82d4e838
	if (cr6.gt) goto loc_82D4E838;
	// li r11,11
	r11.s64 = 11;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E838:
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// bgt cr6,0x82d4e848
	if (cr6.gt) goto loc_82D4E848;
	// li r11,12
	r11.s64 = 12;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E848:
	// cmpwi cr6,r31,1024
	cr6.compare<int32_t>(r31.s32, 1024, xer);
	// bgt cr6,0x82d4e858
	if (cr6.gt) goto loc_82D4E858;
	// li r11,13
	r11.s64 = 13;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E858:
	// cmpwi cr6,r31,2048
	cr6.compare<int32_t>(r31.s32, 2048, xer);
	// bgt cr6,0x82d4e868
	if (cr6.gt) goto loc_82D4E868;
	// li r11,14
	r11.s64 = 14;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E868:
	// cmpwi cr6,r31,4096
	cr6.compare<int32_t>(r31.s32, 4096, xer);
	// bgt cr6,0x82d4e878
	if (cr6.gt) goto loc_82D4E878;
	// li r11,15
	r11.s64 = 15;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E878:
	// cmpwi cr6,r31,8192
	cr6.compare<int32_t>(r31.s32, 8192, xer);
	// bgt cr6,0x82d4e888
	if (cr6.gt) goto loc_82D4E888;
	// li r11,16
	r11.s64 = 16;
	// b 0x82d4e890
	goto loc_82D4E890;
loc_82D4E888:
	// twi 31,r0,22
	// li r11,-1
	r11.s64 = -1;
loc_82D4E890:
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + r31.u32, r11.u8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// ble cr6,0x82d4e788
	if (!cr6.gt) goto loc_82D4E788;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// addi r9,r28,776
	ctx.r9.s64 = r28.s64 + 776;
loc_82D4E8B4:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x82d4e8c4
	if (cr6.gt) goto loc_82D4E8C4;
	// li r11,1
	r11.s64 = 1;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E8C4:
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bgt cr6,0x82d4e8d4
	if (cr6.gt) goto loc_82D4E8D4;
	// li r11,2
	r11.s64 = 2;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E8D4:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bgt cr6,0x82d4e8e4
	if (cr6.gt) goto loc_82D4E8E4;
	// li r11,3
	r11.s64 = 3;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E8E4:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bgt cr6,0x82d4e8f4
	if (cr6.gt) goto loc_82D4E8F4;
	// li r11,4
	r11.s64 = 4;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E8F4:
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// bgt cr6,0x82d4e904
	if (cr6.gt) goto loc_82D4E904;
	// li r11,5
	r11.s64 = 5;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E904:
	// cmpwi cr6,r10,96
	cr6.compare<int32_t>(ctx.r10.s32, 96, xer);
	// bgt cr6,0x82d4e914
	if (cr6.gt) goto loc_82D4E914;
	// li r11,6
	r11.s64 = 6;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E914:
	// cmpwi cr6,r10,128
	cr6.compare<int32_t>(ctx.r10.s32, 128, xer);
	// bgt cr6,0x82d4e924
	if (cr6.gt) goto loc_82D4E924;
	// li r11,7
	r11.s64 = 7;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E924:
	// cmpwi cr6,r10,160
	cr6.compare<int32_t>(ctx.r10.s32, 160, xer);
	// bgt cr6,0x82d4e934
	if (cr6.gt) goto loc_82D4E934;
	// li r11,8
	r11.s64 = 8;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E934:
	// cmpwi cr6,r10,192
	cr6.compare<int32_t>(ctx.r10.s32, 192, xer);
	// bgt cr6,0x82d4e944
	if (cr6.gt) goto loc_82D4E944;
	// li r11,9
	r11.s64 = 9;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E944:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bgt cr6,0x82d4e954
	if (cr6.gt) goto loc_82D4E954;
	// li r11,10
	r11.s64 = 10;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E954:
	// cmpwi cr6,r10,320
	cr6.compare<int32_t>(ctx.r10.s32, 320, xer);
	// bgt cr6,0x82d4e964
	if (cr6.gt) goto loc_82D4E964;
	// li r11,11
	r11.s64 = 11;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E964:
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bgt cr6,0x82d4e974
	if (cr6.gt) goto loc_82D4E974;
	// li r11,12
	r11.s64 = 12;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E974:
	// cmpwi cr6,r10,1024
	cr6.compare<int32_t>(ctx.r10.s32, 1024, xer);
	// bgt cr6,0x82d4e984
	if (cr6.gt) goto loc_82D4E984;
	// li r11,13
	r11.s64 = 13;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E984:
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// bgt cr6,0x82d4e994
	if (cr6.gt) goto loc_82D4E994;
	// li r11,14
	r11.s64 = 14;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E994:
	// cmpwi cr6,r10,4096
	cr6.compare<int32_t>(ctx.r10.s32, 4096, xer);
	// bgt cr6,0x82d4e9a4
	if (cr6.gt) goto loc_82D4E9A4;
	// li r11,15
	r11.s64 = 15;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E9A4:
	// cmpwi cr6,r10,8192
	cr6.compare<int32_t>(ctx.r10.s32, 8192, xer);
	// bgt cr6,0x82d4e9b4
	if (cr6.gt) goto loc_82D4E9B4;
	// li r11,16
	r11.s64 = 16;
	// b 0x82d4e9bc
	goto loc_82D4E9BC;
loc_82D4E9B4:
	// twi 31,r0,22
	// li r11,-1
	r11.s64 = -1;
loc_82D4E9BC:
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r10.u32);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// cmpwi cr6,r10,9216
	cr6.compare<int32_t>(ctx.r10.s32, 9216, xer);
	// blt cr6,0x82d4e8b4
	if (cr6.lt) goto loc_82D4E8B4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4E6E0) {
	__imp__sub_82D4E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4E9E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,16
	r31.s64 = 16;
	// addi r30,r29,188
	r30.s64 = r29.s64 + 188;
loc_82D4EA00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d4ea18
	if (cr6.eq) goto loc_82D4EA18;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82d4e548
	sub_82D4E548(ctx, base);
loc_82D4EA18:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82d4ea00
	if (!cr6.lt) goto loc_82D4EA00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4E9E8) {
	__imp__sub_82D4E9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EA30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,52(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82d4ea7c
	if (!cr6.eq) goto loc_82D4EA7C;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82D4EA7C:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82d4ea88
	if (cr6.lt) goto loc_82D4EA88;
	// li r30,4
	r30.s64 = 4;
loc_82D4EA88:
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r29,7
	r11.s64 = r29.s64 + 7;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ble cr6,0x82d4eaf8
	if (!cr6.gt) goto loc_82D4EAF8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
loc_82D4EACC:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bne cr6,0x82d4eacc
	if (!cr6.eq) goto loc_82D4EACC;
loc_82D4EAF8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4EA30) {
	__imp__sub_82D4EA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EB08) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwzx r27,r10,r28
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// bne cr6,0x82d4eb5c
	if (!cr6.eq) goto loc_82D4EB5C;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
loc_82D4EB5C:
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r11,r10,3,0,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r29,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r29.s64 = temp.s64;
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// ble cr6,0x82d4ec08
	if (!cr6.gt) goto loc_82D4EC08;
loc_82D4EB7C:
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82d4eb90
	if (!cr6.gt) goto loc_82D4EB90;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82d4eb9c
	goto loc_82D4EB9C;
loc_82D4EB90:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d4ebe0
	if (!cr6.gt) goto loc_82D4EBE0;
loc_82D4EB9C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82D4EBA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4ebc8
	if (cr6.eq) goto loc_82D4EBC8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82d4ebcc
	goto loc_82D4EBCC;
loc_82D4EBC8:
	// li r11,0
	r11.s64 = 0;
loc_82D4EBCC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4eba4
	if (!cr6.eq) goto loc_82D4EBA4;
loc_82D4EBE0:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// subf r30,r5,r30
	r30.s64 = r30.s64 - ctx.r5.s64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x82d4eb7c
	if (cr6.gt) goto loc_82D4EB7C;
loc_82D4EC08:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D4EB08) {
	__imp__sub_82D4EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8192
	cr6.compare<int32_t>(ctx.r4.s32, 8192, xer);
	// bgt cr6,0x82d4ec94
	if (cr6.gt) goto loc_82D4EC94;
	// cmpwi cr6,r4,512
	cr6.compare<int32_t>(ctx.r4.s32, 512, xer);
	// bgt cr6,0x82d4ec48
	if (cr6.gt) goto loc_82D4EC48;
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r11,260(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 260);
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// b 0x82d4ec5c
	goto loc_82D4EC5C;
loc_82D4EC48:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// srawi r11,r11,10
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FF) != 0);
	r11.s64 = r11.s32 >> 10;
	// addi r11,r11,194
	r11.s64 = r11.s64 + 194;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
loc_82D4EC5C:
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4ec90
	if (cr6.eq) goto loc_82D4EC90;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D4EC90:
	// b 0x82d4ea30
	sub_82D4EA30(ctx, base);
	return;
loc_82D4EC94:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D4EC28) {
	__imp__sub_82D4EC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4ECA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r5,8192
	cr6.compare<int32_t>(ctx.r5.s32, 8192, xer);
	// bgt cr6,0x82d4ed30
	if (cr6.gt) goto loc_82D4ED30;
	// cmpwi cr6,r5,512
	cr6.compare<int32_t>(ctx.r5.s32, 512, xer);
	// bgt cr6,0x82d4ecd0
	if (cr6.gt) goto loc_82D4ECD0;
	// add r11,r5,r3
	r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,260(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 260);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d4ece4
	goto loc_82D4ECE4;
loc_82D4ECD0:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// srawi r11,r11,10
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FF) != 0);
	r11.s64 = r11.s32 >> 10;
	// addi r11,r11,194
	r11.s64 = r11.s64 + 194;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
loc_82D4ECE4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(60) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d4ed08
	if (cr6.lt) goto loc_82D4ED08;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82d4eb08
	sub_82D4EB08(ctx, base);
	return;
loc_82D4ED08:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_82D4ED30:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
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

PPC_WEAK_FUNC(sub_82D4ECA8) {
	__imp__sub_82D4ECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4ED48) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4edc4
	if (!cr6.eq) goto loc_82D4EDC4;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14480
	ctx.r4.s64 = r11.s64 + 14480;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,11243
	ctx.r5.s64 = 736821248;
	// li r8,301
	ctx.r8.s64 = 301;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,47714
	ctx.r5.u64 = ctx.r5.u64 | 47714;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r7,r11,14452
	ctx.r7.s64 = r11.s64 + 14452;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
loc_82D4EDC4:
	// addi r30,r29,1024
	r30.s64 = r29.s64 + 1024;
	// cmpwi cr6,r30,4096
	cr6.compare<int32_t>(r30.s32, 4096, xer);
	// bgt cr6,0x82d4edd4
	if (cr6.gt) goto loc_82D4EDD4;
	// li r30,4096
	r30.s64 = 4096;
loc_82D4EDD4:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + r29.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + r30.u64;
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4ED48) {
	__imp__sub_82D4ED48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// ld r11,8(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// b 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4EE28) {
	__imp__sub_82D4EE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EE58) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r10,564
	ctx.r10.s64 = 36962304;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r10,r10,22102
	ctx.r10.u64 = ctx.r10.u64 | 22102;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
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

PPC_WEAK_FUNC(sub_82D4EE58) {
	__imp__sub_82D4EE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// lis r11,-8531
	r11.s64 = -559087616;
	// ori r10,r11,48879
	ctx.r10.u64 = r11.u64 | 48879;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4EEB0) {
	__imp__sub_82D4EEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4EED8) {
	__imp__sub_82D4EED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EEE0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// add r29,r31,r5
	r29.u64 = r31.u64 + ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,564
	r11.s64 = 36962304;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// ori r9,r11,22102
	ctx.r9.u64 = r11.u64 | 22102;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r9,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r9.u32);
	// stw r29,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, r29.u32);
	// stw r30,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r30.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4EEE0) {
	__imp__sub_82D4EEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// ori r9,r10,48879
	ctx.r9.u64 = ctx.r10.u64 | 48879;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-12) );
	// subf r4,r8,r11
	ctx.r4.s64 = r11.s64 - ctx.r8.s64;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r9,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r9.u32);
	// b 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4EF40) {
	__imp__sub_82D4EF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4EF70) {
	__imp__sub_82D4EF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EF78) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14424
	r11.s64 = r11.s64 + 14424;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82d4e9e8
	sub_82D4E9E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4efc8
	if (cr6.eq) goto loc_82D4EFC8;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,27688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27688) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82D4EFC8:
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

PPC_WEAK_FUNC(sub_82D4EF78) {
	__imp__sub_82D4EF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4EFE0) {
	__imp__sub_82D4EFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4EFE8) {
	__imp__sub_82D4EFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4EFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,14712
	ctx.r3.s64 = r11.s64 + 14712;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4EFF0) {
	__imp__sub_82D4EFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F000) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82d56718
	sub_82D56718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d4f04c
	if (cr6.eq) goto loc_82D4F04C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d4f06c
	goto loc_82D4F06C;
loc_82D4F04C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4F06C:
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

PPC_WEAK_FUNC(sub_82D4F000) {
	__imp__sub_82D4F000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// b 0x82d56618
	sub_82D56618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4F098) {
	__imp__sub_82D4F098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F0B0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d4f104
	if (!cr6.gt) goto loc_82D4F104;
	// li r29,0
	r29.s64 = 0;
loc_82D4F0D8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82d51730
	sub_82D51730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d4f110
	if (cr6.eq) goto loc_82D4F110;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d4f0d8
	if (cr6.lt) goto loc_82D4F0D8;
loc_82D4F104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D4F110:
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4F0B0) {
	__imp__sub_82D4F0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F130) {
	__imp__sub_82D4F130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F138) {
	__imp__sub_82D4F138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F140) {
	__imp__sub_82D4F140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D4F158:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f158
	if (!cr6.eq) goto loc_82D4F158;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F148) {
	__imp__sub_82D4F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d4f18c
	if (cr6.eq) goto loc_82D4F18C;
loc_82D4F178:
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d4f198
	if (cr6.eq) goto loc_82D4F198;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4f178
	if (!cr6.eq) goto loc_82D4F178;
loc_82D4F18C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D4F198:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F170) {
	__imp__sub_82D4F170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D4F1B8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f1b8
	if (!cr6.eq) goto loc_82D4F1B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F1A8) {
	__imp__sub_82D4F1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F1D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F1D0) {
	__imp__sub_82D4F1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F1D8) {
	__imp__sub_82D4F1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F1E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F1E0) {
	__imp__sub_82D4F1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D4F1F8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f1f8
	if (!cr6.eq) goto loc_82D4F1F8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F1E8) {
	__imp__sub_82D4F1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f234
	if (cr6.eq) goto loc_82D4F234;
loc_82D4F220:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f220
	if (!cr6.eq) goto loc_82D4F220;
loc_82D4F234:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82D4F23C:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d4f260
	if (!cr6.lt) goto loc_82D4F260;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4f23c
	if (!cr6.eq) goto loc_82D4F23C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// blr 
	return;
loc_82D4F260:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F210) {
	__imp__sub_82D4F210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F278) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82d4f1e8
	sub_82D4F1E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d4f310
	if (!cr6.gt) goto loc_82D4F310;
loc_82D4F29C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f2c0
	if (cr6.eq) goto loc_82D4F2C0;
loc_82D4F2AC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f2ac
	if (!cr6.eq) goto loc_82D4F2AC;
loc_82D4F2C0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r11,r9,r29
	r11.s64 = r29.s64 - ctx.r9.s64;
loc_82D4F2C8:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d4f31c
	if (!cr6.lt) goto loc_82D4F31C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4f2c8
	if (!cr6.eq) goto loc_82D4F2C8;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
loc_82D4F2E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51730
	sub_82D51730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d4f334
	if (cr6.eq) goto loc_82D4F334;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82d4f1e8
	sub_82D4F1E8(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82d4f29c
	if (cr6.lt) goto loc_82D4F29C;
loc_82D4F310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D4F31C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82d4f2e8
	goto loc_82D4F2E8;
loc_82D4F334:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4F278) {
	__imp__sub_82D4F278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D4F350:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f350
	if (!cr6.eq) goto loc_82D4F350;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F340) {
	__imp__sub_82D4F340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f38c
	if (cr6.eq) goto loc_82D4F38C;
loc_82D4F378:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f378
	if (!cr6.eq) goto loc_82D4F378;
loc_82D4F38C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82D4F394:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d4f3b8
	if (!cr6.lt) goto loc_82D4F3B8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4f394
	if (!cr6.eq) goto loc_82D4F394;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// blr 
	return;
loc_82D4F3B8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F368) {
	__imp__sub_82D4F368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F3D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d4f368
	sub_82D4F368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4F3D0) {
	__imp__sub_82D4F3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F3D8) {
	__imp__sub_82D4F3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F3E0) {
	__imp__sub_82D4F3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F3F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82d4f340
	sub_82D4F340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d4f490
	if (!cr6.gt) goto loc_82D4F490;
loc_82D4F41C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f440
	if (cr6.eq) goto loc_82D4F440;
loc_82D4F42C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f42c
	if (!cr6.eq) goto loc_82D4F42C;
loc_82D4F440:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r11,r9,r29
	r11.s64 = r29.s64 - ctx.r9.s64;
loc_82D4F448:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d4f49c
	if (!cr6.lt) goto loc_82D4F49C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4f448
	if (!cr6.eq) goto loc_82D4F448;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
loc_82D4F468:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51730
	sub_82D51730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d4f4b4
	if (cr6.eq) goto loc_82D4F4B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82d4f340
	sub_82D4F340(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82d4f41c
	if (cr6.lt) goto loc_82D4F41C;
loc_82D4F490:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D4F49C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82d4f468
	goto loc_82D4F468;
loc_82D4F4B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4F3F8) {
	__imp__sub_82D4F3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F4C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F4C0) {
	__imp__sub_82D4F4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F4C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F4C8) {
	__imp__sub_82D4F4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d4f4f0
	if (cr6.eq) goto loc_82D4F4F0;
loc_82D4F4E0:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d4f4e0
	if (!cr6.eq) goto loc_82D4F4E0;
loc_82D4F4F0:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F4D0) {
	__imp__sub_82D4F4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f530
	if (cr6.eq) goto loc_82D4F530;
loc_82D4F51C:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d4f51c
	if (!cr6.eq) goto loc_82D4F51C;
loc_82D4F530:
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82D4F534:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d4f558
	if (!cr6.lt) goto loc_82D4F558;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4f534
	if (!cr6.eq) goto loc_82D4F534;
loc_82D4F550:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D4F558:
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4f550
	if (cr6.eq) goto loc_82D4F550;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82d4f550
	if (cr6.lt) goto loc_82D4F550;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F508) {
	__imp__sub_82D4F508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F5A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82d4f508
	sub_82D4F508(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82d4f5ec
	if (!cr6.eq) goto loc_82D4F5EC;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d56900
	sub_82D56900(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4F5EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4F5A0) {
	__imp__sub_82D4F5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(36) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f608
	if (cr6.eq) goto loc_82D4F608;
	// b 0x82d4f0b0
	sub_82D4F0B0(ctx, base);
	return;
loc_82D4F608:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F5F8) {
	__imp__sub_82D4F5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F610) {
	__imp__sub_82D4F610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F618) {
	__imp__sub_82D4F618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4F620) {
	__imp__sub_82D4F620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F670) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4f508
	sub_82D4F508(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82d4f6c8
	if (!cr6.eq) goto loc_82D4F6C8;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// bne cr6,0x82d4f6d4
	if (!cr6.eq) goto loc_82D4F6D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d568c0
	sub_82D568C0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82D4F6C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D4F6D4:
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bne cr6,0x82d4f714
	if (!cr6.eq) goto loc_82D4F714;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d568c8
	sub_82D568C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d56bd0
	sub_82D56BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82D4F714:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d4fa00
	sub_82D4FA00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D4F670) {
	__imp__sub_82D4F670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d57a70
	sub_82D57A70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// bl 0x82d57cf8
	sub_82D57CF8(ctx, base);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d4f798
	if (!cr6.gt) goto loc_82D4F798;
	// li r30,0
	r30.s64 = 0;
loc_82D4F774:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82d58140
	sub_82D58140(ctx, base);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d4f774
	if (cr6.lt) goto loc_82D4F774;
loc_82D4F798:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// bl 0x82d57cf8
	sub_82D57CF8(ctx, base);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82d4f958
	if (!cr6.gt) goto loc_82D4F958;
	// li r24,0
	r24.s64 = 0;
loc_82D4F7B8:
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,6
	ctx.r9.s64 = 6;
	// add r27,r11,r24
	r27.u64 = r11.u64 + r24.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D4F7D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d4f7d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D4F7D0;
	// lbz r25,124(r1)
	r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// beq cr6,0x82d4f7fc
	if (cr6.eq) goto loc_82D4F7FC;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// bne cr6,0x82d4f82c
	if (!cr6.eq) goto loc_82D4F82C;
loc_82D4F7FC:
	// lbz r3,125(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// bl 0x82d56898
	sub_82D56898(ctx, base);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lhz r11,128(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r30.u8);
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// sth r28,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r28.u16);
	// b 0x82d4f834
	goto loc_82D4F834;
loc_82D4F82C:
	// lhz r28,128(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lbz r30,125(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
loc_82D4F834:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4f874
	if (cr6.eq) goto loc_82D4F874;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// xori r28,r11,1024
	r28.u64 = r11.u64 ^ 1024;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r28,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r28.u16);
	// beq cr6,0x82d4f864
	if (cr6.eq) goto loc_82D4F864;
	// clrlwi r29,r30,24
	r29.u64 = r30.u32 & 0xFF;
loc_82D4F864:
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r25,19
	r25.s64 = 19;
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r30.u8);
	// stb r25,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r25.u8);
loc_82D4F874:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f8c4
	if (cr6.eq) goto loc_82D4F8C4;
	// lbz r11,12(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x82d4f8c4
	if (cr6.eq) goto loc_82D4F8C4;
	// lbz r11,13(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x82d4f8c4
	if (cr6.eq) goto loc_82D4F8C4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d568c0
	sub_82D568C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d4f8c4
	if (cr6.eq) goto loc_82D4F8C4;
loc_82D4F8AC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4f728
	sub_82D4F728(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82d4f8ac
	if (!cr6.eq) goto loc_82D4F8AC;
loc_82D4F8C4:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4f8e0
	if (cr6.eq) goto loc_82D4F8E0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82d568c8
	sub_82D568C8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82d58140
	sub_82D58140(ctx, base);
loc_82D4F8E0:
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57968
	sub_82D57968(ctx, base);
	// clrlwi r4,r25,24
	ctx.r4.u64 = r25.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57c98
	sub_82D57C98(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = r30.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57c98
	sub_82D57C98(ctx, base);
	// extsh r11,r29
	r11.s64 = r29.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d4f92c
	if (cr6.eq) goto loc_82D4F92C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57c98
	sub_82D57C98(ctx, base);
loc_82D4F92C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,126(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// bl 0x82d57c98
	sub_82D57C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57c98
	sub_82D57C98(ctx, base);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82d4f7b8
	if (cr6.lt) goto loc_82D4F7B8;
loc_82D4F958:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// bl 0x82d57cf8
	sub_82D57CF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d57c18
	sub_82D57C18(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D4F728) {
	__imp__sub_82D4F728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4F978) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d58448
	sub_82D58448(ctx, base);
	// not r11,r30
	r11.u64 = ~r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// beq cr6,0x82d4f9dc
	if (cr6.eq) goto loc_82D4F9DC;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
loc_82D4F9B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4f728
	sub_82D4F728(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d4f9d0
	if (cr6.eq) goto loc_82D4F9D0;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82d4f9d4
	goto loc_82D4F9D4;
loc_82D4F9D0:
	// li r31,0
	r31.s64 = 0;
loc_82D4F9D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82d4f9b4
	if (!cr6.eq) goto loc_82D4F9B4;
loc_82D4F9DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d58438
	sub_82D58438(ctx, base);
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

PPC_WEAK_FUNC(sub_82D4F978) {
	__imp__sub_82D4F978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FA00) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82d56898
	sub_82D56898(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bgt cr6,0x82d4fa54
	if (cr6.gt) goto loc_82D4FA54;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// extsh r5,r11
	ctx.r5.s64 = r11.s16;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D4FA54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D4FA00) {
	__imp__sub_82D4FA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FA60) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// b 0x82d585b8
	sub_82D585B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D4FA60) {
	__imp__sub_82D4FA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FA70) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82d58858
	sub_82D58858(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d4fac4
	if (cr6.eq) goto loc_82D4FAC4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4fabc
	if (cr6.eq) goto loc_82D4FABC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4FABC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82d4fac8
	goto loc_82D4FAC8;
loc_82D4FAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D4FAC8:
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

PPC_WEAK_FUNC(sub_82D4FA70) {
	__imp__sub_82D4FA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FAE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82d58858
	sub_82D58858(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d4fb2c
	if (cr6.eq) goto loc_82D4FB2C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4fb2c
	if (cr6.eq) goto loc_82D4FB2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4FB2C:
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

PPC_WEAK_FUNC(sub_82D4FAE0) {
	__imp__sub_82D4FAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FB48) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82d58bf0
	sub_82D58BF0(ctx, base);
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
	// beq cr6,0x82d4fba0
	if (cr6.eq) goto loc_82D4FBA0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D4FBA0:
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

PPC_WEAK_FUNC(sub_82D4FB48) {
	__imp__sub_82D4FB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FBC0) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14752
	r11.s64 = r11.s64 + 14752;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// bl 0x82d58b88
	sub_82D58B88(ctx, base);
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

PPC_WEAK_FUNC(sub_82D4FBC0) {
	__imp__sub_82D4FBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82d4fc64
	if (!cr6.gt) goto loc_82D4FC64;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82D4FC3C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r8,r8,0,1,8
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d4fc70
	if (cr6.eq) goto loc_82D4FC70;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82d4fc3c
	if (cr6.lt) goto loc_82D4FC3C;
loc_82D4FC64:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D4FC70:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FC28) {
	__imp__sub_82D4FC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82D4FC8C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r8,r8,0,1,8
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d4fcc0
	if (cr6.eq) goto loc_82D4FCC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x82d4fc8c
	if (cr6.lt) goto loc_82D4FC8C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D4FCC0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FC80) {
	__imp__sub_82D4FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82D4FCDC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r8,r8,0,1,8
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d4fd10
	if (cr6.eq) goto loc_82D4FD10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82d4fcdc
	if (cr6.lt) goto loc_82D4FCDC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D4FD10:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FCD0) {
	__imp__sub_82D4FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4fc80
	sub_82D4FC80(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4fd74
	if (cr6.eq) goto loc_82D4FD74;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// blt cr6,0x82d4fd78
	if (cr6.lt) goto loc_82D4FD78;
loc_82D4FD74:
	// li r11,0
	r11.s64 = 0;
loc_82D4FD78:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FD20) {
	__imp__sub_82D4FD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4fcd0
	sub_82D4FCD0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d4fde4
	if (cr6.eq) goto loc_82D4FDE4;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vmsum4fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// blt cr6,0x82d4fde8
	if (cr6.lt) goto loc_82D4FDE8;
loc_82D4FDE4:
	// li r11,0
	r11.s64 = 0;
loc_82D4FDE8:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FD90) {
	__imp__sub_82D4FD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v9,v0,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,1
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// li r9,48
	ctx.r9.s64 = 48;
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v12,r4,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v8,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FE00) {
	__imp__sub_82D4FE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16896
	r11.s64 = r11.s64 + 16896;
	// vsubfp v0,v0,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v11,r4,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v11,v0
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v10,v10,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v13,v11,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v11.u32)));
	// vmrghw v0,v0,v10
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v10.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FE48) {
	__imp__sub_82D4FE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v10,v0,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v12,r4,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v9,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FE98) {
	__imp__sub_82D4FE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,16896
	r11.s64 = r11.s64 + 16896;
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v10,v10,v0
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmrghw v13,v11,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v11.u32)));
	// vmrghw v0,v0,v10
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v10.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FED0) {
	__imp__sub_82D4FED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v10,v0,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// lvx128 v12,r4,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v9,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FF18) {
	__imp__sub_82D4FF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,17024
	ctx.r10.s64 = ctx.r10.s64 + 17024;
	// lvx128 v13,r4,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vpermwi128 v7,v0,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmsum3fp128 v8,v0,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v10,v13,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v9,v13,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v10,v7,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v9,v6,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v8,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FF50) {
	__imp__sub_82D4FF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D4FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r10,r10,17024
	ctx.r10.s64 = ctx.r10.s64 + 17024;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vpermwi128 v7,v0,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r11,r11,16912
	r11.s64 = r11.s64 + 16912;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// li r10,32
	ctx.r10.s64 = 32;
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmsum3fp128 v8,v0,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v10,v13,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v10,v10,v7
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v9,v9,v6
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v8,v8,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v8,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v11,v0,v0
	simd::store_i8(ctx.v11.u8, simd::load_i8(ctx.v0.u8));
	// vrefp v0,v0
	simd::store_f32(ctx.v0.f32, simd::reciprocal_f32(simd::load_f32(ctx.v0.f32)));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v12,v0,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// vmaddfp v0,v12,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D4FFC8) {
	__imp__sub_82D4FFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82D50068:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne cr6,0x82d50068
	if (!cr6.eq) goto loc_82D50068;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + -4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50058) {
	__imp__sub_82D50058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D500A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82D500B8:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne cr6,0x82d500b8
	if (!cr6.eq) goto loc_82D500B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D500A8) {
	__imp__sub_82D500A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D500F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82D50104:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r8,r8,0,1,8
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d50138
	if (cr6.eq) goto loc_82D50138;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x82d50104
	if (cr6.lt) goto loc_82D50104;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D50138:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D500F8) {
	__imp__sub_82D500F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82d58f18
	sub_82D58F18(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d501e0
	if (cr6.eq) goto loc_82D501E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// vspltisw v12,-1
	simd::store_i32(ctx.v12.u32, simd::set1_i32(int32_t(0xFFFFFFFF)));
	// addi r11,r11,5280
	r11.s64 = r11.s64 + 5280;
	// li r9,224
	ctx.r9.s64 = 224;
	// lvx128 v11,r30,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lvx128 v10,r31,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// addi r11,r11,29520
	r11.s64 = r11.s64 + 29520;
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vand v0,v11,v0
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vcmpgefp v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::cmpge_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vor v0,v0,v13
	simd::store_i8(ctx.v0.u8, simd::or_i8(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v13.u8)));
	// vcmpequw. v0,v0,v12
	simd::store_u32(ctx.v0.u32, simd::cmpeq_i32(simd::load_u32(ctx.v0.u32), simd::load_u32(ctx.v12.u32)));
	cr6.setFromMask(simd::load_f32_aligned(ctx.v0.f32), 0xF);
	// mfocrf r11,2
	r11.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r11,r11,0,24,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d501e4
	if (!cr6.eq) goto loc_82D501E4;
loc_82D501E0:
	// li r11,0
	r11.s64 = 0;
loc_82D501E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D50148) {
	__imp__sub_82D50148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D501F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82d58e28
	sub_82D58E28(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v12,r30,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vxor v0,v12,v0
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v12.u8), simd::load_u8(ctx.v0.u8)));
	// lvx128 v11,r31,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvx128 v12,r31,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v13,v13,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v13,v12,v9,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
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

PPC_WEAK_FUNC(sub_82D501F8) {
	__imp__sub_82D501F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r5,48
	r11.s64 = ctx.r5.s64 + 48;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v12,r4,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
loc_82D50298:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltw v10,v0,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v9,v0,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 2));
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vspltw v0,v0,2
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 1));
	// vmulfp128 v10,v13,v10
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v10,v12,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v11,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bge cr6,0x82d50298
	if (!cr6.lt) goto loc_82D50298;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50278) {
	__imp__sub_82D50278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D502E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,16896
	ctx.r9.s64 = ctx.r9.s64 + 16896;
loc_82D50310:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v0
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vmsum3fp128 v0,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmrghw v13,v9,v13
	simd::store_i32(ctx.v13.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v8.u32), simd::load_i32(ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simd::store_i32(ctx.v0.u32, simd::unpackhi_i32(simd::load_i32(ctx.v13.u32), simd::load_i32(ctx.v0.u32)));
	// stvx128 v0,r8,r11
	ea = (ctx.r8.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bge cr6,0x82d50310
	if (!cr6.lt) goto loc_82D50310;
	// li r11,48
	r11.s64 = 48;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r4,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r5,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v9,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)));
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
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D502E8) {
	__imp__sub_82D502E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r3,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r3,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d50278
	sub_82D50278(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50388) {
	__imp__sub_82D50388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D503F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d501f8
	sub_82D501F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d50278
	sub_82D50278(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_82D503F0) {
	__imp__sub_82D503F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,15929
	r11.s64 = 1043922944;
	// ori r9,r11,45459
	ctx.r9.u64 = r11.u64 | 45459;
	// lwz r11,28000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28000) );
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// subfic r11,r11,12345
	xer.ca = r11.u32 <= 12345;
	r11.s64 = 12345 - r11.s64;
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// stw r11,28000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28000, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,27940(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27940);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50440) {
	__imp__sub_82D50440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r7,-128
	ctx.r7.s64 = -8388608;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r11,r9,9,24,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r8,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r8.s64 = 23 - r11.s64;
	// srawi r5,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// srawi r4,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// not r10,r5
	ctx.r10.u64 = ~ctx.r5.u64;
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// andi. r5,r10,23
	ctx.r5.u64 = ctx.r10.u64 & 23;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// sraw r8,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r8.s64 = ctx.r7.s32 >> temp.u32;
	// orc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ~ctx.r10.u64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// srawi r7,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 31;
	// sraw r6,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// andc r11,r9,r10
	r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r6,r11
	r11.u64 = ctx.r6.u64 & ~r11.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// andc r11,r11,r7
	r11.u64 = r11.u64 & ~ctx.r7.u64;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// andis. r8,r6,49024
	ctx.r8.u64 = ctx.r6.u64 & 3212836864;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfs f1,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50480) {
	__imp__sub_82D50480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r4,-128
	ctx.r4.s64 = -8388608;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r11,r9,9,24,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-23
	ctx.r8.s64 = r11.s64 + -23;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r10,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// subfic r6,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r6.s64 = 23 - r11.s64;
	// srawi r7,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// not r6,r10
	ctx.r6.u64 = ~ctx.r10.u64;
	// andi. r5,r10,23
	ctx.r5.u64 = ctx.r10.u64 & 23;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r10,r7,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// sraw r4,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r4.s64 = ctx.r4.s32 >> temp.u32;
	// srawi r10,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r8,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 31;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// and r31,r8,r10
	r31.u64 = ctx.r8.u64 & ctx.r10.u64;
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// sraw r3,r3,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// or r4,r31,r11
	ctx.r4.u64 = r31.u64 | r11.u64;
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// rlwimi r11,r4,0,8,8
	r11.u64 = (rotl32(ctx.r4.u32, 0) & 0x800000) | (r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sraw r11,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r11.s64 = r11.s32 >> temp.u32;
	// slw r3,r11,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r5.u8 & 0x3F));
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50508) {
	__imp__sub_82D50508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D505C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r5,-128
	ctx.r5.s64 = -8388608;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// rlwinm r11,r9,9,24,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-23
	ctx.r8.s64 = r11.s64 + -23;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r10,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// subfic r6,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r6.s64 = 23 - r11.s64;
	// srawi r7,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// not r6,r10
	ctx.r6.u64 = ~ctx.r10.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r3,r4,23,0,8
	ctx.r3.u64 = (rotl32(ctx.r4.u32, 23) & 0xFF800000) | (ctx.r3.u64 & 0xFFFFFFFF007FFFFF);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// and r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 & ctx.r8.u64;
	// sraw r8,r5,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r8.s64 = ctx.r5.s32 >> temp.u32;
	// srawi r9,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// srawi r6,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 31;
	// and r11,r3,r8
	r11.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// andc r11,r11,r6
	r11.u64 = r11.u64 & ~ctx.r6.u64;
	// sraw r11,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r11.s64 = r11.s32 >> temp.u32;
	// slw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D505C0) {
	__imp__sub_82D505C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50650) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,3120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3120);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d50694
	if (cr6.gt) goto loc_82D50694;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,14804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14804);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f11,14800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14800);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f0,f13,f12,f0
	f0.f64 = -double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), -float(f0.f64)));
	// fnmsubs f0,f10,f11,f0
	f0.f64 = -double(std::fma(float(ctx.f10.f64), float(ctx.f11.f64), -float(f0.f64)));
	// b 0x82d506c4
	goto loc_82D506C4;
loc_82D50694:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f12,14804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14804);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f11,14800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14800);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f0,f13,f12,f0
	f0.f64 = -double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), -float(f0.f64)));
	// fnmsubs f13,f10,f11,f0
	ctx.f13.f64 = -double(std::fma(float(ctx.f10.f64), float(ctx.f11.f64), -float(f0.f64)));
	// lfs f0,26876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26876);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
loc_82D506C4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bge cr6,0x82d506e0
	if (!cr6.lt) goto loc_82D506E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
loc_82D506E0:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82d506f0
	if (!cr6.lt) goto loc_82D506F0;
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82D506F0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50650) {
	__imp__sub_82D50650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D506F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D506F8) {
	__imp__sub_82D506F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50780) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82d4fcd0
	sub_82D4FCD0(ctx, base);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82d507dc
	if (cr6.lt) goto loc_82D507DC;
	// li r11,0
	r11.s64 = 0;
loc_82D507DC:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d507f8
	if (cr6.eq) goto loc_82D507F8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82d507fc
	if (!cr6.eq) goto loc_82D507FC;
loc_82D507F8:
	// li r11,0
	r11.s64 = 0;
loc_82D507FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82D50780) {
	__imp__sub_82D50780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50820) {
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
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82d508bc
	if (!cr6.gt) goto loc_82D508BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - ctx.f13.f64);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f0,-56(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c38
	return;
loc_82D508BC:
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, r11.u32);
	// ble cr6,0x82d508e0
	if (!cr6.gt) goto loc_82D508E0;
	// li r11,1
	r11.s64 = 1;
loc_82D508E0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x82d508fc
	if (!cr6.gt) goto loc_82D508FC;
	// li r11,2
	r11.s64 = 2;
loc_82D508FC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lfsx f12,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r28,r28,2,0,29
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r28,r4
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfsx f8,r11,r4
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfsx f9,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f12,f9
	ctx.f9.f64 = static_cast<float>(ctx.f12.f64 - ctx.f9.f64);
	// fsubs f13,f0,f13
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfsx f13,r7,r30
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + r30.u32, temp.u32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfsx f0,r6,r29
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r29.u32, temp.u32);
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D50820) {
	__imp__sub_82D50820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d50820
	sub_82D50820(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D50A00) {
	__imp__sub_82D50A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50A08) {
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
	// bl 0x82d50820
	sub_82D50820(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
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
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50A08) {
	__imp__sub_82D50A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50A68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
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
	// bl 0x82ca2bec
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7508
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v12,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f28,f30
	f28.f64 = f30.f64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82d50acc
	if (!cr6.lt) goto loc_82D50ACC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fneg f31,f31
	f31.u64 = f31.u64 ^ 0x8000000000000000;
	// lfs f28,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f28.f64 = double(temp.f32);
loc_82D50ACC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2796);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82d50b50
	if (!cr6.lt) goto loc_82D50B50;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8268a7e0
	sub_8268A7E0(ctx, base);
	// fnmsubs f0,f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = -double(std::fma(float(f31.f64), float(f31.f64), -float(f30.f64)));
	// fmuls f31,f1,f29
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f29,f30,f0
	f29.f64 = double(float(f30.f64 / f0.f64));
	// fsubs f1,f1,f31
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - f31.f64);
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// b 0x82d50b80
	goto loc_82D50B80;
loc_82D50B50:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fsubs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f30.f64 - f29.f64);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f28,f29
	f0.f64 = double(float(f28.f64 * f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// lvlx v11,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v11,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
loc_82D50B80:
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f30,f0
	f0.f64 = double(float(f30.f64 / f0.f64));
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
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D50A68) {
	__imp__sub_82D50A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50BC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d50bf8
	if (!cr6.lt) goto loc_82D50BF8;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D50BF8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d50c04
	if (!cr6.lt) goto loc_82D50C04;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D50C04:
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f13,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D50BC0) {
	__imp__sub_82D50BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50CA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v127{};
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
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,17024
	r11.s64 = r11.s64 + 17024;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v8,v6,v7
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v11,v13,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vsubfp v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v0,v10,v0,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v9,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp128 v127,v0,v0
	simd::store_f32_aligned(v127.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v0,v13,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(v127.f32), 0xEF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f13,f1,f31
	ctx.f13.f64 = static_cast<float>(ctx.f1.f64 - f31.f64);
	// lfs f0,2644(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2644);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82d50d58
	if (!cr6.gt) goto loc_82D50D58;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,16976
	r11.s64 = r11.s64 + 16976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82d50e60
	goto loc_82D50E60;
loc_82D50D58:
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d50df4
	if (!cr6.lt) goto loc_82D50DF4;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// li r11,1
	r11.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82d50da4
	if (!cr6.lt) goto loc_82D50DA4;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82D50DA4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82d50db0
	if (!cr6.lt) goto loc_82D50DB0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82D50DB0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vxor v0,v0,v0
	simd::store_u8(ctx.v0.u8, simd::zero_i128());
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f13,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,2876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2876);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfsx f13,r11,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r10,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// b 0x82d50e54
	goto loc_82D50E54;
loc_82D50DF4:
	// bl 0x8268a7e0
	sub_8268A7E0(ctx, base);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v0,v0,99
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v13,v127,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x9C));
	// vpermwi128 v12,v127,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(v127.u32), 0x78));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
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
loc_82D50E54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d506f8
	sub_82D506F8(ctx, base);
loc_82D50E60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
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

PPC_WEAK_FUNC(sub_82D50CA0) {
	__imp__sub_82D50CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D50E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d50ca0
	sub_82D50CA0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lvx128 v12,r0,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vxor v13,v12,v13
	simd::store_u8(ctx.v13.u8, simd::xor_i8(simd::load_u8(ctx.v12.u8), simd::load_u8(ctx.v13.u8)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// stvewx v10,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// vpermwi128 v10,v13,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmulfp128 v10,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v9,v7,v8
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v0,v12,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v13,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82d50f78
	if (cr6.lt) goto loc_82D50F78;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82d50f6c
	if (!cr6.gt) goto loc_82D50F6C;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// b 0x82d50f80
	goto loc_82D50F80;
loc_82D50F6C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2876);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d50f80
	goto loc_82D50F80;
loc_82D50F78:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82D50F80:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// vmsum3fp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r11,1
	r11.s64 = 1;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vmulfp128 v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lvlx v0,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvewx v0,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82d50fe8
	if (cr6.lt) goto loc_82D50FE8;
	// li r11,0
	r11.s64 = 0;
loc_82D50FE8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d50ffc
	if (cr6.eq) goto loc_82D50FFC;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
loc_82D50FFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D50E88) {
	__imp__sub_82D50E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,-36(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f13,-20(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(f0.f64 * ctx.f8.f64));
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,-24(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = static_cast<float>(f0.f64 - ctx.f10.f64);
	// stfs f7,-40(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f0,f12,f8
	f0.f64 = static_cast<float>(ctx.f12.f64 - ctx.f8.f64);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fsubs f13,f5,f13
	ctx.f13.f64 = static_cast<float>(ctx.f5.f64 - ctx.f13.f64);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fsubs f13,f0,f6
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f6.f64);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f7,-44(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// fsubs f13,f0,f9
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f9.f64);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fsubs f0,f0,f11
	f0.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stvx128 v13,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51008) {
	__imp__sub_82D51008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D510F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d506f8
	sub_82D506F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
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

PPC_WEAK_FUNC(sub_82D510F0) {
	__imp__sub_82D510F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51130) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x82d51168
	if (!cr6.gt) goto loc_82D51168;
loc_82D5115C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D51168:
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v13,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x82d5115c
	if (cr6.gt) goto loc_82D5115C;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r9
	PPC_STORE_U32((ctx.r9.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r9.u32) & 0xF) >> 2));
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x82d5115c
	if (cr6.gt) goto loc_82D5115C;
	// vpermwi128 v9,v0,135
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v0,99
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// li r9,224
	ctx.r9.s64 = 224;
	// addi r11,r11,5280
	r11.s64 = r11.s64 + 5280;
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vspltisw v10,-1
	simd::store_i32(ctx.v10.u32, simd::set1_i32(int32_t(0xFFFFFFFF)));
	// vmulfp128 v9,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v0,v8,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,29520
	r11.s64 = r11.s64 + 29520;
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v7,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v7.u32), 3));
	// vsubfp v0,v0,v11
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vand v0,v0,v13
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(ctx.v0.u8), simd::load_u8(ctx.v13.u8)));
	// vcmpgefp v0,v7,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::cmpge_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vor v0,v0,v12
	simd::store_i8(ctx.v0.u8, simd::or_i8(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v12.u8)));
	// vcmpequw. v0,v0,v10
	simd::store_u32(ctx.v0.u32, simd::cmpeq_i32(simd::load_u32(ctx.v0.u32), simd::load_u32(ctx.v10.u32)));
	cr6.setFromMask(simd::load_f32_aligned(ctx.v0.f32), 0xF);
	// mfocrf r11,2
	r11.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r11,r11,25,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51130) {
	__imp__sub_82D51130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d50a08
	sub_82D50A08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
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

PPC_WEAK_FUNC(sub_82D51230) {
	__imp__sub_82D51230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51270) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// mullw r4,r27,r30
	ctx.r4.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mullw r5,r11,r30
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d512dc
	if (!cr6.eq) goto loc_82D512DC;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// mullw r5,r11,r30
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D512DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D51270) {
	__imp__sub_82D51270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D512F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r26,r11,1,0,30
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82d51320
	if (!cr6.eq) goto loc_82D51320;
	// li r26,1
	r26.s64 = 1;
loc_82D51320:
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// mullw r4,r26,r30
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mullw r5,r11,r30
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d51374
	if (!cr6.eq) goto loc_82D51374;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// mullw r5,r11,r30
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D51374:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D512F8) {
	__imp__sub_82D512F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51390) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d513cc
	if (cr6.eq) goto loc_82D513CC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82d513cc
	if (!cr6.lt) goto loc_82D513CC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// b 0x82d513e8
	goto loc_82D513E8;
loc_82D513CC:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// mullw r4,r29,r28
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82D513E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D51390) {
	__imp__sub_82D51390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51440) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82d54118
	sub_82D54118(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r10,r10,17044
	ctx.r10.s64 = ctx.r10.s64 + 17044;
	// addi r3,r11,-32
	ctx.r3.s64 = r11.s64 + -32;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d514a0
	if (cr6.eq) goto loc_82D514A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r29,-32
	ctx.r5.s64 = r29.s64 + -32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d59840
	sub_82D59840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82d514a4
	goto loc_82D514A4;
loc_82D514A0:
	// li r11,0
	r11.s64 = 0;
loc_82D514A4:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d514c4
	if (cr6.eq) goto loc_82D514C4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
loc_82D514C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D51440) {
	__imp__sub_82D51440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D514D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17308
	ctx.r4.s64 = r11.s64 + 17308;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// extsh r22,r10
	r22.s64 = ctx.r10.s16;
	// addi r29,r11,17252
	r29.s64 = r11.s64 + 17252;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,17224
	r28.s64 = r11.s64 + 17224;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r11,17172
	r27.s64 = r11.s64 + 17172;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r26,r11,17116
	r26.s64 = r11.s64 + 17116;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r25,r11,17112
	r25.s64 = r11.s64 + 17112;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r24,r11,17104
	r24.s64 = r11.s64 + 17104;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r23,r11,17084
	r23.s64 = r11.s64 + 17084;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82d53b30
	sub_82D53B30(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82d53da8
	sub_82D53DA8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,11366
	ctx.r5.s64 = 744882176;
	// li r8,30
	ctx.r8.s64 = 30;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,62168
	ctx.r5.u64 = ctx.r5.u64 | 62168;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r7,r11,17056
	ctx.r7.s64 = r11.s64 + 17056;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D514D0) {
	__imp__sub_82D514D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D515D8) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51440
	sub_82D51440(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r5,9782
	ctx.r5.s64 = 641073152;
	// li r8,37
	ctx.r8.s64 = 37;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,65061
	ctx.r5.u64 = ctx.r5.u64 | 65061;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29792) );
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r7,r11,17056
	ctx.r7.s64 = r11.s64 + 17056;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D515D8) {
	__imp__sub_82D515D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51658) {
	__imp__sub_82D51658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51678) {
	__imp__sub_82D51678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51698) {
	PPC_FUNC_PROLOGUE();
	// b 0x82caacc0
	sub_82CAACC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51698) {
	__imp__sub_82D51698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D516A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82caacc0
	sub_82CAACC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D516A0) {
	__imp__sub_82D516A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D516E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x821c68c0
	sub_821C68C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D516E8) {
	__imp__sub_82D516E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D51734:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// subf r3,r9,r11
	ctx.r3.s64 = r11.s64 - ctx.r9.s64;
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d51734
	if (cr6.eq) goto loc_82D51734;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51730) {
	__imp__sub_82D51730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51760) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3920
	sub_82CA3920(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51760) {
	__imp__sub_82D51760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82D5176C:
	// lbzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d51784
	if (!cr6.eq) goto loc_82D51784;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d51838
	if (cr6.eq) goto loc_82D51838;
loc_82D51784:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d517a4
	if (cr6.lt) goto loc_82D517A4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d517a4
	if (cr6.gt) goto loc_82D517A4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x82d517a8
	goto loc_82D517A8;
loc_82D517A4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82D517A8:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d517cc
	if (cr6.lt) goto loc_82D517CC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d517cc
	if (cr6.gt) goto loc_82D517CC;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d517d0
	goto loc_82D517D0;
loc_82D517CC:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D517D0:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82d51840
	if (cr6.lt) goto loc_82D51840;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d517fc
	if (cr6.lt) goto loc_82D517FC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d517fc
	if (cr6.gt) goto loc_82D517FC;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_82D517FC:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d5181c
	if (cr6.lt) goto loc_82D5181C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d5181c
	if (cr6.gt) goto loc_82D5181C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d51820
	goto loc_82D51820;
loc_82D5181C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D51820:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x82d51848
	if (cr6.gt) goto loc_82D51848;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82d5176c
	goto loc_82D5176C;
loc_82D51838:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D51840:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82D51848:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51768) {
	__imp__sub_82D51768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82D5185C:
	// lbzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d51874
	if (!cr6.eq) goto loc_82D51874;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d51944
	if (cr6.eq) goto loc_82D51944;
loc_82D51874:
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x82d51944
	if (!cr6.lt) goto loc_82D51944;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d5189c
	if (cr6.lt) goto loc_82D5189C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d5189c
	if (cr6.gt) goto loc_82D5189C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x82d518a0
	goto loc_82D518A0;
loc_82D5189C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82D518A0:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d518c4
	if (cr6.lt) goto loc_82D518C4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d518c4
	if (cr6.gt) goto loc_82D518C4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d518c8
	goto loc_82D518C8;
loc_82D518C4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D518C8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82d51934
	if (cr6.lt) goto loc_82D51934;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d518f4
	if (cr6.lt) goto loc_82D518F4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d518f4
	if (cr6.gt) goto loc_82D518F4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_82D518F4:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d51914
	if (cr6.lt) goto loc_82D51914;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d51914
	if (cr6.gt) goto loc_82D51914;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82d51918
	goto loc_82D51918;
loc_82D51914:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82D51918:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x82d5193c
	if (cr6.gt) goto loc_82D5193C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82d5185c
	goto loc_82D5185C;
loc_82D51934:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82D5193C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D51944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51850) {
	__imp__sub_82D51850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82D51954:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stbx r11,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x82d51954
	if (!cr6.eq) goto loc_82D51954;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51950) {
	__imp__sub_82D51950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822cd828
	sub_822CD828(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51970) {
	__imp__sub_82D51970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D5197C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D5197C) {
	__imp__sub_82D5197C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82D51984:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d51984
	if (!cr6.eq) goto loc_82D51984;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51980) {
	__imp__sub_82D51980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca6300
	sub_82CA6300(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D519A8) {
	__imp__sub_82D519A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca99c0
	sub_82CA99C0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D519B8) {
	__imp__sub_82D519B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e6388
	sub_821E6388(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D519E0) {
	__imp__sub_82D519E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3980
	sub_82CA3980(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D519E8) {
	__imp__sub_82D519E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca70c0
	sub_82CA70C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D519F0) {
	__imp__sub_82D519F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D519F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D51A08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82d51a28
	if (cr6.lt) goto loc_82D51A28;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82d51a28
	if (cr6.gt) goto loc_82D51A28;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
loc_82D51A28:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d51a08
	if (!cr6.eq) goto loc_82D51A08;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D519F8) {
	__imp__sub_82D519F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D51A50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82d51a70
	if (cr6.lt) goto loc_82D51A70;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82d51a70
	if (cr6.gt) goto loc_82D51A70;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
loc_82D51A70:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d51a50
	if (!cr6.eq) goto loc_82D51A50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51A40) {
	__imp__sub_82D51A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51A88) {
	__imp__sub_82D51A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51A90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51A90) {
	__imp__sub_82D51A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D51A98) {
	__imp__sub_82D51A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
loc_82D51AB8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82d51ab8
	if (!cr6.eq) goto loc_82D51AB8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51AA0) {
	__imp__sub_82D51AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51AE0) {
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
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82D51AFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d51afc
	if (!cr6.eq) goto loc_82D51AFC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r5,21
	ctx.r5.s64 = 21;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d4ee58
	sub_82D4EE58(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - r31.s64;
loc_82D51B38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x82d51b38
	if (!cr6.eq) goto loc_82D51B38;
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

PPC_WEAK_FUNC(sub_82D51AE0) {
	__imp__sub_82D51AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51B60) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82D51B78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d51b78
	if (!cr6.eq) goto loc_82D51B78;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = rotl32(r11.u32, 0);
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// ble cr6,0x82d51ba0
	if (!cr6.gt) goto loc_82D51BA0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82D51BA0:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ee58
	sub_82D4EE58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82d51bd0
	if (cr6.eq) goto loc_82D51BD0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822cd828
	sub_822CD828(ctx, base);
loc_82D51BD0:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D51B60) {
	__imp__sub_82D51B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51BE8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bge cr6,0x82d51c4c
	if (!cr6.lt) goto loc_82D51C4C;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bge cr6,0x82d51c4c
	if (!cr6.lt) goto loc_82D51C4C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bgt cr6,0x82d51c3c
	if (cr6.gt) goto loc_82D51C3C;
	// li r11,256
	r11.s64 = 256;
loc_82D51C3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D51C4C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82D51C5C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi r31,r11,2
	r31.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82caacc0
	sub_82CAACC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d51cc4
	if (cr6.lt) goto loc_82D51CC4;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// blt cr6,0x82d51d10
	if (cr6.lt) goto loc_82D51D10;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d51cbc
	if (!cr6.lt) goto loc_82D51CBC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d51cac
	if (cr6.lt) goto loc_82D51CAC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D51CAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D51CBC:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x82d51c5c
	goto loc_82D51C5C;
loc_82D51CC4:
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bgt cr6,0x82d51cd4
	if (cr6.gt) goto loc_82D51CD4;
	// li r11,255
	r11.s64 = 255;
loc_82D51CD4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d51cbc
	if (!cr6.lt) goto loc_82D51CBC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d51cac
	if (cr6.lt) goto loc_82D51CAC;
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x82d51c5c
	goto loc_82D51C5C;
loc_82D51D10:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// stw r6,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// bgt cr6,0x82d51d38
	if (cr6.gt) goto loc_82D51D38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51390
	sub_82D51390(ctx, base);
loc_82D51D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D51BE8) {
	__imp__sub_82D51BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d51d80
	if (!cr6.lt) goto loc_82D51D80;
loc_82D51D54:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x82d51d80
	if (!cr6.lt) goto loc_82D51D80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d51d88
	if (cr6.eq) goto loc_82D51D88;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d51d54
	if (cr6.lt) goto loc_82D51D54;
loc_82D51D80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82D51D88:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51D40) {
	__imp__sub_82D51D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x82d51da4
	if (!cr6.gt) goto loc_82D51DA4;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82D51DA4:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82d51dd4
	if (cr6.lt) goto loc_82D51DD4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_82D51DB8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82d51ddc
	if (cr6.eq) goto loc_82D51DDC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x82d51db8
	if (!cr6.lt) goto loc_82D51DB8;
loc_82D51DD4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82D51DDC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51D90) {
	__imp__sub_82D51D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51DE8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82d51e44
	if (!cr6.lt) goto loc_82D51E44;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82d51e34
	if (cr6.lt) goto loc_82D51E34;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82D51E34:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D51E44:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r27,1
	ctx.r5.s64 = r27.s64 + 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D51DE8) {
	__imp__sub_82D51DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51E68) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82D51E8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d51e8c
	if (!cr6.eq) goto loc_82D51E8C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// rotlwi r29,r9,0
	r29.u64 = rotl32(ctx.r9.u32, 0);
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82d51ee0
	if (!cr6.lt) goto loc_82D51EE0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82d51ed0
	if (cr6.lt) goto loc_82D51ED0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82D51ED0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D51EE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D51E68) {
	__imp__sub_82D51E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d51f4c
	if (cr6.eq) goto loc_82D51F4C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82D51F20:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d51f58
	if (!cr6.lt) goto loc_82D51F58;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d51f58
	if (!cr6.eq) goto loc_82D51F58;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d51f20
	if (!cr6.eq) goto loc_82D51F20;
loc_82D51F4C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D51F58:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51F08) {
	__imp__sub_82D51F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82d51f8c
	if (!cr6.lt) goto loc_82D51F8C;
loc_82D51F80:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D51F8C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82d51fc4
	if (!cr6.gt) goto loc_82D51FC4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82D51FA8:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d51f80
	if (!cr6.eq) goto loc_82D51F80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d51fa8
	if (cr6.lt) goto loc_82D51FA8;
loc_82D51FC4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51F68) {
	__imp__sub_82D51F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D51FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82D51FDC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d51fdc
	if (!cr6.eq) goto loc_82D51FDC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82d52018
	if (!cr6.lt) goto loc_82D52018;
loc_82D5200C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82D52018:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d52058
	if (cr6.eq) goto loc_82D52058;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
loc_82D52030:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x82d5200c
	if (!cr6.eq) goto loc_82D5200C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d52030
	if (!cr6.eq) goto loc_82D52030;
loc_82D52058:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D51FD0) {
	__imp__sub_82D51FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52068) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// addi r25,r10,-1
	r25.s64 = ctx.r10.s64 + -1;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r25,r30
	r11.u64 = r25.u64 + r30.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r5,r25,1
	ctx.r5.s64 = r25.s64 + 1;
	// add r3,r28,r30
	ctx.r3.u64 = r28.u64 + r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D52068) {
	__imp__sub_82D52068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D520E8) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82D52110:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d52110
	if (!cr6.eq) goto loc_82D52110;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r5,21
	ctx.r5.s64 = 21;
	// rotlwi r27,r11,0
	r27.u64 = rotl32(r11.u32, 0);
	// add r11,r27,r28
	r11.u64 = r27.u64 + r28.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r5,r27,1
	ctx.r5.s64 = r27.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r29,r28
	ctx.r3.u64 = r29.u64 + r28.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82D520E8) {
	__imp__sub_82D520E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble 0x82d52214
	if (!cr0.gt) goto loc_82D52214;
loc_82D521D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x82d521f8
	if (cr6.lt) goto loc_82D521F8;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x82d521f8
	if (cr6.gt) goto loc_82D521F8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x82d521fc
	goto loc_82D521FC;
loc_82D521F8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D521FC:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d521d0
	if (cr6.lt) goto loc_82D521D0;
loc_82D52214:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82D52188) {
	__imp__sub_82D52188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble 0x82d522dc
	if (!cr0.gt) goto loc_82D522DC;
loc_82D52298:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82d522c0
	if (cr6.lt) goto loc_82D522C0;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82d522c0
	if (cr6.gt) goto loc_82D522C0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x82d522c4
	goto loc_82D522C4;
loc_82D522C0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D522C4:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d52298
	if (cr6.lt) goto loc_82D52298;
loc_82D522DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82D52250) {
	__imp__sub_82D52250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82d523a4
	if (!cr0.gt) goto loc_82D523A4;
	// extsb r9,r28
	ctx.r9.s64 = r28.s8;
loc_82D52374:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82d52390
	if (!cr6.eq) goto loc_82D52390;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stbx r27,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r27.u8);
	// beq cr6,0x82d523a4
	if (cr6.eq) goto loc_82D523A4;
loc_82D52390:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d52374
	if (cr6.lt) goto loc_82D52374;
loc_82D523A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D52318) {
	__imp__sub_82D52318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D523D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r16,0(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r17,4
	r17.s64 = 4;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwzx r3,r17,r16
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r16.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r27.u8);
	// lwz r23,0(r25)
	r23.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// lwz r19,0(r22)
	r19.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x821e6388
	sub_821E6388(ctx, base);
	// lis r18,-32768
	r18.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d52620
	if (cr6.eq) goto loc_82D52620;
loc_82D52444:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// subf r10,r23,r3
	ctx.r10.s64 = ctx.r3.s64 - r23.s64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// subf r26,r28,r10
	r26.s64 = ctx.r10.s64 - r28.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// ble cr6,0x82d52468
	if (!cr6.gt) goto loc_82D52468;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82D52468:
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// lwz r29,0(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// ble cr6,0x82d5249c
	if (!cr6.gt) goto loc_82D5249C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// blt cr6,0x82d52490
	if (cr6.lt) goto loc_82D52490;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82D52490:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D5249C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// stbx r27,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r27.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d52500
	if (!cr6.lt) goto loc_82D52500;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d524f0
	if (cr6.lt) goto loc_82D524F0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D524F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D52500:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d5253c
	if (!cr6.eq) goto loc_82D5253C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r17,r16
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r16.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D5253C:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d52584
	if (!cr6.lt) goto loc_82D52584;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d52574
	if (cr6.lt) goto loc_82D52574;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D52574:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D52584:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// beq cr6,0x82d525c8
	if (cr6.eq) goto loc_82D525C8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// add r3,r23,r28
	ctx.r3.u64 = r23.u64 + r28.u64;
	// bl 0x821e6388
	sub_821E6388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d52444
	if (!cr6.eq) goto loc_82D52444;
loc_82D525C8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82d52620
	if (cr6.eq) goto loc_82D52620;
	// add r4,r23,r28
	ctx.r4.u64 = r23.u64 + r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51e68
	sub_82D51E68(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r27,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r27.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r18,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r18.u32);
	// ble cr6,0x82d52614
	if (!cr6.gt) goto loc_82D52614;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// blt cr6,0x82d52604
	if (cr6.lt) goto loc_82D52604;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_82D52604:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82D52614:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r31,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r31.u32);
	// b 0x82d5265c
	goto loc_82D5265C;
loc_82D52620:
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
	// stw r27,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r27.u32);
	// stw r18,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r18.u32);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82d52650
	if (!cr6.gt) goto loc_82D52650;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// blt cr6,0x82d52644
	if (cr6.lt) goto loc_82D52644;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82D52644:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D52650:
	// stw r31,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r31.u32);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
loc_82D5265C:
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d52688
	if (!cr6.eq) goto loc_82D52688;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r17,r16
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r16.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D52688:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c08
	return;
}

PPC_WEAK_FUNC(sub_82D523D0) {
	__imp__sub_82D523D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D52698) {
	__imp__sub_82D52698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D526A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d4e678
	sub_82D4E678(ctx, base);
	// bl 0x82d5a148
	sub_82D5A148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D526A0) {
	__imp__sub_82D526A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D526C8) {
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
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r11,8
	r11.s64 = 8;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82d59f90
	sub_82D59F90(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4e678
	sub_82D4E678(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82D526C8) {
	__imp__sub_82D526C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lbz r11,29800(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 29800);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D52720) {
	__imp__sub_82D52720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,17372
	r11.s64 = r11.s64 + 17372;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D52730) {
	__imp__sub_82D52730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52780) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,29996
	r30.s64 = r11.s64 + 29996;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d52870
	if (cr6.eq) goto loc_82D52870;
loc_82D527B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d527e0
	if (!cr6.eq) goto loc_82D527E0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d528a4
	if (cr6.eq) goto loc_82D528A4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82D527E0:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_82D527E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82d527b4
	if (!cr6.eq) goto loc_82D527B4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d52870
	if (cr6.eq) goto loc_82D52870;
loc_82D527FC:
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82d52864
	if (cr6.lt) goto loc_82D52864;
	// rlwinm r29,r28,2,0,29
	r29.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D5280C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d52854
	if (cr6.eq) goto loc_82D52854;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
loc_82D52854:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x82d5280c
	if (!cr6.lt) goto loc_82D5280C;
loc_82D52864:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82d527fc
	if (!cr6.eq) goto loc_82D527FC;
loc_82D52870:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d5289c
	if (!cr6.eq) goto loc_82D5289C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D5289C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82D528A4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d528c4
	if (!cr6.eq) goto loc_82D528C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D528C4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82d527e8
	goto loc_82D527E8;
}

PPC_WEAK_FUNC(sub_82D52780) {
	__imp__sub_82D52780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D528F8) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r29,0
	r29.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// lwz r31,29996(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29996) );
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82d52978
	if (cr6.eq) goto loc_82D52978;
loc_82D52934:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82d52954
	if (!cr6.eq) goto loc_82D52954;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82D52954:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82d52934
	if (!cr6.eq) goto loc_82D52934;
loc_82D52978:
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82d529f0
	if (cr6.lt) goto loc_82D529F0;
	// rlwinm r31,r30,2,0,29
	r31.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D52988:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d529d0
	if (cr6.eq) goto loc_82D529D0;
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
	// bne cr6,0x82d529d0
	if (!cr6.eq) goto loc_82D529D0;
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
loc_82D529D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bge cr6,0x82d52988
	if (!cr6.lt) goto loc_82D52988;
loc_82D529F0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d52a1c
	if (!cr6.eq) goto loc_82D52A1C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D52A1C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D528F8) {
	__imp__sub_82D528F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52A28) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	r27.s64 = -2093809664;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,29800(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 29800);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d52af4
	if (!cr6.eq) goto loc_82D52AF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d52b30
	if (cr6.eq) goto loc_82D52B30;
	// bl 0x82d4e3d0
	sub_82D4E3D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82d52b00
	if (cr6.eq) goto loc_82D52B00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d4e678
	sub_82D4E678(ctx, base);
	// bl 0x82d5a148
	sub_82D5A148(ctx, base);
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r31,4
	r31.s64 = 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,17348
	r11.s64 = r11.s64 + 17348;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// bl 0x82d52c90
	sub_82D52C90(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,40
	r11.s64 = 40;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d52dd0
	sub_82D52DD0(ctx, base);
	// bl 0x825f2118
	sub_825F2118(ctx, base);
	// bl 0x82d52780
	sub_82D52780(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,29796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29796) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,29800(r27)
	PPC_STORE_U8(r27.u32 + 29800, r11.u8);
loc_82D52AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c34
	return;
loc_82D52B00:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17760
	ctx.r4.s64 = r11.s64 + 17760;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c34
	return;
loc_82D52B30:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17536
	ctx.r4.s64 = r11.s64 + 17536;
	// li r5,220
	ctx.r5.s64 = 220;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D52A28) {
	__imp__sub_82D52A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52B60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	r28.s64 = -2093809664;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lbz r11,29800(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 29800);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82d52c80
	if (!cr6.eq) goto loc_82D52C80;
	// bl 0x82d528f8
	sub_82D528F8(ctx, base);
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lbz r11,30004(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 30004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d52bbc
	if (cr6.eq) goto loc_82D52BBC;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r10,29932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29932) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d52bbc
	if (cr6.eq) goto loc_82D52BBC;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r11,30004(r31)
	PPC_STORE_U8(r31.u32 + 30004, r11.u8);
loc_82D52BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825f2118
	sub_825F2118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d52c90
	sub_82D52C90(ctx, base);
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r11,8
	r11.s64 = 8;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82d59f90
	sub_82D59F90(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4e678
	sub_82D4E678(ctx, base);
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lwz r3,29252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(29252) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d52c70
	if (cr6.eq) goto loc_82D52C70;
	// lwz r3,29252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(29252) );
	// li r29,1
	r29.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r11,128(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(128) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82d52c68
	if (cr6.gt) goto loc_82D52C68;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82D52C68:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d59bb0
	sub_82D59BB0(ctx, base);
loc_82D52C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4e3d0
	sub_82D4E3D0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r11,29800(r28)
	PPC_STORE_U8(r28.u32 + 29800, r11.u8);
loc_82D52C80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D52B60) {
	__imp__sub_82D52B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52C90) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,30000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(30000) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d52cf0
	if (cr6.eq) goto loc_82D52CF0;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d52cf0
	if (cr6.eq) goto loc_82D52CF0;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d52cf0
	if (!cr6.eq) goto loc_82D52CF0;
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
loc_82D52CF0:
	// stw r30,30000(r31)
	PPC_STORE_U32(r31.u32 + 30000, r30.u32);
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

PPC_WEAK_FUNC(sub_82D52C90) {
	__imp__sub_82D52C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52D10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_82D52D10) {
	__imp__sub_82D52D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D52D58) {
	__imp__sub_82D52D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52D70) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d52db8
	if (cr6.eq) goto loc_82D52DB8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D52DB8:
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

PPC_WEAK_FUNC(sub_82D52D70) {
	__imp__sub_82D52D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52DD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,17392
	r11.s64 = r11.s64 + 17392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// bl 0x82266f00
	sub_82266F00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D52DD0) {
	__imp__sub_82D52DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,22328
	ctx.r4.s64 = r11.s64 + 22328;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x82d516e8
	sub_82D516E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d59840
	sub_82D59840(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d54118
	sub_82D54118(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r25,r11,17464
	r25.s64 = r11.s64 + 17464;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r24,r11,17456
	r24.s64 = r11.s64 + 17456;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// addi r23,r11,22336
	r23.s64 = r11.s64 + 22336;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r22,r11,17448
	r22.s64 = r11.s64 + 17448;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82d53c20
	sub_82D53C20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82d53da8
	sub_82D53DA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82d53c70
	sub_82D53C70(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r11,r26
	r11.s64 = r26.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d52f84
	if (cr6.eq) goto loc_82D52F84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d5aa90
	sub_82D5AA90(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d5aa88
	sub_82D5AA88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// ble cr6,0x82d52f7c
	if (!cr6.gt) goto loc_82D52F7C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r3,r11,17428
	ctx.r3.s64 = r11.s64 + 17428;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r30,-2
	ctx.r5.s64 = r30.s64 + -2;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d5aa70
	sub_82D5AA70(ctx, base);
loc_82D52F7C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d5aaa8
	sub_82D5AAA8(ctx, base);
loc_82D52F84:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d59a58
	sub_82D59A58(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82D52E30) {
	__imp__sub_82D52E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d52fb4
	if (cr6.eq) goto loc_82D52FB4;
	// b 0x82d5a8f8
	sub_82D5A8F8(ctx, base);
	return;
loc_82D52FB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82265bc0
	sub_82265BC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D52FA0) {
	__imp__sub_82D52FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D52FC0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82d5a318
	sub_82D5A318(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82D52FC0) {
	__imp__sub_82D52FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53010) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82d5a210
	sub_82D5A210(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D53010) {
	__imp__sub_82D53010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r22{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82d53064
	if (!cr6.eq) goto loc_82D53064;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d53064
	if (cr6.eq) goto loc_82D53064;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r30,-4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
loc_82D53064:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d53098
	if (!cr6.eq) goto loc_82D53098;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82D53098:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bgt cr6,0x82d53104
	if (cr6.gt) goto loc_82D53104;
	// lis r12,-32043
	r12.s64 = -2099970048;
	// addi r12,r12,12484
	r12.s64 = r12.s64 + 12484;
	// rlwinm r0,r29,2,0,29
	r0.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_82D530D4;
	case 1:
		goto loc_82D530E0;
	case 2:
		goto loc_82D530EC;
	case 3:
		goto loc_82D530F8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,12500(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12500) );
	// lwz r22,12512(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12512) );
	// lwz r22,12524(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12524) );
	// lwz r22,12536(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12536) );
loc_82D530D4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,17476
	ctx.r4.s64 = r11.s64 + 17476;
	// b 0x82d53104
	goto loc_82D53104;
loc_82D530E0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,17468
	ctx.r4.s64 = r11.s64 + 17468;
	// b 0x82d53104
	goto loc_82D53104;
loc_82D530EC:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r4,r11,7432
	ctx.r4.s64 = r11.s64 + 7432;
	// b 0x82d53100
	goto loc_82D53100;
loc_82D530F8:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,12416
	ctx.r4.s64 = r11.s64 + 12416;
loc_82D53100:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D53104:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d52e30
	sub_82D52E30(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x82d53130
	if (cr6.eq) goto loc_82D53130;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d53134
	if (!cr6.eq) goto loc_82D53134;
loc_82D53130:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D53134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82D53018) {
	__imp__sub_82D53018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53140) {
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
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82d5317c
	if (!cr6.eq) goto loc_82D5317C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82D5317C:
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

PPC_WEAK_FUNC(sub_82D53140) {
	__imp__sub_82D53140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D531B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D531B0) {
	__imp__sub_82D531B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D531C0) {
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d53208
	if (!cr6.eq) goto loc_82D53208;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53208:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82266ec8
	sub_82266EC8(ctx, base);
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
	// beq cr6,0x82d53244
	if (cr6.eq) goto loc_82D53244;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53244:
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

PPC_WEAK_FUNC(sub_82D531C0) {
	__imp__sub_82D531C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53260) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r25,1
	r25.s64 = 1;
	// addi r11,r11,17488
	r11.s64 = r11.s64 + 17488;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// lis r26,-32768
	r26.s64 = -2147483648;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// sth r25,6(r24)
	PPC_STORE_U16(r24.u32 + 6, r25.u16);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r10,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stb r25,16(r24)
	PPC_STORE_U8(r24.u32 + 16, r25.u8);
	// beq cr6,0x82d53304
	if (cr6.eq) goto loc_82D53304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d532ec
	if (!cr6.lt) goto loc_82D532EC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d532dc
	if (cr6.lt) goto loc_82D532DC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D532DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D532EC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// b 0x82d53320
	goto loc_82D53320;
loc_82D53304:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
loc_82D53320:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// addi r28,r11,3060
	r28.s64 = r11.s64 + 3060;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d53370
	if (!cr6.lt) goto loc_82D53370;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d53360
	if (cr6.lt) goto loc_82D53360;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D53360:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D53370:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r30,r11,3064
	r30.s64 = r11.s64 + 3064;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d533d4
	if (!cr6.lt) goto loc_82D533D4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d533c4
	if (cr6.lt) goto loc_82D533C4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D533C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D533D4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d523d0
	sub_82D523D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d53438
	if (!cr6.lt) goto loc_82D53438;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d53428
	if (cr6.lt) goto loc_82D53428;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D53428:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D53438:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d53478
	if (!cr6.eq) goto loc_82D53478;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53478:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d534a4
	if (!cr6.eq) goto loc_82D534A4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D534A4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d534d0
	if (!cr6.eq) goto loc_82D534D0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D534D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r27,r29
	r27.u64 = r29.u64;
loc_82D534D8:
	// lbzx r11,r3,r27
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + r27.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x82d534f0
	if (cr6.eq) goto loc_82D534F0;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// bne cr6,0x82d534f8
	if (!cr6.eq) goto loc_82D534F8;
loc_82D534F0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x82d534d8
	goto loc_82D534D8;
loc_82D534F8:
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x82d519e8
	sub_82D519E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d53734
	if (!cr6.eq) goto loc_82D53734;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lbzx r11,r10,r27
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r27.u32);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x82d53524
	if (!cr6.eq) goto loc_82D53524;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,3224
	r30.s64 = r11.s64 + 3224;
	// b 0x82d53528
	goto loc_82D53528;
loc_82D53524:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82D53528:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// beq cr6,0x82d53594
	if (cr6.eq) goto loc_82D53594;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d5357c
	if (!cr6.lt) goto loc_82D5357C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d5356c
	if (cr6.lt) goto loc_82D5356C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D5356C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D5357C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// b 0x82d535b0
	goto loc_82D535B0;
loc_82D53594:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
loc_82D535B0:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// addi r30,r11,22020
	r30.s64 = r11.s64 + 22020;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d53600
	if (!cr6.lt) goto loc_82D53600;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d535f0
	if (cr6.lt) goto loc_82D535F0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D535F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D53600:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r31,r28,r27
	r31.u64 = r28.u64 + r27.u64;
	// bl 0x82d52068
	sub_82D52068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82d520e8
	sub_82D520E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d53670
	if (!cr6.lt) goto loc_82D53670;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d53660
	if (cr6.lt) goto loc_82D53660;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D53660:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D53670:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d536b0
	if (!cr6.eq) goto loc_82D536B0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D536B0:
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(200) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d536dc
	if (!cr6.eq) goto loc_82D536DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D536DC:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d53708
	if (!cr6.eq) goto loc_82D53708;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53708:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d53734
	if (!cr6.eq) goto loc_82D53734;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53734:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r11,11936
	ctx.r4.s64 = r11.s64 + 11936;
	// bl 0x82ca4890
	sub_82CA4890(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r3,12(r24)
	PPC_STORE_U32(r24.u32 + 12, ctx.r3.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stb r10,16(r24)
	PPC_STORE_U8(r24.u32 + 16, ctx.r10.u8);
	// bne cr6,0x82d53784
	if (!cr6.eq) goto loc_82D53784;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D53784:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82D53260) {
	__imp__sub_82D53260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53790) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82cab340
	sub_82CAB340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82d537c4
	if (cr6.gt) goto loc_82D537C4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82D537C4:
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

PPC_WEAK_FUNC(sub_82D53790) {
	__imp__sub_82D53790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D537D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D537D8) {
	__imp__sub_82D537D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D537E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// bl 0x82ca5338
	sub_82CA5338(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D537E8) {
	__imp__sub_82D537E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53818) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// b 0x82ca5670
	sub_82CA5670(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D53818) {
	__imp__sub_82D53818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53820) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,17488
	r11.s64 = r11.s64 + 17488;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d53858
	if (cr6.eq) goto loc_82D53858;
	// bl 0x82ca49d8
	sub_82CA49D8(ctx, base);
loc_82D53858:
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
	// beq cr6,0x82d5388c
	if (cr6.eq) goto loc_82D5388C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D5388C:
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

PPC_WEAK_FUNC(sub_82D53820) {
	__imp__sub_82D53820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D538A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r30,4
	r30.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,20
	r11.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d53260
	sub_82D53260(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82d53978
	if (!cr6.eq) goto loc_82D53978;
	// li r5,25
	ctx.r5.s64 = 25;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,36
	r11.s64 = 36;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d5aff0
	sub_82D5AFF0(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d5396c
	if (cr6.eq) goto loc_82D5396C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82d5396c
	if (!cr6.eq) goto loc_82D5396C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D5396C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82D53978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D538A8) {
	__imp__sub_82D538A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53988) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r29,4
	r29.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,17884
	r11.s64 = r11.s64 + 17884;
	// li r9,16
	ctx.r9.s64 = 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// beq cr6,0x82d539ec
	if (cr6.eq) goto loc_82D539EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,11956
	ctx.r5.s64 = r11.s64 + 11956;
	// bl 0x825ef8e0
	sub_825EF8E0(ctx, base);
loc_82D539EC:
	// li r5,25
	ctx.r5.s64 = 25;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d599a0
	sub_82D599A0(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d53a50
	if (cr6.eq) goto loc_82D53A50;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// bne cr6,0x82d53a50
	if (!cr6.eq) goto loc_82D53A50;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D53A50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D53988) {
	__imp__sub_82D53988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D53A60) {
	__imp__sub_82D53A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D53A68) {
	__imp__sub_82D53A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D53A70) {
	__imp__sub_82D53A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D53A78) {
	__imp__sub_82D53A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53A80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d53ac8
	if (cr6.eq) goto loc_82D53AC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82D53AC8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,12216
	ctx.r4.s64 = r11.s64 + 12216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53A80) {
	__imp__sub_82D53A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53AF0) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
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

PPC_WEAK_FUNC(sub_82D53AF0) {
	__imp__sub_82D53AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-12736
	ctx.r5.s64 = r11.s64 + -12736;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53B30) {
	__imp__sub_82D53B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53B98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82d53bc0
	if (cr6.eq) goto loc_82D53BC0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,3900
	r30.s64 = r11.s64 + 3900;
	// b 0x82d53bc8
	goto loc_82D53BC8;
loc_82D53BC0:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,5664
	r30.s64 = r11.s64 + 5664;
loc_82D53BC8:
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82d53bf0
	if (cr6.eq) goto loc_82D53BF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82d53c04
	goto loc_82D53C04;
loc_82D53BF0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,12216
	ctx.r4.s64 = r11.s64 + 12216;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
loc_82D53C04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D53B98) {
	__imp__sub_82D53B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53C20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
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

PPC_WEAK_FUNC(sub_82D53C20) {
	__imp__sub_82D53C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53C70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// beq cr6,0x82d53cac
	if (cr6.eq) goto loc_82D53CAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82d53cc0
	goto loc_82D53CC0;
loc_82D53CAC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,12216
	ctx.r4.s64 = r11.s64 + 12216;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
loc_82D53CC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D53C70) {
	__imp__sub_82D53C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// addi r5,r11,19464
	ctx.r5.s64 = r11.s64 + 19464;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53CD8) {
	__imp__sub_82D53CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r5,r11,30568
	ctx.r5.s64 = r11.s64 + 30568;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53D40) {
	__imp__sub_82D53D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,19464
	ctx.r5.s64 = r11.s64 + 19464;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53DA8) {
	__imp__sub_82D53DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,30568
	ctx.r5.s64 = r11.s64 + 30568;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53E10) {
	__imp__sub_82D53E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,-4428
	ctx.r5.s64 = r11.s64 + -4428;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53E78) {
	__imp__sub_82D53E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,19468
	ctx.r5.s64 = r11.s64 + 19468;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53EE0) {
	__imp__sub_82D53EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,19556
	ctx.r5.s64 = r11.s64 + 19556;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d516a0
	sub_82D516A0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82D53F48) {
	__imp__sub_82D53F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D53FB0) {
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,10176
	ctx.r10.s64 = ctx.r1.s64 + 10176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d51698
	sub_82D51698(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
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

PPC_WEAK_FUNC(sub_82D53FB0) {
	__imp__sub_82D53FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D54048) {
	__imp__sub_82D54048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
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

PPC_WEAK_FUNC(sub_82D54060) {
	__imp__sub_82D54060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-17152
	r29.s64 = r11.s64 + -17152;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82d51980
	sub_82D51980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D54078) {
	__imp__sub_82D54078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D540D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
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

PPC_WEAK_FUNC(sub_82D540D8) {
	__imp__sub_82D540D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19524
	r11.s64 = r11.s64 + 19524;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D54118) {
	__imp__sub_82D54118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54158) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,19524
	r11.s64 = r11.s64 + 19524;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r3,30000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(30000) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82D54158) {
	__imp__sub_82D54158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D541B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,19524
	r11.s64 = r11.s64 + 19524;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82d59840
	sub_82D59840(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D541B8) {
	__imp__sub_82D541B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54230) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,19524
	r11.s64 = r11.s64 + 19524;
	// li r28,1
	r28.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// sth r28,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r28.u16);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,19480
	r11.s64 = r11.s64 + 19480;
	// li r10,20
	ctx.r10.s64 = 20;
	// sth r28,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r28.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// sth r10,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r10.u16);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82d54418
	sub_82D54418(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D54230) {
	__imp__sub_82D54230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D542B0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,19524
	r11.s64 = r11.s64 + 19524;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82d54314
	if (cr6.eq) goto loc_82D54314;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d54314
	if (cr6.eq) goto loc_82D54314;
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
	// bne cr6,0x82d54314
	if (!cr6.eq) goto loc_82D54314;
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
loc_82D54314:
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

PPC_WEAK_FUNC(sub_82D542B0) {
	__imp__sub_82D542B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54338) {
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
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d5436c
	if (cr6.eq) goto loc_82D5436C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
loc_82D5436C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d543a8
	if (cr6.eq) goto loc_82D543A8;
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
	// bne cr6,0x82d543a8
	if (!cr6.eq) goto loc_82D543A8;
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
loc_82D543A8:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
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

PPC_WEAK_FUNC(sub_82D54338) {
	__imp__sub_82D54338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D543C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
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

PPC_WEAK_FUNC(sub_82D543C8) {
	__imp__sub_82D543C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54418) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82d54464
	if (!cr6.lt) goto loc_82D54464;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d54458
	if (!cr6.lt) goto loc_82D54458;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82D54458:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D54464:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_82D54418) {
	__imp__sub_82D54418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82d54418
	sub_82D54418(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D54490) {
	__imp__sub_82D54490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D544A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x82d5452c
	if (!cr6.gt) goto loc_82D5452C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82d54510
	if (!cr6.lt) goto loc_82D54510;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d54504
	if (!cr6.lt) goto loc_82D54504;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82D54504:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D54510:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
	// b 0x82d54548
	goto loc_82D54548;
loc_82D5452C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82d54548
	if (!cr6.gt) goto loc_82D54548;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82D54548:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82d51a88
	sub_82D51A88(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82D544A8) {
	__imp__sub_82D544A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54580) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// mr r28,r11
	r28.u64 = r11.u64;
	// blt cr6,0x82d545c4
	if (cr6.lt) goto loc_82D545C4;
	// beq cr6,0x82d545bc
	if (cr6.eq) goto loc_82D545BC;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82d545c8
	if (!cr6.lt) goto loc_82D545C8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subf r28,r4,r11
	r28.s64 = r11.s64 - ctx.r4.s64;
	// b 0x82d545c8
	goto loc_82D545C8;
loc_82D545BC:
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
	// b 0x82d545c8
	goto loc_82D545C8;
loc_82D545C4:
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_82D545C8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82d54660
	if (cr6.lt) goto loc_82D54660;
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x82d54650
	if (!cr6.gt) goto loc_82D54650;
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
	// rotlwi r29,r11,0
	r29.u64 = rotl32(r11.u32, 0);
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// ble cr6,0x82d54644
	if (!cr6.gt) goto loc_82D54644;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82d54620
	if (!cr6.lt) goto loc_82D54620;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82d54610
	if (cr6.lt) goto loc_82D54610;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82D54610:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82D54620:
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(r29.s32, r31.s32, xer);
	// bge cr6,0x82d54644
	if (!cr6.lt) goto loc_82D54644;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D54630:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x82d54630
	if (cr6.lt) goto loc_82D54630;
loc_82D54644:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_82D54650:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82D54660:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82D54580) {
	__imp__sub_82D54580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54670) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d546b8
	if (!cr6.eq) goto loc_82D546B8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D546B8:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d5470c
	if (cr6.eq) goto loc_82D5470C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d546f4
	if (cr6.lt) goto loc_82D546F4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82d4eb08
	sub_82D4EB08(ctx, base);
	// b 0x82d5470c
	goto loc_82D5470C;
loc_82D546F4:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r31.u32);
loc_82D5470C:
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

PPC_WEAK_FUNC(sub_82D54670) {
	__imp__sub_82D54670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54728) {
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
	// bl 0x82d542b0
	sub_82D542B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82d54770
	if (cr6.eq) goto loc_82D54770;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D54770:
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

PPC_WEAK_FUNC(sub_82D54728) {
	__imp__sub_82D54728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54790) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,19480
	r11.s64 = r11.s64 + 19480;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x82d547d8
	if (!cr6.eq) goto loc_82D547D8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d547d8
	if (cr6.eq) goto loc_82D547D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d54670
	sub_82D54670(ctx, base);
loc_82D547D8:
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
	// beq cr6,0x82d5480c
	if (cr6.eq) goto loc_82D5480C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,25
	ctx.r6.s64 = 25;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82D5480C:
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

PPC_WEAK_FUNC(sub_82D54790) {
	__imp__sub_82D54790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54828) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D54828) {
	__imp__sub_82D54828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D54830) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D54830) {
	__imp__sub_82D54830(ctx, base);
}

