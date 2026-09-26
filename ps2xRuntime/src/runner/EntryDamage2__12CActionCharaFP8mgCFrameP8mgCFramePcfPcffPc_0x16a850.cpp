#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryDamage2__12CActionCharaFP8mgCFrameP8mgCFramePcfPcffPc
// Address: 0x16a850 - 0x16a9b0
void EntryDamage2__12CActionCharaFP8mgCFrameP8mgCFramePcfPcffPc_0x16a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryDamage2__12CActionCharaFP8mgCFrameP8mgCFramePcfPcffPc_0x16a850");
#endif

    switch (ctx->pc) {
        case 0x16a8b8u: goto label_16a8b8;
        case 0x16a8d8u: goto label_16a8d8;
        case 0x16a8f0u: goto label_16a8f0;
        default: break;
    }

    ctx->pc = 0x16a850u;

    // 0x16a850: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16a854: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16a858: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x16a85c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16a860: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x16a860u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a864: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16a868: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16a868u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a86c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16a870: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16a870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a874: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16a878: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16a878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a87c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a880: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x16a880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a884: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a888: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x16a888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a88c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16a88cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16a890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16a890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16a894: 0x80820bd8  lb          $v0, 0xBD8($a0)
    ctx->pc = 0x16a894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3032)));
    // 0x16a898: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16a898u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x16a89c: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x16a89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a8a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A8A0u;
    {
        const bool branch_taken_0x16a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8A0u;
            // 0x16a8a4: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8a0) {
            ctx->pc = 0x16A8B0u;
            goto label_16a8b0;
        }
    }
    ctx->pc = 0x16A8A8u;
    // 0x16a8a8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x16A8A8u;
    {
        const bool branch_taken_0x16a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8A8u;
            // 0x16a8ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8a8) {
            ctx->pc = 0x16A980u;
            goto label_16a980;
        }
    }
    ctx->pc = 0x16A8B0u;
label_16a8b0:
    // 0x16a8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16a8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a8b8:
    // 0x16a8b8: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x16a8bc: 0x80420a20  lb          $v0, 0xA20($v0)
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2592)));
    // 0x16a8c0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16A8C0u;
    {
        const bool branch_taken_0x16a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8C0u;
            // 0x16a8c4: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c0) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A8C8u;
    // 0x16a8c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d0: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x16A8D0u;
    SET_GPR_U32(ctx, 31, 0x16A8D8u);
    ctx->pc = 0x16A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8D0u;
            // 0x16a8d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8D8u; }
        if (ctx->pc != 0x16A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8D8u; }
        if (ctx->pc != 0x16A8D8u) { return; }
    }
    ctx->pc = 0x16A8D8u;
label_16a8d8:
    // 0x16a8d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16a8d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16a8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16a8e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x16a8e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e8: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x16A8E8u;
    SET_GPR_U32(ctx, 31, 0x16A8F0u);
    ctx->pc = 0x16A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8E8u;
            // 0x16a8ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8F0u; }
        if (ctx->pc != 0x16A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8F0u; }
        if (ctx->pc != 0x16A8F0u) { return; }
    }
    ctx->pc = 0x16A8F0u;
label_16a8f0:
    // 0x16a8f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a8f4: 0x0  nop
    ctx->pc = 0x16a8f4u;
    // NOP
    // 0x16a8f8: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x16a8f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8fc: 0x0  nop
    ctx->pc = 0x16a8fcu;
    // NOP
    // 0x16a900: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16A900u;
    {
        const bool branch_taken_0x16a900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A900u;
            // 0x16a904: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a900) {
            ctx->pc = 0x16A920u;
            goto label_16a920;
        }
    }
    ctx->pc = 0x16A908u;
    // 0x16a908: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16a908u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a90c: 0x0  nop
    ctx->pc = 0x16a90cu;
    // NOP
    // 0x16a910: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A910u;
    {
        const bool branch_taken_0x16a910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A910u;
            // 0x16a914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a910) {
            ctx->pc = 0x16A924u;
            goto label_16a924;
        }
    }
    ctx->pc = 0x16A918u;
    // 0x16a918: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A918u;
            // 0x16a91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16A980u;
            goto label_16a980;
        }
    }
    ctx->pc = 0x16A920u;
label_16a920:
    // 0x16a920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a924:
    // 0x16a924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16a928: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a92c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a930: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x16a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x16a934: 0xa0850a20  sb          $a1, 0xA20($a0)
    ctx->pc = 0x16a934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2592), (uint8_t)GPR_U32(ctx, 5));
    // 0x16a938: 0x24820a20  addiu       $v0, $a0, 0xA20
    ctx->pc = 0x16a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2592));
    // 0x16a93c: 0xac950a28  sw          $s5, 0xA28($a0)
    ctx->pc = 0x16a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2600), GPR_U32(ctx, 21));
    // 0x16a940: 0xac940a2c  sw          $s4, 0xA2C($a0)
    ctx->pc = 0x16a940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2604), GPR_U32(ctx, 20));
    // 0x16a944: 0xac930a40  sw          $s3, 0xA40($a0)
    ctx->pc = 0x16a944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2624), GPR_U32(ctx, 19));
    // 0x16a948: 0xe4940a38  swc1        $f20, 0xA38($a0)
    ctx->pc = 0x16a948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2616), bits); }
    // 0x16a94c: 0xe4800a3c  swc1        $f0, 0xA3C($a0)
    ctx->pc = 0x16a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2620), bits); }
    // 0x16a950: 0xac910a24  sw          $s1, 0xA24($a0)
    ctx->pc = 0x16a950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2596), GPR_U32(ctx, 17));
    // 0x16a954: 0xe4950a30  swc1        $f21, 0xA30($a0)
    ctx->pc = 0x16a954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2608), bits); }
    // 0x16a958: 0xac830a34  sw          $v1, 0xA34($a0)
    ctx->pc = 0x16a958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2612), GPR_U32(ctx, 3));
    // 0x16a95c: 0x82c30bd8  lb          $v1, 0xBD8($s6)
    ctx->pc = 0x16a95cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3032)));
    // 0x16a960: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A964u;
    {
        const bool branch_taken_0x16a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A964u;
            // 0x16a968: 0xa2c30bd8  sb          $v1, 0xBD8($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 3032), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a964) {
            ctx->pc = 0x16A980u;
            goto label_16a980;
        }
    }
    ctx->pc = 0x16A96Cu;
label_16a96c:
    // 0x16a96c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16a970: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x16a970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a974: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x16A974u;
    {
        const bool branch_taken_0x16a974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A974u;
            // 0x16a978: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a974) {
            ctx->pc = 0x16A8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a8b8;
        }
    }
    ctx->pc = 0x16A97Cu;
    // 0x16a97c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a980:
    // 0x16a980: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a984: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16a988: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16a988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a98c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a990: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16a990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a994: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16a994u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a998: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16a998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a99c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16a99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a9a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a9a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9A8u;
            // 0x16a9ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A9B0u;
}
