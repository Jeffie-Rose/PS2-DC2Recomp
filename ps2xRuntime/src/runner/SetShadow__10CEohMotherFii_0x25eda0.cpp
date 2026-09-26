#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShadow__10CEohMotherFii
// Address: 0x25eda0 - 0x25ee20
void SetShadow__10CEohMotherFii_0x25eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShadow__10CEohMotherFii_0x25eda0");
#endif

    switch (ctx->pc) {
        case 0x25edf4u: goto label_25edf4;
        case 0x25ee10u: goto label_25ee10;
        default: break;
    }

    ctx->pc = 0x25eda0u;

    // 0x25eda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25eda4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EDA4u;
    {
        const bool branch_taken_0x25eda4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDA4u;
            // 0x25eda8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eda4) {
            ctx->pc = 0x25EDB8u;
            goto label_25edb8;
        }
    }
    ctx->pc = 0x25EDACu;
    // 0x25edac: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25edacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25edb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EDB0u;
    {
        const bool branch_taken_0x25edb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDB0u;
            // 0x25edb4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edb0) {
            ctx->pc = 0x25EDC0u;
            goto label_25edc0;
        }
    }
    ctx->pc = 0x25EDB8u;
label_25edb8:
    // 0x25edb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25EDB8u;
    {
        const bool branch_taken_0x25edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDB8u;
            // 0x25edbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edb8) {
            ctx->pc = 0x25EE14u;
            goto label_25ee14;
        }
    }
    ctx->pc = 0x25EDC0u;
label_25edc0:
    // 0x25edc0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25edc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25edc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EDC8u;
    {
        const bool branch_taken_0x25edc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25edc8) {
            ctx->pc = 0x25EDD8u;
            goto label_25edd8;
        }
    }
    ctx->pc = 0x25EDD0u;
    // 0x25edd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25EDD0u;
    {
        const bool branch_taken_0x25edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDD0u;
            // 0x25edd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edd0) {
            ctx->pc = 0x25EE14u;
            goto label_25ee14;
        }
    }
    ctx->pc = 0x25EDD8u;
label_25edd8:
    // 0x25edd8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x25EDD8u;
    {
        const bool branch_taken_0x25edd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25edd8) {
            ctx->pc = 0x25EDFCu;
            goto label_25edfc;
        }
    }
    ctx->pc = 0x25EDE0u;
    // 0x25ede0: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x25ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25ede4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ede8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x25ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x25edec: 0xc0a11e0  jal         func_284780
    ctx->pc = 0x25EDECu;
    SET_GPR_U32(ctx, 31, 0x25EDF4u);
    ctx->pc = 0x25EDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDECu;
            // 0x25edf0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EDF4u; }
        if (ctx->pc != 0x25EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EDF4u; }
        if (ctx->pc != 0x25EDF4u) { return; }
    }
    ctx->pc = 0x25EDF4u;
label_25edf4:
    // 0x25edf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25EDF4u;
    {
        const bool branch_taken_0x25edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EDF4u;
            // 0x25edf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edf4) {
            ctx->pc = 0x25EE14u;
            goto label_25ee14;
        }
    }
    ctx->pc = 0x25EDFCu;
label_25edfc:
    // 0x25edfc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x25edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25ee00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ee04: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x25ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x25ee08: 0xc0a11d0  jal         func_284740
    ctx->pc = 0x25EE08u;
    SET_GPR_U32(ctx, 31, 0x25EE10u);
    ctx->pc = 0x25EE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE08u;
            // 0x25ee0c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EE10u; }
        if (ctx->pc != 0x25EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EE10u; }
        if (ctx->pc != 0x25EE10u) { return; }
    }
    ctx->pc = 0x25EE10u;
label_25ee10:
    // 0x25ee10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ee14:
    // 0x25ee14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee18: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EE18u;
            // 0x25ee1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25EE20u;
}
