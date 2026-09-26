#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShotLaserGun__FPfPfi
// Address: 0x2d03b0 - 0x2d0688
void ShotLaserGun__FPfPfi_0x2d03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShotLaserGun__FPfPfi_0x2d03b0");
#endif

    switch (ctx->pc) {
        case 0x2d03f8u: goto label_2d03f8;
        case 0x2d0408u: goto label_2d0408;
        case 0x2d041cu: goto label_2d041c;
        case 0x2d042cu: goto label_2d042c;
        case 0x2d0438u: goto label_2d0438;
        case 0x2d0458u: goto label_2d0458;
        case 0x2d048cu: goto label_2d048c;
        case 0x2d0498u: goto label_2d0498;
        case 0x2d04b8u: goto label_2d04b8;
        case 0x2d04ccu: goto label_2d04cc;
        case 0x2d04e0u: goto label_2d04e0;
        case 0x2d04f4u: goto label_2d04f4;
        case 0x2d0518u: goto label_2d0518;
        case 0x2d0534u: goto label_2d0534;
        case 0x2d0554u: goto label_2d0554;
        case 0x2d05e0u: goto label_2d05e0;
        case 0x2d0600u: goto label_2d0600;
        case 0x2d0620u: goto label_2d0620;
        case 0x2d0640u: goto label_2d0640;
        case 0x2d0658u: goto label_2d0658;
        default: break;
    }

    ctx->pc = 0x2d03b0u;

    // 0x2d03b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d03b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d03b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d03bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d03bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d03c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d03c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d03c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d03c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d03c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d03cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d03ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d03d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d03d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d03d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d03d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d03dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d03dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03e0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2d03e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d03e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d03e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2d03e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d03ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2d03ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d03f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D03F0u;
    SET_GPR_U32(ctx, 31, 0x2D03F8u);
    ctx->pc = 0x2D03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D03F0u;
            // 0x2d03f4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D03F8u; }
        if (ctx->pc != 0x2D03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D03F8u; }
        if (ctx->pc != 0x2D03F8u) { return; }
    }
    ctx->pc = 0x2D03F8u;
label_2d03f8:
    // 0x2d03f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d03fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d03fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0400: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D0400u;
    SET_GPR_U32(ctx, 31, 0x2D0408u);
    ctx->pc = 0x2D0404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0400u;
            // 0x2d0404: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0408u; }
        if (ctx->pc != 0x2D0408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0408u; }
        if (ctx->pc != 0x2D0408u) { return; }
    }
    ctx->pc = 0x2D0408u;
label_2d0408:
    // 0x2d0408: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d0408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d040c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0414: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2D0414u;
    SET_GPR_U32(ctx, 31, 0x2D041Cu);
    ctx->pc = 0x2D0418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0414u;
            // 0x2d0418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D041Cu; }
        if (ctx->pc != 0x2D041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D041Cu; }
        if (ctx->pc != 0x2D041Cu) { return; }
    }
    ctx->pc = 0x2D041Cu;
label_2d041c:
    // 0x2d041c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0420: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d0420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0424: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2D0424u;
    SET_GPR_U32(ctx, 31, 0x2D042Cu);
    ctx->pc = 0x2D0428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0424u;
            // 0x2d0428: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D042Cu; }
        if (ctx->pc != 0x2D042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D042Cu; }
        if (ctx->pc != 0x2D042Cu) { return; }
    }
    ctx->pc = 0x2D042Cu;
label_2d042c:
    // 0x2d042c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d0430: 0xc06df50  jal         func_1B7D40
    ctx->pc = 0x2D0430u;
    SET_GPR_U32(ctx, 31, 0x2D0438u);
    ctx->pc = 0x2D0434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0430u;
            // 0x2d0434: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D40u;
    if (runtime->hasFunction(0x1B7D40u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0438u; }
        if (ctx->pc != 0x2D0438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__12CLaserGunManFv_0x1b7d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0438u; }
        if (ctx->pc != 0x2D0438u) { return; }
    }
    ctx->pc = 0x2D0438u;
label_2d0438:
    // 0x2d0438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d043c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D043Cu;
    {
        const bool branch_taken_0x2d043c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d043c) {
            ctx->pc = 0x2D04F8u;
            goto label_2d04f8;
        }
    }
    ctx->pc = 0x2D0444u;
    // 0x2d0444: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d0444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d044c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0450: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x2D0450u;
    SET_GPR_U32(ctx, 31, 0x2D0458u);
    ctx->pc = 0x2D0454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0450u;
            // 0x2d0454: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (runtime->hasFunction(0x1B6E50u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0458u; }
        if (ctx->pc != 0x2D0458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9CLaserGunFPfPfPf_0x1b6e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0458u; }
        if (ctx->pc != 0x2D0458u) { return; }
    }
    ctx->pc = 0x2D0458u;
label_2d0458:
    // 0x2d0458: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d045c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0460: 0x8c26d430  lw          $a2, -0x2BD0($at)
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0464: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2d0464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2d0468: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x2d0468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x2d046c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0474: 0x84c60770  lh          $a2, 0x770($a2)
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1904)));
    // 0x2d0478: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2d0478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2d047c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x2d047cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x2d0480: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2d0480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2d0484: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x2D0484u;
    SET_GPR_U32(ctx, 31, 0x2D048Cu);
    ctx->pc = 0x2D0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0484u;
            // 0x2d0488: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (runtime->hasFunction(0x1B6F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D048Cu; }
        if (ctx->pc != 0x2D048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVisualCode__9CLaserGunFi_0x1b6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D048Cu; }
        if (ctx->pc != 0x2D048Cu) { return; }
    }
    ctx->pc = 0x2D048Cu;
label_2d048c:
    // 0x2d048c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0490: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D0490u;
    SET_GPR_U32(ctx, 31, 0x2D0498u);
    ctx->pc = 0x2D0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0490u;
            // 0x2d0494: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0498u; }
        if (ctx->pc != 0x2D0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0498u; }
        if (ctx->pc != 0x2D0498u) { return; }
    }
    ctx->pc = 0x2D0498u;
label_2d0498:
    // 0x2d0498: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d0498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d049c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D049Cu;
    {
        const bool branch_taken_0x2d049c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D049Cu;
            // 0x2d04a0: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d049c) {
            ctx->pc = 0x2D04F4u;
            goto label_2d04f4;
        }
    }
    ctx->pc = 0x2D04A4u;
    // 0x2d04a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d04a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04ac: 0x24a502e8  addiu       $a1, $a1, 0x2E8
    ctx->pc = 0x2d04acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 744));
    // 0x2d04b0: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D04B0u;
    SET_GPR_U32(ctx, 31, 0x2D04B8u);
    ctx->pc = 0x2D04B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04B0u;
            // 0x2d04b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04B8u; }
        if (ctx->pc != 0x2D04B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04B8u; }
        if (ctx->pc != 0x2D04B8u) { return; }
    }
    ctx->pc = 0x2D04B8u;
label_2d04b8:
    // 0x2d04b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d04bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d04bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d04c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d04c4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x2D04C4u;
    SET_GPR_U32(ctx, 31, 0x2D04CCu);
    ctx->pc = 0x2D04C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04C4u;
            // 0x2d04c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04CCu; }
        if (ctx->pc != 0x2D04CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04CCu; }
        if (ctx->pc != 0x2D04CCu) { return; }
    }
    ctx->pc = 0x2D04CCu;
label_2d04cc:
    // 0x2d04cc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2d04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2d04d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d04d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04d4: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x2d04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
    // 0x2d04d8: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D04D8u;
    SET_GPR_U32(ctx, 31, 0x2D04E0u);
    ctx->pc = 0x2D04DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04D8u;
            // 0x2d04dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04E0u; }
        if (ctx->pc != 0x2D04E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04E0u; }
        if (ctx->pc != 0x2D04E0u) { return; }
    }
    ctx->pc = 0x2D04E0u;
label_2d04e0:
    // 0x2d04e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d04e4: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x2d04e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d04e8: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d04e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d04ec: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D04ECu;
    SET_GPR_U32(ctx, 31, 0x2D04F4u);
    ctx->pc = 0x2D04F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04ECu;
            // 0x2d04f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04F4u; }
        if (ctx->pc != 0x2D04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D04F4u; }
        if (ctx->pc != 0x2D04F4u) { return; }
    }
    ctx->pc = 0x2D04F4u;
label_2d04f4:
    // 0x2d04f4: 0xae1400e8  sw          $s4, 0xE8($s0)
    ctx->pc = 0x2d04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 20));
label_2d04f8:
    // 0x2d04f8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d04fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d04fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0500: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0504: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d0504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d0508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d050c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0510: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D0510u;
    SET_GPR_U32(ctx, 31, 0x2D0518u);
    ctx->pc = 0x2D0514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0510u;
            // 0x2d0514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0518u; }
        if (ctx->pc != 0x2D0518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0518u; }
        if (ctx->pc != 0x2D0518u) { return; }
    }
    ctx->pc = 0x2D0518u;
label_2d0518:
    // 0x2d0518: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d051c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0520: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0528: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d052c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D052Cu;
    SET_GPR_U32(ctx, 31, 0x2D0534u);
    ctx->pc = 0x2D0530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D052Cu;
            // 0x2d0530: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0534u; }
        if (ctx->pc != 0x2D0534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0534u; }
        if (ctx->pc != 0x2D0534u) { return; }
    }
    ctx->pc = 0x2D0534u;
label_2d0534:
    // 0x2d0534: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d053c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d0540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d0544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0548: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d054c: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x2D054Cu;
    SET_GPR_U32(ctx, 31, 0x2D0554u);
    ctx->pc = 0x2D0550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D054Cu;
            // 0x2d0550: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0554u; }
        if (ctx->pc != 0x2D0554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0554u; }
        if (ctx->pc != 0x2D0554u) { return; }
    }
    ctx->pc = 0x2D0554u;
label_2d0554:
    // 0x2d0554: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0554u;
    {
        const bool branch_taken_0x2d0554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0554u;
            // 0x2d0558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0554) {
            ctx->pc = 0x2D0578u;
            goto label_2d0578;
        }
    }
    ctx->pc = 0x2D055Cu;
    // 0x2d055c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2d055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2d0560: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d0564: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x2d0564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d0568: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2d0568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d056c: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x2d056cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x2d0570: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2d0570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x2d0574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0578:
    // 0x2d0578: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0578u;
    {
        const bool branch_taken_0x2d0578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0578u;
            // 0x2d057c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0578) {
            ctx->pc = 0x2D05A0u;
            goto label_2d05a0;
        }
    }
    ctx->pc = 0x2D0580u;
    // 0x2d0580: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2d0584: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d0584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d0588: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x2d0588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d058c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2d058cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d0590: 0x0  nop
    ctx->pc = 0x2d0590u;
    // NOP
    // 0x2d0594: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x2d0594u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x2d0598: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2d0598u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x2d059c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d05a0:
    // 0x2d05a0: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D05A0u;
    {
        const bool branch_taken_0x2d05a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D05A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05A0u;
            // 0x2d05a4: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05a0) {
            ctx->pc = 0x2D05C4u;
            goto label_2d05c4;
        }
    }
    ctx->pc = 0x2D05A8u;
    // 0x2d05a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d05ac: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2d05b0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x2d05b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d05b4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2d05b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d05b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2d05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2d05bc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2d05bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d05c0: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x2d05c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_2d05c4:
    // 0x2d05c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d05c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d05c8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d05cc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d05ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d05d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d05d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d05d4: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d05d8: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D05D8u;
    SET_GPR_U32(ctx, 31, 0x2D05E0u);
    ctx->pc = 0x2D05DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05D8u;
            // 0x2d05dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D05E0u; }
        if (ctx->pc != 0x2D05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D05E0u; }
        if (ctx->pc != 0x2D05E0u) { return; }
    }
    ctx->pc = 0x2D05E0u;
label_2d05e0:
    // 0x2d05e0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d05e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d05e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d05e8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d05ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d05ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d05f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d05f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d05f4: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d05f8: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D05F8u;
    SET_GPR_U32(ctx, 31, 0x2D0600u);
    ctx->pc = 0x2D05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05F8u;
            // 0x2d05fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0600u; }
        if (ctx->pc != 0x2D0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0600u; }
        if (ctx->pc != 0x2D0600u) { return; }
    }
    ctx->pc = 0x2D0600u;
label_2d0600:
    // 0x2d0600: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0604: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d0604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0608: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d060c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2d060cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2d0610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0614: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0618: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D0618u;
    SET_GPR_U32(ctx, 31, 0x2D0620u);
    ctx->pc = 0x2D061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0618u;
            // 0x2d061c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0620u; }
        if (ctx->pc != 0x2D0620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0620u; }
        if (ctx->pc != 0x2D0620u) { return; }
    }
    ctx->pc = 0x2D0620u;
label_2d0620:
    // 0x2d0620: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0624: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d0624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d0628: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d062c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d062cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d0630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0634: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d0634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d0638: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D0638u;
    SET_GPR_U32(ctx, 31, 0x2D0640u);
    ctx->pc = 0x2D063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0638u;
            // 0x2d063c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0640u; }
        if (ctx->pc != 0x2D0640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0640u; }
        if (ctx->pc != 0x2D0640u) { return; }
    }
    ctx->pc = 0x2D0640u;
label_2d0640:
    // 0x2d0640: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0644: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2d0644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d0648: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d064c: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d0650: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D0650u;
    SET_GPR_U32(ctx, 31, 0x2D0658u);
    ctx->pc = 0x2D0654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0650u;
            // 0x2d0654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0658u; }
        if (ctx->pc != 0x2D0658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0658u; }
        if (ctx->pc != 0x2D0658u) { return; }
    }
    ctx->pc = 0x2D0658u;
label_2d0658:
    // 0x2d0658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d0658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d065c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2d065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d0660: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d0660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0664: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2d0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d0668: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d0668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d066c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2d066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d0670: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d0670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0674: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d0678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d067c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0680: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0680u;
            // 0x2d0684: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0688u;
}
