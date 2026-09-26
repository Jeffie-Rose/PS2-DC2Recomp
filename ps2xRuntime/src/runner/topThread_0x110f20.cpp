#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: topThread
// Address: 0x110f20 - 0x110ff8
void topThread_0x110f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topThread_0x110f20");
#endif

    switch (ctx->pc) {
        case 0x110f60u: goto label_110f60;
        case 0x110f68u: goto label_110f68;
        case 0x110fc0u: goto label_110fc0;
        case 0x110fd0u: goto label_110fd0;
        case 0x110fe0u: goto label_110fe0;
        case 0x110ff0u: goto label_110ff0;
        default: break;
    }

    ctx->pc = 0x110f20u;

    // 0x110f20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x110f24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110f28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f2c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x110f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x110f30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x110f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x110f34: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x110f38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x110f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x110f3c: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x110f40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x110f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x110f44: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x110f44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110f48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110f4c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x110f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110f54: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x110f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x110f58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x110f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x110f5c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x110f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_110f60:
    // 0x110f60: 0xc044048  jal         func_110120
    ctx->pc = 0x110F60u;
    SET_GPR_U32(ctx, 31, 0x110F68u);
    ctx->pc = 0x110F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110F60u;
            // 0x110f64: 0x8ec49240  lw          $a0, -0x6DC0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110F68u; }
        if (ctx->pc != 0x110F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110F68u; }
        if (ctx->pc != 0x110F68u) { return; }
    }
    ctx->pc = 0x110F68u;
label_110f68:
    // 0x110f68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x110f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110f6c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x110f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x110f70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x110f74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x110f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x110f78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x110f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x110f7c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x110f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x110f80: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x110f84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x110f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110f88: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x110F88u;
    {
        const bool branch_taken_0x110f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x110F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F88u;
            // 0x110f8c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f88) {
            ctx->pc = 0x110FC8u;
            goto label_110fc8;
        }
    }
    ctx->pc = 0x110F90u;
    // 0x110f90: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F90u;
    {
        const bool branch_taken_0x110f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F90u;
            // 0x110f94: 0x26a40a80  addiu       $a0, $s5, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f90) {
            ctx->pc = 0x110FA8u;
            goto label_110fa8;
        }
    }
    ctx->pc = 0x110F98u;
    // 0x110f98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110F98u;
    {
        const bool branch_taken_0x110f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F98u;
            // 0x110f9c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f98) {
            ctx->pc = 0x110FB8u;
            goto label_110fb8;
        }
    }
    ctx->pc = 0x110FA0u;
    // 0x110fa0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x110FE8u;
            goto label_110fe8;
        }
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x110FA8u;
    {
        const bool branch_taken_0x110fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x110FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FA8u;
            // 0x110fac: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa8) {
            ctx->pc = 0x110FD8u;
            goto label_110fd8;
        }
    }
    ctx->pc = 0x110FB0u;
    // 0x110fb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110FB0u;
    {
        const bool branch_taken_0x110fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fb0) {
            ctx->pc = 0x110FE8u;
            goto label_110fe8;
        }
    }
    ctx->pc = 0x110FB8u;
label_110fb8:
    // 0x110fb8: 0xc044004  jal         func_110010
    ctx->pc = 0x110FB8u;
    SET_GPR_U32(ctx, 31, 0x110FC0u);
    ctx->pc = 0x110FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110FB8u;
            // 0x110fbc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110010u;
    if (runtime->hasFunction(0x110010u)) {
        auto targetFn = runtime->lookupFunction(0x110010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FC0u; }
        if (ctx->pc != 0x110FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x110010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FC0u; }
        if (ctx->pc != 0x110FC0u) { return; }
    }
    ctx->pc = 0x110FC0u;
label_110fc0:
    // 0x110fc0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x110FC0u;
    {
        const bool branch_taken_0x110fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fc0) {
            ctx->pc = 0x110F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f60;
        }
    }
    ctx->pc = 0x110FC8u;
label_110fc8:
    // 0x110fc8: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x110FC8u;
    SET_GPR_U32(ctx, 31, 0x110FD0u);
    ctx->pc = 0x110FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110FC8u;
            // 0x110fcc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FD0u; }
        if (ctx->pc != 0x110FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FD0u; }
        if (ctx->pc != 0x110FD0u) { return; }
    }
    ctx->pc = 0x110FD0u;
label_110fd0:
    // 0x110fd0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x110F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f60;
        }
    }
    ctx->pc = 0x110FD8u;
label_110fd8:
    // 0x110fd8: 0xc044014  jal         func_110050
    ctx->pc = 0x110FD8u;
    SET_GPR_U32(ctx, 31, 0x110FE0u);
    ctx->pc = 0x110FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110FD8u;
            // 0x110fdc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110050u;
    if (runtime->hasFunction(0x110050u)) {
        auto targetFn = runtime->lookupFunction(0x110050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FE0u; }
        if (ctx->pc != 0x110FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x110050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FE0u; }
        if (ctx->pc != 0x110FE0u) { return; }
    }
    ctx->pc = 0x110FE0u;
label_110fe0:
    // 0x110fe0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x110FE0u;
    {
        const bool branch_taken_0x110fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fe0) {
            ctx->pc = 0x110F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f60;
        }
    }
    ctx->pc = 0x110FE8u;
label_110fe8:
    // 0x110fe8: 0xc044898  jal         func_112260
    ctx->pc = 0x110FE8u;
    SET_GPR_U32(ctx, 31, 0x110FF0u);
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FF0u; }
        if (ctx->pc != 0x110FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110FF0u; }
        if (ctx->pc != 0x110FF0u) { return; }
    }
    ctx->pc = 0x110FF0u;
label_110ff0:
    // 0x110ff0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x110FF0u;
    {
        const bool branch_taken_0x110ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110ff0) {
            ctx->pc = 0x110F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f60;
        }
    }
    ctx->pc = 0x110FF8u;
}
