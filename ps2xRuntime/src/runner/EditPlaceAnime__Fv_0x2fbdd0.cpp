#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPlaceAnime__Fv
// Address: 0x2fbdd0 - 0x2fbe1c
void EditPlaceAnime__Fv_0x2fbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPlaceAnime__Fv_0x2fbdd0");
#endif

    switch (ctx->pc) {
        case 0x2fbde8u: goto label_2fbde8;
        case 0x2fbdf8u: goto label_2fbdf8;
        default: break;
    }

    ctx->pc = 0x2fbdd0u;

    // 0x2fbdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fbdd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fbdd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fbddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fbde0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fbde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbde4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fbde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbde8:
    // 0x2fbde8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2fbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2fbdec: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x2fbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x2fbdf0: 0xc0befb0  jal         func_2FBEC0
    ctx->pc = 0x2FBDF0u;
    SET_GPR_U32(ctx, 31, 0x2FBDF8u);
    ctx->pc = 0x2FBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDF0u;
            // 0x2fbdf4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FBEC0u;
    if (runtime->hasFunction(0x2FBEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBDF8u; }
        if (ctx->pc != 0x2FBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CPlaceAnimeFv_0x2fbec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBDF8u; }
        if (ctx->pc != 0x2FBDF8u) { return; }
    }
    ctx->pc = 0x2FBDF8u;
label_2fbdf8:
    // 0x2fbdf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fbdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbdfc: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x2fbdfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fbe00: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FBE00u;
    {
        const bool branch_taken_0x2fbe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE00u;
            // 0x2fbe04: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe00) {
            ctx->pc = 0x2FBDE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbde8;
        }
    }
    ctx->pc = 0x2FBE08u;
    // 0x2fbe08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbe0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbe0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbe10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe14: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE14u;
            // 0x2fbe18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBE1Cu;
}
