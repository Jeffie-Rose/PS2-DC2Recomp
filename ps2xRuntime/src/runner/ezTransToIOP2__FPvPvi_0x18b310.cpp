#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ezTransToIOP2__FPvPvi
// Address: 0x18b310 - 0x18b3b4
void ezTransToIOP2__FPvPvi_0x18b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ezTransToIOP2__FPvPvi_0x18b310");
#endif

    switch (ctx->pc) {
        case 0x18b34cu: goto label_18b34c;
        case 0x18b35cu: goto label_18b35c;
        case 0x18b370u: goto label_18b370;
        case 0x18b37cu: goto label_18b37c;
        default: break;
    }

    ctx->pc = 0x18b310u;

    // 0x18b310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b314: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18b324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b328: 0xac263678  sw          $a2, 0x3678($at)
    ctx->pc = 0x18b328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13944), GPR_U32(ctx, 6));
    // 0x18b32c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b330: 0xac253670  sw          $a1, 0x3670($at)
    ctx->pc = 0x18b330u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13936), GPR_U32(ctx, 5));
    // 0x18b334: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b338: 0xac243674  sw          $a0, 0x3674($at)
    ctx->pc = 0x18b338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13940), GPR_U32(ctx, 4));
    // 0x18b33c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b344: 0xc0440d8  jal         func_110360
    ctx->pc = 0x18B344u;
    SET_GPR_U32(ctx, 31, 0x18B34Cu);
    ctx->pc = 0x18B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B344u;
            // 0x18b348: 0xac20367c  sw          $zero, 0x367C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B34Cu; }
        if (ctx->pc != 0x18B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B34Cu; }
        if (ctx->pc != 0x18B34Cu) { return; }
    }
    ctx->pc = 0x18B34Cu;
label_18b34c:
    // 0x18b34c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18b350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b354: 0xc044128  jal         func_1104A0
    ctx->pc = 0x18B354u;
    SET_GPR_U32(ctx, 31, 0x18B35Cu);
    ctx->pc = 0x18B358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B354u;
            // 0x18b358: 0x24843670  addiu       $a0, $a0, 0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (runtime->hasFunction(0x1104A0u)) {
        auto targetFn = runtime->lookupFunction(0x1104A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B35Cu; }
        if (ctx->pc != 0x18B35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x1104a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B35Cu; }
        if (ctx->pc != 0x18B35Cu) { return; }
    }
    ctx->pc = 0x18B35Cu;
label_18b35c:
    // 0x18b35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b360: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B360u;
    {
        const bool branch_taken_0x18b360 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B360u;
            // 0x18b364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b360) {
            ctx->pc = 0x18B374u;
            goto label_18b374;
        }
    }
    ctx->pc = 0x18B368u;
    // 0x18b368: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18B368u;
    {
        const bool branch_taken_0x18b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B368u;
            // 0x18b36c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b368) {
            ctx->pc = 0x18B3A0u;
            goto label_18b3a0;
        }
    }
    ctx->pc = 0x18B370u;
label_18b370:
    // 0x18b370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b374:
    // 0x18b374: 0xc044120  jal         func_110480
    ctx->pc = 0x18B374u;
    SET_GPR_U32(ctx, 31, 0x18B37Cu);
    ctx->pc = 0x110480u;
    if (runtime->hasFunction(0x110480u)) {
        auto targetFn = runtime->lookupFunction(0x110480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B37Cu; }
        if (ctx->pc != 0x18B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B37Cu; }
        if (ctx->pc != 0x18B37Cu) { return; }
    }
    ctx->pc = 0x18B37Cu;
label_18b37c:
    // 0x18b37c: 0x0  nop
    ctx->pc = 0x18b37cu;
    // NOP
    // 0x18b380: 0x0  nop
    ctx->pc = 0x18b380u;
    // NOP
    // 0x18b384: 0x0  nop
    ctx->pc = 0x18b384u;
    // NOP
    // 0x18b388: 0x0  nop
    ctx->pc = 0x18b388u;
    // NOP
    // 0x18b38c: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B38Cu;
    {
        const bool branch_taken_0x18b38c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18b38c) {
            ctx->pc = 0x18B370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b370;
        }
    }
    ctx->pc = 0x18B394u;
    // 0x18b394: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b39c: 0xac313670  sw          $s1, 0x3670($at)
    ctx->pc = 0x18b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13936), GPR_U32(ctx, 17));
label_18b3a0:
    // 0x18b3a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b3a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18B3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3ACu;
            // 0x18b3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B3B4u;
}
