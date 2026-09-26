#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCostume__16CUserDataManagerFi
// Address: 0x19eb90 - 0x19ebe4
void GetCostume__16CUserDataManagerFi_0x19eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCostume__16CUserDataManagerFi_0x19eb90");
#endif

    switch (ctx->pc) {
        case 0x19eba8u: goto label_19eba8;
        default: break;
    }

    ctx->pc = 0x19eb90u;

    // 0x19eb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19eb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19eb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19eb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eba0: 0xc0bd510  jal         func_2F5440
    ctx->pc = 0x19EBA0u;
    SET_GPR_U32(ctx, 31, 0x19EBA8u);
    ctx->pc = 0x19EBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBA0u;
            // 0x19eba4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5440u;
    if (runtime->hasFunction(0x2F5440u)) {
        auto targetFn = runtime->lookupFunction(0x2F5440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBA8u; }
        if (ctx->pc != 0x19EBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCosInfo__Fi_0x2f5440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBA8u; }
        if (ctx->pc != 0x19EBA8u) { return; }
    }
    ctx->pc = 0x19EBA8u;
label_19eba8:
    // 0x19eba8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19EBA8u;
    {
        const bool branch_taken_0x19eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBA8u;
            // 0x19ebac: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eba8) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBB0u;
    // 0x19ebb0: 0x80450002  lb          $a1, 0x2($v0)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19ebb4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x19ebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x19ebb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ebbc: 0xdc235598  ld          $v1, 0x5598($at)
    ctx->pc = 0x19ebbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 21912)));
    // 0x19ebc0: 0xa42014  dsllv       $a0, $a0, $a1
    ctx->pc = 0x19ebc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x19ebc4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ebc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19ebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19ebcc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x19ebd0: 0xfc235598  sd          $v1, 0x5598($at)
    ctx->pc = 0x19ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 21912), GPR_U64(ctx, 3));
label_19ebd4:
    // 0x19ebd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ebd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ebd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ebdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19EBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBDCu;
            // 0x19ebe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EBE4u;
}
