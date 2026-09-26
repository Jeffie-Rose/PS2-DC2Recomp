#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllNoteOff__9sndCSeSeqFv
// Address: 0x18bdd0 - 0x18be1c
void AllNoteOff__9sndCSeSeqFv_0x18bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllNoteOff__9sndCSeSeqFv_0x18bdd0");
#endif

    switch (ctx->pc) {
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf4u: goto label_18bdf4;
        default: break;
    }

    ctx->pc = 0x18bdd0u;

    // 0x18bdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bdd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18bdd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bde4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18BDE4u;
    {
        const bool branch_taken_0x18bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDE4u;
            // 0x18bde8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bde4) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BDECu;
label_18bdec:
    // 0x18bdec: 0xc062f88  jal         func_18BE20
    ctx->pc = 0x18BDECu;
    SET_GPR_U32(ctx, 31, 0x18BDF4u);
    ctx->pc = 0x18BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDECu;
            // 0x18bdf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BE20u;
    if (runtime->hasFunction(0x18BE20u)) {
        auto targetFn = runtime->lookupFunction(0x18BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF4u; }
        if (ctx->pc != 0x18BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TrackNoteOff__9sndCSeSeqFi_0x18be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF4u; }
        if (ctx->pc != 0x18BDF4u) { return; }
    }
    ctx->pc = 0x18BDF4u;
label_18bdf4:
    // 0x18bdf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18bdf8:
    // 0x18bdf8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x18bdfc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18bdfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18be00: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18BE00u;
    {
        const bool branch_taken_0x18be00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE00u;
            // 0x18be04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be00) {
            ctx->pc = 0x18BDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18bdec;
        }
    }
    ctx->pc = 0x18BE08u;
    // 0x18be08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18be08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18be0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18be0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18be10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18be10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be14: 0x3e00008  jr          $ra
    ctx->pc = 0x18BE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE14u;
            // 0x18be18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BE1Cu;
}
