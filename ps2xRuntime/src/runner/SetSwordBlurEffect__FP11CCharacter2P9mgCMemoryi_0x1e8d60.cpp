#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi
// Address: 0x1e8d60 - 0x1e8e30
void SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60");
#endif

    switch (ctx->pc) {
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8e18u: goto label_1e8e18;
        default: break;
    }

    ctx->pc = 0x1e8d60u;

    // 0x1e8d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8d64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e8d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e8d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8d70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8d7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d84: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E8D84u;
    SET_GPR_U32(ctx, 31, 0x1E8D8Cu);
    ctx->pc = 0x1E8D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D84u;
            // 0x1e8d88: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D8Cu; }
        if (ctx->pc != 0x1E8D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D8Cu; }
        if (ctx->pc != 0x1E8D8Cu) { return; }
    }
    ctx->pc = 0x1E8D8Cu;
label_1e8d8c:
    // 0x1e8d8c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1e8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1e8d90: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1E8D90u;
    SET_GPR_U32(ctx, 31, 0x1E8D98u);
    ctx->pc = 0x1E8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D90u;
            // 0x1e8d94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D98u; }
        if (ctx->pc != 0x1E8D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D98u; }
        if (ctx->pc != 0x1E8D98u) { return; }
    }
    ctx->pc = 0x1E8D98u;
label_1e8d98:
    // 0x1e8d98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8D98u;
    {
        const bool branch_taken_0x1e8d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D98u;
            // 0x1e8d9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d98) {
            ctx->pc = 0x1E8DC0u;
            goto label_1e8dc0;
        }
    }
    ctx->pc = 0x1E8DA0u;
    // 0x1e8da0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1e8da4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1e8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1e8da8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1e8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1e8dac: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1e8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1e8db0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1e8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1e8db4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1e8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1e8db8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1e8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1e8dbc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1e8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_1e8dc0:
    // 0x1e8dc0: 0xae420570  sw          $v0, 0x570($s2)
    ctx->pc = 0x1e8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1392), GPR_U32(ctx, 2));
    // 0x1e8dc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dc8: 0x8e440570  lw          $a0, 0x570($s2)
    ctx->pc = 0x1e8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    // 0x1e8dcc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1e8dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8dd0: 0xc0bd7ac  jal         func_2F5EB0
    ctx->pc = 0x1E8DD0u;
    SET_GPR_U32(ctx, 31, 0x1E8DD8u);
    ctx->pc = 0x1E8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DD0u;
            // 0x1e8dd4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EB0u;
    if (runtime->hasFunction(0x2F5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DD8u; }
        if (ctx->pc != 0x1E8DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17CSWordAfterEffectFP9mgCMemoryii_0x2f5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DD8u; }
        if (ctx->pc != 0x1E8DD8u) { return; }
    }
    ctx->pc = 0x1E8DD8u;
label_1e8dd8:
    // 0x1e8dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ddc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8DDCu;
    {
        const bool branch_taken_0x1e8ddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DDCu;
            // 0x1e8de0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ddc) {
            ctx->pc = 0x1E8DECu;
            goto label_1e8dec;
        }
    }
    ctx->pc = 0x1E8DE4u;
    // 0x1e8de4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8dec:
    // 0x1e8dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8df0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8DF0u;
    {
        const bool branch_taken_0x1e8df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8df0) {
            ctx->pc = 0x1E8E00u;
            goto label_1e8e00;
        }
    }
    ctx->pc = 0x1E8DF8u;
    // 0x1e8df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e00:
    // 0x1e8e00: 0x8e440570  lw          $a0, 0x570($s2)
    ctx->pc = 0x1e8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    // 0x1e8e04: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1e8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1e8e08: 0x8f868e9c  lw          $a2, -0x7164($gp)
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
    // 0x1e8e0c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8e10: 0xc0bd720  jal         func_2F5C80
    ctx->pc = 0x1E8E10u;
    SET_GPR_U32(ctx, 31, 0x1E8E18u);
    ctx->pc = 0x1E8E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E10u;
            // 0x1e8e14: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C80u;
    if (runtime->hasFunction(0x2F5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2F5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E18u; }
        if (ctx->pc != 0x1E8E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii_0x2f5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E18u; }
        if (ctx->pc != 0x1E8E18u) { return; }
    }
    ctx->pc = 0x1E8E18u;
label_1e8e18:
    // 0x1e8e18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8e1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E28u;
            // 0x1e8e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8E30u;
}
