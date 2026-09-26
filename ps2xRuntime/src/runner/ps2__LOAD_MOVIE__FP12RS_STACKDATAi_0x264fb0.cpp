#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MOVIE__FP12RS_STACKDATAi
// Address: 0x264fb0 - 0x26502c
void ps2__LOAD_MOVIE__FP12RS_STACKDATAi_0x264fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MOVIE__FP12RS_STACKDATAi_0x264fb0");
#endif

    switch (ctx->pc) {
        case 0x264fd0u: goto label_264fd0;
        case 0x264fe0u: goto label_264fe0;
        case 0x264fecu: goto label_264fec;
        case 0x265004u: goto label_265004;
        case 0x265014u: goto label_265014;
        default: break;
    }

    ctx->pc = 0x264fb0u;

    // 0x264fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264fc0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x264fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x264fc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x264fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264FC8u;
    SET_GPR_U32(ctx, 31, 0x264FD0u);
    ctx->pc = 0x264FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264FC8u;
            // 0x264fcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FD0u; }
        if (ctx->pc != 0x264FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FD0u; }
        if (ctx->pc != 0x264FD0u) { return; }
    }
    ctx->pc = 0x264FD0u;
label_264fd0:
    // 0x264fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fd8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x264FD8u;
    SET_GPR_U32(ctx, 31, 0x264FE0u);
    ctx->pc = 0x264FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264FD8u;
            // 0x264fdc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FE0u; }
        if (ctx->pc != 0x264FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FE0u; }
        if (ctx->pc != 0x264FE0u) { return; }
    }
    ctx->pc = 0x264FE0u;
label_264fe0:
    // 0x264fe0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x264fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264fe4: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x264FE4u;
    SET_GPR_U32(ctx, 31, 0x264FECu);
    ctx->pc = 0x264FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264FE4u;
            // 0x264fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FECu; }
        if (ctx->pc != 0x264FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FECu; }
        if (ctx->pc != 0x264FECu) { return; }
    }
    ctx->pc = 0x264FECu;
label_264fec:
    // 0x264fec: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x264fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x264ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ff4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264FF4u;
    {
        const bool branch_taken_0x264ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264FF4u;
            // 0x264ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ff4) {
            ctx->pc = 0x265004u;
            goto label_265004;
        }
    }
    ctx->pc = 0x264FFCu;
    // 0x264ffc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264FFCu;
    SET_GPR_U32(ctx, 31, 0x265004u);
    ctx->pc = 0x265000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264FFCu;
            // 0x265000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265004u; }
        if (ctx->pc != 0x265004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265004u; }
        if (ctx->pc != 0x265004u) { return; }
    }
    ctx->pc = 0x265004u;
label_265004:
    // 0x265004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26500c: 0xc0991ec  jal         func_2647B0
    ctx->pc = 0x26500Cu;
    SET_GPR_U32(ctx, 31, 0x265014u);
    ctx->pc = 0x265010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26500Cu;
            // 0x265010: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2647B0u;
    if (runtime->hasFunction(0x2647B0u)) {
        auto targetFn = runtime->lookupFunction(0x2647B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265014u; }
        if (ctx->pc != 0x265014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMovie__FPcP9mgCMemoryb_0x2647b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265014u; }
        if (ctx->pc != 0x265014u) { return; }
    }
    ctx->pc = 0x265014u;
label_265014:
    // 0x265014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x265014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26501c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26501cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265024: 0x3e00008  jr          $ra
    ctx->pc = 0x265024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265024u;
            // 0x265028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26502Cu;
}
