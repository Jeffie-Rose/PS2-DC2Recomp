#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Preset__5CFontFi
// Address: 0x2d5c80 - 0x2d5d34
void Preset__5CFontFi_0x2d5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Preset__5CFontFi_0x2d5c80");
#endif

    switch (ctx->pc) {
        case 0x2d5cd4u: goto label_2d5cd4;
        case 0x2d5ce0u: goto label_2d5ce0;
        case 0x2d5cf8u: goto label_2d5cf8;
        case 0x2d5d04u: goto label_2d5d04;
        case 0x2d5d18u: goto label_2d5d18;
        case 0x2d5d24u: goto label_2d5d24;
        default: break;
    }

    ctx->pc = 0x2d5c80u;

    // 0x2d5c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5c84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d5c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5c90: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D5C90u;
    {
        const bool branch_taken_0x2d5c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C90u;
            // 0x2d5c94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c90) {
            ctx->pc = 0x2D5D0Cu;
            goto label_2d5d0c;
        }
    }
    ctx->pc = 0x2D5C98u;
    // 0x2d5c98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d5c9c: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D5C9Cu;
    {
        const bool branch_taken_0x2d5c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C9Cu;
            // 0x2d5ca0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c9c) {
            ctx->pc = 0x2D5CE8u;
            goto label_2d5ce8;
        }
    }
    ctx->pc = 0x2D5CA4u;
    // 0x2d5ca4: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5CA4u;
    {
        const bool branch_taken_0x2d5ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CA4u;
            // 0x2d5ca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ca4) {
            ctx->pc = 0x2D5CE8u;
            goto label_2d5ce8;
        }
    }
    ctx->pc = 0x2D5CACu;
    // 0x2d5cac: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5CACu;
    {
        const bool branch_taken_0x2d5cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5cac) {
            ctx->pc = 0x2D5CC4u;
            goto label_2d5cc4;
        }
    }
    ctx->pc = 0x2D5CB4u;
    // 0x2d5cb4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5CB4u;
    {
        const bool branch_taken_0x2d5cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5cb4) {
            ctx->pc = 0x2D5CC4u;
            goto label_2d5cc4;
        }
    }
    ctx->pc = 0x2D5CBCu;
    // 0x2d5cbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5CBCu;
    {
        const bool branch_taken_0x2d5cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CBCu;
            // 0x2d5cc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cbc) {
            ctx->pc = 0x2D5D28u;
            goto label_2d5d28;
        }
    }
    ctx->pc = 0x2D5CC4u;
label_2d5cc4:
    // 0x2d5cc4: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2d5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2d5cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ccc: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x2D5CCCu;
    SET_GPR_U32(ctx, 31, 0x2D5CD4u);
    ctx->pc = 0x2D5CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CCCu;
            // 0x2d5cd0: 0x34452020  ori         $a1, $v0, 0x2020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CD4u; }
        if (ctx->pc != 0x2D5CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CD4u; }
        if (ctx->pc != 0x2D5CD4u) { return; }
    }
    ctx->pc = 0x2D5CD4u;
label_2d5cd4:
    // 0x2d5cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cd8: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x2D5CD8u;
    SET_GPR_U32(ctx, 31, 0x2D5CE0u);
    ctx->pc = 0x2D5CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CD8u;
            // 0x2d5cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CE0u; }
        if (ctx->pc != 0x2D5CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CE0u; }
        if (ctx->pc != 0x2D5CE0u) { return; }
    }
    ctx->pc = 0x2D5CE0u;
label_2d5ce0:
    // 0x2d5ce0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5CE0u;
    {
        const bool branch_taken_0x2d5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ce0) {
            ctx->pc = 0x2D5D24u;
            goto label_2d5d24;
        }
    }
    ctx->pc = 0x2D5CE8u;
label_2d5ce8:
    // 0x2d5ce8: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x2d5cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cf0: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x2D5CF0u;
    SET_GPR_U32(ctx, 31, 0x2D5CF8u);
    ctx->pc = 0x2D5CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CF0u;
            // 0x2d5cf4: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CF8u; }
        if (ctx->pc != 0x2D5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CF8u; }
        if (ctx->pc != 0x2D5CF8u) { return; }
    }
    ctx->pc = 0x2D5CF8u;
label_2d5cf8:
    // 0x2d5cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cfc: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x2D5CFCu;
    SET_GPR_U32(ctx, 31, 0x2D5D04u);
    ctx->pc = 0x2D5D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CFCu;
            // 0x2d5d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D04u; }
        if (ctx->pc != 0x2D5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D04u; }
        if (ctx->pc != 0x2D5D04u) { return; }
    }
    ctx->pc = 0x2D5D04u;
label_2d5d04:
    // 0x2d5d04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5D04u;
    {
        const bool branch_taken_0x2d5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d04) {
            ctx->pc = 0x2D5D24u;
            goto label_2d5d24;
        }
    }
    ctx->pc = 0x2D5D0Cu;
label_2d5d0c:
    // 0x2d5d0c: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x2d5d10: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x2D5D10u;
    SET_GPR_U32(ctx, 31, 0x2D5D18u);
    ctx->pc = 0x2D5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D10u;
            // 0x2d5d14: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D18u; }
        if (ctx->pc != 0x2D5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D18u; }
        if (ctx->pc != 0x2D5D18u) { return; }
    }
    ctx->pc = 0x2D5D18u;
label_2d5d18:
    // 0x2d5d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d1c: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x2D5D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D5D24u);
    ctx->pc = 0x2D5D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D1Cu;
            // 0x2d5d20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D24u; }
        if (ctx->pc != 0x2D5D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D24u; }
        if (ctx->pc != 0x2D5D24u) { return; }
    }
    ctx->pc = 0x2D5D24u;
label_2d5d24:
    // 0x2d5d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5d28:
    // 0x2d5d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D2Cu;
            // 0x2d5d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5D34u;
}
