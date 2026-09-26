#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMenuBGM__12CMenuKeyFuncFv
// Address: 0x23ef60 - 0x23effc
void StepMenuBGM__12CMenuKeyFuncFv_0x23ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMenuBGM__12CMenuKeyFuncFv_0x23ef60");
#endif

    switch (ctx->pc) {
        case 0x23ef88u: goto label_23ef88;
        case 0x23efd4u: goto label_23efd4;
        default: break;
    }

    ctx->pc = 0x23ef60u;

    // 0x23ef60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ef64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ef68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ef6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ef70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ef74: 0x8483015a  lh          $v1, 0x15A($a0)
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x23ef78: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23EF78u;
    {
        const bool branch_taken_0x23ef78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF78u;
            // 0x23ef7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef78) {
            ctx->pc = 0x23EFE4u;
            goto label_23efe4;
        }
    }
    ctx->pc = 0x23EF80u;
    // 0x23ef80: 0xc0a98d4  jal         func_2A6350
    ctx->pc = 0x23EF80u;
    SET_GPR_U32(ctx, 31, 0x23EF88u);
    ctx->pc = 0x23EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF80u;
            // 0x23ef84: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6350u;
    if (runtime->hasFunction(0x2A6350u)) {
        auto targetFn = runtime->lookupFunction(0x2A6350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF88u; }
        if (ctx->pc != 0x23EF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVolBGM__6CSceneFv_0x2a6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF88u; }
        if (ctx->pc != 0x23EF88u) { return; }
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x23ef8c: 0x86030158  lh          $v1, 0x158($s0)
    ctx->pc = 0x23ef8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x23ef90: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ef94: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x23ef94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23ef98: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EF98u;
    {
        const bool branch_taken_0x23ef98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef98) {
            ctx->pc = 0x23EFACu;
            goto label_23efac;
        }
    }
    ctx->pc = 0x23EFA0u;
    // 0x23efa0: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23EFA0u;
    {
        const bool branch_taken_0x23efa0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x23efa0) {
            ctx->pc = 0x23EFACu;
            goto label_23efac;
        }
    }
    ctx->pc = 0x23EFA8u;
    // 0x23efa8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23efa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23efac:
    // 0x23efac: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x23efb0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x23efb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23efb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EFBCu;
    // 0x23efbc: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23EFBCu;
    {
        const bool branch_taken_0x23efbc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x23efbc) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EFC4u;
    // 0x23efc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23efc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23efc8:
    // 0x23efc8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x23efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x23efcc: 0xc0a98b8  jal         func_2A62E0
    ctx->pc = 0x23EFCCu;
    SET_GPR_U32(ctx, 31, 0x23EFD4u);
    ctx->pc = 0x23EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFCCu;
            // 0x23efd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A62E0u;
    if (runtime->hasFunction(0x2A62E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A62E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EFD4u; }
        if (ctx->pc != 0x23EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolBGM__6CSceneFi_0x2a62e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EFD4u; }
        if (ctx->pc != 0x23EFD4u) { return; }
    }
    ctx->pc = 0x23EFD4u;
label_23efd4:
    // 0x23efd4: 0x86020158  lh          $v0, 0x158($s0)
    ctx->pc = 0x23efd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x23efd8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23EFD8u;
    {
        const bool branch_taken_0x23efd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23efd8) {
            ctx->pc = 0x23EFE4u;
            goto label_23efe4;
        }
    }
    ctx->pc = 0x23EFE0u;
    // 0x23efe0: 0xa600015a  sh          $zero, 0x15A($s0)
    ctx->pc = 0x23efe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 0));
label_23efe4:
    // 0x23efe4: 0x8602015a  lh          $v0, 0x15A($s0)
    ctx->pc = 0x23efe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x23efe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23efec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23eff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23eff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23eff4: 0x3e00008  jr          $ra
    ctx->pc = 0x23EFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFF4u;
            // 0x23eff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EFFCu;
}
