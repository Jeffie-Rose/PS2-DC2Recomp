#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadBGMPack__6CSceneFiPUi
// Address: 0x2a7290 - 0x2a733c
void LoadBGMPack__6CSceneFiPUi_0x2a7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadBGMPack__6CSceneFiPUi_0x2a7290");
#endif

    switch (ctx->pc) {
        case 0x2a72b8u: goto label_2a72b8;
        case 0x2a72c8u: goto label_2a72c8;
        case 0x2a72e0u: goto label_2a72e0;
        case 0x2a72e8u: goto label_2a72e8;
        case 0x2a7300u: goto label_2a7300;
        default: break;
    }

    ctx->pc = 0x2a7290u;

    // 0x2a7290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a7298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a729c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a72a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a72a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a72a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a72a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a72acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72b0: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A72B0u;
    SET_GPR_U32(ctx, 31, 0x2A72B8u);
    ctx->pc = 0x2A72B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72B0u;
            // 0x2a72b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72B8u; }
        if (ctx->pc != 0x2A72B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72B8u; }
        if (ctx->pc != 0x2A72B8u) { return; }
    }
    ctx->pc = 0x2A72B8u;
label_2a72b8:
    // 0x2a72b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a72b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72c0: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x2A72C0u;
    SET_GPR_U32(ctx, 31, 0x2A72C8u);
    ctx->pc = 0x2A72C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72C0u;
            // 0x2a72c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72C8u; }
        if (ctx->pc != 0x2A72C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72C8u; }
        if (ctx->pc != 0x2A72C8u) { return; }
    }
    ctx->pc = 0x2A72C8u;
label_2a72c8:
    // 0x2a72c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A72C8u;
    {
        const bool branch_taken_0x2a72c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A72CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72C8u;
            // 0x2a72cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a72c8) {
            ctx->pc = 0x2A72D8u;
            goto label_2a72d8;
        }
    }
    ctx->pc = 0x2A72D0u;
    // 0x2a72d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A72D0u;
    {
        const bool branch_taken_0x2a72d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A72D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72D0u;
            // 0x2a72d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a72d0) {
            ctx->pc = 0x2A7320u;
            goto label_2a7320;
        }
    }
    ctx->pc = 0x2A72D8u;
label_2a72d8:
    // 0x2a72d8: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A72D8u;
    SET_GPR_U32(ctx, 31, 0x2A72E0u);
    ctx->pc = 0x2A72DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72D8u;
            // 0x2a72dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72E0u; }
        if (ctx->pc != 0x2A72E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72E0u; }
        if (ctx->pc != 0x2A72E0u) { return; }
    }
    ctx->pc = 0x2A72E0u;
label_2a72e0:
    // 0x2a72e0: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x2A72E0u;
    SET_GPR_U32(ctx, 31, 0x2A72E8u);
    ctx->pc = 0x2A72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72E0u;
            // 0x2a72e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72E8u; }
        if (ctx->pc != 0x2A72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72E8u; }
        if (ctx->pc != 0x2A72E8u) { return; }
    }
    ctx->pc = 0x2A72E8u;
label_2a72e8:
    // 0x2a72e8: 0xae000454  sw          $zero, 0x454($s0)
    ctx->pc = 0x2a72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 0));
    // 0x2a72ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a72ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72f0: 0xae00044c  sw          $zero, 0x44C($s0)
    ctx->pc = 0x2a72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
    // 0x2a72f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a72f8: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2A72F8u;
    SET_GPR_U32(ctx, 31, 0x2A7300u);
    ctx->pc = 0x2A72FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72F8u;
            // 0x2a72fc: 0x26060430  addiu       $a2, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7300u; }
        if (ctx->pc != 0x2A7300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7300u; }
        if (ctx->pc != 0x2A7300u) { return; }
    }
    ctx->pc = 0x2A7300u;
label_2a7300:
    // 0x2a7300: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a7300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a7304: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a7304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a7308: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7308u;
    {
        const bool branch_taken_0x2a7308 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7308u;
            // 0x2a730c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7308) {
            ctx->pc = 0x2A7318u;
            goto label_2a7318;
        }
    }
    ctx->pc = 0x2A7310u;
    // 0x2a7310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7310u;
    {
        const bool branch_taken_0x2a7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7310u;
            // 0x2a7314: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7310) {
            ctx->pc = 0x2A7324u;
            goto label_2a7324;
        }
    }
    ctx->pc = 0x2A7318u;
label_2a7318:
    // 0x2a7318: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2a7318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2a731c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7320:
    // 0x2a7320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a7320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a7324:
    // 0x2a7324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a7324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a732c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a732cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7334: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7334u;
            // 0x2a7338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A733Cu;
}
