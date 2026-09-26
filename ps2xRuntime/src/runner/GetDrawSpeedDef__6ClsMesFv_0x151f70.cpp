#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDrawSpeedDef__6ClsMesFv
// Address: 0x151f70 - 0x151fd0
void GetDrawSpeedDef__6ClsMesFv_0x151f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawSpeedDef__6ClsMesFv_0x151f70");
#endif

    switch (ctx->pc) {
        case 0x151f84u: goto label_151f84;
        default: break;
    }

    ctx->pc = 0x151f70u;

    // 0x151f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151f7c: 0xc064220  jal         func_190880
    ctx->pc = 0x151F7Cu;
    SET_GPR_U32(ctx, 31, 0x151F84u);
    ctx->pc = 0x151F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F7Cu;
            // 0x151f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F84u; }
        if (ctx->pc != 0x151F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F84u; }
        if (ctx->pc != 0x151F84u) { return; }
    }
    ctx->pc = 0x151F84u;
label_151f84:
    // 0x151f84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x151F84u;
    {
        const bool branch_taken_0x151f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F84u;
            // 0x151f88: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f84) {
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151F8Cu;
    // 0x151f8c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x151f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x151f90: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x151f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151F94u;
    {
        const bool branch_taken_0x151f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f94) {
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151F9Cu;
    // 0x151f9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151fa4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151FA4u;
    {
        const bool branch_taken_0x151fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151fa4) {
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151FACu;
    // 0x151fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151FB0u;
    {
        const bool branch_taken_0x151fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FB0u;
            // 0x151fb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fb0) {
            ctx->pc = 0x151FC4u;
            goto label_151fc4;
        }
    }
    ctx->pc = 0x151FB8u;
label_151fb8:
    // 0x151fb8: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x151fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fbc: 0x0  nop
    ctx->pc = 0x151fbcu;
    // NOP
    // 0x151fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_151fc4:
    // 0x151fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x151FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FC8u;
            // 0x151fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151FD0u;
}
