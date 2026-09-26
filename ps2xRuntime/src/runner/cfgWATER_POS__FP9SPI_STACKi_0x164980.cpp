#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_POS__FP9SPI_STACKi
// Address: 0x164980 - 0x1649c8
void cfgWATER_POS__FP9SPI_STACKi_0x164980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_POS__FP9SPI_STACKi_0x164980");
#endif

    switch (ctx->pc) {
        case 0x164980u: goto label_164980;
        case 0x164984u: goto label_164984;
        case 0x164988u: goto label_164988;
        case 0x16498cu: goto label_16498c;
        case 0x164990u: goto label_164990;
        case 0x164994u: goto label_164994;
        case 0x164998u: goto label_164998;
        case 0x16499cu: goto label_16499c;
        case 0x1649a0u: goto label_1649a0;
        case 0x1649a4u: goto label_1649a4;
        case 0x1649a8u: goto label_1649a8;
        case 0x1649acu: goto label_1649ac;
        case 0x1649b0u: goto label_1649b0;
        case 0x1649b4u: goto label_1649b4;
        case 0x1649b8u: goto label_1649b8;
        case 0x1649bcu: goto label_1649bc;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649c4u: goto label_1649c4;
        default: break;
    }

    ctx->pc = 0x164980u;

label_164980:
    // 0x164980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_164984:
    // 0x164984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164988:
    // 0x164988: 0x8f828958  lw          $v0, -0x76A8($gp)
    ctx->pc = 0x164988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
label_16498c:
    // 0x16498c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_164990:
    if (ctx->pc == 0x164990u) {
        ctx->pc = 0x164990u;
            // 0x164990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164994u;
        goto label_164994;
    }
    ctx->pc = 0x16498Cu;
    {
        const bool branch_taken_0x16498c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16498Cu;
            // 0x164990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16498c) {
            ctx->pc = 0x16499Cu;
            goto label_16499c;
        }
    }
    ctx->pc = 0x164994u;
label_164994:
    // 0x164994: 0x10000009  b           . + 4 + (0x9 << 2)
label_164998:
    if (ctx->pc == 0x164998u) {
        ctx->pc = 0x164998u;
            // 0x164998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16499Cu;
        goto label_16499c;
    }
    ctx->pc = 0x164994u;
    {
        const bool branch_taken_0x164994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164994u;
            // 0x164998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164994) {
            ctx->pc = 0x1649BCu;
            goto label_1649bc;
        }
    }
    ctx->pc = 0x16499Cu;
label_16499c:
    // 0x16499c: 0xc051928  jal         func_1464A0
label_1649a0:
    if (ctx->pc == 0x1649A0u) {
        ctx->pc = 0x1649A0u;
            // 0x1649a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1649A4u;
        goto label_1649a4;
    }
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16499Cu;
            // 0x1649a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649A4u; }
        if (ctx->pc != 0x1649A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649A4u; }
        if (ctx->pc != 0x1649A4u) { return; }
    }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0x8f848958  lw          $a0, -0x76A8($gp)
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
label_1649a8:
    // 0x1649a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1649ac:
    // 0x1649ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1649b0:
    // 0x1649b0: 0x320f809  jalr        $t9
label_1649b4:
    if (ctx->pc == 0x1649B4u) {
        ctx->pc = 0x1649B4u;
            // 0x1649b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1649B8u;
        goto label_1649b8;
    }
    ctx->pc = 0x1649B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1649B8u);
        ctx->pc = 0x1649B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1649B0u;
            // 0x1649b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1649B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1649B8u; }
            if (ctx->pc != 0x1649B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1649B8u;
label_1649b8:
    // 0x1649b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1649bc:
    // 0x1649bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1649c0:
    // 0x1649c0: 0x3e00008  jr          $ra
label_1649c4:
    if (ctx->pc == 0x1649C4u) {
        ctx->pc = 0x1649C4u;
            // 0x1649c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1649C8u;
        goto label_fallthrough_0x1649c0;
    }
    ctx->pc = 0x1649C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1649C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1649C0u;
            // 0x1649c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1649c0:
    ctx->pc = 0x1649C8u;
}
