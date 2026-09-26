#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPackFileNum__FPUi
// Address: 0x149f70 - 0x149fc8
void GetPackFileNum__FPUi_0x149f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPackFileNum__FPUi_0x149f70");
#endif

    switch (ctx->pc) {
        case 0x149f88u: goto label_149f88;
        case 0x149f9cu: goto label_149f9c;
        default: break;
    }

    ctx->pc = 0x149f70u;

    // 0x149f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x149f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149f88:
    // 0x149f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f90: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x149f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x149f94: 0xc052770  jal         func_149DC0
    ctx->pc = 0x149F94u;
    SET_GPR_U32(ctx, 31, 0x149F9Cu);
    ctx->pc = 0x149F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F94u;
            // 0x149f98: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DC0u;
    if (runtime->hasFunction(0x149DC0u)) {
        auto targetFn = runtime->lookupFunction(0x149DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F9Cu; }
        if (ctx->pc != 0x149F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiiPPcPi_0x149dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F9Cu; }
        if (ctx->pc != 0x149F9Cu) { return; }
    }
    ctx->pc = 0x149F9Cu;
label_149f9c:
    // 0x149f9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149F9Cu;
    {
        const bool branch_taken_0x149f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f9c) {
            ctx->pc = 0x149FACu;
            goto label_149fac;
        }
    }
    ctx->pc = 0x149FA4u;
    // 0x149fa4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x149FA4u;
    {
        const bool branch_taken_0x149fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FA4u;
            // 0x149fa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fa4) {
            ctx->pc = 0x149F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149f88;
        }
    }
    ctx->pc = 0x149FACu;
label_149fac:
    // 0x149fac: 0x0  nop
    ctx->pc = 0x149facu;
    // NOP
    // 0x149fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x149FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FC0u;
            // 0x149fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149FC8u;
}
