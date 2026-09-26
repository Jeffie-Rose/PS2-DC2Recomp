#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_CREATE__FP12RS_STACKDATAi
// Address: 0x2d1d00 - 0x2d1dbc
void ps2__ESM_CREATE__FP12RS_STACKDATAi_0x2d1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_CREATE__FP12RS_STACKDATAi_0x2d1d00");
#endif

    switch (ctx->pc) {
        case 0x2d1d30u: goto label_2d1d30;
        case 0x2d1d68u: goto label_2d1d68;
        case 0x2d1d88u: goto label_2d1d88;
        case 0x2d1da8u: goto label_2d1da8;
        default: break;
    }

    ctx->pc = 0x2d1d00u;

    // 0x2d1d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1d04: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1d10: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1d14: 0x8c4207dc  lw          $v0, 0x7DC($v0)
    ctx->pc = 0x2d1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1d18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1D18u;
    {
        const bool branch_taken_0x2d1d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D18u;
            // 0x2d1d1c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d18) {
            ctx->pc = 0x2D1D28u;
            goto label_2d1d28;
        }
    }
    ctx->pc = 0x2D1D20u;
    // 0x2d1d20: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D1D20u;
    {
        const bool branch_taken_0x2d1d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D20u;
            // 0x2d1d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d20) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1D28u;
label_2d1d28:
    // 0x2d1d28: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2D1D28u;
    SET_GPR_U32(ctx, 31, 0x2D1D30u);
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D30u; }
        if (ctx->pc != 0x2D1D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D30u; }
        if (ctx->pc != 0x2D1D30u) { return; }
    }
    ctx->pc = 0x2D1D30u;
label_2d1d30:
    // 0x2d1d30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1d34: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1D34u;
    {
        const bool branch_taken_0x2d1d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D34u;
            // 0x2d1d38: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d34) {
            ctx->pc = 0x2D1D70u;
            goto label_2d1d70;
        }
    }
    ctx->pc = 0x2D1D3Cu;
    // 0x2d1d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1d40: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1D40u;
    {
        const bool branch_taken_0x2d1d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D40u;
            // 0x2d1d44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d40) {
            ctx->pc = 0x2D1D50u;
            goto label_2d1d50;
        }
    }
    ctx->pc = 0x2D1D48u;
    // 0x2d1d48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1D48u;
    {
        const bool branch_taken_0x2d1d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D48u;
            // 0x2d1d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d48) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1D50u;
label_2d1d50:
    // 0x2d1d50: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1d54: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d5c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1d60: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D1D60u;
    SET_GPR_U32(ctx, 31, 0x2D1D68u);
    ctx->pc = 0x2D1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D60u;
            // 0x2d1d64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D68u; }
        if (ctx->pc != 0x2D1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D68u; }
        if (ctx->pc != 0x2D1D68u) { return; }
    }
    ctx->pc = 0x2D1D68u;
label_2d1d68:
    // 0x2d1d68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D1D68u;
    {
        const bool branch_taken_0x2d1d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d68) {
            ctx->pc = 0x2D1DA8u;
            goto label_2d1da8;
        }
    }
    ctx->pc = 0x2D1D70u;
label_2d1d70:
    // 0x2d1d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d74: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d7c: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1d80: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D1D80u;
    SET_GPR_U32(ctx, 31, 0x2D1D88u);
    ctx->pc = 0x2D1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D80u;
            // 0x2d1d84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D88u; }
        if (ctx->pc != 0x2D1D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1D88u; }
        if (ctx->pc != 0x2D1D88u) { return; }
    }
    ctx->pc = 0x2D1D88u;
label_2d1d88:
    // 0x2d1d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d8c: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x2d1d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d1d90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1D90u;
    {
        const bool branch_taken_0x2d1d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D90u;
            // 0x2d1d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d90) {
            ctx->pc = 0x2D1DA0u;
            goto label_2d1da0;
        }
    }
    ctx->pc = 0x2D1D98u;
    // 0x2d1d98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1D98u;
    {
        const bool branch_taken_0x2d1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1D98u;
            // 0x2d1d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d98) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1DA0u;
label_2d1da0:
    // 0x2d1da0: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D1DA0u;
    SET_GPR_U32(ctx, 31, 0x2D1DA8u);
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DA8u; }
        if (ctx->pc != 0x2D1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DA8u; }
        if (ctx->pc != 0x2D1DA8u) { return; }
    }
    ctx->pc = 0x2D1DA8u;
label_2d1da8:
    // 0x2d1da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1dac:
    // 0x2d1dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DB4u;
            // 0x2d1db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1DBCu;
}
