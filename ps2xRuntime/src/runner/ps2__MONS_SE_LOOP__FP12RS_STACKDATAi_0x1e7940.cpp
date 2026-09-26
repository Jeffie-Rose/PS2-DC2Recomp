#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MONS_SE_LOOP__FP12RS_STACKDATAi
// Address: 0x1e7940 - 0x1e79d8
void ps2__MONS_SE_LOOP__FP12RS_STACKDATAi_0x1e7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MONS_SE_LOOP__FP12RS_STACKDATAi_0x1e7940");
#endif

    switch (ctx->pc) {
        case 0x1e7968u: goto label_1e7968;
        case 0x1e7978u: goto label_1e7978;
        case 0x1e7984u: goto label_1e7984;
        case 0x1e79c0u: goto label_1e79c0;
        default: break;
    }

    ctx->pc = 0x1e7940u;

    // 0x1e7940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7944: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e794c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7950: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7950u;
    {
        const bool branch_taken_0x1e7950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7950u;
            // 0x1e7954: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7950) {
            ctx->pc = 0x1E7960u;
            goto label_1e7960;
        }
    }
    ctx->pc = 0x1E7958u;
    // 0x1e7958: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E7958u;
    {
        const bool branch_taken_0x1e7958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E795Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7958u;
            // 0x1e795c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7958) {
            ctx->pc = 0x1E79C4u;
            goto label_1e79c4;
        }
    }
    ctx->pc = 0x1E7960u;
label_1e7960:
    // 0x1e7960: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7960u;
    SET_GPR_U32(ctx, 31, 0x1E7968u);
    ctx->pc = 0x1E7964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7960u;
            // 0x1e7964: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7968u; }
        if (ctx->pc != 0x1E7968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7968u; }
        if (ctx->pc != 0x1E7968u) { return; }
    }
    ctx->pc = 0x1E7968u;
label_1e7968:
    // 0x1e7968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e796c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e796cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7970: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7970u;
    SET_GPR_U32(ctx, 31, 0x1E7978u);
    ctx->pc = 0x1E7974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7970u;
            // 0x1e7974: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7978u; }
        if (ctx->pc != 0x1E7978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7978u; }
        if (ctx->pc != 0x1E7978u) { return; }
    }
    ctx->pc = 0x1E7978u;
label_1e7978:
    // 0x1e7978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e797c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E797Cu;
    SET_GPR_U32(ctx, 31, 0x1E7984u);
    ctx->pc = 0x1E7980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E797Cu;
            // 0x1e7980: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7984u; }
        if (ctx->pc != 0x1E7984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7984u; }
        if (ctx->pc != 0x1E7984u) { return; }
    }
    ctx->pc = 0x1E7984u;
label_1e7984:
    // 0x1e7984: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e7984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e7988: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x1e7988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1e798c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e798cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7994: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1e7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e7998: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7998u;
    {
        const bool branch_taken_0x1e7998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7998) {
            ctx->pc = 0x1E79A8u;
            goto label_1e79a8;
        }
    }
    ctx->pc = 0x1E79A0u;
    // 0x1e79a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E79A0u;
    {
        const bool branch_taken_0x1e79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79A0u;
            // 0x1e79a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79a0) {
            ctx->pc = 0x1E79C4u;
            goto label_1e79c4;
        }
    }
    ctx->pc = 0x1E79A8u;
label_1e79a8:
    // 0x1e79a8: 0x8c650588  lw          $a1, 0x588($v1)
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x1e79ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e79acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79b0: 0x8c6405a0  lw          $a0, 0x5A0($v1)
    ctx->pc = 0x1e79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
    // 0x1e79b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e79b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79b8: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x1E79B8u;
    SET_GPR_U32(ctx, 31, 0x1E79C0u);
    ctx->pc = 0x1E79BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79B8u;
            // 0x1e79bc: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79C0u; }
        if (ctx->pc != 0x1E79C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79C0u; }
        if (ctx->pc != 0x1E79C0u) { return; }
    }
    ctx->pc = 0x1E79C0u;
label_1e79c0:
    // 0x1e79c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e79c4:
    // 0x1e79c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e79c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e79c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e79c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e79ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e79d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E79D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79D0u;
            // 0x1e79d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E79D8u;
}
