#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__4CPotFi
// Address: 0x2cd050 - 0x2cd0d4
void Init__4CPotFi_0x2cd050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__4CPotFi_0x2cd050");
#endif

    switch (ctx->pc) {
        case 0x2cd078u: goto label_2cd078;
        case 0x2cd08cu: goto label_2cd08c;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd0a0u: goto label_2cd0a0;
        case 0x2cd0a8u: goto label_2cd0a8;
        case 0x2cd0bcu: goto label_2cd0bc;
        default: break;
    }

    ctx->pc = 0x2cd050u;

    // 0x2cd050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd064: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cd064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cd068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd06c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cd070: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD070u;
    SET_GPR_U32(ctx, 31, 0x2CD078u);
    ctx->pc = 0x2CD074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD070u;
            // 0x2cd074: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD078u; }
        if (ctx->pc != 0x2CD078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD078u; }
        if (ctx->pc != 0x2CD078u) { return; }
    }
    ctx->pc = 0x2CD078u;
label_2cd078:
    // 0x2cd078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd07c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD07Cu;
    {
        const bool branch_taken_0x2cd07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD07Cu;
            // 0x2cd080: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd07c) {
            ctx->pc = 0x2CD090u;
            goto label_2cd090;
        }
    }
    ctx->pc = 0x2CD084u;
    // 0x2cd084: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD084u;
    SET_GPR_U32(ctx, 31, 0x2CD08Cu);
    ctx->pc = 0x2CD088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD084u;
            // 0x2cd088: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD08Cu; }
        if (ctx->pc != 0x2CD08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD08Cu; }
        if (ctx->pc != 0x2CD08Cu) { return; }
    }
    ctx->pc = 0x2CD08Cu;
label_2cd08c:
    // 0x2cd08c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2cd090:
    // 0x2cd090: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD090u;
    SET_GPR_U32(ctx, 31, 0x2CD098u);
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD098u; }
        if (ctx->pc != 0x2CD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD098u; }
        if (ctx->pc != 0x2CD098u) { return; }
    }
    ctx->pc = 0x2CD098u;
label_2cd098:
    // 0x2cd098: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD098u;
    SET_GPR_U32(ctx, 31, 0x2CD0A0u);
    ctx->pc = 0x2CD09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD098u;
            // 0x2cd09c: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0A0u; }
        if (ctx->pc != 0x2CD0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0A0u; }
        if (ctx->pc != 0x2CD0A0u) { return; }
    }
    ctx->pc = 0x2CD0A0u;
label_2cd0a0:
    // 0x2cd0a0: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD0A0u;
    SET_GPR_U32(ctx, 31, 0x2CD0A8u);
    ctx->pc = 0x2CD0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0A0u;
            // 0x2cd0a4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0A8u; }
        if (ctx->pc != 0x2CD0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0A8u; }
        if (ctx->pc != 0x2CD0A8u) { return; }
    }
    ctx->pc = 0x2CD0A8u;
label_2cd0a8:
    // 0x2cd0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd0ac: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD0ACu;
    {
        const bool branch_taken_0x2cd0ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CD0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0ACu;
            // 0x2cd0b0: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0ac) {
            ctx->pc = 0x2CD0BCu;
            goto label_2cd0bc;
        }
    }
    ctx->pc = 0x2CD0B4u;
    // 0x2cd0b4: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CD0B4u;
    SET_GPR_U32(ctx, 31, 0x2CD0BCu);
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0BCu; }
        if (ctx->pc != 0x2CD0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD0BCu; }
        if (ctx->pc != 0x2CD0BCu) { return; }
    }
    ctx->pc = 0x2CD0BCu;
label_2cd0bc:
    // 0x2cd0bc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2cd0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x2cd0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0CCu;
            // 0x2cd0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD0D4u;
}
