#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RefreshParam__16CUserDataManagerFv
// Address: 0x19b380 - 0x19b44c
void RefreshParam__16CUserDataManagerFv_0x19b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshParam__16CUserDataManagerFv_0x19b380");
#endif

    switch (ctx->pc) {
        case 0x19b3a8u: goto label_19b3a8;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3d8u: goto label_19b3d8;
        case 0x19b3e4u: goto label_19b3e4;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b420u: goto label_19b420;
        default: break;
    }

    ctx->pc = 0x19b380u;

    // 0x19b380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19b384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19b38c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19b390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19b394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b3a0: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19B3A0u;
    SET_GPR_U32(ctx, 31, 0x19B3A8u);
    ctx->pc = 0x19B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3A0u;
            // 0x19b3a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3A8u; }
        if (ctx->pc != 0x19B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshNPCStatus__16CUserDataManagerFi_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3A8u; }
        if (ctx->pc != 0x19B3A8u) { return; }
    }
    ctx->pc = 0x19B3A8u;
label_19b3a8:
    // 0x19b3a8: 0xc064220  jal         func_190880
    ctx->pc = 0x19B3A8u;
    SET_GPR_U32(ctx, 31, 0x19B3B0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3B0u; }
        if (ctx->pc != 0x19B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3B0u; }
        if (ctx->pc != 0x19B3B0u) { return; }
    }
    ctx->pc = 0x19B3B0u;
label_19b3b0:
    // 0x19b3b0: 0x8c521a00  lw          $s2, 0x1A00($v0)
    ctx->pc = 0x19b3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x19b3b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19b3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3bc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19b3c0: 0x344251d8  ori         $v0, $v0, 0x51D8
    ctx->pc = 0x19b3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20952);
    // 0x19b3c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19b3c8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x19b3c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b3cc: 0x242102f  dsubu       $v0, $s2, $v0
    ctx->pc = 0x19b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
    // 0x19b3d0: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x19b3d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19b3d4: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x19b3d4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_19b3d8:
    // 0x19b3d8: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x19b3dc: 0xc06660c  jal         func_199830
    ctx->pc = 0x19B3DCu;
    SET_GPR_U32(ctx, 31, 0x19B3E4u);
    ctx->pc = 0x19B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3DCu;
            // 0x19b3e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199830u;
    if (runtime->hasFunction(0x199830u)) {
        auto targetFn = runtime->lookupFunction(0x199830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3E4u; }
        if (ctx->pc != 0x19B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeCheck__13CGameDataUsedFi_0x199830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3E4u; }
        if (ctx->pc != 0x19B3E4u) { return; }
    }
    ctx->pc = 0x19B3E4u;
label_19b3e4:
    // 0x19b3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b3e8: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x19b3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x19b3ec: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x19b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19b3f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19B3F0u;
    {
        const bool branch_taken_0x19b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b3f0) {
            ctx->pc = 0x19B3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b3d8;
        }
    }
    ctx->pc = 0x19B3F8u;
    // 0x19b3f8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b3fc: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x19b400: 0xdc2451d0  ld          $a0, 0x51D0($at)
    ctx->pc = 0x19b400u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 20944)));
    // 0x19b404: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x19B404u;
    SET_GPR_U32(ctx, 31, 0x19B40Cu);
    ctx->pc = 0x19B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B404u;
            // 0x19b408: 0x24050534  addiu       $a1, $zero, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B40Cu; }
        if (ctx->pc != 0x19B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B40Cu; }
        if (ctx->pc != 0x19B40Cu) { return; }
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b410: 0x26644958  addiu       $a0, $s3, 0x4958
    ctx->pc = 0x19b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 18776));
    // 0x19b414: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x19b418: 0xc06693c  jal         func_19A4F0
    ctx->pc = 0x19B418u;
    SET_GPR_U32(ctx, 31, 0x19B420u);
    ctx->pc = 0x19B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B418u;
            // 0x19b41c: 0xfc2251d0  sd          $v0, 0x51D0($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 20944), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A4F0u;
    if (runtime->hasFunction(0x19A4F0u)) {
        auto targetFn = runtime->lookupFunction(0x19A4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B420u; }
        if (ctx->pc != 0x19B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParam__13CFishAquariumFv_0x19a4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B420u; }
        if (ctx->pc != 0x19B420u) { return; }
    }
    ctx->pc = 0x19B420u;
label_19b420:
    // 0x19b420: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b424: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x19b424u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x19b428: 0xfc3251d8  sd          $s2, 0x51D8($at)
    ctx->pc = 0x19b428u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 20952), GPR_U64(ctx, 18));
    // 0x19b42c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b430: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19b430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b434: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b444: 0x3e00008  jr          $ra
    ctx->pc = 0x19B444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B444u;
            // 0x19b448: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B44Cu;
}
