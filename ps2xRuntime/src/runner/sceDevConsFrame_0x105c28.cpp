#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsFrame
// Address: 0x105c28 - 0x105d8c
void sceDevConsFrame_0x105c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsFrame_0x105c28");
#endif

    switch (ctx->pc) {
        case 0x105c78u: goto label_105c78;
        case 0x105c90u: goto label_105c90;
        case 0x105ca8u: goto label_105ca8;
        case 0x105cc0u: goto label_105cc0;
        case 0x105cd0u: goto label_105cd0;
        case 0x105ce4u: goto label_105ce4;
        case 0x105d00u: goto label_105d00;
        case 0x105d28u: goto label_105d28;
        case 0x105d3cu: goto label_105d3c;
        case 0x105d58u: goto label_105d58;
        default: break;
    }

    ctx->pc = 0x105c28u;

    // 0x105c28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x105c2c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x105c30: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105c34: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x105c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x105c38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105c3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x105c3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c44: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105c48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105c4c: 0x2c7a821  addu        $s5, $s6, $a3
    ctx->pc = 0x105c4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x105c50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105c54: 0x248a021  addu        $s4, $s2, $t0
    ctx->pc = 0x105c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x105c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105c60: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x105c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x105c64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105c68: 0x240700f9  addiu       $a3, $zero, 0xF9
    ctx->pc = 0x105c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x105c6c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x105c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x105c70: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105C70u;
    SET_GPR_U32(ctx, 31, 0x105C78u);
    ctx->pc = 0x105C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C70u;
            // 0x105c74: 0x26d00001  addiu       $s0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C78u; }
        if (ctx->pc != 0x105C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C78u; }
        if (ctx->pc != 0x105C78u) { return; }
    }
    ctx->pc = 0x105C78u;
label_105c78:
    // 0x105c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x105c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c84: 0x240700f5  addiu       $a3, $zero, 0xF5
    ctx->pc = 0x105c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x105c88: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105C88u;
    SET_GPR_U32(ctx, 31, 0x105C90u);
    ctx->pc = 0x105C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C88u;
            // 0x105c8c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C90u; }
        if (ctx->pc != 0x105C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C90u; }
        if (ctx->pc != 0x105C90u) { return; }
    }
    ctx->pc = 0x105C90u;
label_105c90:
    // 0x105c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x105c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x105c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c9c: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x105c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x105ca0: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105CA0u;
    SET_GPR_U32(ctx, 31, 0x105CA8u);
    ctx->pc = 0x105CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CA0u;
            // 0x105ca4: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CA8u; }
        if (ctx->pc != 0x105CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CA8u; }
        if (ctx->pc != 0x105CA8u) { return; }
    }
    ctx->pc = 0x105CA8u;
label_105ca8:
    // 0x105ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x105cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x105cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cb4: 0x240700f6  addiu       $a3, $zero, 0xF6
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x105cb8: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105CB8u;
    SET_GPR_U32(ctx, 31, 0x105CC0u);
    ctx->pc = 0x105CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CB8u;
            // 0x105cbc: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CC0u; }
        if (ctx->pc != 0x105CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CC0u; }
        if (ctx->pc != 0x105CC0u) { return; }
    }
    ctx->pc = 0x105CC0u;
label_105cc0:
    // 0x105cc0: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x105cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x105cc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x105CC4u;
    {
        const bool branch_taken_0x105cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105CC4u;
            // 0x105cc8: 0x26530001  addiu       $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cc4) {
            ctx->pc = 0x105D14u;
            goto label_105d14;
        }
    }
    ctx->pc = 0x105CCCu;
    // 0x105ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105cd0:
    // 0x105cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cd8: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x105cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x105cdc: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105CDCu;
    SET_GPR_U32(ctx, 31, 0x105CE4u);
    ctx->pc = 0x105CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CDCu;
            // 0x105ce0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CE4u; }
        if (ctx->pc != 0x105CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CE4u; }
        if (ctx->pc != 0x105CE4u) { return; }
    }
    ctx->pc = 0x105CE4u;
label_105ce4:
    // 0x105ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x105cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cf0: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x105cf4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x105cf8: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105CF8u;
    SET_GPR_U32(ctx, 31, 0x105D00u);
    ctx->pc = 0x105CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CF8u;
            // 0x105cfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D00u; }
        if (ctx->pc != 0x105D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D00u; }
        if (ctx->pc != 0x105D00u) { return; }
    }
    ctx->pc = 0x105D00u;
label_105d00:
    // 0x105d00: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x105d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x105d04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x105D04u;
    {
        const bool branch_taken_0x105d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D04u;
            // 0x105d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d04) {
            ctx->pc = 0x105CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105cd0;
        }
    }
    ctx->pc = 0x105D0Cu;
    // 0x105d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105D0Cu;
    {
        const bool branch_taken_0x105d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D0Cu;
            // 0x105d10: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d0c) {
            ctx->pc = 0x105D18u;
            goto label_105d18;
        }
    }
    ctx->pc = 0x105D14u;
label_105d14:
    // 0x105d14: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_105d18:
    // 0x105d18: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x105d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x105d1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x105D1Cu;
    {
        const bool branch_taken_0x105d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D1Cu;
            // 0x105d20: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d1c) {
            ctx->pc = 0x105D68u;
            goto label_105d68;
        }
    }
    ctx->pc = 0x105D24u;
    // 0x105d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105d28:
    // 0x105d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d30: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x105d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x105d34: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105D34u;
    SET_GPR_U32(ctx, 31, 0x105D3Cu);
    ctx->pc = 0x105D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D34u;
            // 0x105d38: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    }
    ctx->pc = 0x105D3Cu;
label_105d3c:
    // 0x105d3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x105d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d48: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x105d4c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x105d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x105d50: 0xc041868  jal         func_1061A0
    ctx->pc = 0x105D50u;
    SET_GPR_U32(ctx, 31, 0x105D58u);
    ctx->pc = 0x105D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D50u;
            // 0x105d54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061A0u;
    if (runtime->hasFunction(0x1061A0u)) {
        auto targetFn = runtime->lookupFunction(0x1061A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D58u; }
        if (ctx->pc != 0x105D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPiece_0x1061a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D58u; }
        if (ctx->pc != 0x105D58u) { return; }
    }
    ctx->pc = 0x105D58u;
label_105d58:
    // 0x105d58: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x105d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x105d5c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x105D5Cu;
    {
        const bool branch_taken_0x105d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D5Cu;
            // 0x105d60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d5c) {
            ctx->pc = 0x105D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105d28;
        }
    }
    ctx->pc = 0x105D64u;
    // 0x105d64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x105d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_105d68:
    // 0x105d68: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105d68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105d6c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105d70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105d74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105d78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105d7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d84: 0x3e00008  jr          $ra
    ctx->pc = 0x105D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D84u;
            // 0x105d88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105D8Cu;
}
