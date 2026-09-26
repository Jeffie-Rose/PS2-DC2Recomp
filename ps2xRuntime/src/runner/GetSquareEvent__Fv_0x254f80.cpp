#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSquareEvent__Fv
// Address: 0x254f80 - 0x254fd4
void GetSquareEvent__Fv_0x254f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSquareEvent__Fv_0x254f80");
#endif

    switch (ctx->pc) {
        case 0x254f90u: goto label_254f90;
        case 0x254facu: goto label_254fac;
        case 0x254fc4u: goto label_254fc4;
        default: break;
    }

    ctx->pc = 0x254f80u;

    // 0x254f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254f88: 0xc064220  jal         func_190880
    ctx->pc = 0x254F88u;
    SET_GPR_U32(ctx, 31, 0x254F90u);
    ctx->pc = 0x254F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254F88u;
            // 0x254f8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254F90u; }
        if (ctx->pc != 0x254F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254F90u; }
        if (ctx->pc != 0x254F90u) { return; }
    }
    ctx->pc = 0x254F90u;
label_254f90:
    // 0x254f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254F94u;
    {
        const bool branch_taken_0x254f94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x254F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F94u;
            // 0x254f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f94) {
            ctx->pc = 0x254FA4u;
            goto label_254fa4;
        }
    }
    ctx->pc = 0x254F9Cu;
    // 0x254f9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x254F9Cu;
    {
        const bool branch_taken_0x254f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F9Cu;
            // 0x254fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f9c) {
            ctx->pc = 0x254FC4u;
            goto label_254fc4;
        }
    }
    ctx->pc = 0x254FA4u;
label_254fa4:
    // 0x254fa4: 0xc0bdab4  jal         func_2F6AD0
    ctx->pc = 0x254FA4u;
    SET_GPR_U32(ctx, 31, 0x254FACu);
    ctx->pc = 0x2F6AD0u;
    if (runtime->hasFunction(0x2F6AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FACu; }
        if (ctx->pc != 0x254FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowTourEvent__9CSaveDataFv_0x2f6ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FACu; }
        if (ctx->pc != 0x254FACu) { return; }
    }
    ctx->pc = 0x254FACu;
label_254fac:
    // 0x254fac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254FACu;
    {
        const bool branch_taken_0x254fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FACu;
            // 0x254fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fac) {
            ctx->pc = 0x254FBCu;
            goto label_254fbc;
        }
    }
    ctx->pc = 0x254FB4u;
    // 0x254fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254FB4u;
    {
        const bool branch_taken_0x254fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FB4u;
            // 0x254fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fb4) {
            ctx->pc = 0x254FC4u;
            goto label_254fc4;
        }
    }
    ctx->pc = 0x254FBCu;
label_254fbc:
    // 0x254fbc: 0xc0bdab8  jal         func_2F6AE0
    ctx->pc = 0x254FBCu;
    SET_GPR_U32(ctx, 31, 0x254FC4u);
    ctx->pc = 0x2F6AE0u;
    if (runtime->hasFunction(0x2F6AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FC4u; }
        if (ctx->pc != 0x254FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowTourType__9CSaveDataFv_0x2f6ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FC4u; }
        if (ctx->pc != 0x254FC4u) { return; }
    }
    ctx->pc = 0x254FC4u;
label_254fc4:
    // 0x254fc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x254FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FCCu;
            // 0x254fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254FD4u;
}
