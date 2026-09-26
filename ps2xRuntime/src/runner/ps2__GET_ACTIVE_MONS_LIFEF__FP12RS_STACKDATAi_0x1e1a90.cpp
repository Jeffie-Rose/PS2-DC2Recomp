#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi
// Address: 0x1e1a90 - 0x1e1b28
void ps2__GET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi_0x1e1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi_0x1e1a90");
#endif

    switch (ctx->pc) {
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1b14u: goto label_1e1b14;
        default: break;
    }

    ctx->pc = 0x1e1a90u;

    // 0x1e1a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1a94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1a9c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A9Cu;
    {
        const bool branch_taken_0x1e1a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A9Cu;
            // 0x1e1aa0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a9c) {
            ctx->pc = 0x1E1AACu;
            goto label_1e1aac;
        }
    }
    ctx->pc = 0x1E1AA4u;
    // 0x1e1aa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E1AA4u;
    {
        const bool branch_taken_0x1e1aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AA4u;
            // 0x1e1aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1aa4) {
            ctx->pc = 0x1E1B18u;
            goto label_1e1b18;
        }
    }
    ctx->pc = 0x1E1AACu;
label_1e1aac:
    // 0x1e1aac: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1AACu;
    SET_GPR_U32(ctx, 31, 0x1E1AB4u);
    ctx->pc = 0x1E1AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AACu;
            // 0x1e1ab0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AB4u; }
        if (ctx->pc != 0x1E1AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AB4u; }
        if (ctx->pc != 0x1E1AB4u) { return; }
    }
    ctx->pc = 0x1E1AB4u;
label_1e1ab4:
    // 0x1e1ab4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1ab8: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1AB8u;
    {
        const bool branch_taken_0x1e1ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1ab8) {
            ctx->pc = 0x1E1AE4u;
            goto label_1e1ae4;
        }
    }
    ctx->pc = 0x1E1AC0u;
    // 0x1e1ac0: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1ac4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e1ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1ad0: 0x8c420484  lw          $v0, 0x484($v0)
    ctx->pc = 0x1e1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1ad4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1AD4u;
    {
        const bool branch_taken_0x1e1ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ad4) {
            ctx->pc = 0x1E1AECu;
            goto label_1e1aec;
        }
    }
    ctx->pc = 0x1E1ADCu;
    // 0x1e1adc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E1ADCu;
    {
        const bool branch_taken_0x1e1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1ADCu;
            // 0x1e1ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1adc) {
            ctx->pc = 0x1E1B18u;
            goto label_1e1b18;
        }
    }
    ctx->pc = 0x1E1AE4u;
label_1e1ae4:
    // 0x1e1ae4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1ae8: 0x0  nop
    ctx->pc = 0x1e1ae8u;
    // NOP
label_1e1aec:
    // 0x1e1aec: 0xc4411314  lwc1        $f1, 0x1314($v0)
    ctx->pc = 0x1e1aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1af4: 0xc4401310  lwc1        $f0, 0x1310($v0)
    ctx->pc = 0x1e1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1af8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1b00: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e1b00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e1b04: 0x0  nop
    ctx->pc = 0x1e1b04u;
    // NOP
    // 0x1e1b08: 0x0  nop
    ctx->pc = 0x1e1b08u;
    // NOP
    // 0x1e1b0c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B14u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B14u; }
        if (ctx->pc != 0x1E1B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B14u; }
        if (ctx->pc != 0x1E1B14u) { return; }
    }
    ctx->pc = 0x1E1B14u;
label_1e1b14:
    // 0x1e1b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1b18:
    // 0x1e1b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B20u;
            // 0x1e1b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1B28u;
}
