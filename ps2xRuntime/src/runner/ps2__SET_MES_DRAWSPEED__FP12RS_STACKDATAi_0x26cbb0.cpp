#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_DRAWSPEED__FP12RS_STACKDATAi
// Address: 0x26cbb0 - 0x26cc20
void ps2__SET_MES_DRAWSPEED__FP12RS_STACKDATAi_0x26cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_DRAWSPEED__FP12RS_STACKDATAi_0x26cbb0");
#endif

    switch (ctx->pc) {
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cc04u: goto label_26cc04;
        default: break;
    }

    ctx->pc = 0x26cbb0u;

    // 0x26cbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26cbc0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cbc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cbc4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CBC4u;
    SET_GPR_U32(ctx, 31, 0x26CBCCu);
    ctx->pc = 0x26CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBC4u;
            // 0x26cbc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBCCu; }
        if (ctx->pc != 0x26CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBCCu; }
        if (ctx->pc != 0x26CBCCu) { return; }
    }
    ctx->pc = 0x26CBCCu;
label_26cbcc:
    // 0x26cbcc: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CBCCu;
    SET_GPR_U32(ctx, 31, 0x26CBD4u);
    ctx->pc = 0x26CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBCCu;
            // 0x26cbd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBD4u; }
        if (ctx->pc != 0x26CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBD4u; }
        if (ctx->pc != 0x26CBD4u) { return; }
    }
    ctx->pc = 0x26CBD4u;
label_26cbd4:
    // 0x26cbd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26cbd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CBD8u;
    {
        const bool branch_taken_0x26cbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBD8u;
            // 0x26cbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbd8) {
            ctx->pc = 0x26CBE8u;
            goto label_26cbe8;
        }
    }
    ctx->pc = 0x26CBE0u;
    // 0x26cbe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26CBE0u;
    {
        const bool branch_taken_0x26cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBE0u;
            // 0x26cbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbe0) {
            ctx->pc = 0x26CC0Cu;
            goto label_26cc0c;
        }
    }
    ctx->pc = 0x26CBE8u;
label_26cbe8:
    // 0x26cbe8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26CBE8u;
    SET_GPR_U32(ctx, 31, 0x26CBF0u);
    ctx->pc = 0x26CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBE8u;
            // 0x26cbec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBF0u; }
        if (ctx->pc != 0x26CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBF0u; }
        if (ctx->pc != 0x26CBF0u) { return; }
    }
    ctx->pc = 0x26CBF0u;
label_26cbf0:
    // 0x26cbf0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x26cbf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cbf4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CBF4u;
    {
        const bool branch_taken_0x26cbf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBF4u;
            // 0x26cbf8: 0xe46001b8  swc1        $f0, 0x1B8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbf4) {
            ctx->pc = 0x26CC08u;
            goto label_26cc08;
        }
    }
    ctx->pc = 0x26CBFCu;
    // 0x26cbfc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26CBFCu;
    SET_GPR_U32(ctx, 31, 0x26CC04u);
    ctx->pc = 0x26CC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBFCu;
            // 0x26cc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC04u; }
        if (ctx->pc != 0x26CC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC04u; }
        if (ctx->pc != 0x26CC04u) { return; }
    }
    ctx->pc = 0x26CC04u;
label_26cc04:
    // 0x26cc04: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x26cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
label_26cc08:
    // 0x26cc08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cc0c:
    // 0x26cc0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cc10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cc18: 0x3e00008  jr          $ra
    ctx->pc = 0x26CC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC18u;
            // 0x26cc1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CC20u;
}
