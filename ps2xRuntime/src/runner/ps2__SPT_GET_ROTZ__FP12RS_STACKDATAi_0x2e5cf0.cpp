#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_GET_ROTZ__FP12RS_STACKDATAi
// Address: 0x2e5cf0 - 0x2e5d50
void ps2__SPT_GET_ROTZ__FP12RS_STACKDATAi_0x2e5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_GET_ROTZ__FP12RS_STACKDATAi_0x2e5cf0");
#endif

    switch (ctx->pc) {
        case 0x2e5d14u: goto label_2e5d14;
        case 0x2e5d20u: goto label_2e5d20;
        case 0x2e5d3cu: goto label_2e5d3c;
        default: break;
    }

    ctx->pc = 0x2e5cf0u;

    // 0x2e5cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5cfc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CFCu;
    {
        const bool branch_taken_0x2e5cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CFCu;
            // 0x2e5d00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cfc) {
            ctx->pc = 0x2E5D0Cu;
            goto label_2e5d0c;
        }
    }
    ctx->pc = 0x2E5D04u;
    // 0x2e5d04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E5D04u;
    {
        const bool branch_taken_0x2e5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D04u;
            // 0x2e5d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d04) {
            ctx->pc = 0x2E5D40u;
            goto label_2e5d40;
        }
    }
    ctx->pc = 0x2E5D0Cu;
label_2e5d0c:
    // 0x2e5d0c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5D0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D14u);
    ctx->pc = 0x2E5D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D0Cu;
            // 0x2e5d10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D14u; }
        if (ctx->pc != 0x2E5D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D14u; }
        if (ctx->pc != 0x2E5D14u) { return; }
    }
    ctx->pc = 0x2E5D14u;
label_2e5d14:
    // 0x2e5d14: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5d18: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5D18u;
    SET_GPR_U32(ctx, 31, 0x2E5D20u);
    ctx->pc = 0x2E5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D18u;
            // 0x2e5d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D20u; }
        if (ctx->pc != 0x2E5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D20u; }
        if (ctx->pc != 0x2E5D20u) { return; }
    }
    ctx->pc = 0x2E5D20u;
label_2e5d20:
    // 0x2e5d20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D20u;
    {
        const bool branch_taken_0x2e5d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d20) {
            ctx->pc = 0x2E5D30u;
            goto label_2e5d30;
        }
    }
    ctx->pc = 0x2E5D28u;
    // 0x2e5d28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5D28u;
    {
        const bool branch_taken_0x2e5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D28u;
            // 0x2e5d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d28) {
            ctx->pc = 0x2E5D40u;
            goto label_2e5d40;
        }
    }
    ctx->pc = 0x2E5D30u;
label_2e5d30:
    // 0x2e5d30: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x2e5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5d34: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5D34u;
    SET_GPR_U32(ctx, 31, 0x2E5D3Cu);
    ctx->pc = 0x2E5D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D34u;
            // 0x2e5d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D3Cu; }
        if (ctx->pc != 0x2E5D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D3Cu; }
        if (ctx->pc != 0x2E5D3Cu) { return; }
    }
    ctx->pc = 0x2E5D3Cu;
label_2e5d3c:
    // 0x2e5d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5d40:
    // 0x2e5d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D48u;
            // 0x2e5d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5D50u;
}
